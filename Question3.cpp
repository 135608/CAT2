#include <iostream>
using namespace std;

int main(){
    int username;
    int password;

    cout<<"Enter username: "<<endl;
    cin>>username;
    if(username=135608){
        cout<<"Enter the password"<<endl;
        cin>>password;
        if(password=isha135608){
            cout<<"Login successful. Welcome to my simple App. Select and action to perform:\n\t1.Go to About Us\n\t2.Go to Services Page\n\t3.Go to Profile Page\n\t4.Logout ";
            int opt;
            cin>>opt;
            switch(opt){
                case 1:
                cout<<"My name is Isha. I'm strathmore university student. I love all the future possibilities that C++ programming is giving me.";
                break;

                case 2:
                cout<<"In order to get money, you can let them borrow your machine for some time";
                break;

                case 3:
                cout<<"Full Name: Isha Zalugurha\n\tYear of birth: 2000\n\tCountry: DRC\n\tcitizenship: Stranger\n\tCity:Nairobi\n\tUniversity: Strathmore University\n\tCourse: DBT 1102\n\tUnit name: Introduction to Programming\n\tHobbies :Football";
                break;

                case 4:
                cout<<"Logout successful";
                break;


            } 

        }else{
            cout<<"Wrong password";
        }
    }else{
        cout<<"Wrong username";
    }
    

    

}