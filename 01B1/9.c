/*9. Write a C program that accepts two integers from the user and calculates the sum of the two integers.
Test Data :
Input the first integer: 25
Input the second integer: 38
Expected Output:
Sum of the above two integers = 63
*/

#include<stdio.h>

int main(void){

	int int1,int2,sum;

	//take two integers as input from user.
	printf("Enter first integer\n");
	scanf("%d",&int1);

	printf("Enter second integer\n");
	scanf("%d",&int2);

	printf("You Entered:%d,%d\n",int1,int2);

	//Calculate sum.
	sum=int1+int2;
	printf("Sum of the above two integers = %d\n",sum);

	return 0;
}
