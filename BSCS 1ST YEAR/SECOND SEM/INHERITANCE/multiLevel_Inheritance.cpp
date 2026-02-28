#include <iostream>
using namespace std;

//MULTI-LEVEL INHERITANCE

class Student {
protected:																												
	string name;
	int age;

public:

	Student(string name, int age) {

		this->age = age;
		this->name = name;

	}


	void StudentDetails() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}
};

class studentSchool : public Student {
private:
	string schoolName;
	string StudentID;

public:
	studentSchool(string schoolName, string studentID, string name, int age) : Student(name, age) {
		this->schoolName = schoolName;
		this->StudentID = studentID;
	}

	void School () {
		cout << "School Name: " << schoolName << endl;
		cout << "Student ID: " << StudentID << endl;
	}
};

class studentCollege : public studentSchool {
private: 
	int genAve;
public:
	studentCollege(int genAve, string schoolName, string studentID, string name, int age) : studentSchool(schoolName, studentID, name, age) {
		this->genAve = genAve;
	}
	void College() {
		cout << "General Average: " << genAve << endl;
	}


};

		
int main() {

	studentCollege student1(99, "NCST", "64917", "Jaypee", 19);
	student1.StudentDetails();
	student1.School();
	student1.College();


	return 0;
}
