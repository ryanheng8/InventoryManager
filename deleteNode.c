/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. */
/* Stundent name: Ryan Heng */

#include "lab4.h"

/* This function finds a node to delete in the list */
void deleteNode(Node **listHeadPtr, char *fileName, int newDay, int newYear) {

    /*Initialize nodes to iterate */
    int stockNumber;
    Node *priorNode;
    Node *traversePtr = *listHeadPtr;

    /*Gets stock number*/
    printf("\nPlease enter the grocery item stock number you wish to delete, followed by enter. ");
    scanf("%d", &stockNumber);

    /* Checks if list is empty, then prints error */
    if (*listHeadPtr == NULL) {
	printf("\nError, list is empty\n");
    /* Checks if the node to delete is the first node */
    } else if (traversePtr->grocery_item.stockNumber == stockNumber) {
	*listHeadPtr = traversePtr->next;
	free(traversePtr);
	traversePtr = NULL;
        printf("Grocery item stock number %d was deleted.\n", stockNumber);
    /* Node is after the first node or not in the list */
    } else {
	/* Find position to delete node after the first node and deletes it */
        /* Loops until the end of the list */
        while(traversePtr != NULL && traversePtr->grocery_item.stockNumber != stockNumber) {
            /* Updates the iteration nodes */
            priorNode = traversePtr;
            traversePtr = traversePtr->next;
        }
        /* If the updated node is NULL, the node is not in the list */
        if(traversePtr == NULL) {
            printf("\nError, node is not in the list\n");
        } else {
            /*Delete the node*/
            priorNode->next = traversePtr->next;
            free(traversePtr);
            traversePtr = NULL;
            printf("Grocery item stock number %d was deleted.\n", stockNumber);   
        }


    }

}


