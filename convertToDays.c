/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. */
/* Stundent name: Ryan Heng */

#include "lab4.h"

/* This function converts the months to days in the year */
int convertToDays(int newMonth, int newDay, int newYear) {

    int totalDays;

    /*Initializes arrays to hold the total number of days after each month*/
    int leapYearDays[12] = {0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335};
    int regularYearDays[12] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
    /*Checks for leap year*/
    if (newYear % 4 == 0 && newYear % 100 != 0 || newYear % 400 == 0) {
	totalDays = leapYearDays[newMonth - 1] + newDay;
    } else {
	totalDays = regularYearDays[newMonth - 1] + newDay;

    }

    return(totalDays);

}


