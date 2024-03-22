#include <iostream>
using namespace std;
class Employee;
class Project {
public:
	weak_ptr<Employee> emp;
	Project() {
		cout << "Construct Project;" << endl;
	}
	~Project() {
		cout << "~Destruct Project;" << endl;
	}
};
class Employee {
public:
	shared_ptr<Project>  prj;
	Employee() {
		cout << "Construct Employee;" << endl;
	}
	~Employee() {
		cout << "~Destruct Employee;" << endl;
	}
};
int main()
{
	shared_ptr<Project> pj {new Project{} };
	shared_ptr<Employee> em {new Employee{}};
	pj->emp = em;
	em->prj = pj;

	unique_ptr<int> p{ new int[5]{1,3,4,5} };



}