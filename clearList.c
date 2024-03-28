/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. */
/* Stundent name: Ryan Heng */

#include "lab4.h"

/* This frees all nodes in the list */
void clearList(Node **listHeadPtrPtr) {

    /*Initializes iteration nodes*/
    Node* prior;
    Node* traverse = *listHeadPtrPtr;

    /*Loops until empty*/
    while(traverse != NULL) {
	/*Frees the prior node while moving the next node forward*/
	prior = traverse;
        traverse = traverse->next;
        free(prior);
        prior = NULL;
    }

}



