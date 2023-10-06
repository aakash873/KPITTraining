#include<iostream>
#include<list>
#include<vector>
// alias fro data type
using ls = std::list<std::string>;

template <typename T>
class Employee
{
private:
    T _skills;
    std::string _id;
    float _age;
public:
     Employee(T skills, std::string id, float age)
     : _skills(skills), _id(id), _age(age){

     }
     ~Employee(){
        std::cout<<"Employee with ID: "<<_id << "is destroyed\n";
     }
};

int main(){
    ls skills = {"coding","AI","version control"};
    //object of class Employee of list of strings
   Employee<ls>*e1 = new Employee<ls>(skills, "emp101",28.3f);
}