#include <stdio.h>
#include <math.h>

int fact(int n){
  if(n == 0){
    return 1;
  }else{
    return n * fact(n-1);
  }
}

double mysin(double x){
  double res = 0;
  int n = 10;
  while(n > 0){
    int m = 2*n + 1;
    res += (pow(-1,n) * pow(x, m)) / fact(m);
    n -= 1;
  }
  return res;
}

double mycos(double x){
  double res = 0;
  int n = 10;
  while(n > 0){
    res += pow(-1,n) * pow(x, 2*n) / fact(2*n);
    printf("%f\n", res);
    n = n-1;
  }
  return res;
}

int main(){
    double co = mycos(3.14159 / 6);
    double si = mysin(3.14159 / 6);
    printf("cosin is %f\n", co);
    printf("sin is %f\n", si);
}
