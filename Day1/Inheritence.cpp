
#include<iostream>
#include<list>
#include<vector>
class Student
{
private:
    int _id;
    std::string _name;      // members
public:
    Student(int id,std::string name)  //parameterized constructor
     : _id(id), _name(name){              //functions
    }
    ~Student() {}                      // destructor

    friend std::ostream &operator<<(std::ostream &os, const Student &rhs) {    // Friend function for displaying the value of Object
        os << "_id: " << rhs._id
           << " _name: " << rhs._name;
        return os;
    }

};

class Engineer : public Student         // Inheriting Engineer class from Student class
{
private:
    std::string _course_name;
public:
    Engineer(int id, std::string name,std::string cname)
    : Student(id,name), _course_name(cname) {
    }
    ~Engineer() {}

    friend std::ostream &operator<<(std::ostream &os, const Engineer &rhs) {
        os << static_cast<const Student &>(rhs)
           << " _course_name: " << rhs._course_name;
        return os;
    }
};

int main(){
    Engineer *e1 = new Engineer(101,"Aakash","BTECH:CS");      // Creation of Object
    Student* c1 = new Student(102,"Rahul");

    Student* arr[2] = {e1,c1}; //e1 is a student, c1 is a student
    std::list<Student*> data1 = {e1,c1};
    std::vector<Student*>data2 = {e1,c1};

 // endl is a manipulator
    std::cout<<*e1<<std::endl;   //As friend function is called *e1 gives the value of Object 
    std::cout<<e1<<std::endl;    //e1 gives the address of Object
    std::cout<<c1<<std::endl;
   std::cout<<arr<<std::endl;  
   // for displaying address of vector or list for loop is needed
     for(auto a : data1)        // value of data1 is put into a   
     {
         std::cout<<a<<std::endl;  
     }
   
}