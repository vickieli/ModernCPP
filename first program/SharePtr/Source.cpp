
#include <string>
#include <iostream>
using namespace std;
class Project {
	string m_Name;
public:
	void SetName(const string& name) {
		m_Name = name;

	}
	void ShowProjectDetails()const {
		cout << "[Project name]" << m_Name << "\n";

	}

};

class  Employee
{
	shared_ptr<Project> m_Project{};
public:
	void SetProject(const shared_ptr<Project>& prj) {
		m_Project = prj;
	}
	const shared_ptr<Project> &GetProject() {
		return m_Project;
	}
	Employee() {}
	~Employee() {}

private:

};
void ShowInfo(const shared_ptr<Employee> &emp)
{
	cout << "Employee project details:\n";
	emp->GetProject()->ShowProjectDetails();
}
int main()
{
	shared_ptr<Project> prj{ new Project{} };
	prj->SetName("Video Decoder");
	shared_ptr < Employee> e1{ new Employee{} };
	e1->SetProject(prj);
	shared_ptr < Employee> e2{ new Employee{} };
	e2->SetProject(prj);
	shared_ptr < Employee> e3{ new Employee{} };
	e3->SetProject(prj);
	cout << "e1:";
	ShowInfo(e1);
	cout << "e2:";
	ShowInfo(e2);
	cout << "e3:";
	ShowInfo(e3);

	prj->ShowProjectDetails();
	return 0;
}