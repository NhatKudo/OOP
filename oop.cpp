#include <cmath>
#include <iostream>
#include <string>
class Employee{
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

    void IntroduceYourself(){
      std::cout<<"Name - "<<Name<<std::endl;
      std::cout<<"Company - "<<Company<<std::endl;
      std::cout<<"Age - "<<Age<<std::endl;
    }
};
int main(int argc, char* argv[])
{
  Employee employee1 = Employee("Kudo", "JP-Movie", 25);
  employee1.IntroduceYourself();
  employee1.setName("Heji");
  employee1.IntroduceYourself();
  std::string nameEmployee1 = employee1.getName();
  std::cout<<"name of employee1: "<<nameEmployee1<<std::endl;
  return 0;
}