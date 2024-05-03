#include<iostream>
using namespace std;

int add (int num1 , int num2)

{
     return (num1+num2);
}
int Minus (int num1 , int num2)

{
       return (num1 - num2);
}
int multiply (int num1 , int num2)

{
      return (num1 * num2);
}
int divide (int num1 , int num2)
{
     if (num2!=0)
        return (num1 / num2 );
    else
        cout<<"Erorr : Division by zero ";

        return 0;
}
int Modulus (int num1 , int num2)
{
      return (num1 % num2 );
}
double add_three (double num1 ,double num2,double num3)
{
       return num1+num2+num3;
}
double minus_three (double num1,double num2,double num3)
{
     return num1-num2-num3;
}

int main()
{
    while(true)
    {
        int Choice;
        double num1, num2 , num3;
        cout << "Choose number of function you need\n1-Add two numbers \n2-minus two numbers\n3-multiply two numbers \n4-divide two numbers \n5-modulus number \n6-Add three number \n7-minus two numbers \n0-Exit\n" ;
        cout<<"Choice: ";
        cin>>Choice;
        if(Choice==1)

        {
            cout<<"enter two numbers";
             cin>>num1>>num2;
             cout<<"result"<<add(num1,num2)<<endl;



        }
        else if(Choice==2)
        {
              cout<<"enter two numbers";
             cin>>num1>>num2;
             cout<<"result"<<Minus(num1,num2)<<endl;


        }
        else if(Choice==3)
        {
              cout<<"enter two numbers";
             cin>>num1>>num2;
             cout<<"result"<<multiply(num1,num2)<<endl;

        }
        else if(Choice==4)
        {

              cout<<"enter two numbers";
             cin>>num1>>num2;
             cout<<"result "<<divide(num1,num2)<<endl;

        }
        else if(Choice==5)
        {
           cout<<"enter two numbers";
             cin>>num1>>num2;
             cout<<"result "<<Modulus(num1,num2)<<endl;
        }
        else if(Choice==6)
        {
         cout<<"enter two numbers";
             cin>>num1>>num2>>num3;
             cout<<"result "<<add_three(num1,num2,num3)<<endl;
        }
        else if(Choice==7)
        {
           cout<<"enter two numbers";
             cin>>num1>>num2>>num3;
             cout<<"result "<<minus_three(num1,num2,num3)<<endl;
        }
        else if(Choice==0)
        {


            //Exit
            break;
        }
        else
        {
            cout<<"Wrong Choice";
        }
    }
    cout<<endl<<"Thanks for using calculator";
    return 0;
}
