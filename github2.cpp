#include<stdio.h>
#include<conio.h>
int max(int x,int y)
{
	return ((x>y) ? x:y);
}
int max_of_four(int a,int b,int c,int d)
{
	max(a,(max(b,max(c,d))));
}
int main()
{
	int a,b,c,d;
	printf("enter the four number\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int ans=max_of_four(a,b,c,d);
     printf("the greates among the number is=%d",ans);
}
