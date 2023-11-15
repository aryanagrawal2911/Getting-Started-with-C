# include <stdio.h>

void intersect(int[], int, int[], int);

int main(){

	int n1;
	printf("Enter the size of array1 : ");
	scanf("%d", &n1);

	int arr[n1];
	printf("Enter the elements of array1 : ");
	
	for(int i = 0;i < n1;i++){
	
		scanf("%d", &arr[i]); 
	}
	
	int n2;
	printf("Enter the size of array2 : ");
	scanf("%d", &n2);

	int brr[n2];
	printf("Enter the elements of array2 : ");
	
	for(int i = 0;i < n2;i++){
	
		scanf("%d", &brr[i]); 
	}
	
	if(n1 <= n2){
	
		intersect(brr, n2, arr, n1);
	}
	
	else{
	
		intersect(arr, n1, brr, n2);
	}
}

void intersect(int arr[], int n1, int brr[], int n2){

	printf("Intersections : ");
	
	for(int i = 0;i < n1;i++){
	
		for(int j = 0;j < n2;j++){
	
		 	if(arr[i] == brr[j]){
		 	
		 		printf("%d ", arr[i]);
		 	}
		}
	}
	
	printf("\n");
}
