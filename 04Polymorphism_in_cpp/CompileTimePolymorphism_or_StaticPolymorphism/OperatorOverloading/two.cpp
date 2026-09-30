#include<iostream>
using namespace std;

class Complex{

  public:  
   int real;
   int imag;

   Complex(){
      real=imag=-1;
   }

   Complex(int r,int i){
     this->real=r;
     this->imag=i;
   }

   // doing Sum
   Complex operator+(const Complex &B){
        Complex temp;
        temp.real=this->real+B.real;
        temp.imag=this->imag+B.imag;
        return temp;
   }

   //Doing Subtraction
   Complex operator-(const Complex &B){
      Complex temp;
      temp.real=this->real-B.real;
      temp.imag=this->imag-B.imag;
      return temp;
   }


   //Checking Equality
   bool operator==(const Complex &B){
      return (this->real==B.real) && (this->imag==B.imag);
   }


   void print(){
     cout<<"["<< this->real << "+i" << this->imag <<"]" <<endl;
   }
};

int main(){
  Complex A(2,5);
  A.print();

  Complex B(2,5);
  B.print();

  Complex C=A+B;
   C.print();

   Complex D=A-B;
   D.print();

   bool a=A==B;
   cout<<a<<endl;
}