#include <iostream>
#include "integer.h"
using namespace std;
class IntPtr {
	Integer* m_p;
public:
	IntPtr(Integer* p) :m_p(p){

	}
	~IntPtr() { delete m_p; }
	Integer* operator->()
	{
		return m_p;
	}
};

void Process(shared_ptr<Integer> p)
{
	cout << p->GetValue() << endl;
}
void CreateInteger() {
	shared_ptr<Integer> ptr(new Integer(4));
	auto p2(ptr);
	cout << ptr->GetValue() << endl;

	cout << p2->GetValue() << endl;

	/** /Integer* p = new Integer;
	p->SetValue(3);
	cout << p->GetValue() << endl;
	delete p;*/
}
int main()
{
	CreateInteger();
	return 0;
}