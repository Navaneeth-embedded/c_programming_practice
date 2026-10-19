#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	char ch=(char)num;
	//printf("%d %c\n",ch,ch);
	ch=ch&(1<<7);
	printf("%d\n",ch);
	ch?puts("-ve"):puts("+ve");  //finding +ve or -ve using bitwise
}
