/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int isprime(int num,int i)
{
    if(i==1)
    {
        return 0;
    }
    else
    {
        if(num%i==0)
        {
            return 1;
        }
        
        else
        return isprime(num,i-1);
    }
    
}

int main()
{
    int count=0,ite,num=2;
    ite=10;
    
    for(int i=1;count!=ite;i++,num++)
    {
        if(isprime(num,num/2)==0)
        {
            cout<<num<<" ";
            count++;
        }
    }
    

    return 0;
}
