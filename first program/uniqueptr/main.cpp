#include <iostream>
#include "Integer.h"
#include<memory>

using namespace std;

void Display(Integer* p)
{
	if (!p) {
		return;
	}
	cout << p->GetValue() << endl;
}

Integer* GetPointer(int value)
{
	Integer* p = new Integer{ value };
	return p;
}
void Store(unique_ptr<Integer> p)
{
	cout << "Storing data into a file." << p->GetValue() << endl;
}
void Operate(int value) {
	unique_ptr<Integer> p{ GetPointer(value) };
	if (p == nullptr) {
		p.reset( new Integer{ value });
	}
	p->SetValue(100);
	Display(p.get());
//	delete p;
	p = nullptr; 
	p.reset(new Integer{});
	*p = __LINE__;
	Store(move(p));
	Display(p.get());

}
int main()
{
	Operate(5);
	return 0;
}