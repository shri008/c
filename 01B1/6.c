//6. Write a C program to compute the perimeter and area of a circle with a given radius=6.
//Expected Output:
//Perimeter of the Circle = 37.680000 inches
//Area of the Circle = 113.040001 square inches.

#include<stdio.h>
#include<math.h>

int main(){

	int radius=6;
	float area,perimeter;

	//Perimeter of the circle=2*PI*r;
	perimeter = 2 * 3.14 * radius;
	printf("Perimeter of the circle = %f\n",perimeter);

	//Area of circle = PI * radius * radius;
	area = M_PI * radius * radius;
	printf("Area of circle = %f\n",area);

	return 0;
}
