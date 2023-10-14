#include <iostream>
using namespace std;

int main() {



	char continueCalculation;
	do {
		double operand1, operand2, result;

		cout << "Enter the first number: ";
		cin >> operand1;

		cout << "Enter the second number: ";
		cin >> operand2;

		cout << "Select and operation:" << endl;
		cout << "1. Add (+)" << endl;
		cout << "2. Substruction (-)" << endl;
		cout << "3. Multiplication (*)" << endl;
		cout << "4. Division (/)" << endl;

		int choice;
		cout << "Enter your choice: ";
		cin >> choice;

		if (choice == 1)
		{
			result = operand1 + operand2;
		}
		else if (choice == 2)
		{
			result = operand1 - operand2;
		}
		else if (choice == 3)
		{
			result = operand1 * operand2;
		}
		else if (choice == 4)
		{
			if (operand2 != 0) {
				result = operand1 / operand2;
			}
			else
			{
				cout << "Division by 0 is not allowed" << endl;
				return 1; //exit the program with an error code
			}
		}
		else
		{
			cout << "Invalid choice" << endl;
			return 1; //exit the program with an error code
		}

		cout << "Result: " << result << endl;

		cout << "Do you want to perform another calculation? (y/n)";
		cin >> continueCalculation;
	} while (continueCalculation == 'y' || continueCalculation == 'Y');


	return 0;
}



