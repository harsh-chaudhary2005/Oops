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
    
    

    //methods(functions hi h bss class ke andr h we call it member function)
    void changeDept(string newdept){
        dept = newdept;
    }
    
    void getInfo(){
        cout << "name : " << name << endl;
        cout << "subject : " << subject << endl; 
    }
};
int main(){
  Teacher t1("Yogesh", "ECE", "Philosophy", 50000);
  t1.getInfo();
  return 0;
}