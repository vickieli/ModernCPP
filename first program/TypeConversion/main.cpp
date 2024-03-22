#include <iostream>
#include "Integer.h"

using namespace std;
int main()
{
	return 0;
}
/* class Number {
	//Private members
public:
	Number() = default;
	explicit Number(int val) {
		//implementation
	}
	Number& operator =(const Number& obj) {
		//Implementation
		return &obj;
	}
	//Other members
};

int main() {
	Number n1;
	n1 = Number(5);
	return 0;
}
* /
class Product {
	Integer m_ID;
public:
	Product(const Integer& id) :m_ID{ id } {
		cout << "Product (const Integer &)" << endl;
		}
	~Product()
	{
		cout << "~Product" << endl;
	}
	const Integer& GetInteger()
	{
		return m_ID;
	}
	operator Integer()
	{
		return m_ID;
	}
};
int main()
{

	Product  p(5);
	//Integer id = p;
	//cout << id.GetValue() << endl;
	//if (id = p.GetInteger())
	//	cout << "that is equal" << endl;
	return 0;
}

*/