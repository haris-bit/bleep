#include<iostream>
#include<string>
using namespace std;


void asterik(string word, string &text, int i)
{
	for(int k = 0; k<word.size(); ++k)
	{
		text[i+k] = '*';
	}
	
}





void bleep(string word, string &text)
{
	for(int i = 0; i<text.size(); ++i)
	{
		int match = 0;
		for(int j = 0; j<word.size(); ++j)
		{
			if(text[i+j]==word[j])
			{
				++match;
			}
			if(match == word.size())
			{
				asterik(word, text, i);
			}
		}
	}
}


int main()
{
	string word = "broccoli";
	string text = "I sometimes eat broccoli. There are three interesting things about broccoli. Number One. Nobody knows how to spell it. Number Two. No matter how long you boil it, it's always cold by the time it reaches your plate. Number Three. It's green. #broccoli";
	
 	bleep(word, text);
	{
		for(int i = 0; i<text.size(); i++)
		{
			cout<<text[i];
		}
		
		cout<<"\n";
	}
	
	
	return 0;
	
}


