/*
13. Write a C program that accepts three integers 
and finds the maximum of three.
Test Data :
Input the first integer: 25
Input the second integer: 35
Input the third integer: 15
Expected Output:
Maximum value of three integers: 35
*/

#include<stdio.h>

int main(void)
{

	int n1,n2,n3;

	printf( "Input the first integer:\n" );
	scanf( "%d",&n1 );

	printf( "Input the second integer:\n" );
	scanf( "%d",&n2 );

	printf("Input the third integer:\n");
	scanf("%d",&n3);
	
	if((n1 > n3) && (n1 > n2))
		{
			printf("Maximum value of three integers:%d\n",n1);
		}
	else if((n2>n1)&&(n2>n3))
	{
		printf("Maximum value of three integers:%d\n",n2);
	}
	else
	{
		printf("Maximum value of three integers:%d\n",n3);
	}

	return 0;
}
