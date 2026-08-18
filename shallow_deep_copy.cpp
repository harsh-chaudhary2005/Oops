#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
    double salary;
public:
    string name;
    string dept;
    string subject;
    //Non parameterized Constructor
    Teacher(){
        dept = "ECE";
    }

    //Parameter constructor
    Teacher(string name, string dept, string subject, double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    //copy constructor
    Teacher(Teacher &orgObj){
        cout << "I am custom copy constructor" << endl;
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }
    
    

    //methods(functions hi h bss class ke andr h we call it member function)
    void changeDept(string newdept){
        dept = newdept;
    }
    
    void getInfo(){
        cout << "name : " << name << endl;
        cout << "subject : " << subject << endl; 
    }
};

class Student{
public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;

    }
    Student(Student &obj){
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }

    void getInfo(){
        cout << "name : " << name << endl;
        cout << "CGPA : "<< *cgpaPtr << endl;
    }
};
int main(){
  Student s1("Tripti Dimri", 6.9);
  Student s2(s1);
  s1.getInfo();
  *(s2.cgpaPtr) = 9.2;
  s1.getInfo();
   
  s2.name = "Peter Parker";
  s2.getInfo();
  return 0;
}