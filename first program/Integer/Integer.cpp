#include "Integer.h"
#include <iostream>
using namespace std;
Integer::Integer()
{
	cout << "Integer Default" << endl;
	m_pInt = new int(0);

}

Integer::Integer(int value)
{
	cout << "Integer int" << endl;
	m_pInt = new int(value);
}

Integer::Integer(const Integer& obj)
{

	m_pInt = new int(*obj.m_pInt);
}

Integer::Integer(Integer&& obj) {
	m_pInt = obj.m_pInt;
	obj.m_pInt = nullptr;
}

Integer& Integer::operator=(const Integer& a)
{
	/* delete[] m_pInt;

	m_pInt = new int(*a.m_pInt);
	return *this;
	* /*/
	if (this != &a) {
		delete[] m_pInt;

		m_pInt = new int(*a.m_pInt);
	}


	return *this;

}
Integer& Integer::operator=(Integer&& obj)
{
	if (this != &obj)
	{
		delete m_pInt;
		m_pInt = obj.m_pInt;
		obj.m_pInt = nullptr;
	}

	return *this;
}
int Integer::GetValue() const
{
	return *m_pInt;
}

void Integer::SetValue(int value)
{
	*m_pInt = value;
}

Integer::~Integer()
{
	cout << "~Integer" << endl;
	delete m_pInt;
}
