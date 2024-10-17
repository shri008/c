/*
15. Write a C program to calculate the distance between two points.
Test Data :
Input x1: 25
Input y1: 15
Input x2: 35
Input y2: 10
Expected Output:
Distance between the said points: 11.1803
*/

#include<stdio.h>
#include<math.h>

int main(void)
{

	int x1,x2,y1,y2;
	float Distance;

	printf("Enter x1\n");
	scanf("%d",&x1);

	printf("Enter x2\n");
	scanf("%d",&x2);

	printf("Enter y1\n");
	scanf("%d",&y1);

	printf("Enter y2\n");
	scanf("%d",&y2);

	Distance=sqrt( ( (x2-x1) * (x2-x1) ) + ( (y2-y1)*(y2-y1) ) );

	printf("Distance between the said points:%f\n",Distance);
	return 0;
}
