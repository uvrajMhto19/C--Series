#include<iostream>
using namespace std;
int main(){
    int n, m;
    cin>>n;
    cin>>m;
    for(int i=1; i<=1; i++){
        for(int j=1; j<=1; j++){
            if(i==1||j==1||i==n||j==m){
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