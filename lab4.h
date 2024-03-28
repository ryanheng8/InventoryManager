/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. */
/* Stundent name: Ryan Heng */

/*Include built in libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Structures and typedef definitions */

struct Cost {
	float wholesalePrice;
	float retailPrice;
	int wholesaleQuantity;
	int retailQuantity;
};

struct Data {
	char item[50];
	char department[30];
	int stockNumber;
	struct Cost pricing;
};

typedef struct Node {
	struct Data grocery_item;
	struct Node *next;
} Node;

/* Prototypes */
float calcAverageProfit(Node *listHead);
float calcCurrentInvestment(Node *listHead);
float calcTotalProfit(Node *listHead);
float calcTotalRevenue(Node *listHead);
int calcTotalSales(Node *listHead);
float calcWholesaleCost(Node *listHead);

void printAverageProfit(Node *listHead);
void printCurrentInvestment(Node *listHead);
void printTotalProfit(Node *listHead);
void printTotalRevenue(Node *listHead);
void printTotalSales(Node *listHead);
void printWholesaleCosts(Node *listHead);
void printInStock(Node *listHead);
void printOutStock(Node *listHead);
void printDepartment(Node *listHead);
void newGrocery(Node **listHead, char *fileName, int newDay, int newYear);
void deleteNode(Node **listHead, char *fileName, int newDay, int newYear);
void insertNode(Node **listHeadPtr, Node *newItemPtr);

int stockSearch(Node **listHeadPtrPtr, int stockNumber);
void printOptions(Node **listHead, char *fileName, int newDay, int newYear);
void checkCommandLine(int argc);
int convertToDays(int newMonth, int newDay, int newYear);
void daysOld(int newDay, int newYear, int oldDay, int oldYear);
void writeFile(Node **listHead, char *fileName, int newDay, int newYear);
void readFile(FILE *inputFile, Node **listHead, char* fileName);
int readDaysOld(FILE *inputFile, int newDay, int newYear, char* fileName);
void clearList(Node **HeadPtrPtr);
int readDate(FILE *inputFile, int newDay, int newYear, char *fileName);

