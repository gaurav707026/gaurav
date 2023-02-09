#include <iostream>
using namespace std;
int main(){
    cout<<"enter the input"<<endl;
    int n;
    cin>>n;
    for (int j = 1; j<=n; j++)
    {
        for (int i = 1; i <=3*n-j+1; i++)
        {
            cout<<" ";
        }
        for (int i = 1; i <= j; i++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    for (int j = 1; j<=n; j++)
    {
        for (int i = 1; i <=j-1; i++)
        {
            cout<<" ";
        }
        for (int i = 1; i <=3*n-j+2; i++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }   
    for (int j = 0; j <= n; j++)
    {
        for (int i = 0; i < n-j; i++)
        {
            cout<<" ";
        }
        for (int i = 1; i <= 2*n+j+1; i++)
        {
            cout<<"* ";
        }
        cout<<"\n";
        
    }
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <=2*n+j; i++)
        {
            cout<<" ";
        }
        for (int i = 1; i <= n-j+1; i++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
}
