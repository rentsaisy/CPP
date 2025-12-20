// Reads a text with the operator and the function getline()

#include <iostream>
#include <string>
using namespace std;

string header =
"---------Demonstration of unformatted input---------\n";

int main()
{
    string word, rest;

    cout << header
        << "\n\nPress <return> to go on" << endl;

    cin.get(); // wait for <return>

    cout << "\nPlease enter a sentence with several words!"
        << "\nEnd with <!> and <return>."
        << endl;

    cin >> word; // read first word
    getline(cin, rest, '!'); // read rest of line until '!'

    cout << "\nThe first word: " << word 
        << "\nRemaining text: " << rest << endl;

    return 0;
}