#include <cmath>
#include <iostream>
#include <string>
class AbstractEmployee{
  virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee{
  private:
    std::string Company;
    int Age;
  protected:
    std::string Name;
  public:
    Employee(std::string name, std::string comapny, int age){
      Name = name;
      Company=comapny;
      Age=age;
    }

    void setName(std::string name){
      Name=name;
    }

    std::string getName(){
      return Name;  
    }

    void setAge(int age){
      Age=age;
    }

    int getAge(){
      return Age;
    }

    void setCompany(std::string comapny){
      Company=comapny;
    }

    std::string getCompany(){
      return Company;
    }

    void IntroduceYourself(){
      std::cout<<"Name - "<<Name<<std::endl;
      std::cout<<"Company - "<<Company<<std::endl;
      std::cout<<"Age - "<<Age<<std::endl;
    }

    void AskForPromotion(){
      if (Age>30)
        std::cout<<Name<<" got promoted"<<std::endl;
      else
        std::cout<<Name<<". Sorry, no promotion for you"<<std::endl;
    }
};

class Developer: public Employee{
  public:
    std::string FavProgrammingLanguage;

    Developer(std::string name, std::string comapny, int age, std::string favProgrammingLanguage)
    :Employee(name, comapny, age){
      FavProgrammingLanguage = favProgrammingLanguage;
    }

    void FixBug(){
      std::cout<< Name <<" is fixing bug using "<<FavProgrammingLanguage<<std::endl;
    }
};

int main(int argc, char* argv[])
{
  Developer dev1 = Developer("Kudo", "JP-Movie", 25, "C++");
  dev1.FixBug();
  dev1.AskForPromotion();
  dev1.getAge();
  return 0;
}