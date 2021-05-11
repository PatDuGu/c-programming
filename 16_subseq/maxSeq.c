#include<stdio.h>
#include<stdlib.h>

size_t maxSeq (int * array, size_t n){

  if (n==0){
    return 0;
      }
  size_t Lenght=1;
  size_t LenghtMax=1;
  for(size_t i=1;i<n;i++){
    if (array[i]>array[i-1]){
      Lenght++;
     
    }
    else {
      Lenght=1;
    }
    if (Lenght>LenghtMax){
      LenghtMax=Lenght;
    }
  }
    return LenghtMax;
}

  
