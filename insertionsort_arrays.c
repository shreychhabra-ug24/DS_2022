#include <stdio.h>

void insort(int x[], int len);
int main(){
  int x[] = {2,45,32,78,6,0,1,241};
  insort(x,8);
  for(int i=0; i<8; i++)
  {
    printf("%d\n", i, x[i]);
  }
  return 0;
}

void insort(int x[], int len){
  for(int i=1; i<len; i++ ){
    int key = x[i];
    int j = i-1;
    while(j>=0 && x[j]>key){
      x[j+1] = x[j];
      j = j-1;
    }
    x[j+1] = key;
  }
}