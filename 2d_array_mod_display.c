#include <stdio.h>

void display(int a[][2], int n, int m){

	for(int i = 0;i < n;i++){
	
		for(int j = 0;j < m;j++){
		
			printf("%4d", a[i][j]);
		}
		
		printf("\n");
	}
}

int main(){

	int a[3][4] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120};
	display(a, 3, 4);
}


