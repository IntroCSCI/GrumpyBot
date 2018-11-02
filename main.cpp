//Author:
#include <iostream>
#include <string>

using namespace std;

int main()
{
  string input;
  bool first = true;
  do
  {
    cout<<"> "; //prompt for user input
    getline(cin,input);
    if( first )
    {
      cout<<"Ugh. Today's a bad day.\n";
      first = false;
    }

    for(int i=0; i<input.length(); i++)
    {
      char letter = input[i];
      if( letter>='A' && letter<='Z' )
      {
        letter = letter + 'a'-'A';
      }
      input[i] = letter;
    }

    if( input.find('!') != string::npos )
    {
      cout<<"Calm down, buddy.\n";
    }
    else if( input.find('?') != string::npos )
    {
      if( input.find("how")!=string::npos 
          || input.find("why")!=string::npos )
      {
        cout<<"What do you think?!\n";
      }
      else
      {
        cout<<"Enough with the questions!\n";
      }
    }
    else if( input.find('.') == string::npos )
    {
      cout<<"Didn't you learn punctuation in elementary school?\n";
    }
    else if(first == false && input != "bye.")
    {
      cout<<"Sigh...\n";
    }
  }while( input != "bye." );
  cout<<"Finally, some peace!\n";

  return 0;
}