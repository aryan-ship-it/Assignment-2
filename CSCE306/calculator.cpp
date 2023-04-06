#include <iostream>
#include "calculator.h"
#include <cmath>

using namespace std;

//calculator functions

//prints the log of an operand
double log() {
    double num1;
    //loop to check for user errors
    while (true) {
        cout << "Please enter the first operand: ";
        cin >> num1;
        if (cin.fail()) {
            //if the entered data type is not a double
            cout << "Invalid input, not an integer!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cout << "\n";
        return log2(num1);

    }

    return 0;

}

//add method of calculator
double add() {
    //takes two variables
    double num1; 
    double num2;
    double add; 
    while (true) {
        cout << "Please enter the first operand: ";
        cin >> num1;
        //check if the first operand is a number
        if (cin.fail()) {
            cout << "Invalid input, not an integer!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        //check if the second operand is a number
        cout << "Please enter the second operand: ";
        cin >> num2;
        if (cin.fail()) {
            cout << "Invalid input, not an integer!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        //add two numbers
        add = num1 + num2; 
        cout << "\n";
        return add;

    }  
    
}
//subtract method of calculator
double subtract() {
    //variables to take operands and hold subtract value
    double num1;
    double num2;
    double subtract;
    while (true) {
        //validate first operand
        cout << "Please enter the first operand: ";
        cin >> num1;
        if (cin.fail()) {
            cout << "Invalid input, not an integer!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        //validate second operand
        cout << "Please enter the second operand: ";
        cin >> num2;
        if (cin.fail()) {
            cout << "Invalid input, not an integer!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        //subtract and return value
        subtract = num1 - num2;
        cout << "\n";
        return subtract;

    }

    
}
//multiplication method of calculator
double multiply() {
    //variables to take operands and store multiplication value
    double num1;
    double num2;
    double multiply;
    while (true) {
        //validate first operand
        cout << "Please enter the first operand: ";
        cin >> num1;
        if (cin.fail()) {
            cout << "Invalid input, not an integer!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        //validate second operand
        cout << "Please enter the second operand: ";
        cin >> num2;
        if (cin.fail()) {
            cout << "Invalid input, not an integer: " << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        //multiply and return value
        multiply = num1 * num2;
        cout << "\n";
        return multiply;

    }

}

//divide two operands
double divide() {
    //variables to store the values
    double num1;
    double num2;
    double divide;
    while (true) {
        //validate first operand
        cout << "Please enter the first operand: ";
        cin >> num1;
        if (cin.fail()) {
            cout << "Invalid input, not an integer!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        //validate second operand
        cout << "Please enter the second operand: ";
        cin >> num2;
        if (cin.fail()) {
            cout << "Invalid input, not an integer!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        //divide and return the value 
        divide = num1 / num2;
        cout << "\n";
        return divide;
    }

}

//convert speed from mph to kph and vice versa
void speedConverter() {
    int num1;
    while (true) {
        //validate the number to convert
        cout << "Please enter the number to convert: ";
        cin >> num1;
        cout << "\n";
        if (cin.fail()) {
            cout << "Invalid input, not an integer!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        //convert to mph and print
        int mph = num1 * 1.60934;
        cout << num1 << " To mph is : " << mph << "\n";
        //convert to kph and print
        int kph = num1 / 1.60934;
        cout << num1 << " To kph is: " << kph << "\n";
        cout << "\n";
        return;
    }
    

}

//convert temp from celsius  to fahrenheit and vice versa
void  tempConverter() {
    double num1;
    while (true) {
        //validate the number from the user
        cout << "Enter the number to convert: ";
        cin >> num1;
        cout << "\n";
        if (cin.fail()) {
            cout << "Invalid input, not an integer!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        //convert to celsius and print
        double celsius = (num1 - 32) * (5.0 / 9.0);
        cout << num1 << " To celsius is : " << celsius << "\n";
        //convert to fahrenheit and print
        double fahrenheit = (num1 * (9.0 / 5.0)) + 32;
        cout << num1 << " To fahrenheit is : " << fahrenheit << "\n";
        cout << "\n";
        return; 


    }

}

//convert distance from meters to feet and vice versa
void distanceConverter() {
    double num1;
    while (true) {
        //validate user input
        cout << "Enter the distance: ";
        cin >> num1;
        cout << "\n";
        if (cin.fail()) {
            cout << "Invalid input, not an integer!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        //convert to meters and print
        double meters = num1 / 3.28084;
        cout << num1 << " To meters is: " << meters << "\n";

        //convert to feet and print
        double feet = num1 * 3.28084;
        cout << num1 << " To feet is: " << feet << "\n";
        cout << "\n";
        return;
    }

}

//convert height from inches to feet and vice versa
void heightConverter() {
    double num1;
    while (true) {
        //validate user input
        cout << "Enter the height:  ";
        cin >> num1;
        cout << "\n";
        if (cin.fail()) {
            cout << "Invalid input, not an integer!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        //convert to inches and print
        double inches = num1 / 2.54;
        cout << num1 << " To inches is : " << inches << "\n";
        //convert to feet and print
        double feet = num1 * 2.54;
        cout << num1 << " To feet is: " << feet << "\n";
        cout << "\n";
        return;

    }

}
