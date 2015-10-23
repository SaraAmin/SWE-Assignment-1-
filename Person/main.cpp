#include <string>
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
  public:
    Person()
    {
        FirstName = "Your First Name";
        char lname[LIMIT] = "Your Last Name";
        strcpy(LastName, lname);
    }
        Person(string fname,char lname[25] = "Your Last Name")
    {
        FirstName = fname;
        strcpy(LastName, lname);
    }

    void Show(void)
    {
      cout<< FirstName << " , " << LastName << "\n";
    }
    void FormalShow(void)
    {
      cout<< LastName << " , " << FirstName << "\n";
    }

  private:
     static const int LIMIT = 25;
     string FirstName;
     char LastName[LIMIT];
};
 void main()
{
   Person a;
   Person c("Sarah");
   Person b("Sarah","Safwat");
   a.Show();
   a.FormalShow();
   b.Show();
   b.FormalShow();
   c.Show();
   c.FormalShow();
};
