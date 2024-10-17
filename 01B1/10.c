/*
10. Write a C program that accepts two integers from the user and calculates the product of the two integers.
Test Data :
Input the first integer: 25
Input the second integer: 15
Expected Output:
Product of the above two integers = 375
*/

#include<stdio.h>

int main(void){

	int int1,int2,product;

//Accept two intergers from user.
	printf("Input the first integer:\n");
	scanf("%d",&int1);

	printf("Input the second integer:\n");
	scanf("%d",&int2);

	printf("You entered:%d,%d\n",int1,int2);

//Calculate product.
	product = int1 * int2;
	printf("Product of the above two integers = %d\n",product);


	return 0;
}