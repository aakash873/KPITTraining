
#include<iostream>
#include<list>
#include<vector>
class Student
{
private:
    int _id;
    std::string _name;
public:
    Student(int _id,std::string _name) {
        this->id=id;
        this->name=name;
    }
    ~Student() {}
};

class Engineer : public Student
{
private:
    std::string _course_name;
public:
    Engineer(int id, std::string name,std::string cname)
    : Student(id,name) {
        this->_course_name = cname;
    }
    ~Engineer() {}
};

int main(){
    Engineer* e1 = new Engineer(101,"Aakash","BTECH:CS");
    Student* c1 = new Student(102,"Rahul");

    Student* arr[2] = {e1,c1}; //e1 is a student, c1 is a student
    std::list<Student*> data1 = {e1,c1};
    std::vector<Student*>data2 = {e1,c1};
}