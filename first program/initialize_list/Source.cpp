#include <iostream>
#include <initializer_list>
#include<cassert>
using namespace std;

class Bag {
	int arr[10];
	int m_Size{};
public:
	Bag(initializer_list<int> values)
	{
		assert(values.size() < 10);
		auto it = values.begin();
		while (it!=values.end()) {
			Add(*it);
			it++;
		}
	}
	void Add(int value)
	{
		assert(m_Size < 10);

		arr[m_Size++] = value;
	}
	void Remove()
	{
		--m_Size;
	}
	int operator [](int pos)
	{
		return arr[pos];
 }
	int GetSize() {
		return m_Size;
	}
};
int main()
{
	int x{ 0 };
	float y{ 3.1f };
	int arr[5]{ 1,2,3,5,5};
	string str{ "Hello C++" };
	initializer_list<int> data = { 11,12,13,14,15 };
	auto values = { 31,32,33,34 };
	Bag bg{ 45,25,36 };
	bg.Add(3);
	bg.Add(5);
	bg.Add(23);
	for(int i=0;i<bg.GetSize();i++)
	{
		cout << bg[i] << " ";
	}
	bg.Remove();
	for (int i = 0; i < bg.GetSize(); i++)
	{
		cout << bg[i] << " ";
	}
	return 0;

}