#include<stdio.h>
#include<stdlib.h>

size_t maxSeq (int * array, size_t n){

  if (array==0){
    return 0;
      }
  size_t Lenght=1;
  size_t LenghtMax;
  for(size_t i=1;i<n;i++){
    if (array[i]>array[i-1]){
      Lenght++;
      LenghtMax=Lenght;
    }
    else {
      Lenght=1;
    }
  }
    return LenghtMax;
}

  
