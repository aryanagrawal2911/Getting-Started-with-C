# include <stdio.h>

void calculate(float, float, float*, float*, float*, float*);

int main(){


	float a = 5, b = 7, sum, sub, pro, div;

	calculate(a, b, &sum, &sub, &pro, &div);
	
	printf("Sum = %f\nDifference = %f\nProduct = %f\nQuotient = %f\n", sum, sub, pro, div);
	
}

void calculate(float a, float b, float *sum, float *sub, float *pro, float *div){

	*sum = a + b;
	
	*sub = a - b;
	
	*pro = a * b;
	
	*div = a / b;
}
