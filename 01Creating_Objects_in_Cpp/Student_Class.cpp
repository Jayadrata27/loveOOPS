#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
         // Attribute / properties
         int id;
         int age;
         string name;
         int nos;

        // Default Constructor
        Student(){
            cout<<" Student Default Constructer Called"<<endl;
        }
 

        // Parameterised Constructor
        Student(string name,int id,int age,int nos){
            cout<<"Student Parameterised Constructor Called"<<endl;
             this->name=name;
             this->age=age;
             this->id=id;
             this->nos=nos;
        }


        // Copy Constructor
        Student(Student &std){
            cout<<"Student Copy Constructor Called"<<endl;
            this->name=std.name;
            this->id=std.id;
            this->age=std.age;
            this->nos=std.nos;
        }


        //  Behaviour / method
        void study(){
            cout<< this->name <<"Studying"<<endl;
        }
        void sleep(){
            cout<< this->name <<"Sleeping"<<endl;
        }
        void bunk(){
            cout<< this->name <<"Bunking"<<endl;
        }


       //  Destructor
       ~Student(){
        cout<<" Student Default Destructer Called"<<endl;
       }


};

int main(){
  
    // // Part of Default Constructor
    // Student A;
    // A.id=1;
    // A.age=21;
    // A.name="Joy";
    // A.nos=4;
    // A.study();

    // // part of Default Constructor
    // Student B;
    // B.id=2;
    // B.age=20;
    // B.name="Bijoy";
    // B.nos=6;
    // B.bunk();


    // part of Parameterise Constructor
    // Student A("Joy",5,21,10);          //data Store in Stack
    // Student B("Ananya",2,20,8);
    // cout<<A.name<<" "<<A.id<<endl;
    // cout<<B.name<<" "<<B.id<<endl;


    // Part of Copy Constructor
    // Student st("Anu",2,20,9);
    // Student c=st;
    // cout<<c.name<<endl;

     
    // Dynamic allocation , or Student pointer;
    Student *std1=new Student("Mihir",1,18,15);
    cout<<std1->name<<endl;
    delete std1;

    return 0;
}