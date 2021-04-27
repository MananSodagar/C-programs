#include<iostream>
using namespace std;

// class declaration for calculating factorial
class Factorial{

    public:
    long double fact(int n)//we are using long double for finding factorial of large numbers like 76,88,100 etc.
    {
          int i;
          long double factorial_sum=1;
          for(i=1;i<=n;i++)// we are using here iterative approach, we can also do the same using recursive approach
           {
            factorial_sum=factorial_sum*i;
           }
     return factorial_sum;
    }
};

int main()
{
  int n;
  char temp = 'Y';



   while ( temp == 'Y')
   {



        cout<<"\t=== FIND FACTORIAL FOR POSITIVE NUMBERS ===\t"<<endl;
        cout<<"warning: if you enter 0 or Negative number, the program will close automatically"<<endl;
        cout<<"Enter the positive number :\t";
        cin>>n;

        if(n<0 || n==0) // checks if input is 0 or -ve it terminates the program
        {
           cout<<"\t\'The number is invalid\' \t";
           exit(0);  //  immediately terminates the program
        }

        Factorial myObj;
        long double result;
        result=myObj.fact(n);
        cout<<"the factorial of number is: \t" <<result<<endl;

         cout<<"Do you want to find for another Number?"<<endl;
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
