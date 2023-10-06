#include<iostream>

template<typename T>
void display( T arr[3]){
    for(int i=0;i<3;i++){
        std::cout<<"Address: "<<arr[i]<<"\n";
    }

}

class Employee
{
    private:

    public:
    Employee();

    ~Employee() {}
};

class Car
{
    private:

    public:
    Car();

    ~Car() {}
};

/*void display( Employee* arr[3]){

}
void display(Car* arr[3]){

}*/

int main(){
    Car* arr1[3];
    Employee* arr2[3];

    for(int i=0;i<3;i++){
        arr1[i] = new Car();
        arr2[i] = new Employee();
    }

    display<Car*>(arr1);
    display<Employee*>(arr2);
}

