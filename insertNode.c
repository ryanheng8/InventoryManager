/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. */
/* Stundent name: Ryan Heng */

#include "lab4.h"

/* This function finds the correct position to insert a node on decreasing order of stockNumber */
void insertNode(Node **listHeadPtrPtr, Node *newItemPtr) {

    /* Initialize nodes for iterating */
    Node *traversePtr = *listHeadPtrPtr;
    Node *priorNode;

    /* Checks if the list is empty, then insert the node */
    if(*listHeadPtrPtr == NULL) {
	*listHeadPtrPtr = newItemPtr;
	newItemPtr->next = NULL;
    /* Checks if the node belongs in the beginning, then insert the node */
    } else if(newItemPtr->grocery_item.stockNumber >= (*listHeadPtrPtr)->grocery_item.stockNumber) {
	    newItemPtr->next = *listHeadPtrPtr;
	    *listHeadPtrPtr = newItemPtr;
    /* Node must belong someplace after the first node */
    } else {
	/* Calls function to find correct spot and inserts node */
        /* Loops until there are no more nodes */
        while(traversePtr != NULL) {

            /*Sets priorNode to the old next node and updates the next node*/
            priorNode = traversePtr;
            traversePtr = traversePtr->next;
            /*If the traverse node is NULL, then the list is at the end, so insert the new node*/
            if(traversePtr == NULL) {
                priorNode->next = newItemPtr;
                newItemPtr->next = NULL;
            /* The list is not at the end, so the stockNumber must be compared */
            } else {
                /* Checks if the new node fits in decreasing order, if it does, insert the node */
                if (newItemPtr->grocery_item.stockNumber >= traversePtr->grocery_item.stockNumber && newItemPtr->grocery_item.stockNumber <= priorNode->grocery_item.stockNumber) {
                    priorNode->next = newItemPtr;
                    newItemPtr->next = traversePtr;
		    break;
                }
            }
        } 
    }    
}



