#include<iostream>
using namespace std;


class Leap_Year{

    public:
    bool leap(int n) // returns true if the year is leap or false if it is not.
    {

       if(n % 400 == 0)
           {
           return true;
           }
       else if(n%4==0 && n%100!=0)
           {
           return true;
           }
       else
           {
           return false;
           }
     }
};

int main()
{

  Leap_Year myObj;
  int n;
  bool result;
  char temp = 'Y';



    while ( temp == 'Y')
    {

        cout<<"\t === Welcome === \t"<<endl;
        cout<<"Enter the year: \t";
        cin>>n;
        if(cin.fail()) // checks whether the input is an integer or not
        {
            cout<<"Invalid Input";
            exit(0);
        }
        result=myObj.leap(n);
        if(result==true)
            {
            cout<<"^------------------------^"<<endl;
            cout<<"|This year is a leap year|"<<endl;
            cout<<"v------------------------v"<<endl;
            }
        else{
            cout<<"^----------------------------^"<<endl;
            cout<<"|This year is not a leap year|"<<endl;
            cout<<"v----------------------------v"<<endl;
            }

         cout<<"Do you want to check for another year?"<<endl;
         cout<<"Enter Y for YES and any key for NO"<<endl;
         cin>>temp;
         if(temp != 'Y')
         {
            exit(0);
         }
         system("CLS");

     }


return 0;

}
