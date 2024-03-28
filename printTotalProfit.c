/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. */
/* Stundent name: Ryan Heng */

#include "lab4.h"

/*This function prints the total profit for all grocery items */
void printTotalProfit(Node *listHead){


    /*Initializes variable and format*/
    float totalProfit;
    setlocale(LC_NUMERIC,"");

    totalProfit = calcTotalProfit(listHead);

    /*Prints result*/
    printf("\nTotal profit: $%'.2f\n", totalProfit);


}

