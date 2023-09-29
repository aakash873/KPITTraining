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
    DebitCard(int cvv, std::string number) {
        this->_card_number = number;
        this->_cvv_number = cvv;
    }
    ~DebitCard() {
        std::cout<<"debit card destroyed\n";
    }
};

class Account
{
private:
    DebitCard obj; //DebitCard*,DebitCard&
    std::string _name;
public:
    friend std::ostream &operator<<(std::ostream &os, const Account &rhs) {
        os << "obj: " << rhs.obj
           << " _name: " << rhs._name;
        return os;
    }
public: Account(DebitCard, std::string name) 
    : obj = card{
    this->_name = name;
    //OR
    //:obj(card), _name(name){}
    }

 ~Account() {}
};

int main(){
    Account* ac1 = new Account(
        new DebitCard(781,"4314 56"),
        "Harshit"
    );
    std::cout<<*ac1; 

    //method2
    DebitCard* db = new DebitCard(201,"6781 91");
    Account* ac2 = new Account(db, "Rohan"); 
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