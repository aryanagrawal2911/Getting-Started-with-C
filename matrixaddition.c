# include <stdio.h>

int main(){

	int n = 3, m = 2;

	int a[3][2] = {1,2,3,4,5,6};
	int b[3][2] = {6,5,4,3,2,1};

	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){

			a[i][j] += b[i][j];
			printf("%d\t", a[i][j]);
		}

		printf("\n");
	}
	printf("\n");

}
