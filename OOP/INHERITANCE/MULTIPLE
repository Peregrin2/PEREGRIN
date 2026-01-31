#include <iostream>
using namespace std;

class Student {

	protected:
		string name;
		string course;

public:
	Student(string name, string course) {
		this->name = name;
		this->course = course;
	}

	void showStudentInfo() {
		cout << "Name: " << name << endl;
		cout << "Course: " << course << endl;
	}

};


class employee {
private:
	int employeeID;
	int salary;
public:
	employee(int employeeID, int salary){
		this->employeeID = employeeID;
		this->salary = salary;
	}

	void showemployeeInfo() {
		cout << "Employee ID: " << employeeID << endl;
		cout << "Salary: " << salary << endl;
	}
};

class WorkingStudent : public employee, public Student{
	
public:
	int workHours;

	WorkingStudent(string name, string course, int employeeID, int salary, int workHours)
		: employee(employeeID, salary), Student(name, course) {
		this->workHours = workHours;																				
	}
	void showWorkingStudentInfo() {
		cout << "Work Hours: " << workHours << endl;
	}
};
		
int main() {

	WorkingStudent student1("Jaypee", "BSCS", 020224, 5000, 12);
	
	student1.showStudentInfo();
	student1.showemployeeInfo();
	student1.showWorkingStudentInfo();


	return 0;
}
