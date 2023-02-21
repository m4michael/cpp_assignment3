#include <iostream>
using namespace std;

int main(){
    float num1,num2;
    char c;
    cout<<"choose operation among +,*,-,/=";
    cin>>c;
    cout<<"\nEnter a number=";
    cin>>num1;
    cout<<"\nEnter a number=";
    cin>>num2;

    switch(c){
    case '+':
        cout<<"\n sum="<<num1+num2;
        break;

    case '-':
        cout<<"\nsubtract="<<num1-num2;
        break;

    case '*':

        cout<<"\nmultiplication="<<num1*num2;
        break;

    case '/':

        cout<<"\ndivision="<<num1/num2;
        break;

        default:

        cout<<"\nPlease select valid operation";

    }

    return 0;
}