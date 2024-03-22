#pragma once
class Integer
{
	int* m_pInt;
public:
	//Default constructor
	Integer();
	//Parameterized constructor
	Integer(int value);		
	//copy constructor
	Integer(const Integer &obj);
	//Move constructor
	Integer(Integer&& obj);
	//copy constructor
	Integer& operator=(const Integer& a);

	//move constructor
	Integer& operator=(Integer&& obj);
	int GetValue() const;
	void SetValue(int value);
	operator int();
	~Integer();
};