#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter a number n :";
    cin>>n;

int a =1;
    for(int i =1; i<=n*2-1; i++){
     for(int j =1; j<=a; j++){
    cout<<"*";
    }
    if(i>=n) a--;
    else a++;
cout<<endl;
    }


}