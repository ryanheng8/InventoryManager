/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. */
/* Stundent name: Ryan Heng */

#include "lab4.h"

/*This function prints the total wholesale cost for all grocery items */
void printWholesaleCosts(Node *listHead) {

    /*Initializes variable and format*/
    float totalWholesale;
    setlocale(LC_NUMERIC,"");
    
    totalWholesale = calcWholesaleCost(listHead);
    /*Prints result*/
    printf("\nTotal Wholesale cost: $%'.2f\n", totalWholesale);

}

