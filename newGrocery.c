/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. */
/* Stundent name: Ryan Heng */

#include "lab4.h"

/* This function finds the correct position to insert a node on decreasing order of stockNumber */
void newGrocery(Node **listHeadPtrPtr, char *fileName, int newDay, int newYear) {

    /*Initialize variables*/
    Node *newGrocery;

    /*creates memory for node*/
    newGrocery = (Node *)malloc(sizeof(Node));
    /*Error check*/
    if (newGrocery == NULL) {
        printf("\nError allocating memory for item\n");
        exit(EXIT_FAILURE);
    }

    /*Gather data*/
    printf("\nEnter grocery item name: ");
    scanf(" %[^\n]", newGrocery->grocery_item.item);
    printf("Enter Department: ");
    scanf(" %[^\n]", newGrocery->grocery_item.department);
    printf("Enter item stock number: ");
    scanf("%d", &newGrocery->grocery_item.stockNumber);
    
    /*Checks if the stock is already in use*/
    while(stockSearch(listHeadPtrPtr, newGrocery->grocery_item.stockNumber) != 1) {
	printf("Stock number already in use. Please try again.\n");
        printf("Enter item stock number: ");
        scanf("%d", &newGrocery->grocery_item.stockNumber);
    }
    /*continues to gather data*/
    printf("Enter item retail price: ");
    scanf("%f", &newGrocery->grocery_item.pricing.retailPrice);
    printf("Enter item wholesale price: ");
    scanf("%f", &newGrocery->grocery_item.pricing.wholesalePrice);
    printf("Enter item retail quantity: ");
    scanf("%d", &newGrocery->grocery_item.pricing.retailQuantity);
    printf("Enter item wholesale quantity: ");
    scanf("%d", &newGrocery->grocery_item.pricing.wholesaleQuantity);

    /*Inserts the node*/
    insertNode(listHeadPtrPtr, newGrocery);
}

