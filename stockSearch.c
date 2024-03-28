/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. */
/* Stundent name: Ryan Heng */

#include "lab4.h"

/* This function finds if a stock number already exist */
int stockSearch(Node **listHeadPtrPtr, int stockNumber) {

    /*Initializes variables*/
    Node *traverse = *listHeadPtrPtr;
    int notInList = 1;
    /*Loops the whole list*/
    while (traverse != NULL) {
    	if(traverse->grocery_item.stockNumber == stockNumber) {
	    notInList = 0;
        }
	traverse = traverse->next;
    }

    return(notInList);
}

