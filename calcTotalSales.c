/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. */
/* Stundent name: Ryan Heng */

#include "lab4.h"

/*This function calculates the number of grocery items sold*/
int calcTotalSales(Node *listHead) {

    int totalSales = 0;
    Node *traverse = listHead;

    /*Loop for all items */
    while (traverse != NULL) {
        totalSales += traverse->grocery_item.pricing.retailQuantity;
        /*Calculates investment and updates listHead */
        traverse = traverse->next;
    }
    return(totalSales);
}


