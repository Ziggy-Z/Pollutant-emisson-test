#include <stdio.h>
#include <stdlib.h>


int menu();   /*prototype for menu function*/

int main()
{
    double per_M;  /* declares variables used for input*/
    int odo;
    int ch = menu();

    printf("\n");

    /* creates a user input*/
    printf("Enter number of grams emitted per mile: ");
    scanf("%lf", &per_M);
    printf("Enter odometer: ");
    scanf("%d", &odo);

    /* Creates an if else statement if the user chooses 1 and prints out the corresponding emission level*/
    if(ch == 1){
        if (odo <= 50000){
            if(per_M <= 3.4){
                printf("Emission is below permitted level of 3.4 grams/ mile\n");
                }
            else{
                printf("\nEmission exceed permitted level of 3.4 grams/ mile\n");
                }
                        }

        if (odo > 50000){
            if(per_M <= 4.2){
                printf("Emission is below permitted level of 4.2 grams/ mile\n");
                }
            else{
                printf("\nEmission exceed permitted level of 4.2 grams/ mile\n");
                }

        }
    }

    /* Creates an if else statement if the user chooses 2 and prints out the corresponding emission level*/
    if(ch == 2){
        if (odo <= 50000){
            if(per_M <= 0.31){
                printf("Emission is below permitted level of 0.31 grams/ mile\n");
                }
            else{
                printf("\nEmission exceed permitted level of 0.31 grams/ mile\n");
                }
                        }

        if (odo > 50000){
            if(per_M <= 0.39){
                printf("Emission is below permitted level of 0.39 grams/ mile\n");
                }
            else{
                printf("\nEmission exceed permitted level of 0.39 grams/ mile\n");
                }

        }
    }
    /* Creates an if else statement if the user chooses 3 and prints out the corresponding emission level*/
    if(ch == 3){
        if (odo <= 50000){
            if(per_M <= 0.4){
                printf("Emission is below permitted level of 0.4 grams/ mile\n");
                }
            else{
                printf("\nEmission exceed permitted level of 0.4 grams/ mile\n");
                }
                        }
        if (odo > 50000){
            if(per_M <= 0.5){
                printf("Emission is below permitted level of 0.5 grams/ mile\n");
                }
            else{
                printf("\nEmission exceed permitted level of 0.5 grams/ mile\n");
                }

        }
    }

    /* Creates an if else statement if the user chooses 4 and prints out the corresponding emission level*/
    if(ch == 4){
        if (odo <= 50000){
            if(per_M <= 0.25){
                printf("Emission is below permitted level of 0.25 grams/ mile\n");
                }
            else{
                printf("\nEmission exceed permitted level of 0.25 grams/ mile\n");
                }
                        }
        if (odo > 50000){
            if(per_M <= 0.31){
                printf("Emission is below permitted level of 0.31 grams/ mile\n");
                }
            else{
                printf("\nEmission exceed permitted level of 0.31 grams/ mile\n");
                }

        }
    }

}
/*Menu used to scan the user's choice of input for the emission chemicals*/
int menu(){
    int choice;
    printf(" 1) Carbon Monoxide \n 2) Hydrocarbons \n 3) Nitrogen Oxides \n 4) Non Methane Hydrocarbons \n");
    printf("Enter pollutant number: ");
    scanf("%d", &choice);

    return choice;

}
