/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. */
/* Stundent name: Ryan Heng */

#include "lab4.h"

/* This function reads the days old of the date in the file */

int readDaysOld(FILE *inputFile, int newDay, int newYear, char* fileName) {

    int oldDay;
    int oldYear;
    char contin;
    int continInt = 0;

    /*Reads the date from the file*/
    fscanf(inputFile,"%d\t%d", &oldDay, &oldYear);
    /*Prints how old the file is*/
    daysOld(newDay, newYear, oldDay, oldYear);

    scanf("%c", &contin);

    if (contin == 'y' || contin == 'Y') {
	continInt = 1;
	printf("\nReading inventory from file \"%s\"\n", fileName);
    }

    return(continInt);

}


