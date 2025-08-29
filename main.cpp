#include <cmath>
#include <iostream>
using namespace std;

void add() {
  cout << "Addition\n";
  double firstNumber;
  double secondNumber;

  cout << "Enter First Number: ";
  cin >> firstNumber;
  cout << "\n";

  cout << "Enter Second Number: ";
  cin >> secondNumber;
  cout << "\n";

  cout << firstNumber << " + " << secondNumber << " = "
       << firstNumber + secondNumber << "\n";
}

void sub() {
  cout << "Subtraction\n";
  double firstNumber;
  double secondNumber;

  cout << "Enter First Number: ";
  cin >> firstNumber;
  cout << "\n";

  cout << "Enter Second Number: ";
  cin >> secondNumber;
  cout << "\n";

  cout << firstNumber << " - " << secondNumber << " = "
       << firstNumber - secondNumber << "\n";
}

void mulit() {
  cout << "Mulitiplication\n";
  double firstNumber;
  double secondNumber;

  cout << "Enter First Number: ";
  cin >> firstNumber;
  cout << "\n";

  cout << "Enter Second Number: ";
  cin >> secondNumber;
  cout << "\n";

  cout << firstNumber << " * " << secondNumber << " = "
       << firstNumber * secondNumber << "\n";
}

void div() {
  cout << "Division\n";
  double firstNumber;
  double secondNumber;

  cout << "Enter First Number: ";
  cin >> firstNumber;
  cout << "\n";

  cout << "Enter Second Number: ";
  cin >> secondNumber;
  cout << "\n";

  if (secondNumber == 0) {
    cout << "Cannot Divide by Zero\n";
  } else {
    cout << firstNumber << " / " << secondNumber << " = "
         << firstNumber / secondNumber << "\n";
  }
}

void rem() {
  cout << "Remainder\n";
  double firstNumber;
  double secondNumber;

  cout << "Enter First Number: ";
  cin >> firstNumber;
  cout << "\n";

  cout << "Enter Second Number: ";
  cin >> secondNumber;
  cout << "\n";

  cout << firstNumber << " % " << secondNumber << " = "
       << fmod(firstNumber, secondNumber) << "\n";
}

void power() {
  cout << "Addition\n";
  float firstNumber;
  float secondNumber;

  cout << "Enter First Number: ";
  cin >> firstNumber;
  cout << "\n";

  cout << "Enter Second Number: ";
  cin >> secondNumber;
  cout << "\n";

  cout << firstNumber << " ^ " << secondNumber << " = "
       << pow(firstNumber, secondNumber) << "\n";
}

void square() {
  cout << "Square Root\n";
  float number;

  cout << "Enter Number: ";
  cin >> number;
  cout << "\n";

  cout << "√" << number << " = " << sqrt(number) << "\n";
}

void cube() {
  cout << "Square Root\n";
  float number;

  cout << "Enter Number: ";
  cin >> number;
  cout << "\n";

  cout << "∛" << number << " = " << cbrt(number) << "\n";
}

void abso() {
  cout << "Absolute Value\n";
  float number;

  cout << "Enter Number: ";
  cin >> number;
  cout << "\n";

  cout << "|" << number << "|" << abs(number) << "\n";
}

void rou() {
  cout << "Round to nearest\n";
  float number;

  cout << "Enter Number: ";
  cin >> number;
  cout << "\n";

  cout << number << " ≃ " << round(number) << "\n";
}

void sine() {
  cout << "Sine\n";
  float number;

  cout << "Enter Number: ";
  cin >> number;
  cout << "\n";

  cout << "sin(" << number << ") "
       << " = " << sin(number) << "\n";
}

void cosine() {
  cout << "Cosine\n";
  float number;

  cout << "Enter Number: ";
  cin >> number;
  cout << "\n";

  cout << "cos(" << number << ") "
       << " = " << cos(number) << "\n";
}

void tangent() {
  cout << "Tangent\n";
  float number;

  cout << "Enter Number: ";
  cin >> number;
  cout << "\n";

  cout << "tan(" << number << ") "
       << " = " << tan(number) << "\n";
}

int main() {
  cout << "====== Calculator ======\n";
  cout << "[1] Addition\n";
  cout << "[2] Subtraction\n";
  cout << "[3] Multiplication\n";
  cout << "[4] Division\n";
  cout << "[5] Remainder\n";
  cout << "============\n";
  cout << "[6] Power\n";
  cout << "[7] Square Root\n";
  cout << "[8] Cube Root\n";
  cout << "============\n";
  cout << "[9] Aboslute Value\n";
  cout << "[10] Round to nearest\n";
  cout << "============\n";
  cout << "[11] Sine\n";
  cout << "[12] Cosine\n";
  cout << "[13] Tangent\n";

  int userChoice;
  cout << "Choose an operation: ";
  cin >> userChoice;
  cout << "\n";

  switch (userChoice) {
  case 1:
    add();
    break;
  case 2:
    sub();
    break;
  case 3:
    mulit();
    break;
  case 4:
    div();
    break;
  case 5:
    rem();
    break;
  case 6:
    power();
    break;
  case 7:
    square();
    break;
  case 8:
    cube();
    break;
  case 9:
    abso();
    break;
  case 10:
    rou();
    break;
  case 11:
    sine();
    break;
  case 12:
    cosine();
    break;
  case 13:
    tangent();
    break;
  }

  return 0;
}