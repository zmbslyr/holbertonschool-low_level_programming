/*ashutosh shrimal*/
#include <bits/stdc++.h>
#include "rdm.h"
using namespace std;
int main()
{
    int n,pos=0,count=0,i,max=0;
    cin>>n;
    int ar[n];
    rdm(ar,n);
    for(i=0;i<n;i++)
    {
        if(ar[i]>max)
            max=ar[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<ar[i]<<' ';
    }
    cout<<endl;
    int freq[max+1]={0};
    for(i=0;i<n;i++)
    {
        freq[ar[i]]++;
    }
    for(i=0;i<=max;i++)
    {
        if(freq[i]>0)
        {
            while(freq[i]--)
            {
                ar[count]=i;
                count++;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<ar[i]<<' ';
    }
    return 0;
}
