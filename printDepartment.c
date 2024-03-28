/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. */
/* Stundent name: Ryan Heng */

#define _GNU_SOURCE
#include "lab4.h"
#include <string.h>

/*This function prints all grocery items with a substring */
void printDepartment(Node *listHead){

    /*Initialize variables*/
    char dept[30];
    int quantity;
    Node *traverse = listHead;    
    /* Get substring */
    printf("Enter Department Name to print: ");
    scanf("%s", dept);
    printf("Grocery item list for %s:\n\n", dept);

    /* Loops the whole list */
    while (traverse != NULL) {
	/*Checks if there is a substring to print*/
        if (strcasestr(traverse->grocery_item.department, dept) != NULL) {
	    quantity = traverse->grocery_item.pricing.wholesaleQuantity - traverse->grocery_item.pricing.retailQuantity;
	    /*Checks if there is a quantity to print or 0*/
            if (quantity > 0) {
                printf("%-20d%-20d%-50s%s\n", traverse->grocery_item.stockNumber, quantity, traverse->grocery_item.department, traverse->grocery_item.item);
            } else {
                printf("%-20d%-20d%-50s%s\n", traverse->grocery_item.stockNumber, 0, traverse->grocery_item.department, traverse->grocery_item.item);

	    }

        }
        traverse = traverse->next;
    }

}

