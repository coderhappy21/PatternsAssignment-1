#include<iostream>
using namespace std;
int main(){
//number triangle
    int n;
    cout<<"enter a number n :";
    cin>>n;

int a = n;
    for(int i =1; i<=n; i++){
     for(int j =1; j<=a; j++){
cout<<j<<" ";
    }
  a--;
 cout<<endl;
    }


}