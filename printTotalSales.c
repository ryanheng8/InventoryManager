/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. */
/* Stundent name: Ryan Heng */

#include "lab4.h"

/*This function prints the number of grocery items sold*/
void printTotalSales(Node *listHead) {

    int totalSales = calcTotalSales(listHead);
    /*Prints result*/
    printf("\nTotal number of grocery items sold: %d\n", totalSales);

}


