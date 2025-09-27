#include<Stdio.h>
#include<string.h>
int main(){
	char username_stored[]= "pflab05";
	char password_stored[]= "code05";
	char username_input[50];
	char password_input[50];
	printf("Enter Username: \n");
	scanf("%s", username_input);
	printf("Enter Password: \n");
	scanf("%s", password_input);
	if(strcmp(username_stored, username_input) == 0){
		if(strcmp(password_stored, password_input) == 0){
			printf("Correct Credentials. LOGGED IN.\n");
		}
		else {
			printf("INCORRECT PASSWORD. TRY AGAIN.\n");
		}
	}
	else{
		printf("USERNAME NOT FOUND.\n");
	}
	return 0;
}

