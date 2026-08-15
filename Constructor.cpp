#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
    double salary;
public:    
    Teacher(){
        dept = "ECE";
    }
    string name;
    string dept;
    string subject;
    

    //methods(functions hi h bss class ke andr h we call it member function)
    void changeDept(string newdept){
        dept = newdept;
    }
    //setter function
    void setSalary(double s){
        salary = s;
    }
    //getter function
    double getSalary(){
        return salary;
    }

};
int main(){
  Teacher t1; //Constructor Call
  t1.name = "Pushpa";
  t1.subject = "MTT";
  t1.setSalary(25000);
  

  cout << t1.dept << endl;
  return 0;
}
