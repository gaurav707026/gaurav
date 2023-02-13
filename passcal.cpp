#include<iostream>
using namespace std;
int fact(int f){
    int c=1;
    for (int i = 1; i <= f; i++)
    {
        c =c*i;
    }
    return c;
    
}
int main(){
    int n, a=1;
    cout<<"enter the number of rows:"<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j<=(n-i); j++)
        {
            cout<<" ";
        }
        
        for (int j = 1; j <= i; j++)
        {
            int m = fact(i-1)/(fact(j-1)*fact(i-j));
            cout<<m<<" ";
        }
        cout<<endl;
    }
    

}