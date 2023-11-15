# include <stdio.h>
# include <math.h>

int main(){
	float a, s;
	
	printf("Enter the side of hexagon : ");
	scanf("%f", &s);
	
	a = ((3 * pow(3, 0.5)) / 2) * pow(s, 2);
	printf("Area of the hexagon is : %f\n", a);
	
	return 0;
}
