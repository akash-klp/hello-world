#include<iostream>  
using namespace std;  
int main ()  
{  
    int i,j, k,temp;  
    int a[10] = { 1, 9, 7, 101, 23, 4, 12, 7, 34, 23};   
    cout<<"\nprinting sorted elements...\n";  
    for(k=1; k<10; k++)   
    {  
        temp = a[k];  
        j= k-1;  
        while(j>=0 && temp <= a[j])  
        {  
            a[j+1] = a[j];   
            j = j-1;  
        }  
        a[j+1] = temp;  
    }  
    for(i=0;i<10;i++)  
    {  
        cout <<a[i]<<"\n";  
    }  
}  
