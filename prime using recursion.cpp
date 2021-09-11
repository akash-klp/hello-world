#include <iostream>

using namespace std;

int isprime(int,int);


int main()
{
    int num,prime;
    
    cout<<"enter number: ";
    cin>>num;
    
    prime=isprime(num,num/2);
    cout<<prime<<endl;
    
    if(prime==1)
    cout<<"\n number is not prime";
    
    else
    cout<<"\n number is prime ";
    
    return 0;
}


int isprime(int num,int i)
{
    if(i==1)
    return 0;
    
    else{
        
        if(num%i==0)
        return 1;
        
        else
        return (isprime(num,i-1));
        
    }
}
