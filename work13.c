#include <stdio.h>
#include <stdlib.h>
void exchange(int *x, int *y){
  int p = *x;
  int q = *y;
  *x = q;
  *y = p;
  return;
}
int main(){
  int *x = (int*)malloc(sizeof(int)*1);
  int *y = (int*)malloc(sizeof(int)*1);
  printf("2つの整数値を入力してください：\n");
  scanf("%d", x);
  scanf("%d", y);
  printf("変数aの値は%d,変数bの値は%dです。\n", *x, *y);
  exchange(x,y);
  printf("exchange()を呼び出した後の変数aの値は%d,変数bの値は%dです。\n", *x, *y);
}
