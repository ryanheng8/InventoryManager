#BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT.
#Student name: Ryan Heng

# includes all of the gcc options
CFLAGS = -ansi -pedantic -Wimplicit-function-declaration -Wreturn-type -g

# includes all of the .c files to be compiled.

OBJ = lab4main.o readDate.o writeFile.o stockSearch.o calcAverageProfit.o calcCurrentInvestment.o calcTotalProfit.o calcTotalRevenue.o calcTotalSales.o calcWholesaleCost.o checkCommandLine.o convertToDays.o clearList.o daysOld.o deleteNode.o insertNode.o newGrocery.o printAverageProfit.o printCurrentInvestment.o printDepartment.o printInStock.o printOutStock.o printOptions.o printTotalProfit.o printTotalRevenue.o printTotalSales.o printWholesaleCosts.o readDaysOld.o readFile.o


# target all is the executable and the .zip file
all: lab4 lab4.zip

# this target creates the .zip to submit
lab4.zip: *.c *.h Makefile LAB4README
	zip $@ $^

# these targets create all of the dependencies for the targets in all
%.o: %.c *.h
	gcc -c $< -o $@ $(CFLAGS)

# this target is the executable for 
lab4: $(OBJ)
	gcc $^ -o $@ $(CFLAGS)

# this target deletes all .o files, the executable, and .zip for a new compile can be made.
clean:
	rm -rf *.o lab4 lab4.zip

