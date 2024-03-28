/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. */
/* Stundent name: Ryan Heng */

#include "lab4.h"

/* This function gets user options */

void printOptions(Node **listHead, char *fileName, int newDay, int newYear) {

    int option;
    

    /*function arrays*/
    void (*fpArrayValue[9])(Node *) = {printTotalRevenue, printWholesaleCosts, printCurrentInvestment, printTotalProfit, printTotalSales, printAverageProfit, printInStock, printOutStock, printDepartment};

    void (*fpArrayAddress[3])(Node **, char *, int, int) = {newGrocery, deleteNode, writeFile};

    do {
	/*Prints prompt*/
        printf("\nPlease enter an integer between 1 and 12:\n1) Print Total Revenue\n2) Print Total Wholesale Cost\n3) Print Current Grocery Item Investment\n4) Print Current Profit\n5) Print Total Number of Grocery Items Sold\n6) Print Average Profit per Grocery Item\n7) Print Grocery Items In Stock\n8) Print Out of Stock Grocery Items\n9) Print Grocery Items for a Department\n10) Add Grocery Items to Inventory\n11) Delete Grocery Item from Inventory\n12) Exit Program\n\nOption: ");

        /*Gets value*/
        scanf("%d", &option);
        while (option < 1 || option > 12) {
	    printf("Invalid option. Please choose between 1-12.\nOption: ");
            scanf("%d", &option);
        }
        /*Calls function*/
	if (option <= 9) {
	    fpArrayValue[option - 1](*listHead);
	} else {
	    fpArrayAddress[option - 10](listHead, fileName, newDay, newYear);
	}
   /*Loops until they quit*/
   } while (option != 12);


}

