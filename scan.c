#include <stdio.h>

int main(){
	
	int a;
	float b, sum;
	
	//printf("Enter the first number : ");
	//scanf("%d",&a);
	
	//printf("Enter the second number : ");
	//scanf("%d",&b);
	
	printf("Enter both the numbers : ");
	scanf("%d %f", &a, &b);
	
	sum = a + b;
	
	printf("Sum of %d and %.2f = %6.2f\n", a, b, sum);
	return 0;
}
