
#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
    string fullName, firstName = "", lastName = "";

    cout << "Enter full name: ";
    getline(cin, fullName);

    getFirstandLastName(fullName, firstName, lastName);

    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;

    return 0;
}
