#include<iostream>

/*
 int &ptr // left side of & has a data type(reference)
 &ptr; // no type to the left of &(pointer)
 */

// call by value
// void magic(int data){
//     std::cout<<"Address of n1: "<<&n1<<"\n";
//     std::cout<<"Content in n1: "<<n1<<"\n";

//     data = 100;
//     std::cout<<"AfterModification,data is:" <<data<<"\n";
// }

//call by reference
void magic(int& data){
    std::cout<<"Address of n1: "<<&data<<"\n";
    std::cout<<"Content in n1: "<<data<<"\n";

    data = 777;
    std::cout<<"AfterModification,data is:" <<data<<"\n";
}

int main(){
    int n1 = 10;
   // magic(10); // 10 will be copied into scope of magic
    magic(n1); // n1 will be copied into scope of magic 

    std::cout<<"Value in main after calling magic: "<<n1<<"\n";

}