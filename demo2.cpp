#include<iostream>

int main(){
    int arr[5] = {1,2,3,4,5};

    std::cout<<"Content of arr:(address of first location)"<<arr<<"\n";

    std::cout<<"address of first location: "<<(arr+0)<<"\n"; //0x100H + 0x4 = 0x100H

    std::cout<<"Content inside first location: "<<*(arr+0)<<"\n"; //0x100H + 0x4 = 0x100H
    


    std::cout<<"address of second location: "<<(arr+1)<<"\n"; //0x100H + 1x4 = 1x100H = 104H
    
    std::cout<<"address of third location: "<<(arr+2)<<"\n"; //0x100H + 2x4 = 0x100H = 108H

    std::cout<<"address of fourth location: "<<(arr+3)<<"\n"; //0x100H + 3x4 = 0x100H = 112H


}