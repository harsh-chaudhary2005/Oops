#include<iostream>
#include<string>
using namespace std;
class shape{    //abstract class
    virtual void draw() = 0; //pure virtual function
};

class circle : public shape {
        public:
           void draw(){
            cout << "drawing a circle\n";
           }
};
class user : public circle{
    public:
        void draw(){
            cout << "user is dying\n";
        }
};
int main(){
    circle c1;
    c1.draw();
    user u1;
    u1.draw();
  
  return 0;
}