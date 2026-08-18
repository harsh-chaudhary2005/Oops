#include<iostream>
using namespace std;
class person{
    string name;
public:
    person(){
        cout << "Non-Parmeterized\n";
    }

    person(string name){
        cout << "parameterized\n";
    }
};
int main(){
  person("Tony Stark");
  return 0;
}