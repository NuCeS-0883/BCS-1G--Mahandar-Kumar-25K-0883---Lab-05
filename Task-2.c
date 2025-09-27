#include <stdio.h>

int main() {
    int power;
    char light_colour;
    printf("Enter power status (1 = On, 0 = Off): ");
    scanf("%d", &power);
    switch(power) {
    	case 0:
        printf("Signal is OFF.\n");
        break;
    	case 1:
    	printf("Enter Light colour (R = Red, Y = Yellow, G = Green): ");
   		scanf(" %c", &light_colour);
   		switch(light_colour){
   			case 'R':
            printf("Please Stop.\n");
            break;
        	case 'Y':
	        printf("Caution (Wait please).\n");
	        break;
	        case 'G':
            printf("You can Go.\n");
            break;
            default: 
            printf("Invalid Light colour.\n");
        	}
        break;
        default:
        printf("Invalid Power Status.\n");
    }
    return 0;
}
