#include<iostream>
using namespace std;


class Leap_Year{

    public:
    bool leap(int n)
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

    cout<<"Welcome"<<endl;

    while ( temp == 'Y')
    {
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
            cout<<"===This year is a leap year==="<<endl;
            }
        else{
            cout<<"===This year is not a leap year==="<<endl;
            }

        cout<<"Do you want to check for another year?"<<endl;
        cout<<"Enter Y for YES and any key for NO"<<endl;
        cin>>temp;
        if(temp != 'Y')
        {
            exit(0);
        }
     }

return 0;

}
