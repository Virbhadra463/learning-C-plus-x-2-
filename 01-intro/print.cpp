// The cout object, together with the << operator, is used to output values and print text.
// surround the text with double quotes (""):
// You can also use cout() to print numbers.
// You can also perform mathematical calculations:
// To insert a new line in your output, you can use the \n character:
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  cout << ", ";
  cout << 67;
  cout << ", ";
  cout << 2 + 1;
  cout << "\nNew Line\n";
// You can also use another << operator and place the \n character after the text, like this:
  cout << "HEllo world" << "\n";
  cout << "learning C++";
// Two \n characters after each other will create a blank line:
  cout << "\n\n";
  cout << "helloworld";
  return 0;
}
