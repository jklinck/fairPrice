/*
https://www.car-buying-strategies.com/dealer-invoice/toyota-corolla-hybrid-prices.html

https://www.jdpower.com/cars/shopping-guides/how-much-does-a-new-car-dealer-make-on-a-deal


I'm getting conflicting information on the MSRP, a car at Bellevue says the base MSRP is 23,500

FWD msrp 23,500
AWD msrp 24,900


2024 Corolla Hybrid LE
FWD
LE convenience package
floor mats

*/

#include <stdio.h>

void clearInput();

int main()
{

    /*
    in the while loops I should also be checking if what the 
    user intered is not a double
    */
    double msrp; 

    printf("Please enter the MSRP: ");
    scanf("%lf", &msrp);
    // check to make sure the user entered a number greater than 0
    while(msrp < 0){
        clearInput();
        printf("Please enter the MSRP: ");
        scanf("%lf", &msrp);
    }

    clearInput(); // clear the input buffer
    double destinationFee;
    printf("Please enter the destination fee: ");
    scanf("%lf", &destinationFee);
    while(destinationFee < 0){
        clearInput();
        printf("Please enter the destination fee: ");
        scanf("%lf", &destinationFee);
    }

    clearInput(); // clear the input buffer
    double addOns;
    // double addOns = 600.0;
    printf("Please enter the total price of all add ons: ");
    scanf("%lf", &addOns);
    while(addOns < 0){
        clearInput();
        printf("Please enter the total price of all add ons: ");
        scanf("%lf", &addOns);
        clearInput();
    }

    double invoice = msrp - (msrp * 0.0768);
    double holdback = msrp * 0.02;
    
    double actualPrice = invoice + destinationFee - holdback;
    double profit = 0.05 * actualPrice;
    double fairPrice = actualPrice + profit;
    
    printf("\nActual dealership cost = %.2f\n\n", actualPrice);
    
    printf("Fair price = %.2f\n\n", fairPrice);

    printf("Profit = %.2f\n\n", profit);
    
    return 0;
}

// function to clear the input buffer
void clearInput(){
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}





