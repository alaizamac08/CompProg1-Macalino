#include <iostream>

using namespace std;

int main() {

    cout << "Hello World!\n\n";

    string Name;
    cout << "Enter your name: ";
    cin >> Name;

    char MiddleName;
    cout << "\nEnter your middle name: ";
    cin >> MiddleName;

    string Surname;
    cout << "\nEnter your surname: ";
    cin >> Surname;

    int Age;
    cout << "\nEnter your age: ";
    cin >> Age;

    cout << "\nYour name is " << Name << " " << MiddleName << ". " << Surname;
    cout << ", your age is " << Age << " yrs old\n";

    return 0;
}
