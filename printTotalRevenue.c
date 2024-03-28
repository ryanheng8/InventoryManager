/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. */
/* Stundent name: Ryan Heng */

#include "lab4.h"

/*This function prints the total revenue for all grocery items */
void printTotalRevenue(Node *listHead){

    /*Initializes variable and format*/
    float totalRevenue;
    setlocale(LC_NUMERIC,"");

    totalRevenue = calcTotalRevenue(listHead);
    /*Prints result*/
    printf("\nTotal Revenue: $%'.2f\n", totalRevenue);

}


