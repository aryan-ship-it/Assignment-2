// CSCE306.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Aryan Shah
// Assignment 1
//Submitted to professor Omar Aldawud
#include <string>
#include <iostream>
#include <fstream>
#include "calculator.h"
#include "stringProcessor.h"
#include "help.h"
#include <sstream>
using namespace std;
void calculator();
void metric();
void grades();
void stringTokenMenu();


//main menu allows the user to select any one of the calculator operations
void menuSelect()
{
    int selectNumber; //input variable to take selected number and perform operation
    while (true) {
        cout << "Please select from the following menu\n";
        cout << "1. Math Calculator\n";
        cout << "2. Metric Conversion Calculator\n";
        cout << "3. Grades Calculator\n";
        cout << "4. String Tokenizer\n";
        cout << "5. Display Help\n";
        cout << "6. Exit\n";
        cin >> selectNumber;
        cout << "\n";
        //if the input is wrong data type
        if (!cin.fail()) {
            //if the user wants to exit the program
                if (selectNumber == 6) { 
                    //exit if the user enters 6
                    break;
                }
                else if (selectNumber > 6) {
                    //if the integer is less than or equal to six
                     cout << "Integer must be between one to six \n";
                     cout << "\n";
                     continue;
                }
                else if (selectNumber == 1) {
                     calculator(); //call calculator function
                     continue;
                }
                else if (selectNumber == 2) {
                     metric(); //call metric converter
                     continue;
                }
                else if (selectNumber == 3) {
                    grades(); //call grades converter
                }
                else if (selectNumber == 4) {
                    string line;
                    string word;

                    stringTokenMenu(); //call string tokenizer


                }
                else if (selectNumber == 5) {
                    helpMenu(); //help menu (case sensitive to the main menu)
                }
                else if (selectNumber > 6 || selectNumber == 0) {
                    cout << "Number must be between 1 to 6";
                    cout << "\n";
                    continue;

                }
     
        }
        else {
            cout << "Invalid input, not an integer!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }  
   
    
    



}

//Takes a string from the user and performs different operations on it
void stringTokenMenu() {
    int operation; 
    string word;
    do {
        cout << "Please enter a string : ";
        cin.ignore();
        getline(cin, word);
        cout << "\n";
        cout << "We have recived your string tell us what you would like us to do" << endl;
        cout << "1. Print the total number of letters in line" << endl;
        cout << "2. Print the total number of words in the line" << endl;
        cout << "3. Print the line backwards " << endl;
        cout << "4. Print all words that starts with a capital letter" << endl;
        cout << "5. Search for a word in the Line" << endl;
        cout << "6. Exit back to main menu " << endl;
        cout << "7. string help menu " << endl;
        cin >> operation; 
        if (!cin.fail()) {
            if (operation == 1) {
                // prints the number of letters
                numLetters(word); 
            }
            else if (operation == 2) {
                //prints the number of words
                numWords(word);

            }
            else if (operation == 3) {
                //prints the string in reverse
                reverseWord(word);

            }
            else if (operation == 4) {
                //prints all the words starting with capital letters
                capitalWords(word);

            }
            else if (operation == 5) {
                //searches for a word in a string
                searchWord(word);

            }
            else if (operation == 7) {
                //string help menu displays relevant guide to the user
                stringHelp();
            }
            else if (operation > 7 || operation == 0) {

                 cout << "Not a valid option please try again " << endl;
                 cout << "\n";

            }
        }
        else {
            cout << "Invalid input, not an integer!" << endl; 
            //if the input data type is wrong clear console and ignore input 
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }




    } while (operation != 6);
    

}

//determine the grades of the students from input file
char gradesCalculator(string val) {
    int num = stoi(val);
    if (num >= 90) {
        // 90-100 = A
        return 'A';
    }
    else if (num >= 80) {
        // 80 - 90 = B
        return 'B';

    }
    else if (num >= 70) {
        // 70 - 80 = C
        return 'C';
    }
    else if (num >= 60) {
        // 60-70 = D
        return 'D';
    }
    else {
        //50 - 60 = F
        return 'F';
    }
    

}

//print the given grades in line by line format
void lineParser(string line) {
    string str = line;
    stringstream ss(str);
    //data variables in string
    string name,lab,quiz,project,midterm,final; 
    //grade variables in character
    char labG, quizG, projectG, midtermG, finalG; 
    //get name
    getline(ss, name, ','); 
    //get lab grade
    getline(ss, lab, ','); 
    labG = gradesCalculator(lab);
    //get quiz grade
    getline(ss, quiz, ','); 
    quizG = gradesCalculator(quiz);
    //get project grades
    getline(ss, project, ','); 
    projectG = gradesCalculator(project);
    //get midterm grades
    getline(ss, midterm, ','); 
    midtermG = gradesCalculator(midterm);
    //get final grades
    getline(ss, final, ',');
    finalG = gradesCalculator(final);
    cout << "Student Name: " << name << endl; 
    cout << "lab: " << labG<< endl;
    cout << "quiz: " << quizG << endl;
    cout << "project: " << projectG << endl;
    cout << "midterm: " << midtermG << endl;
    cout << "final: " << finalG << endl;
    cout << "\n";

    
}

void grades() {
    gradesHelp();
    //open file for reading
    ifstream file("Program.txt");

    // Check if the file was successfully opened
    if (!file.is_open()) {
        cout << "Could not open file" << endl;
        return;
    }
  
    //declare variables
    string line,name, grades;
    //omit the first line
    getline(file, line);
    
    //print the individual grades
    cout << "Here are the individual grades: " << endl;

    //while loop to iterate through the file
    while (!file.eof()) {
        getline(file, line);
        lineParser(line);                
      
    }
    
    


    // Close the file
    file.close();
}

//calculator for metric conversions
void metric() {
    int operation;
    do {
        cout << "Please enter the metric to convert: \n";
        cout << "1. Mph to Kph and kph to mph \n";
        cout << "2. Celsius to Fahrenheit and Fahrenheit to Celsius \n";
        cout << "3. Meters to Feet and Feet to Meters \n";
        cout << "4. inches to cm and cm to inches \n";
        cout << "5. Help  \n";
        cout << "6. Exit to main menu \n";
        cin >> operation;
        cout << "\n";
        if (!cin.fail()) {
            //
            //cout << "You entered: " << selectNumber << endl;
            if (operation == 1) {
                //convert mph to kph and vice versa
                speedConverter();
            }
            else if (operation == 2) {
                //convert celsuis to fahrenheit and vice versa
                tempConverter();

            }
            else if (operation == 3) {
                //convert meters to feet and vice versa
                distanceConverter();

            }
            else if (operation == 4) {
                //convert inches to cm and vice versa
                heightConverter();

            }
            else if (operation == 5) {
                //metric converter help menu
                metricHelp(); 
                

            }
            else if (operation > 6 || operation ==0 ) {
                //edge case for wrong user input
                cout << "Integer must be between 1 to 6" << endl;
                cout << "\n";
                
                continue;
            }


        }
        else {
            cout << "Invalid input, not an integer!" << endl;
            //if the user enters wrong input data type
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

    } while (operation != 6);




   
}

//calculator function calls different methods for calculation
void calculator() {
    int operation;
    do {
        cout << "Please enter the operation\n";
        cout << "1. addition (+) \n";
        cout << "2. subtraction (-)\n";
        cout << "3. division (/)\n";
        cout << "4. multiplication (*)\n";
        cout << "5. logarithmic (log(n))\n";
        cout << "6. Exit to main menu \n";
        cout << "7. Calculator help menu \n";
        cin >> operation;
        cout << "\n";
        if (!cin.fail()) {
            if (operation == 1) {
                //take in user input and add two operands
                double val = add();
                cout << "Your answer is : " << val << endl;
                cout << "\n";

            }
            else if (operation == 2) {
                //take in user input and subtract two operands
                double val = subtract();
                cout << "Your answer is : " << val << endl;
                cout << "\n";
            }
            else if (operation == 3) {
                //take in user input and divide two operands
                double val = divide();
                cout.precision(4);
                cout << "Your answer is : " << fixed <<  val << endl;
                cout << "\n";
            }
            else if (operation == 4) {
                //take in user input and add multiply two operands
                double val = multiply();
                cout.precision(4);
                cout << "Your answer is : " << fixed << val << endl;
                cout << "\n";
            }
            else if (operation == 5) {
                //take in user input and finds the log(n) of a number
                double val = log();
                cout.precision(4);
                cout << "Your answer is : " <<fixed<< val << endl;
                cout << "\n";

            }
            else if (operation == 7) {
                //help menu guide for calculator
                calculatorHelp();

            }


            else if (operation >= 6 || operation == 0) {
                //edge case to check if user input is correct
                cout << "Number must be between 1 to 6" << endl;
                cout << endl;
                continue;
            }

        }
        else {
            //if user enters wrong data type continue the program
            cout << "Invalid input, not an integer!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }


    } while (operation != 6);

    
}

//main program
int main()
{
    char name[25];
    cout << "Please enter your name : ";    
    cin.get(name, 25);
    cout << "\n";
    cout << "Thank you " << name << endl;
    cout << "Welcome to our JunkaLator Adventures\n";
    cout << "\n";
    bool done = true;
    menuSelect();



}



