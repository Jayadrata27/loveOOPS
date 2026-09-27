// Normal Encapsulation

// #include<iostream>
// using namespace std;

// class Student{
//     // Attributes or Properties
//     public:
//      int id;
//      int age;
//      string name;
//      int nos;



//      private:
//      float *gpa;
//      string gf;


//     public:
//     //  Default Constructor
//      Student(){
//         cout<<"Student Default Constructor Called"<<endl;
//      }

//     //  Parameterised Constructor
//      Student(int id,int age,string name,int nos,float gpa,string gf){
//         cout<<"Student Parameterised constructor Called"<<endl;
//         this->id=id;
//         this->age=age;
//         this->name=name;
//         this->nos=nos;
//         this->gpa=new float(gpa);
//         this->gf=gf;

//      }

//     //  Copy Constructor
//     Student(Student &str){
//         this->id=str.id;
//         this->age=str.age;
//         this->name=str.name;
//         this->nos=str.nos;
//     }

//     // Methods or Behaviour
//     void study(){
//         cout<<this->name<<"Studying"<<endl;
//     }

//     void sleep(){
//         cout<<this->name<<"Sleeping"<<endl;
//     }

//     void bunk(){
//         cout<< this->name <<"Bunking"<<endl;
//     }

//     private:
//     void gfChatting(){
//         cout<<this->name<<"Chatting with gf"<<endl;
//     }


//     public:
//     // Destructor
//     ~Student(){
//         cout<<"Student Default Destructor Called";
//     }

// };

// int main(){

//     Student A(1,18,"Joy",5,7.8,"Anu");

//     cout<<A.gf<<endl;        //as gf is private so they donot work here
//     A.gfChatting();          //as gf is private so they donot work here
//     A.sleep();


//     return 0;
// }







// Perfect Encapsulation


#include<iostream>
using namespace std;

class Student{
    // Attributes or Properties
    private:
     int id;
     int age;
     string name;
     int nos;
     float *gpa;
     string gf;


    public:                                    //For accessing private properties must uses setters getters function
       void setGpa(float a){
         *this->gpa=a;
       }
       float getGpa(){
          return *this->gpa;
       }

       void setAge(int age){
         this->age=age;
       }
       int getAge(){
          return this->age;
       }

    //  Default Constructor
     Student(){
        cout<<"Student Default Constructor Called"<<endl;
     }

    //  Parameterised Constructor
     Student(int id,int age,string name,int nos,float gpa,string gf){
        cout<<"Student Parameterised constructor Called"<<endl;
        this->id=id;
        this->age=age;
        this->name=name;
        this->nos=nos;
        this->gpa=new float(gpa);
        this->gf=gf;

     }

    //  Copy Constructor
    Student(Student &str){
        this->id=str.id;
        this->age=str.age;
        this->name=str.name;
        this->nos=str.nos;
    }

    // Methods or Behaviour
    void study(){
        cout<<this->name<<"Studying"<<endl;
    }

    void sleep(){
        cout<<this->name<<"Sleeping"<<endl;
    }

    void bunk(){
        cout<< this->name <<"Bunking"<<endl;
    }


    // Destructor
    ~Student(){
        cout<<"Student Default Destructor Called";
    }

};

int main(){

    Student A(1,18,"Joy",5,7.8,"Anu");

    cout<<A.getGpa()<<endl;
    A.setGpa(6.74);
    cout<<A.getGpa()<<endl;

    cout<<A.getAge()<<endl;
    A.setAge(20);
    cout<<A.getAge()<<endl;

    return 0;
}