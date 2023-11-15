# include <stdio.h>
# include <stdlib.h>

int main(){

	do{
	
		printf("+ : Addition\n- : Subtraction\n* : Multiplication\ne : exit\n");
		
		char choice;
		
		printf("Please make a choice : ");
		scanf("%c", &choice);
		
		if(choice == 'e'){
		
			break;
		}
		
		else{
		
			int op1, op2;	
		
			printf("Enter the two operators : ");
			scanf("%d %d", &op1, &op2);

			switch(choice){
		
				case '+' : printf("Result = %d\n", (op1 + op2));
						   break;
				   
				case '-' : printf("Result = %d\n", (op1 - op2));
				 		   break;
				   
				case '*' : printf("Result = %d\n", (op1 * op2));
						   break;
				   
				default : printf("Invalid choice! Try Again\n");
						  break;
			}
		}
	}while(1);
}
