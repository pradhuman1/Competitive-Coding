#include<bits/stdc++.h>
using namespace std;
int C[1000][1000]={0};

int combi(int n,int r)
{
    if(n<r)
        return 0;
    else if(r==0)
        return 1;
    if(C[n][r]!=0)
    {
        return C[n][r];
    }
    else
        return C[n][r]=combi(n-1,r-1)+combi(n-1,r);

};



int main()
{
    int n,r;
    cout<<"Enter n And r for ncr:";
    cin>>n>>r;
    int ans=combi(n,r);
    cout<<ans;
}