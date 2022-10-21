#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[]){
    float meal,tax,tip,total; // declare 4 variables
    printf("Enter meal cost: ");
    scanf("%f", &meal); // take inputs
    tax = (float)strtod(argv[1], NULL);
    tip = (float)strtod(argv[2], NULL);
    printf("Tax percent: %.0f\n", tax);
    printf("Tip percent: %.0f\n", tip);
    printf("\n******Bill******\n");
    printf("Cost: $%.2f\n",meal); // print cost
    printf("Tax: $%.2f\n",(tax/100)*meal); // print tax amount round off to 2 digits using .2f
    printf("Tip: $%.2f\n", (tip/100)*meal); // print tip amount
    total = meal + (tax/100)*meal + (tip/100)*meal; // calculate total
    printf("Total: %.2f\n", total);//print total
    return 0;
}