#include <iostream>
using namespace std;

int main() {
  int n1, n2;
  char operators;
  cout << "Enter two numbers: ";
  cin >> n1 >> n2;
  cout << "Enter an operators (+, -, *, /): ";
  cin >> operators;

  switch (operators) {
    case '+':
      cout << n1 + n2 << endl;
      break;
    case '-':
      cout << n1 - n2 << endl;
      break;
    case '*':
      cout << n1 * n2 << endl;
      break;
    case '/':
      cout << n1 / n2 << endl;
      break;
    default:
      cout << "Invalid operator." << endl;
  }

  return 0;
}