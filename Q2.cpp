#include <iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter a number=";
    cin>>num;

    if (num<0){

        num=num*(-1);

        cout<<"\n"<<"abslute value of number is "<<num;
    }
    else{
        cout<<"\n"<<"absolute value of number is "<<num;

    }


    return 0;

}