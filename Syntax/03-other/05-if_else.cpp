#include <iostream>
using namespace std;

int main() {
    //if-else
    int x =20, y =180;

    if (x>y){
        cout << "x is greater then y";
    } 
    
    else{
        cout << "y is greater than x";
    }
    
    cout << "\n";
    
    //else-if
    int time;
    cin >> time;
    
    if (time<12){
        cout << "Good Morning";
    }
    else if ( time < 18 ){
        cout << "Good Day";
    }
    else {
        cout << "Good Evening";
    }
    
    cout << "\n";
    
    //short hand if-else known as the ternary operator because it uses three operands.
    //variable = (condition) ? expressionTrue : expressionFalse;
    
    string result = (time<18) ? "Good Day" : "Good Morning";
    cout << result;
    
    cout << "\n";

    //Nested if
    // placing an "if" statement inside another if. This is called a nested if statment.

    int age = 20;
    bool isCitizen;
    cout << "are you a citizen (type 0 for no): ";
    cin >> isCitizen;

    if (age>=18){
        cout << "old enuff to vote.\n";

        if(isCitizen){
            cout << "And you are a citizen, so you can vote!\n";
        }
        else{
            cout << "But you must be a citizen to vote.\n";
        }
    }
    else{
        cout << "not old enuff to vote.\n";
    }

    //Logical Operators
    int a = 200;
    int b = 33;
    int c = 500;

    // && (AND) - all conditions must be true
    if (a>b && c>a){
        cout << "\nboth conditions are true";
    }
    // || (OR) - at least one condition must be true
    if (a>b || a>c){
        cout << "\nat least one condition is true";
    }
    // ! (NOT) - reverses a condition (true → false, false → true)
    if (!(a<b)){
        cout << "\nb is not greater than a";
    }


    bool isLoggedIn = true;
    bool isAdmin = false;
    int securityLevel = 4;

    if (isLoggedIn && (isAdmin || securityLevel <= 2)){
        cout << "access granted";
    }
    else {
    cout << "access denied";        
    }
    return 0;
}