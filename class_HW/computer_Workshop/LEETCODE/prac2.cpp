#include <cstring>
#include <iostream>
#include <string>
using namespace std;
 
// Driver Code
int main()
{
    string input_string;
    char char_string[];
    cin >> input_string;

    strcpy(char_string, input_string.c_str());
    for (int i = 0;  char_string[i] != '\0' ; i++)
    {
        cout<<char_string[i];
    }
    cout<<sizeof(char_string);
    return 0;
}