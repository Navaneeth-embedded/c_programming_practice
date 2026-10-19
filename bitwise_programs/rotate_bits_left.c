#include<stdio.h>
int main()
{
int n1,times;
printf("enter any number\n");
scanf("%d",&n1);
printf("enter times to rotate\n");
scanf("%d",&times);   
int var1,var2;      //rotating bits to left
var1=n1>>times;
printf("%d is var1\n",var1); 
//n1=n1&~(1<<times);
printf("%d is n1\n",n1);
var2=n1<<(8-times);
printf("%d is var2\n",var2);
int res=var1|var2;
printf("%d \n",res);
}
