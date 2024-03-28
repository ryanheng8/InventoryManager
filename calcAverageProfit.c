/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. */
/* Stundent name: Ryan Heng */

#include "lab4.h"

/*This function calculates the average profit for all grocery items */
float calcAverageProfit(Node *listHead){

    /*Initialize variables*/
    float averageProfit = 0;
    float totalProfit = calcTotalProfit(listHead);
    int totalSales = calcTotalSales(listHead);

    /*Perform calculation*/
    averageProfit = totalProfit/totalSales;

    return(averageProfit);
}

