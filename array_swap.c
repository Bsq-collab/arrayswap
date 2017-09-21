#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int b[10];
  int i=0;
  srand(time(NULL));
 
  while (i<10){
    // printf("%d\n",srand(i));
    srand(i);
    b[i]=rand();
    //printf("%d\n",rand());
    i++;
  }

  b[9]=0;
  i=0;
  printf("first array:\n");
  while(i<10){
    printf("arr %d : %d\n",i,b[i]);
    i++;
  }

  int c[10];
  int * two;
  int j=9;
  i=0;
  printf("second array:\n");
  while (j>=0){
    two= &b[j];
    c[i]=*two;
    printf("arr2 %d : %d\n",i,c[i]);
    j-=1;
    i+=1;
  }
}
