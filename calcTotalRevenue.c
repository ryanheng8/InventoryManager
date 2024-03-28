/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. */
/* Stundent name: Ryan Heng */

#include "lab4.h"

/*This function calculates the total revenue for all grocery items */
float calcTotalRevenue(Node *listHead){

    float totalRevenue = 0;
    Node *traverse = listHead;

    /*Loop for all items */
    while (traverse != NULL) {
        /*Calculates revenue and updates listHead */
        totalRevenue += traverse->grocery_item.pricing.retailPrice * traverse->grocery_item.pricing.retailQuantity;
        traverse = traverse->next;
    }

    return(totalRevenue);

}

