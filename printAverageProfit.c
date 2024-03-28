/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. */
/* Stundent name: Ryan Heng */

#include "lab4.h"

/*This function prints the average profit for all grocery items */
void printAverageProfit(Node *listHead){

    /*Initializes variable and format*/
    float averageProfit;
    setlocale(LC_NUMERIC,"");

    averageProfit = calcAverageProfit(listHead);
    /*Prints result*/
    printf("\nAverage Profit: $%'.2f\n", averageProfit);


}


