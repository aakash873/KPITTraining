#include<iostream>
int main(){
    int n1 =10;
    int* ptr = &n1;
    int **Sptr = &ptr;

    //Data inside n1
    std::cout<<"Data Inside n1:"<<n1<<"\n";

    //Data inside Sptr
    std::cout<<"Data Inside Sptr:"<<Sptr<<"\n";     //address of ptr

    //Jump ptr 1 time
    std::cout<<"Jump ptr 1 time:"<<*ptr<<"\n";

    //Jump Sptr 2 time
    std::cout<<"Jump Sptr 2 time:"<<**Sptr<<"\n";

    //address of n1
    std::cout<<"Address of n1:"<<&n1<<"\n";

    //address of ptr
    std::cout<<"Address of ptr:"<<&ptr<<"\n";

    //address of n1
    std::cout<<"Address of sptr:"<<&Sptr<<"\n";

}