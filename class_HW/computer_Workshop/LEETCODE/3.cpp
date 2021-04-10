#include <iostream>
#include <string>
#include <cstring>
#include<algorithm>
 
int main()
{
    std::string s = "Hello World!";
 
    char cstr[s.size()];
    strcpy(cstr, s.c_str());    // or pass &s[0]
    std::cout << cstr << '\n';

    std::cout<<cstr[0]<<cstr[2]<<cstr[4];
    std::cout<<sizeof(cstr);
 
    return 0;
}