#include <bits/stdc++.h>
using namespace std;

// A class can also be derived from one class, which is already derived from another class.

// Base class (parent)
class myClass {
    public:
    void myFunction(){
        cout << "Hello Child";
    }
};

class myChild: public myClass{
};

class myGrandChild: public myChild {
};


int main() {
    myGrandChild myObj;
    myObj.myFunction();
    return 0;
}