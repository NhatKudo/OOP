#include <cmath>
#include <iostream>
#include <string>
class Employee{
  public:
    std::string Name;
    std::string Company;
    int Age;

    Employee(std::string name, std::string comapny, int age){
      Name = name;
      Company=comapny;
      Age=age;
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
  return 0;
}