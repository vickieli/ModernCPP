#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
#include <vector>
using namespace std;
enum class Case { SENSITIVE, INSENSITIVE };

std::vector<int> Find(const std::string& source, //Source string to be searched          
    const std::string& search_string, //The string to search for   
    Case searchCase = Case::INSENSITIVE, //Choose case sensitive/insensitive search 
    size_t offset = 0) { //Start the search from this offset                   
    //Implementation
    vector<int> posList;

    int result = -1;
    string sourcetemp = source, substring = search_string;
    int Left = source.size() - search_string.size();
    if (searchCase == Case::INSENSITIVE)
    {
        transform(sourcetemp.begin(), sourcetemp.end(), sourcetemp.begin(),
            ::toupper);
        transform(substring.begin(), substring.end(), substring.begin(),
            ::toupper);
    }
    while (offset <= Left)
    {
        result = sourcetemp.find(substring, offset);
        if (result != -1)
        {
            offset = result + 1;
            posList.push_back(result);
        }
        else 
            offset = Left + 1;

    }

    return posList;
    /*
    return position of the first character
    of the substring, else std::string::npos
    */

}


int main()
{
    vector<int> pos = Find("HHHHHello hello HELLO", "hedllo", Case::SENSITIVE);
    
    for (auto x : pos)
        cout << x << "\t";
    cout <<"the number of substring in the strings:"<< pos.size() << endl;
    return 0;
}