#include <cmath>
#include <iostream>
#include <string>
class Employee{
  public:
    std::string Name;
    std::string Company;
    int Age;

    void IntroduceYourself(){
      std::cout<<"Name - "<<Name<<std::endl;
      std::cout<<"Company - "<<Company<<std::endl;
      std::cout<<"Age - "<<Age<<std::endl;
    }
};
int main(int argc, char* argv[])
{
  Employee employee1;
  employee1.Name = "Kudo";
  employee1.Company = "Movie JP";
  employee1.Age = 24;
  employee1.IntroduceYourself();
  return 0;
}