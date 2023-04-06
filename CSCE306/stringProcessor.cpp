#include <iostream>
#include "stringProcessor.h"
#include <sstream>
#include <string>

using namespace std;


//prints the total number of letters in a string
void numLetters(std::string line) {
	//variable to count the number of letters
	int letterCount = 0;
	string word;
	stringstream s(line);
	getline(s, word);
	//loop to iterate through the word
	for (int i = 0; i < word.length(); i++) {
		//if the letter is an alphabet and not a blank space 
		if (isalpha(word[i])) {

			letterCount++;
		}
		
	}
	cout << "The number of letters is : " << letterCount << endl;
	cout << "\n";
	return;
	

}

//prints the total number of words in a string
void numWords(string line) {
	string word;
	stringstream s(line);
	//variable to count the number of words
	int count = 0;
	//while loop that inserts stream to word and counts each word
	while (s >> word) {
		count++;
	}
	cout << "The total number of words: " << count << endl;
	cout << "\n";
	return;

}

//prints the word in reverse

void reverseWord(string line) {
	string word;
	stringstream s(line);
	getline(s, word);
	cout << "Your word in reverse is: ";
	//loop through the negative index of a string
	for (int i = word.length() - 1; i >= 0; i--) {
		//print each letter backwards
		cout << word[i];

	}
	cout << "\n";
	return;
}

//prints all the capital words in the string
void capitalWords(string line) {
	string word;
	stringstream s(line);
	getline(s, word);
	//string variable to store all capital words
	string capital = "";
	cout << "The capital words are:  ";
	//use loop to iterate through the string
	for (int i = 0; i < word.length(); i++) {
		//ignore any blank spaces and add words
		if (word[i] != ' ') {
			capital += word[i];
		}
		else {
			//print the word if it starts with a capital letter
			if (capital.length() > 0 && isupper(capital[0])) {
				cout << capital << " ";
			}
			capital = "";
		}
	}
	//check if the last word is a capital word
	if (capital.length() > 0 && isupper(capital[0])) {
		cout << capital;
	}
	cout << "\n";
}

//searches for a word in the string and returns found if found
void searchWord(string line) {
	string word;
	string searchWord;
	stringstream s(line);
	getline(s, word);
	cout << "Enter the word you would like to search: ";
	cin >> searchWord;
	//if the user enters correct input
	if (!cin.fail()) {
		//.find method to look for word in string found
		size_t found = word.find(searchWord);
		if (found != string::npos) {
			//if found
			cout << "Found" << endl;
		}
		else {
			//if not found
			cout << "Not found" << endl;
		}
	}
	else {
		cout << "Invalid input, not an integer!" << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	cout << "\n";
}