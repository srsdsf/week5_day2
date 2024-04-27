#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,n;
        cin>>a>>b>>n;
        vector<ll> v(n);
        ll sum=0;
        if(b>=a)
        {
            sum=a;
            b=a;
        }
        else sum=b;
            
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
            if(v[i]+1<=a) sum+=v[i]; // 1 hate rakha hoiche
            else sum+=a-1;  //v[i] indx ar val ta a ar theke boro hola a-1 kore dibo

        }
        cout<<sum<<endl;
    }
}