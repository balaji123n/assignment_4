#include <stdio.h>

//The  main function
int main(void)
{

//2 bits = 1 baud
//4 bits = 1 nibble
//8 bits = 1 byte

//unsigned char takes input as 1 byte

unsigned char  Z=0x00,Y=0x01,X=0x01,W=0x01;//inputs in hex	
unsigned char one = 0x01;//used for displaying the output in bit
unsigned char A,B,C,D;//outputs

D = (W&X&Y&(~Z))|((~W)&(~X)&(~Y)&Z);//Boolean function for D
A = ((~W)&(~X)&(~Y)&(~Z))|((~W)&(X)&(~Y)&(~Z))|((~W)&(~X)&Y&(~Z))|((~W)&X&Y&(~Z))|((~W)&(~X)&(~Y)&(Z));
B = ((W)&(~X)&(~Y)&(~Z))|((~W)&(X)&(~Y)&(~Z))|((W)&(~X)&(Y)&(~Z))|((~W)&(X)&(Y)&(~Z));
C = ((W)&(X)&(~Y)&(Z))|((~W)&(~X)&(Y)&(~Z))|((W)&(~X)&(Y)&(~Z))|((~W)&(X)&(Y)&(~Z));


printf("%x\n",one&D);
printf("%x\n",one&A);
printf("%x\n",one&B);
printf("%x\n",one&C);
return 0;
}