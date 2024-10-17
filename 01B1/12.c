/*
12. Write a C program that accepts an employee's ID,
total worked hours in a month and the amount he received per hour.
Print the ID and salary (with two decimal places) of the employee for a particular month.
Test Data :
Input the Employees ID(Max. 10 chars): 0342
Input the working hrs: 8
Salary amount/hr: 15000
Expected Output:
Employees ID = 0342
Salary = U$ 120000.00
*/

#include<stdio.h>

int main(void)
{
	char Id[10];
	int AmountPerHour = 15000;
	float WorkingHrs,Salary;

	printf("Enter Employee ID,\n");
	scanf("%s",Id);

	printf("Enter total WorkingHrs\n");
	scanf("%f",&WorkingHrs);

	printf("ID = %s\nSalary = %.2f\n",Id,( WorkingHrs * AmountPerHour ));

	return 0;
}