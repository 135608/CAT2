#include <iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter the year: ";
    cin>>year;

    if (year %4==0){
        cout<<"It's leap year";
    }else{
        cout<<"It's not a leap year";
    }

}