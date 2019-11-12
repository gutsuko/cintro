// Sample 1-5
#include <stdio.h>
int power(int a, int b){
  int d;
  d = 1;
  if(b == 0){
    return 1;
  }else{
    while(b > 0){
      d = d*a;
      b = b-1;
    }
    return d;
  }
}

int main(){
    int i = 0;
    double arctan1 = 0;
    double d;
    while(i < 10000){
      arctan1 += 1.0 * power(-1,i) / (i*2 + 1);
      if(i % 100 == 0){
        printf("pi = %f\n", arctan1 * 4);
      }
      i++;
    }
}
