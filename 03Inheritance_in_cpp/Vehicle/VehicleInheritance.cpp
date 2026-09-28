#include<iostream>
using namespace std;
class Vehicle{

 private:
   string name; 

 protected:
   string model;   

 public:
   int noOfTyers;

   string getName(){                      //for accessing private data here we use getters
     return this->name;
   }

   Vehicle(string name,string model,int noOfTyers){

      cout<<"I am inside Vehicle Ctor"<<endl;

      this->name=name;
      this->model=model;
      this->noOfTyers=noOfTyers;
   }

    void start_engine(){
        cout<<"Engine is Starting "<< name <<" "<< model <<endl;
    }
    void stop_engine(){
       cout<<"Engine is Stopping "<< name <<" "<< model <<endl;
    }

    ~Vehicle(){
        cout<<"I am inside Vehicle dotr"<<endl;
    }
};

class Car: public Vehicle{

   protected:
     int noOfDoors;
     string transmissionType;

   public:  
     Car(string name,string model,int noOfTyers,int noOfDoors,string transmissionType) : Vehicle(name,model,noOfTyers){

          cout<<"I am inside Car ctor"<<endl;

          this->noOfDoors=noOfDoors;
          this->transmissionType=transmissionType;
     }

     void startAC(){
        cout<<"Ac has started of "<< getName() <<endl;
     }

    ~Car(){
        cout<<"I am inside Car dotr"<<endl;
    }
};

class MotorCycle: public Vehicle{

  protected:  
   string handleBarStyle;
   string suspensionType;

  public:
   MotorCycle(string name,string model,int noOfTyers,string handleBarStyle,string suspensionType): Vehicle(name,model,noOfTyers){
      this->handleBarStyle=handleBarStyle;
      this->suspensionType=suspensionType;
   }

   void wheelie(){
     cout<<"wheelie kar raha hai "<< getName() <<endl;
   }

   ~MotorCycle(){
        cout<<"I am inside Motorcycle dotr"<<endl;
    }

};

int main(){
   
    // Car A("Maruti 800","LXI",4,4,"Manual");
    // A.start_engine();
    // A.startAC();
    // A.stop_engine();

    // cout<<A.model          // as model is protected property so it not accessable in the main function


    MotorCycle M("BMW","VXI",2,"U","Hard");
    M.start_engine();
    M.wheelie();
    M.stop_engine();

    return 0;
}