#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//have the num. caracteres? yes, than hex.
/*if ((num1||num2)==(A,B,C,D,F)){
  num1=unsigned long long hex1;
 num2=unsigned long long hex2;
*/


/*unsigned long long int Function_max_hex(unsigned long long int hex1,unsigned long long int hex2){
  if(hex1>hex2){
    return hex1;
  }
  else {
    return hex2;
  }
} 


unsigned long long int FunctionHextoDec(unsigned long long int Function_max_hex){//function to write a Hex in Dez
   int dec=0;
   char*hexadecimal=Function_max_hex(hex1,hex2);
   int length=strlen(hexadecimal);
   for(int i=0;i<lenghth;i++){
     char digit=hexadecimal[length-1-i];
     if (digit>='0'&&digit<='9'){
       dec+=(digit-'0')*pow(16,i);
     }
     else
       dec+=(digit-'A'+10)*pow(16,i);
   } 
   return dec;
}
// compare each Digit if there are "A,B,C,D,E,F
// and transform it to "10,11,12,13,14,15"
/* for (int dig=8,maxhex[dig]=!0, dig--){
   int dec=0;
   switch maxhex[dig]{
 case A:
   return 10;
   break;
 case B:
   return 11;
   break;
 case c:
   return 12;
   break;
 case d:
   return 13;
   break;
 case e:
   return 14:
   break;
 case f:
   return 15:
   break;
     }
     dec=dec+16*pow(dig-1);
 }
     return dec;
 }
*/
int  max (int num1, int num2) {
  if (num1>num2) {                                  //check if num1 is greater than num2
    return  num1;                                     //if so, your answer is num1
  }
  else                                               //otherwise, your answer is num2
    { return num2;
    }
}
 
int main(void) {
  printf("max(42, -69) is %d\n", max(42, -69));
  printf("max(33, 0) is %d\n", max(33, 0));
  printf("max(0x123456, 123456) is %d\n", max(0x123456, 123456));
  //unsigned long long int Function_max_hex(0x451215AF,0x913591AF);
  printf("max (0x451215AF,0x913591AF)is %d/n",max(0x451215AF,0x913591AF));
  //unsigned long long int FunctionHextoDec(unsigned long long int Function_max_hex);//function to write a Hex in Dez
  
  // printf("max(0x451215AF, 0x913591AF) is %d\n",FunctionHextoDec(Function_max_hex)); //compute the max of  0x451215AF and 0x913591AF and print it out as a decimal number
  
  return 0;
}


