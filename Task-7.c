#include<stdio.h>
int main(){
	int permission;
	printf("Enter Permission: ");
	scanf("%d", &permission);
	permission= permission & 7;
	if(permission & 4){
		printf("Access Granted. Full Control.");
	}
	else {
		if((permission & 1) && (permission & 2)){
			printf("Access Granted. Read and Write Only.");
		}
		else if(permission & 1){
			printf("Access Granted. Read Only.");
		}
		else {
			printf("Access Denied.");
		}
	}
	return 0;
}

