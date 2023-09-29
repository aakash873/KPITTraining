#include<iostream>
#include<Department.h>
//#include<header.h>

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
    ) {
        this->_name = name;
        this->_fees = fees;
        this->_roll_number = rnum;
        this->_grade = grade;
        this->_dept = dept;
    }
    ~Student() {
        std::cout<<"Student woth roll number: "
        <<this->_roll_number
        <<"is now destroyed\n";
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
}
