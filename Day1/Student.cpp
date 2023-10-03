#include<iostream>
#include "Department.h"
std::string DisplayEnum(Department dept){
    if(dept==Department::AI_ML){
        return "AI_ML";
    }
    else if(dept==Department::CS){
        return "CS";
    }
    else
        return "IT";
}


class Student
{
private:
    
    
    int _roll_number;
    std::string _name;
    float _fees;
    char _grade;
    Department _dept; //IT,CS,AI_ML
public:
    Student() = default;
    Student(
        int rnum,
        std::string name,
        float fees,
        char grade,
        Department dept
    ) 
    : _name(name),_fees(fees),_roll_number(rnum),_grade(grade),_dept(dept){
    }
    ~Student() {
        std::cout<<"Student woth roll number: "
        <<this->_roll_number
        <<"is now destroyed\n";
    }

    friend std::ostream &operator<<(std::ostream &os, const Student &rhs) {
    
        os << "_roll_number: " << rhs._roll_number
    
           << " _name: " << rhs._name
    
           << " _fees: " << rhs._fees
    
           << " _grade: " << rhs._grade
    
           << " _dept: " << DisplayEnum(rhs._dept);
    
        return os;
    
    }
    
};

int main() {
    //stack
    Student s1(101,"Aakash",98493.0f,'A',Department::CS);
    Student s3(103,"Riya",13423.0f,'A',Department::IT);

    //heap
    Student* s2 =new Student(202,"Rohan",48593.0f,'A',Department::AI_ML);
    Student* s4 =new Student(203,"Ajay",32611.0f,'B',Department::AI_ML);
    delete s2;

    Student arr[2] = {s1,s3}; //array of stack allocated Student objects
    Student* heapArr[2] = {s2,s4};
   
   // std::cout<<heapArr<<std::endl;
}



