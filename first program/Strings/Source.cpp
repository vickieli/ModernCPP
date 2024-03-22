#include <string>
#include <iostream>
#include <sstream>
using namespace std;

string ToLower(const string& str)
{
	string temp=str;
	int i = 0;
	while (str[i])
	{

		temp[i] = tolower(str[i]);
		i++;
	}
	return  temp;
}
string ToUpper(const string& str)
{
	string temp = str;
	int i = 0;
	while (i < str.length())
	{

		temp[i] = toupper(str[i]);
		i++;
	}
	return  temp;
}

int main() {

	string data = "15 46 78 38";
	int a;
	stringstream ss;
	ss.str(data);
	while (ss >> a) {
		
		cout << a << endl;
	}
	cout << "ss";
	cout << ss.str() << endl;
	//int a{ 5 }, b{ 5 };
	//int sum = a + b;
	//stringstream ss;
	//ss << "Sum of" << a << " & " << b << " is : " << sum << endl;
	//string s=ss.str();
	//cout << s;
	//cout << "StringStream:" << ss.str() << endl;

	//ss.str("");
	//cout << "the sum is :";
	//ss << sum;
	//auto sout = ss.str();
	//float s = 2.365f;


	return 0;



 }