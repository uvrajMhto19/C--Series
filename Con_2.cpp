
// Write a program to divid people into 3 age groups depending upon their age.
#include<iostream>
using namespace std;
int main(){
    int age;
    cin>>age;
    if(age<12){
        cout<<"Child"<<endl;
        }
    else if(age>18){
        cout<<"Adult"<<endl;
        }
    else{
        cout<<"TeenAger"<<endl;
        }
    return 0;
}