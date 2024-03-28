/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. */
/* Stundent name: Ryan Heng */

#include "lab4.h"

/* This function writes the output file */
void writeFile(Node **listHeadPtrPtr, char *fileName, int newDay, int newYear) {

    /*initialize variables*/
    Node *traversePtr;
    FILE *outputFile;
    int count = 0;
    /*open file*/
    outputFile = fopen(fileName, "w");
    /*Checks output file for errors */
    if (outputFile == NULL) {
        printf("\nNo file found\n");
	clearList(listHeadPtrPtr);
        exit(EXIT_FAILURE);
    }
    /* Write to the file for every item in the list*/
    traversePtr = *listHeadPtrPtr;
    fprintf(outputFile, "%d\t%d\n", newDay, newYear);
    while (traversePtr != NULL) {
	fprintf(outputFile, "%s\t%s\t%d\t%.2f\t%.2f\t%d\t%d\n", traversePtr->grocery_item.item, traversePtr->grocery_item.department, traversePtr->grocery_item.stockNumber, traversePtr->grocery_item.pricing.retailPrice, traversePtr->grocery_item.pricing.wholesalePrice, traversePtr->grocery_item.pricing.retailQuantity, traversePtr->grocery_item.pricing.wholesaleQuantity);
	traversePtr = traversePtr->next;
	count++;
    }
    /*Clears the list and prints message*/
    clearList(listHeadPtrPtr);
    printf("A total of %d Grocery item records were written to file \"%s\".\n", count, fileName);
    
    /*Check error closing*/
    if (fclose(outputFile) != 0) {
	printf("File error closing");
        exit(EXIT_FAILURE);
    }
}


