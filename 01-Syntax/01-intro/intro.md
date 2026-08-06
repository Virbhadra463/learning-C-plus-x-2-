C++ is an object-oriented programming language which gives a clear structure to programs and allows code to be reused, lowering development costs.

C++ was developed as an extension of C, and both languages have almost the same syntax.

The main difference between C and C++ is that C++ supports classes and objects, while C does not.

Omitting Namespace
You might see some C++ programs that run without the standard namespace line. The using namespace std; statement can be omitted, and replaced with the std keyword followed by the :: operator, for some objects (like std::cout in the example below):

Example
#include <iostream>

int main() {
  std::cout << "Hello World!";
  return 0;
}
Both approaches are valid in C++. Using std:: makes it clear where names come from and avoids name conflicts in larger programs.
As you write larger or more advanced programs, you may prefer using std:: explicitly.
