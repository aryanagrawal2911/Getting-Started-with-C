# include <stdio.h>
# include <malloc.h>

void display(int*, int);

int main(){

	int n;
	int *a;
	
	printf("Enter array size : ");
	scanf("%d", &n);
	
	a = (int*)malloc(n * sizeof(int));
	
	printf("Enter array elements : ");
	
	for(int i = 0;i < n;i++)
		scanf("%d", &a[i]);
		
	display(a, n);
	return 0;
}

void display(int *a, int n){

	for(int i = 0;i < n;i++)	
		printf("%d\t", a[i]);
	
	printf("\n");
}
