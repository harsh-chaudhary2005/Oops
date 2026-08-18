#include<iostream>
#include<string>
using namespace std;
class person{
public:
    string name;
    int age;

    person(){
        cout << "I am parent constuctor..\n" << endl;
    }

    ~person(){
        cout << "I am parent destructor..\n";
    }
};

class student : public person{
public:
    int rollno;
    student(){
        cout << "I am child constructor..\n";
    }
    ~student(){
        cout << "I am child destructor..\n";
    }

    void getInfo(){
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "roll no. : " << rollno << endl;
    }
};
int main(){
  student s1;
  s1.name = "Tobey";
  s1.age = 20;
  s1.rollno = 34;
  s1.getInfo(); 
  return 0;
}