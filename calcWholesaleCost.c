/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. */
/* Stundent name: Ryan Heng */

#include "lab4.h"

/*This function calculates the total wholesale cost for all grocery items */
float calcWholesaleCost(Node *listHead) {

    float totalWholesale = 0;
    Node *traverse = listHead;

    /*Loop for all items */
    while (traverse != NULL) {
        /*Calculates wholesale and updates listHead */
        totalWholesale += traverse->grocery_item.pricing.wholesalePrice * traverse->grocery_item.pricing.wholesaleQuantity;
        traverse = traverse->next;
    }

    return(totalWholesale);
}

