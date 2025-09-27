#include<stdio.h>
int main(){
    char Room, action;
    printf(" Choose room type\n (L= Living Room, K= Kitchen): ");
    scanf(" %c", &Room);
    printf(" Choose action to perform\n (L= Lights, T=Thermostate): ");
    scanf(" %c", &action);
    switch(Room){
        case 'L':
        switch(action){
            case 'L':
            printf(" Living Room Lights: Adjusting ambient lighting.\n");
            break;
            case 'T':
            printf(" Living Room Thermostat: Setting living room temperature.\n");
            break;
            default: 
            printf(" INVALID ACTION.\n");
        }
        break;
        case 'K':
        switch(action){
            case 'L':
            printf(" Kitchen Lights: Turning on bright task lighting.\n");
            break;
            case 'T':
            printf(" Kitchen Thermostat: Setting kitchen temperature.\n");
            break;
            default:
            printf(" INVALID ACTION.\n");
        }
        break;
        default:
        printf(" INVALID ROOM.\n");
    }
    return 0;
}
