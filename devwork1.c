// Sample 1-5
#include <stdio.h>
#include <math.h>
int main(){
    int i = 1;
    double e = 1;
    double d = 1;
    while(i < 10){
      d = d*i;
      e += 1.0/d;
      printf("e = %f\n", e);
      i++;
    }
}
