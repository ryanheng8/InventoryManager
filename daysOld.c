/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. */
/* Stundent name: Ryan Heng */

#include "lab4.h"

/* This function determines how many days old the input file is */

void daysOld(int newDay, int newYear, int oldDay, int oldYear) {

    int dayDiff;

    /* Checks if the year is the same first */
    if (oldYear == newYear) {
	dayDiff = newDay - oldDay;
    } else {
	/* Loops until there is a 1 year difference between the years */
        while (oldYear < newYear - 1) {
	    /* Adds days depending on if it was a leap year */
    	    if(oldYear % 4 == 0 && oldYear % 100 != 0 || oldYear % 400 == 0) {
                dayDiff = dayDiff + 366;
            } else {
	        dayDiff = dayDiff + 365;
	    }
	    oldYear = oldYear + 1;
        }
	/* The years are now 1 year apart */
	/* If the newDay is greater than or equal to the oldDay, then a full year has passed, so a year can be added to the difference between the days */
	if (newDay >= oldDay) {
            if(oldYear % 4 == 0 && oldYear % 100 != 0 || oldYear % 400 == 0) {
                dayDiff = dayDiff + 366 + newDay - oldDay;
	    } else {
                dayDiff = dayDiff + 365 + newDay - oldDay;
	    }
	/* If the newDay is less than the old day, then a full year has not passed, so the remaining days of that year can be added to the newDay of the next year */
	} else {
	    if(oldYear % 4 == 0 && oldYear % 100 != 0 || oldYear % 400 == 0) {
		dayDiff = dayDiff + 366 - oldDay + newDay;
	    } else {
		dayDiff = dayDiff + 365 - oldDay + newDay;
	    }
	}
    }
    /* Prints the days left to console */
    printf("There are %d days difference between the date entered and the date in the file. Do you wish to continue? (Enter 'y' to continue) ", dayDiff);   
}


