/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. */
/* Stundent name: Ryan Heng */

#include "lab4.h"

/*This function calculates the total profit for all grocery items */
float calcTotalProfit(Node *listHead){

    /*Initializes variables*/
    float totalProfit = 0;
    float totalWholesaleCost = calcWholesaleCost(listHead);
    float totalRevenue = calcTotalRevenue(listHead);
    float currentInventory = calcCurrentInvestment(listHead);
    /*Performs calculation */
    totalProfit = totalRevenue - totalWholesaleCost + currentInventory;
    return(totalProfit);

}

