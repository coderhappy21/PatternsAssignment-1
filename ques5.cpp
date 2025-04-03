#include<iostream>
using namespace std;
int main(){

    //hollow rectangle
    int m;
    cout<<"enter the number of rows :";
    cin>>m;

    int n;
    cout<<"enter the number of columns :";
    cin>>n;


    for(int i =1; i<=m; i++){
     for(int j =1; j<=n; j++){
        if(i==1 || j==1 ||j == n|| i==m )
        cout<<"*";
        else   cout<<" ";
    }
cout<<endl;
    }


}