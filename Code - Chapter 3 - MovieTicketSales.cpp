/* Example is taken out of the C++ Programming Program Design Including
Data Structures Edition 5 written by D.S. Malik, Chapter 3*/

/*MOVIE TICKET SALE AND DONATION TO CHARITY*/

/*A movie in a local cinema is in great demand. To help a local charity, the theater owner has decided to donate to the charity a portion of the gross amount generated from the movie. This example designs and implements a program that prompts the user to input the movie name, adult ticket price, child ticket price, number of adult tickets sold,  number of child tickets sold, and the percentage of the gross amount to be donatedto the charity.  The output of the program will be as follows:

_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*
Movie Name:.......................................... Journey To Mars
Number of Tickets Sold:........................           2650
Gross Amount:...................................... $ 9150.00
Percentage of Gross Amount Donated:          10.00%
Amount Donated:.................................. $    915.00
Net Sale:................................................. $ 8235.00

*/
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main()
{
 //Step 1: Declare the variables
string movieName;
double adultTicketPrice;
double childTicketPrice;
int noOfAdultTicketsSold;
int noOfChildTicketsSold;
double percentDonation;
double grossAmount;
double amountDonated;
double netSaleAmount;

//Step 2: Set the output of the floating-point numbers to two
//decimal places in a fixed decimal format
 //with a decimal point and trailing zeros.
cout << fixed << showpoint << setprecision(2);

//Step 3: Prompt the user to enter the movie name
cout << "Enter the movie name: ";

//Step 4: Input(read) the movie name. Because the name 
//of the movie might contain
//more than one word (and therefore, might contain blanks), 
//the program uses the function getline to input the movie name
getline(cin, movieName);
cout << endl;

//Step 5: Prompt the user to enter the price of a adult ticket
cout << "Enter the price of a adult ticket: ";

//Step 6: Input (read) the price of an adult ticket
cin >> adultTicketPrice;
cout << endl;

//Step 7: Prompt the user to enter the price of a child ticket
cout << "Enter the price of a child ticket: ";

//Step 8: Input (read) the price of an child ticket
cin >> childTicketPrice;
cout << endl;

 //Step 9: Prompt the user to enter the number of adult tickets sold
cout << "Enter the number of adult tickets sold: ";

//Step 10: Input (read) the number of adult tickets sold
cin >> noOfAdultTicketsSold;
cout << endl;

//Step 11: Prompt the user to enter the number of child tickets sold
cout << "Enter the number of child tickets sold: ";

//Step 12: Input (read) the number of child tickets sold
cin >> noOfChildTicketsSold;
cout << endl;

  //Step 13: Prompt the user to enter the percentage of the gross amount donated
cout << "Enter the percentage donated: ";

//Step 14: Input (read) the percenatge of the gross amount donated
cin >> percentDonation;
cout << endl << endl;

//Step 15: Calculate the Gross Amount
grossAmount = adultTicketPrice * noOfAdultTicketsSold +
childTicketPrice * noOfChildTicketsSold;

//Step 16: Calculate the amount donated
amountDonated = grossAmount * percentDonation / 100;

//Step 17: Calculate the net sale amount
netSaleAmount = grossAmount - amountDonated;

/*Step 18: Output the results - In the output the first column is left-justified and the numbers in the second column are right-justified. Therefore, when printing a value in the first column, the manipulator left  is used; before printing a value in the second column, the manipulator right is used. The empty space between the first and second columns is filled with dots; the program uses the manipulator setfill to accomplish this goal. In the lines showing the gross amount, amount donated, and net sale amount, the space between the $ sign and the number is filled with blank spaces. Therefore before printing the dollar sign, the program uses the manipulator setfill to set the filling to blank.*/

cout << "_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*" <<
"_*_*_*_*_*_*_*_*_*_*_*_*" << endl;
cout << setfill('.') << left << setw(35) << "Movie Name: "
<< right << " " << movieName << endl;
cout << left << setw(35) << "Number of Tickets Sold: "
<< setfill(' ') << right << setw(10)
<< noOfAdultTicketsSold + noOfChildTicketsSold << endl;
cout << setfill('.') << left << setw(35) << "Gross Amount: "
<< setfill(' ') << right << " $"
<< setw(8) << grossAmount << endl;
cout << setfill('.') << left << setw(35)
<< "Precentage of Gross Amount Donated: "
<< setfill(' ')
<< right << setw(9) << percentDonation << '%' << endl;
cout << setfill('.') << left << setw(35) << "Amount Donated: "
<< setfill(' ') << right << " $"
<< setw(8) << amountDonated << endl;
cout << setfill('.') << left << setw(35) << "Net Sale: "
<< setfill(' ') << right << " $"
<< setw(8) << netSaleAmount << endl;
}
