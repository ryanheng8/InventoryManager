/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. */
/* Stundent name: Ryan Heng */

#include "lab4.h"

/* This is the main function to run lab4 */
int main(int argc, char *argv[]) {

    /*Initialize variables*/
    int newDay;
    int newMonth;
    int newYear;
    FILE *inputFile;
    Node *listHead = NULL;

    checkCommandLine(argc);

    /*Read in the date*/
    sscanf(argv[1], "%d/%d/%d", &newMonth, &newDay, &newYear);
    inputFile = fopen(argv[2], "r");

    /*Checks output file for errors */
    if (inputFile == NULL) {
        printf("\nNo file found\n");
	exit(EXIT_FAILURE);
    }
    /* Reads the file and returns if the user wants to continue*/
    if (readDate(inputFile, convertToDays(newMonth, newDay, newYear), newYear, argv[2])) {
        readFile(inputFile, &listHead, argv[2]); 
        /*Provides options*/
        printOptions(&listHead, (char *)argv[3], convertToDays(newMonth, newDay, newYear), newYear);
     
        /*Check close error for input*/
        if (fclose(inputFile) != 0) {
	    printf("Error closing inputFile");
	    exit(EXIT_FAILURE);
        }
    } else {
        printf("You chose to stop. Exiting program.\n");
    }

    return(0);

}

