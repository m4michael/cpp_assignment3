#include <iostream>
using namespace std;

int main(){

int num;

cout<<"Enter your marks=";
cin>>num;

if(num>=90 && num<=100){
    cout<<"\nYour grade is A+ ";
}

else if(num>=80 && num<90){
    cout<<"\nYour grade is A ";
}
else if (num>=70 & num<80){
    cout<<"\nYour grade is B+";
}
else if(num>=60 && num<70){
    cout<<"\nYour grade is B";
}

else if (num>=50 && num<60){
    cout<<"\nYour grade is C ";
}

else if(num>=40 && num<50){
    cout<<"\nYour grade is D";
}

else if(num>=30 && num<40){
    cout<<"\nYour grade is E";
}

else if(num<30  && num>0){

    cout<<"\n your grade is F";
}

else{
    cout<<"\nEnter marks between 0 to 100";
}
    

    return 0;
}
