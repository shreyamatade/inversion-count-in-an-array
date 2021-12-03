#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //inversion count
    int n; int ic=0;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                ic++;
            }
        }
    }
    cout<<ic<<endl;
}
