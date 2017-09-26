#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int b[10];
  int i=0;

  srand(time(NULL));

  //from 1 to 10 inclusive randomly find a number and assign it. 
  while (i<10){
    b[i-1]= rand();
    //printf("%d\n",rand());
    i++;
  }

  b[9]=0;
  i=0;
  printf("first array:\n");
  while(i<10){//not making rand vals so i can start as 0
    printf("arr %d : %d\n",i,b[i]);
    i++;
  }

  int c[10];
  int * two;//pointer!! type int bc that's what the numbers are.
  int j=9;//index counter
  i=0;
  printf("second array:\n");
  while (j>=0){
    two= &b[j];// address of the variable
    c[i]=*two;//de-referencer
    printf("arr2 %d : %d\n",i,c[i]);
    j-=1;
    i+=1;
  }
}
