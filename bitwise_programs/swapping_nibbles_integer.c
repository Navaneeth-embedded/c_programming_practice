
#include<stdio.h>
int main()
{
     int num,var1=0,var2=0,res1,res;
    printf("enter any number\n");
    scanf("%d",&num);
    var1=num<<28;   //proram for swapping first and last nibbles of int
    var2=num>>28;
    printf("var1=%d var2=%d\n",var1,var2);
    res1=var1|var2;
    num=num>>4;
    num=num<<4;
    res=res1|num;
    printf("%d",res);
      }
