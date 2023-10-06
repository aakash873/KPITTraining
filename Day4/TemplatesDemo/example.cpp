#include<iostream>
#include<list>
#include<vector>

using ls = std::list<std::string>;
template <typename T>
class Employee
{
    private:
     T _skills;
     std::string _id;
     float _age;

    public:
    Employee(T skills, std::string id,float age)
    : _skills(skills), _id(id),_age(age){

    }
    ~Employee(){
        std::cout<<"Employee with ID: "<< _id << "is destroyed\n";
    }

    template <typename A>
    friend std::ostream &operator<<(std::ostream &os, const Employee<A> &rhs){
    os << "_skills: ";
    // for each loop (range-based for cpp)
    for(std::string element : rhs._skills){
        os << element <<"\t";
    }
      os << " _id: " << rhs._id
       << " _age: " << rhs._age;
    return os;
}

    
};

int main(){
    ls skills = {"coding","AI","Version control"};
    Employee<ls> *e1 = new Employee<ls>(skills,"emp01",28.3f);

    std::cout<<*e1<<"\n";
}



// Rule 1: As a programmer if you want ability to use infinite data types for example
         //  for a function paramater or logic you can use template

// Rule 2 : Whenever we use the symbol we have to use the template parameter

// Rule 3 : before the code is compiled template symbol need to specified with the proper type
