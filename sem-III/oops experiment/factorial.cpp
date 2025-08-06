#include<iostream>
using namespace std;
int main(){

    int a ,fact=1;

    cout<<"enter a number of which you want factorial";
    cin>>a;

    for(int i = 1;i<=a;i++)
     fact = fact * i;

     cout<<"factorial"<<fact<<endl;
     return 0;





}