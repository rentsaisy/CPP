// inputs an article label and price

#include <iostream>
#include<iomanip>
#include <string>
using namespace std;

int main()
{
    string label;
    double price;

    cout << "\nPlease enter the article label: ";

    // input the label (15 character maximum):
    cin >> setw(16); // or: cin.width(16);
    cin >> label;

    cin.sync(); // clears the buffer and resets
    cin.clear(); // any error flags that may be set

    cout << "\nEnter the price of the article: ";
    cin >> price;       // input the price

    // controlling output:
    cout << fixed << setprecision(2)
        << "\nArtickle: " << label
        << "\nPrice: " << price << endl;

    // . . . The program to be continued

    return 0;
}