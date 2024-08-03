#include <cmath>
#include <iostream>
#include <string>
class AbstractEmployee{
  virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee{
  private:
    std::string Name;
    std::string Company;
    int Age;
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
        std::cout<<Name<<" . Sorry, no promotion for you"<<std::endl;
    }
};
int main(int argc, char* argv[])
{
  Employee employee1 = Employee("Kudo", "JP-Movie", 25);
  Employee employee2 = Employee("Mori", "JP-school", 31);
  employee1.AskForPromotion();
  employee2.AskForPromotion();
  return 0;
}