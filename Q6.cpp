#include <iostream>
using namespace std;

int main(){

int num;

cout<<"Enter your marks=";
cin>>num;

if(num>=90 && num<=100){
    cout<<"\nYour grade is A+ ";
}

else if(num>=80){
    cout<<"\nYour grade is A ";
}
else if (num>=70){
    cout<<"\nYour grade is B+";
}
else if(num>=60){
    cout<<"\nYour grade is B";
}

else if (num>=50){
    cout<<"\nYour grade is C ";
}

else if(num>=40){
    cout<<"\nYour grade is D";
}

else if(num>=30){
    cout<<"\nYour grade is E";
}

else{
    cout<<"\nYour grade is F ";
}
    







    return 0;
}