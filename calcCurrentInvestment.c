/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. */
/* Stundent name: Ryan Heng */

#include "lab4.h"

/*This function calculates the current investments for all grocery items */
float calcCurrentInvestment(Node *listHead) {

    float totalInvestment = 0;
    Node *traverse = listHead;    
 
    /*Loop for all items */
    while (traverse != NULL) {
        /*Calculates investment and updates listHead */
        totalInvestment += traverse->grocery_item.pricing.wholesalePrice * (traverse->grocery_item.pricing.wholesaleQuantity - traverse->grocery_item.pricing.retailQuantity);
        traverse = traverse->next;
    }
    return totalInvestment;
}

