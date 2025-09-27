#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter a (co-efficient of x^2): \n");
	scanf("%d",&a);
	printf("Enter b (Co-efficient of x): \n");
	scanf("%d",&b);
	printf("Enter c (Constant term): \n");
	scanf("%d",&c);
	float discriminant= b*b- 4*a*c;
	if(discriminant==0){
		printf("Equation has One Real Root.\n");
	}
	else if(discriminant>0){
		printf("Equation has Two Real Roots.\n");
	}
	else{
		printf("Equation has No Real Roots.\n");
	}
	return 0;
}


