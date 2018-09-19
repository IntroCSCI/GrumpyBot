//Author:
#include <iostream>
#include <string>

using namespace std;

int main()
{
    //These are the messages that match expected output:
    cout<<"> "; //prompt for user input
    cout<<"Ugh. Today's a bad day.\n"; //greeting to all first messages
    cout<<"Calm down, buddy.\n"; //response to a message with an !
    cout<<"What do you think?!\n"; //to question with how or why
    cout<<"Enough with the questions!\n"; //to any other question
    cout<<"Didn't you learn punctuation in elementary school?\n"; //to no .
    cout<<"Sigh...\n"; //to message that doesn't match any of the above
    cout<<"Finally, some peace!\n"; //to bye.

  return 0;
}
