/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. */
/* Stundent name: Ryan Heng */

#include "lab4.h"

/*This function prints the current investments for all grocery items */
void printCurrentInvestment(Node *listHead) {

    /*Initializes variable and format*/
    float totalInvestment;
    setlocale(LC_NUMERIC,"");

    totalInvestment = calcCurrentInvestment(listHead);
    /*Prints result*/
    printf("\nTotal Wholesale Investment: $%'.2f\n", totalInvestment);

}



