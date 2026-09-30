// header initialize  (ifnd click)

#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>
using namespace std;


class Bird{                     //Create Interface
  public:
    virtual void eat()=0;      //classes that inherit this class has to implement pure virtual function
    virtual void fly()=0;
};

// Implementing Interface
class sparrow:public Bird{
    private:
     void eat(){
        cout<<"Sparrow is eating\n";
     }
     void fly(){
         cout<<"Sparrow is flying\n";
     }
};

class eagle:public Bird{
    private:
     void eat(){
        cout<<"Eagle is eating\n";
     }
     void fly(){
         cout<<"Eagle is flying\n";
     }
};

#endif // MACRO


