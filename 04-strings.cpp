#include <iostream>
using namespace std;

int main() {
    string firstName = "Vir";
    string lastName = "Bhadra";
    string fullName = firstName + " " + lastName; // string concatenation
    cout << fullName << "\n";
    
    string Fullname = firstName.append(lastName); //append
    cout << Fullname << "\n";
    
    cout << Fullname.length(); // String length
    
    cout << "\n" << Fullname.size() << "\n"; // String size
    
    cout << Fullname[0] << "\n"; //access strings
    
    cout << Fullname[Fullname.length() - 1] << "\n"; //prints last character

    lastName[3] = 't'; // single inverted comma

    cout << lastName << "\n";

    // cout << "Type yor full name: ";
    // cin >> fullName;
    // cout << "yor name is " << fullName; 
    // // if i type vir bhadra it prints only vir and to solve that
    
    cout << "Type yor full name: ";
    getline (cin, Fullname); // use getline() func
    cout << "yor name is " << Fullname; 

    return 0;
}