//code for managing bank accout using polymorphism and inheritance
#include <iostream>
using namespace std;
class Account{
    public:
    Account(){  };
virtual void calculateInterest()=0;

};
class SavingsAccount:public Account
{public:
void calculateInterest()
    {cout<<"intrest of saving account= "<<1000*2.5/100<<"$"<<endl;}
};
class CheckingAccount:public Account
{public:
int a=50;
void calculateInterest()
    {cout<<"intrest of checking account which is fixed = "<<a<<"$"<<endl;}
};

int main()
{
SavingsAccount Savings;
CheckingAccount Checking;
Savings.calculateInterest();
Checking.calculateInterest();

}