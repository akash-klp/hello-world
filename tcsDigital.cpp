/*
Given an array Arr[] of N integer numbers. The task is to rewrite the array by putting all multiples of 10
at the end of the given array.
Note: The order of the numbers which are not multiples of 10 should remain unaltered, and similarly, the
order of all multiples of 10 should be unaltered.
For e.g.
Suppose N = 9 and Arr[]={10, 12, 5, 40, 30, 7, 50, 9, 10}
You have to push all multiple of 10 at the end of the Arr[]
Hence, the output is 12 5 7 9 10 40 30 50 10.
*/
#include <iostream>

using namespace std;

int main()
{
    int n,i,j=0;
    cin>>n;
    int a1[n],a2[n];
    for(i=0;i<n;i++)
    cin>>a1[i];
    
    for(i=0;i<n;i++)
    {
        if((a1[i]%10)!=0)
        {
            a2[j]=a1[i];
            j++;
        }
    }
    for(i=0;i<n;i++)
    {
        if((a1[i]%10)==0)
        {
            a2[j]=a1[i];
            j++;
        }
    }

   for(j=0;j<n;j++)
   {
       cout<<a2[j]<<" ";
   }
    return 0;
}





