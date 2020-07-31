// CIT125 Intro To C++ Luigi Robles
// 07-31-2020 Summer Term
// Ch.11 Pg.422 Figure 11-55
// Gets and displays daily calories
// Also displays the average number of calories consumed

#include <iostream>
#include <iomanip>
using namespace std;

//function prototypes 
void displayArray(int cals[], int numElements);
double getAverage(int cals[], int numElements);

int main()
{
	//declare and initialize array
	int calories[5] = { 0 };

	//declare and initialize variables
	double average = 0.0;

	//store data in the array
	for (int sub = 0; sub < 5; sub += 1)
	{
		cout << "Calories for day " << sub + 1 << ": ";
		cin >> calories[sub]; //input for calories array
	}	//end for

	//display the contents of the array
	displayArray(calories, 5); 

	//get and display the average 
	average = getAverage(calories, 5); //function call 
	cout << fixed << setprecision(0);
	cout << endl << "Average number of calories consumed: "
		<< average << endl;
	return 0;
}	//end of main function

//*****Function Definitions******
void displayArray(int cals[], int numElements)
{
	cout << endl << "Array contents: " << endl;
	for (int sub = 0; sub < 5; sub += 1)
		cout << "Calories for day " << sub + 1
		<< ": " << cals[sub] << endl;
	//end for
}	//end of displayArray function

double getAverage(int cals[], int numElements)
{
	double total = 0.0; //accumulator

	//accumalte array values
	for (int sub = 0; sub < numElements; sub += 1)
		total += cals[sub];
	//end for

	//calculate and return average
	return static_cast<double>(total) / numElements;
}	//end of getAverage function

