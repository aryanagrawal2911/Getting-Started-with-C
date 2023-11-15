#include <stdio.h>

void swap1(int, int);
void swap2(int*, int*);

int main(){

	int x = 5;
	int y = 7;
	
	printf("Before : x = %d, y = %d\n", x, y);
	
	swap1(x, y);
	
	printf("After swap1 : x = %d, y = %d\n", x, y);
	
	swap2(&x, &y);
	//int s = x;
	//x = y;
	//y = s;
	printf("After swap2 : x = %d, y = %d\n", x, y);
}

void swap1(int a, int b){

	int c = a;
	a = b;
	b = c;
}

void swap2(int *a, int *b){

	int c = *a;
	*a = *b;
	*b = c;
}
