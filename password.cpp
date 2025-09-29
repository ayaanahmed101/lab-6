#include <stdio.h>

int main(){
	int userinput;
	const int pass =1234;
	printf("Enter your password 4 digit : \n   ");
	scanf("%d",&userinput);
	
	while (pass!=userinput){
		
		printf("Wrong pass enter again\n");
		scanf("%d",&userinput);
	}
	
	printf("Your password is correct \n %d" , userinput);
	
	return 0;
}
