#include <iostream>
#include <string>


using namespace std;
class Student
{
public:
	string name;
	string CurrentClassLevel;

	Student(int studentID, string studentName, string studentClass, double StudentGPA);
	Student();
	void Initialize(int studentID, string studentName, string studentClass, double StudentGPA);
	void Print()const;

private:

	int ID;
	double GPA;
};

Student::Student()
{
	ID = 0000;
	name = "Taco";
	CurrentClassLevel = "preK";
	GPA = 10;
	return;

}
Student::Student(int studentID, string studentName, string studentClass, double StudentGPA)
{
	ID = studentID;
	name = studentName;
	CurrentClassLevel = studentClass;
	GPA = StudentGPA;
	return;
}
void Student::Initialize(int studentID, string studentName, string studentClass, double StudentGPA)
{
	ID = studentID;
	name = studentName;
	CurrentClassLevel = studentClass;
	GPA = StudentGPA;
	return;
}
void Student::Print() const
{
	cout << "ID: " << ID << endl << "Name: " << name << endl << "Current Class: " << CurrentClassLevel << endl << "GPA: " << GPA << endl;
	return;
}

int main()
{
	Student student1;
	student1.Initialize(8101070, "Sedrick", "Freshman", 1.6);
	student1.Print();
	cout << endl;

	Student student2;
	student2.Initialize(17, "X", "Freshman", 1.7);
	student2.Print();


	return 0;
}