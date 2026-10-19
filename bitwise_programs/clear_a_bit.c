#include<stdio.h>
int main()
{
	int n,pos;
	printf("enter any number\n");
	scanf("%d",&n);
	printf("enter position to clear\n");
	scanf("%d",&pos);
	char ch=(int)n;
	ch=ch&(~(1<<pos-1));    //clearing a required bit
	printf("%d\n",ch);
}
