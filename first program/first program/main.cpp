// This is a single line comment
/* 
This is multiline commet
*/

#include <iostream>
#include <string>

#include "math.h"
using namespace std;

int main()
{
	int a = 4, b = 10;
	float c = (float)b/a;
	char* p =reinterpret_cast<char *> (&a);
	cout << "a:" << a << "\tb:" << b << "\tC:" <<c<< endl;
}



/*
int Add(int *a, int *b) ;    //Add two numbers and return the sum
void AddVal(int *a, int *b, int *result); //Add two numbers and return the sum through the third pointer argument
void Swap(int *a, int *b) ;  //Swap the value of two integers
void Factorial(int *a, int *result);       //Generate the factorial of a number and return that through the second pointer argument


int Add(int* a, int* b)
{
	return *a + *b;
}

void AddVal(int* a, int* b, int* result)
{
	*result = *a + *b;
	
}

void Swap(int* a, int* b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}

void Fatorial(int* a, int* result)
{


		*result = 1;
		for (int i = 0; i < *a; i++)
			*result *= (i+1);

}

void Add(int a, int b, int& result);    //Add two numbers and return the result through a reference parameter
void Factorial(int a, int& result);    //Find factorial of a number and return that through a reference parameter
void Swap(int& a, int& b);

*/
/** /
void Add(int a, int b, int& result)
{
	result = a + b;
}

void Factorial(int a, int& result)
{
	result = 1;
	for (int i = 1; i <= a; i++)
		result *= i;
}
void Swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;

}
int main()
{
	int a{ 5 }, b{ 10 };
	int r = 0;
	int& result = r;
//	cout << "Add(int* a, int* b)" << Add(&a, &b) << endl;

	Add(a, b, result);
	cout << "Add(a, b, result)" << result << endl;;

	Swap(a, b);
	cout << "Swap(int* a, int* b): a=" << a << " b=" << b << endl;

	Factorial(a, result);
	cout << "Fatorial result of " << a << " is : " << result << endl;
}
*/