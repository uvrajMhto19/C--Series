// #include<iostream>
// using namespace std;
// int main(){
//     int marks;
//     cin>>marks;
//     if (marks>33){
//         cout<<"pass";
//     }
//     else{
//         cout<<"fial";

//     }
        
    
// }

#include<iostream>
using namespace std;
int main(){
    int marks;
    cin >> marks;
    if(marks > 80)
    {
        cout<<"A";
    }
    else if(marks > 60){
        cout<<"B";
    }
    else if(marks > 40){
        cout<<"C";
    }
    else{
        cout<<"f";
    }
    return 0;
}