#include<stdio.h>
int main()
{
	int a;
	float b;
	printf("Enter the weight of Rice needed \n");
	scanf_s("%f", &a);
	printf("Enter the weight of Sugar needed \n");
	scanf_s("%d", &b);

	printf(" *** LIST OF ITEMS ***\n");
	printf("Items                  Price\n");
	printf("Rice                 Rs %f\n", a * 16.75);
	printf("Sugar                Rs %d\n", b * 15);
	printf("Total                Rs %f\n", (a * 16.75) + (b * 15));
	return 0;

}