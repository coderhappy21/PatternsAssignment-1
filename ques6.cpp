#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter a number n :";
    cin>>n;

int a = n-1;
    for(int i =1; i<=n; i++){
     for(int j =1; j<=a; j++){
cout<<" ";
    }
    a--;
    
     for(int j =1; j<=n; j++){
cout<<"*";
    }
 
 cout<<endl;
    }


}