#include<iostream>
#include<string>
using namespace std;
class parent{
public:
    void getInfo(){
        cout << "parent class\n";
    }
    virtual void hello(){
        cout << "hello from par\n";
    }
};
class child{
public:
    void getInfo(){
        cout << "child class\n";
    }
    void hello(){
        cout << "hello from par\n";
    }
};
int main(){
  child c1;
  c1.hello();
  return 0;
}