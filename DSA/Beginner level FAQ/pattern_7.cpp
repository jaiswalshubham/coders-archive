#include<iostream>
using namespace std;
int main(){

    int n,i,j;
    cout<<"Enter a no: ";
    cin>>n;

    for(int i = 1; i<=n; i++){
        for(int j =i; j<=n; j++){
            cout<<" ";
        }
        for(int j =1; j<=2*i-1; j++){
            if(j==1 || j==2*i-1 || i == n)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }


return 0;
}