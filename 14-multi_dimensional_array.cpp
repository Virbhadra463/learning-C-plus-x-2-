// multi-dimensional array is an array of arrays.
/*
To declare a multi-dimensional array, define the variable type, 
specify the name of the array followed by square brackets which specify how many elements the main array has, 
followed by another set of square brackets which indicates how many elements the sub-arrays have:
*/

#include <iostream>
#include <string>
using namespace std;


int main() {
    string letters[2][4] ={
        {"a","b","c","d"},
        {"e","f","g","h"}
    };

    /*
    Arrays can have any number of dimensions. 
    The more dimensions an array has, the more complex the code becomes.
    */
   string fruits[2][2][2] = {{{"banana", "apple"},{"pineapple", "tomato"}},
   {{"watermelon","musk"},{"kiwi","grapes"}}};

    letters[0][0]="2"; // change elemts in mda
    cout << letters[0][0] << "\n";
    cout << letters[0][3] << "\n";

    //loopimg

    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            cout << letters[i][j] << "\n";
        }
    }
    return 0;
}