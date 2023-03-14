#include<stdio.h>
int main()
{
	int n,num=0,rev;
	printf("enter a number to check if it is palindrome or not ");
	scanf("%d",&n);
	int temp=n;
	while(n!=0)
	{   
	    rev=(n%10);
	    num=(num*10)+rev;
		n=n/10;
	}
	if(temp==num)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not Palindrome");
	}
	return 0;
}
