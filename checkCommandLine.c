/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. */
/* Stundent name: Ryan Heng */

#include "lab4.h"

/* This function checks if the command line is the correct amount */
void checkCommandLine(int argc) {

    /*Checks if the correct number of arguments was provided*/
    if (argc != 4) {
	printf("\nUSAGE error: executable_name date filename1 filename2\n");
	exit(EXIT_FAILURE);
    }


}

