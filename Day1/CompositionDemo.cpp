/*
Composition : 
  Class A is made by using class B
*/

#include<iostream>


class DebitCard
{
private:
    int _cvv_number;
    std::string _card_number;
public:
    DebitCard(int cvv, std::string number)
    : _cvv_number(cvv), _card_number(number) {
    }
    ~DebitCard() {
        std::cout<<"debit card destroyed\n";
    }

    friend std::ostream &operator<<(std::ostream &os, const DebitCard &rhs) {
        os << "_cvv_number: " << rhs._cvv_number
           << " _card_number: " << rhs._card_number;
        return os;
    }
};

class Account
{
private:
    DebitCard _obj; //DebitCard*,DebitCard&
    std::string _name;

public: 
   Account(DebitCard obj1, std::string name) 
    :   _obj(obj1), _name(name) {
    }

 ~Account() {}

 DebitCard obj() const { return _obj; }

 friend std::ostream &operator<<(std::ostream &os, const Account &rhs) {
     os << "_obj: " << rhs._obj
        << " _name: " << rhs._name;
     return os;
 }
};

int main(){
  //  Account* ac1 = new Account(new DebitCard(781,"4314 5601"),"Harshit");
    DebitCard *db = new DebitCard(201,"6781 9142");
    std::cout<<db<<std::endl;
    std::cout<<*db<<std::endl; 

    Account *ac2 = new Account(*db, "Rohan");
    std::cout<<ac2<<std::endl;
    std::cout<<*ac2<<std::endl; 

    
     
}

/*
  int n1=10; //stack(automatic storage)
  int* n1 = new int(10); //heap
  
  int& n2 = n1; //n2 is a reference to n1(alias)

  //card is a stack-allocated DebitCard Instance
  DebitCard card; //stack (automatic storage)

  // card is a DebitCard pointer to a heap allocted DebitCard
  DebitCard* card = new DebitCard(); //heap

  DebitCard c1 = card; //c1 i an alternative name for card

  //In recent version for modern CPP
  DebitCard&& c1 = std:move(card); //c1 is a rvalue reference of card
*/