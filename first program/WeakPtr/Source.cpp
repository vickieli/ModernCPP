#include <iostream>
using namespace std;
class Printer
{
	weak_ptr<int>  m_Value{};
public:
	void SetValue(weak_ptr<int>  p)
	{
		m_Value = p;
	}
	void Print()
	{
		cout << "Ref count:" << m_Value.use_count() << endl;
		if (m_Value.expired())
		{
			cout << "Resource is no longer available~" << endl;
			return;
		}
		auto ap = m_Value.lock();
		cout << "the Value is: " << *ap << endl;
		cout << " ap's ount is :" << ap.use_count() << endl;
	}
};
int main()
{
	Printer prn;
	int num{};
	cin >> num;
	shared_ptr<int>  p{ new int{ num } };
	prn.SetValue(p);
	cout << "first time:" << endl;

	if (*p > 20)
	{
		p = nullptr;
	}
	prn.Print();

	return 0;
}