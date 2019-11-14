#include <stdio.h>
#include <stdlib.h>
int main(){
  int **c = (int**)malloc(sizeof(int*)*3);
  for(int i=0; i<3; i++){
    c[i] = (int*)malloc(sizeof(int)*4);
  }
  for(int n=0; n<3; n++){
    for(int m=0; m<4; m++){
      scanf("%d", &c[n][m]);
    }
  }
  for(int n=0; n<3; n++){
    for(int m=0; m<4; m++){
      printf("%d\t", c[n][m]);
    }
    printf("\n");
  }
}
