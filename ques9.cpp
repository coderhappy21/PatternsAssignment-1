#include<iostream>
using namespace std;
int main(){
//number triangle
    int n;
    cout<<"enter a number n :";
    cin>>n;


    for(int i =1; i<=n; i++){
        int a = i;
     for(int j =1; j<=i; j++){
     cout<<a<<" ";
     a--;
    }
 
 cout<<endl;
    }


}