#include<stdio.h>
int main()
{
int hex;
scanf("%x",&hex);
int var1,var2;
var1=hex>>8;
var2=hex<<8;
int swap=var1|var2;   //swaping two bytes of hex numbers
swap=(swap&0x0000ffff);
printf("%x \n",swap);
}
