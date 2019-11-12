#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pai 3.14159

int main(){
  double *r;
  printf("好きな円の半径を入力してください:\n");
  scanf("%lf", r);
  double range;
  range = *r * *r * pai;
  printf("その円の面積は%lfです。\n", range);
}
