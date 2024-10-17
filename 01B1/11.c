/*
11. Write a C program that accepts two item's weight and number of purchases
 (floating point values) and calculates their average value.
Test Data :
Weight - Item1: 15
No. of item1: 5
Weight - Item2: 25
No. of item2: 4
Expected Output:
Average Value = 19.444444
*/

#include<stdio.h>


int main(void){

	int item1,item2,TotalItems;
	float weight1,weight2,TotalWeight,Average;

	//Accept item's weight and numbers from user.
	printf("Enter no of item1\n");
	scanf("%d",&item1);

	printf("weight of item1\n");
	scanf("%f",&weight1);

	printf("Enter no of item2\n");
	scanf("%d",&item2);

	printf("weight of item2\n");
	scanf("%f",&weight2);

	TotalItems = item1 + item2;
	TotalWeight = ( item1 * weight1 ) + ( item2 * weight2 );

	//printf("TotalItems=%d,TotalWeight=%f",TotalItems,TotalWeight);

	Average = TotalWeight / TotalItems;

	printf("Average value = %f\n",Average);

	return 0;
}