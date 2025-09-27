#include<stdio.h>
int main(){
	int hasPrerequisite ;
	int isCourseFull;
	printf("Have you completed Prerequisite? (0.No  1.Yes):  \n");
	scanf("%d", &hasPrerequisite);
	printf("Is the course full? (0.No  1.Yes):  \n");
	scanf("%d", &isCourseFull);
	if((hasPrerequisite !=0 && hasPrerequisite !=1) || (isCourseFull !=0 && isCourseFull !=1)){
		printf("INVALID. CHOOSE CORRECT OPTIONS.\n");
	}
	else{
		if(hasPrerequisite == 1){
			if(isCourseFull == 1){
			printf("Enrolled Successfully.\n");
			}
			else{
			printf("Cannot Enroll. Course is Full.\n");
			}
		}
		else{
			if(isCourseFull == 1){
			printf("Cannot Enroll. Prerequisite is Missing.\n");
			}
			else{
			printf("Cannot Enroll. Prerequisite is Missing and Course is Full");
			}
		}
	}
	return 0;
}
