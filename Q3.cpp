#include <iostream>
using namespace std;

int main(){

    int profit,loss,sp,cp;

    cout<<"Enter cost Price=";
    cin>>cp;
    cout<<"Enter selling price=";
    cin>>sp;

    profit=sp-cp;
    loss=cp-sp;

    if(sp>cp){

        cout<<"\nprofit="<<profit;
    }
    else{
        cout<<"\nloss="<<loss;
    }


    return 0;
}