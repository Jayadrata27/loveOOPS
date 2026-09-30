#include<iostream>
#include "bird.h"
using namespace std;

void birddoesSomething(Bird *&bird){
     bird->eat();
     bird->fly();
     bird->eat();
};
int main(){
    Bird *bird=new sparrow();
    birddoesSomething(bird);

    // sparrow *sp=new sparrow(bird);             //it cannot possible

    Bird *bird1=new eagle();
    birddoesSomething(bird1);

    return 0;
}