#include<iostream>
#include<string>
using namespace std;

// Base class for single Inheritance
class Employee{
    protected:
      string name;
      int employeeId;

    public:
      Employee(const string &empName,int empId){
         this->name=empName;
         this->employeeId=empId;
      } 
      
      void display(){
        cout<<"Employee " << name <<", ID: "<< employeeId <<endl;
      }
};


// Derived class for Single Inheritance
class Developer: public Employee{
    private:
      string programmingLanguage;

    public:
      Developer(const string &empName,int empId,const string &lang): Employee(empName,empId){
           this->programmingLanguage=lang;
      }  

      void show(){
         display();
         cout<<"Specialization: Developer , Programming Language: "<< programmingLanguage <<endl;
      } 
};


// Base classes for Multiple Inheritance
class ProjectManager{
    protected:
     string projectManaged;

    public:
     ProjectManager(const string &project){
        this->projectManaged=project;
     } 

     void manageProject(){
        cout<< "Project Manager managing project: " << projectManaged << std::endl;
     }
};
class TeamLead{
  protected:
    int teamSize;

  public:
   TeamLead(int size){
      this->teamSize=size;
   }  

   void leadTeam(){
       cout << "Team Lead leading a team of " << teamSize << " members." <<endl;
   }
};

// Derived class for Multiple Inheritance
class TechLead:public Employee,public ProjectManager,public TeamLead{

  public:
     TechLead(const string &empName,int empId,const string &project,int size):Employee(empName,empId),ProjectManager(project),TeamLead(size){ } ;

     void displayInfo(){
        display();
        manageProject();
        leadTeam();
     }
};

// Base class for Multi-level Inheritance
class HRManager:public Employee{
  public:
    HRManager(const string &empName,int empId) :Employee(empName,empId){ };

    void handleHRDuties(){
      cout<< "HR Manager handling human resources duties. "<<endl;
    }
};

// Derived class for Multi-level Inheritance
class HRDirector:public HRManager{
  public:
    HRDirector(const string &empName,int empId) :HRManager(empName,empId){ };

    void manageHRDepartment(){
       cout<< "HR Director managing the HR department." <<endl;
    }
};


// Base class for Hierarchical Inheritance
class  Executive:public Employee{
  public:
    Executive(const string &empName,int empId):Employee(empName,empId){ };

    void makeExecutiveDecisions(){
        cout << "Executive making executive decisions." <<endl;
    }
};

// Derived classes for Hierarchical Inheritance
class CEO: public Executive{
  public:
   CEO(const string &empName,int empId): Executive(empName,empId){ };

   void leadCompany(){
        makeExecutiveDecisions();
        cout << "CEO leading the company." <<endl;
   }
};

// Base classes for Hybrid Inheritance
class  MarketingManager:public Employee{
   public:
    MarketingManager(const string &empName,int empId ):Employee(empName,empId){ };

    void createMarketingStrategy(){
      cout<< "Marketing Manager creating a marketing strategy."<<endl;
    }
};

class SalesManager:public Employee{
  public:
    SalesManager(const string &empName,int empId):Employee(empName,empId){};

    void boostSales(){
      cout<< "Sales Manager boosting sales." <<endl;
    }
};

class BusinessDevelopmentManager:public MarketingManager, public SalesManager{
    public:
     BusinessDevelopmentManager(const string &empName,int empId):MarketingManager(empName,empId),SalesManager(empName,empId){};

     void coordinateBusinessDevelopment(){
      createMarketingStrategy();
      boostSales();
      cout<< "Business Development Manager coordinating business development efforts." <<endl;
     }
};

int main(){

    // // Single Inheritance
    // Developer dev("Ramu kaka", 101,"C++");
    // dev.show();


    // // Multiple Inheritance
    // TechLead techLead("Anna Dev", 202, "Project X", 5);
    // techLead.displayInfo();


    // Multi-level Inheritance
    // HRDirector hrDirector("Lucy Madam", 303);
    // hrDirector.handleHRDuties();
    // hrDirector.manageHRDepartment();


    //Hierarchical Inheritance
    // CEO ceo("Devi Lal", 404);
    // ceo.leadCompany();


    //// Hybrid Inheritance
    BusinessDevelopmentManager bdManager("Sam Uncle", 606);
    bdManager.coordinateBusinessDevelopment();

    return 0;
}
