/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. */
/* Stundent name: Ryan Heng */

#include "lab4.h"

/*This function prints the out of stock for all grocery items */
void printOutStock(Node *listHead){


    int quantity = 0;
    Node *traverse = listHead;
    /*Prints heading*/
    printf("\nGrocery items out of Stock:\n");
    printf("%-18s%-22s%-60s%s\n", "Stock#", "Quantity", "Department", "Item");
    /*Loops for the whole list printing*/
    while (traverse != NULL) {
        quantity = traverse->grocery_item.pricing.wholesaleQuantity - traverse->grocery_item.pricing.retailQuantity;
        if (quantity <= 0) {
            printf("%-20d%-20d%-50s%s\n", traverse->grocery_item.stockNumber, 0, traverse->grocery_item.department, traverse->grocery_item.item);
        }
        traverse = traverse->next;
    }

}

