/* 
 * 8. Write a C program to convert specified days into years, weeks and days.
Note: Ignore leap year.

Test Data :
Number of days : 1329
Expected Output :
Years: 3
Weeks: 33
Days: 3
*/

#include<stdio.h>

int main(){

	int Nod,years,weeks,days;

	printf("Enter no of days\n");
	scanf("%d",&Nod);

	years = (Nod/365);
	printf("Years=%d\n",years);

	weeks = (Nod%365)/7;
	printf("weeks=%d\n",weeks);

	days = Nod - ((years*365)+(weeks*7));
	printf("days=%d\n",days);
	return 0;
}
