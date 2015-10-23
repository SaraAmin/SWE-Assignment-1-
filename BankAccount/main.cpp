#include <iostream>
#include <string>
using namespace std;

class Profile {

 public :
    Profile(string name, int balance, string acc_num)
    {
        ClientName = name;
        AccountNumber = acc_num;
        Balance = balance;
    };
string GetClientName(void)
{
  return ClientName;
}
string GetAccountNumber(void)
{
  return AccountNumber;
}
int GetBalance(void)
{
  return Balance;
}
void Deposit(int amount)
{
  Balance += amount;
}
void Withdraw(int amount)
{
  Balance -= amount;
}

 private:
  string ClientName;
  string AccountNumber;
  int Balance;
  };

   void main()
{
   Profile x("Sarah",1000,"19887");
   x.Deposit(100);
   x.Withdraw(10);
   cout<<x.GetBalance()<< "\n";
};




