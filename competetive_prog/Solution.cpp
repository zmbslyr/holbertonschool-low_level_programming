#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
    {
    ll test;
    cin>>test;
    while(test--)
        {
            ll n,i,j,count,max=0;
            cin>>n;
            ll ar[n],br[n];
            for(i=0;i<n;i++)
            {
                cin>>ar[i];
                br[i]=ar[i];
            }
            for(i=n-1;i>0;i--)
            {//cout<<"loop1"<<endl;
                if(br[i]!=0)
                {
                    count=0;
                    for(j=i-1;j>=0;j--)
                    {
               //         cout<<"loop2"<<endl;
                        if(ar[j]%br[i]==0)
                        {
                            br[j]=0;
                            count++;
                        }
                    }
                    if(count>max)
                    {
                        max=count;
                    }
                }
            }
            cout<<max<<endl;
        }
    }
