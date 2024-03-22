#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;
enum class Case { SENSITIVE, INSENSITIVE };

size_t Find(const std::string& source, //Source string to be searched          
    const std::string& search_string, //The string to search for   
    Case searchCase = Case::INSENSITIVE, //Choose case sensitive/insensitive search 
    size_t offset = 0) { //Start the search from this offset                   
    //Implementation
    size_t result = -1;
    if (searchCase == Case::SENSITIVE)
        result = source.find(search_string, offset);
    else if (searchCase == Case::INSENSITIVE)
    {
        string sourcetemp = source, substring = search_string;
        transform(sourcetemp.begin(), sourcetemp.end(), sourcetemp.begin(),
            ::toupper);
        transform(substring.begin(), substring.end(), substring.begin(),
            ::toupper);
        result = sourcetemp.find(substring, offset);
   }

    return result;
    /*
    return position of the first character
    of the substring, else std::string::npos
    */
    
}


int main()
{
    size_t pos =Find("HHHHHello hello HELLO", "hello", Case::INSENSITIVE);

    cout << pos << endl;
    return 0;
}