# include <stdio.h>
# include <math.h>
int main(){
	float r, l, a, v;
	
	printf("Enter radius and length : ");
	scanf("%f %f", &r, &l);
	
	a = (22 / 7) * r * r;
	printf("The area is : %f\n", a);
	
	v = a * l;
	printf("The volume is : %f\n", v);
}
	
	
	
	
