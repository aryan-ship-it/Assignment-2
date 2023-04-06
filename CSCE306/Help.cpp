#include <iostream>
#include "help.h" 


using namespace std;

//help menu guide for main menu
void helpMenu() {
	cout << "Welcome to Junkilator. Junkilator is a smart device that allows its users to perform multiple operations \n";
	cout << "To get started with Junkilator please enter a number anywhere from 1 to 4 to perform the desired operation. \n ";
	cout << "If you want to quit the main menu you can do so by entering 6 \n";
	cout << "Pressing 1 will give you a simple calculator to perform operations on two operands \n";
	cout << "Pressing 2 will take you to a metric calculator that converts units \n";
	cout << "Pressing 3 will calculate all the grades from a text file \n";
	cout << "Pressing 4 will give you a string token \n";
	cout << "Hope you enjoy!! \n";
	cout << "\n";

	return;
}

//help menu guide for calculator
void calculatorHelp() {
	cout << "Welcome to the calculator help menu !! \n"; 
	cout << "Entering '+' will add two operands \n";
	cout << "Entering '-' will subtract two operands \n";
	cout << "Entering '*' will multiply two operands \n";
	cout << "Entering '/' will divide two operands \n";
	cout << "Entering 'log(n)' will calculate the log base 2 of the given operand \n";
	cout << "\n";
	return; 
}

//help menu guide for grades calculator
void gradesHelp() {
	cout << "Welcome to the grades help menu !! \n";
	cout << "The grades menu will display the grades of the students by converts \n";
	cout << "The range of the grades are as follows : \n";
	cout << "90 - 100 : A \n";
	cout << "80 - 90 : B\n";
	cout << "70 - 80 : C \n";
	cout << "60 - 70 : D \n";
	cout << "50 - 60 : F \n";
	cout << "\n";
	return;



}

//help menu guide for metric converter
void metricHelp() {
	cout << "Welcome to the metric converter Menu!! \n";
	cout << "Press 1 to convert a number into both mph and kph \n";
	cout << "Press 2 to convert a number into both celsius and fahrenheit \n";
	cout << "Press 3 to convert a number into Meters and feet \n";
	cout << "Press 4 to convert a number into both inches and cm \n";
	cout << "\n";
	return;


}

//help menu guide for string tokenizer
void stringHelp() {
	cout << "Welcome to the string tokenizer help menu!! \n";
	cout << "We have recieved your string please select what you would like to do: \n";
	cout << "Enter the equivalent integer to select your desired option"; 
	cout << "Press 1 and you can print the total number of letters \n";
	cout << "Press 2 and you can print the total number of words \n";
	cout << "Press 3 and you can print the line backwards\n";
	cout << "Press 4 and you can print all the words that start with capital letter \n";
	cout << "Press 5 and you can search for a word in the line  \n";
	cout << "\n";
	return;



}

