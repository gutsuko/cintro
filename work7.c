// sample 1-7
#include <stdio.h>

int fact(int n){
  if(n == 0){
    return 1;
  }else{
    return n * fact(n-1);
  }
}

int main(){
    int m;
    printf("Type in a number: ");
    scanf("%d", &m);
    int res = fact(m);
    printf("the factorial of the number is %d\n", res);
}
