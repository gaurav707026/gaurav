#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number of rows"<<endl;
    int n;
    cin>>n;
    for (int k = 1; k<=n; k++)
    {
        for (int j = 1; j <= n-k+1; j++)
        {
            cout<<n-j+1;
        }
        for (int j = 1; j<=(k-1); j++)
        {
            cout<<"/\\";
        }
        for (int i = 1; i <=n-k+1; i++)
        {
            cout<<k+i-1;
        }
       cout<<"\n";  
    }
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= k; i++)
        {
            cout<<n-i+1;
        }
        for (int i = 0; i <(n-k); i++)
        {
            cout<<"\\/";
        }
        for (int i = 1; i <= k; i++)
        {
            cout<<n-k+i;
        }
        cout<<"\n";
    }
    
}