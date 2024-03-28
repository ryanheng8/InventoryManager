/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. */
/* Stundent name: Ryan Heng */

#include "lab4.h"

/* This function reads the input file */

void readFile(FILE *inputFile, Node **listHeadPtrPtr, char *fileName) {

    Node *newItemPtr;
    int scanValue;
    int itemsReadIn = 0;
    /*Calculates days to print and returns user choice of continue*/

    do {
        /*creates memory for node*/
        newItemPtr = (Node *)malloc(sizeof(Node));
	/*Error check*/
        if (newItemPtr == NULL) {
            printf("\nError allocating memory for item\n");
            /*Frees nodes*/
            clearList(listHeadPtrPtr);
            exit(EXIT_FAILURE);
        }   
	/*reads in data*/
	scanValue = fscanf(inputFile, " %[^\t] %[^\t] %d\t%f\t%f\t%d\t%d", newItemPtr->grocery_item.item, newItemPtr->grocery_item.department, &newItemPtr->grocery_item.stockNumber, &newItemPtr->grocery_item.pricing.retailPrice, &newItemPtr->grocery_item.pricing.wholesalePrice, &newItemPtr->grocery_item.pricing.retailQuantity, &newItemPtr->grocery_item.pricing.wholesaleQuantity);
	
	if(scanValue == EOF) {
	    free(newItemPtr);
	    newItemPtr = NULL;
	} else {
	    /* Inserts the node in order and increments number of items */
            insertNode(listHeadPtrPtr, newItemPtr);

	    /* Increments number of items */
	    itemsReadIn++;
	}
    } while (scanValue != EOF);

    printf("A total of %d grocery items were read into inventory from the file \"%s\".\n", itemsReadIn, fileName);
    
}

