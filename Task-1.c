#include <stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age <= 0){
    	printf("Invalid Age.\n");
	}
    else if (age < 5 && age > 0) {
        printf("Ticket Price: Free.\n");
    }
	else if (age >= 65) {
        printf("Ticket Price: Discount.\n");
    } 
	else {
        printf("Ticket Price: Standard(No Discount).\n");
    }
    return 0;
}

