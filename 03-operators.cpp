// Operators are used to perform operations on variables and values.

// Arithmetic Operators
/*
+	Addition	    Adds together two values		
-	Subtraction 	Subtracts one value from another		
*	Multiplication	Multiplies two values		
/	Division	    Divides one value by another		
%	Modulus	        Returns the division remainder		
++	Increment	    Increases the value of a variable by 1	
--	Decrement	    Decreases the value of a variable by 1	
*/

// Note: When dividing two integers in C++, the result will also be an integer. 
// For example, 10 / 3 gives 3. If you want a decimal result, use float or double values, like 10.0 / 3.


//______________________________________________________________________________________________________________________________

// Assignment Operators
// Assignment operators are used to assign values to variables.
#include <iostream>
using namespace std;

int main() {
    int x = 3;
    x += 3; // compound assignment operators
    cout << x;
    return 0;
}
/*
Compound assignment operators are a shorter way of writing operations where you use a variable in both sides of an assignment. 
For example, instead of writing x = x + 5;, you can simply write x += 5;
*/

//______________________________________________________________________________________________________________________________


// Comparison Operators
// Comparison operators are used to compare two values (or variables). 
// This is important in programming, because it helps us to find answers and make decisions.

/*
==	Equal to	
!=	Not equal	
>	Greater than	
<	Less than	
>=	Greater than or equal to
<=	Less than or equal to	
*/

//Logical Operators
// As with comparison operators, you can also test for true (1) or false (0) values with logical operators.

/*
&& 	Logical and	Returns true if both statements are true	                x < 5 &&  x < 10	
|| 	Logical or	Returns true if one of the statements is true	            x < 5 || x < 4	
!	Logical not	Reverse the result, returns false if the result is true	    !(x < 5 && x < 10)	
*/

//______________________________________________________________________________________________________________________________

// Operator Precedence
// When a calculation contains more than one operator, C++ follows order of operations rules to decide which part to calculate first.

/*
Tip: Always use parentheses ( ) if you want to make sure the calculation is done in the order you expect. 
It also makes your code easier to read.

Order of Operations
Here are some common operators in C++, from highest to lowest priority:
BODMAS rule but comparison operators and logical operators too
() - Parentheses
*, /, % - Multiplication, Division, Modulus
+, - - Addition, Subtraction
>, <, >=, <= - Comparison
==, != - Equality
&& - Logical AND
|| - Logical OR
= - Assignment
*/