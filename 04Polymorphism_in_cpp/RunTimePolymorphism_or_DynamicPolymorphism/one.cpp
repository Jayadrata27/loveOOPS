#include<iostream>
using namespace std;

class Shape{
  public:
   virtual void draw(){
        cout<<"Generic Drawing...."<<endl;
    }
};

class Circle:public Shape{
   public:
     void draw() override
     {
        cout<<"Circle Drawing..."<<endl;
     }
};

class Rectangle:public Shape{
   public:
     void draw() override
     {
        cout<<"Rectangle Drawing..."<<endl;
     }
};

class Triangle:public Shape{
   public:
     void draw() override
     {
        cout<<"Triangle Drawing....";
     }
};

void ShapeDrawing(Shape *s){
  s->draw();
};


int main(){
   
    Circle c;
    ShapeDrawing(&c);

    Rectangle r;
    ShapeDrawing(&r);

    Triangle *t=new Triangle();
    ShapeDrawing(t);


    // Virtual Keyword
    Shape *s=new Shape();
    s->draw();

    // Upcasting
    Shape *s1=new Circle;
    s1->draw();

    Circle *c1=new Circle;
    c1->draw();

    //Downcasting
    Shape *s2=new Shape;
    Circle *c2=(Circle *)s2;
    c2->draw();


    return 0;
}