/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. */
/* Stundent name: Ryan Heng */

#include "lab4.h"

/*This function prints the in stock for all grocery items */
void printInStock(Node *listHead){

    /*Initializes variables*/
    int quantity = 0;
    Node *traverse = listHead;

    printf("\nGrocery items in Stock:\n");
    printf("%-18s%-22s%-60s%s\n", "Stock#", "Quantity", "Department", "Item");
    /*Loops for the whole list to print*/
    while (traverse != NULL) {
	quantity = traverse->grocery_item.pricing.wholesaleQuantity - traverse->grocery_item.pricing.retailQuantity;
	if (quantity > 0) {
	    printf("%-20d%-20d%-50s%s\n", traverse->grocery_item.stockNumber, quantity, traverse->grocery_item.department, traverse->grocery_item.item);
        }
	traverse = traverse->next;
    }

}



