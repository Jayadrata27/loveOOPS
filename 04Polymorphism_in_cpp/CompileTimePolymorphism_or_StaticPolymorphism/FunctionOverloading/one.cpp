#include<iostream>
using namespace std;

class Add{

  public:
    // x,y two int addition
   int sum(int x,int y){
      cout<<"Sum of 2 int"<<endl;
      return x+y;
   }

    // x,y,z three int addition
    int sum(int x,int y,int z){
        cout<<"Sum of 3 int"<<endl;
        return x+y+z;
    }

    // Double add
    double sum(double x, double y){
        cout<<"Sum of 2 double"<<endl;
        return x+y;
    }
};

int main(){
     Add ad;
     cout<<ad.sum(4,5)<<endl;
     cout<<ad.sum(5,5,6)<<endl;
     cout<<ad.sum(4.5,2.3)<<endl;
}