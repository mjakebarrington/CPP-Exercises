/*
 * In this exercise students are tasked with writing a program that "bleeps" out certain
 * prohibited words given user input. Press ctrl-D on linux and mac and ctrl-z
 * on windows to terminate input.
 */

#include <iostream>
#include <vector>
// Algorithm gives us the function sort. You won't need this if you are using the header from the book.
#include <algorithm>

using namespace std;

int main()
{
	// Create empty vector of strings.
	vector<string>words;
	// Create variable for user input words.
	string user_word;
	// While we're waiting for user input to terminate.
	while(cin>>user_word)
	{
		// Push user words to end of words
		words.push_back(user_word);
	}
	// First output the number of words the user entered.
	cout << "\nNumber of words: " << words.size() << endl;

	// Alphabetically sort the user's words from beginning to end of vector.
	sort(words.begin(), words.end());

	// For all elements of vector words, run the following code block.
	for(int i=0; i<words.size(); i++)
	{
		// This does not display repeated words by checking if it is the same as the previous word.
		if(i!=0 && words[i-1] == words[i])
		{
			continue;
		}
		// I just ate chinese, so my prohibited words are chicken, rice, and carrot.
		else if(words[i] == "chicken" || words[i] == "rice" || words[i] == "carrot")
		{
			cout << "BLEEP" << endl;
		}
		// Prints word to console if it is not a repeated word or a prohibited word.
		else
		{
			cout << words[i] << endl;
		}
	}
	return 0;
}

