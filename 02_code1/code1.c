#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int max(int num1, int num2) {
  if (num1>num2) {                                  //check if num1 is greater than num2
    return num1;                                     //if so, your answer is num1
  }
  else                                               //otherwise, your answer is num2
    { return num2;
    }
}
 
int main(void){
  printf("max(42, -69) is %d\n", max(42, -69));
  printf("max(33, 0) is %d\n", max(33, 0));
  printf("max(0x123456, 123456) is %x\n", max(0x123456, 123456));
  printf("max (0x451215AF,0x913591AF is %d/n",max(0x451215AF,0x913591AF));
  
  return 0;
}


