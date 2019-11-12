// Sample 1-6
#include <stdio.h>

int getSmallestFactor(int a){
  int i = 2;
  while(i*i <= a){
    if(a % i == 0){
       return i;
    }
    i++;
  }
  return 0;
}

int main(){
  int in, fact;
  printf("Type in a number: ");
  scanf("%d", &in);
  if(in == 1){ printf("%d\n", in); return 0;}
  fact = getSmallestFactor(in);
  if(fact > 0){
    while(fact > 0){
      printf("%d*", fact);
      in = in/fact;
      fact = getSmallestFactor(in);
    }
    printf("%d\n", in);
  }
  return 0;
}
