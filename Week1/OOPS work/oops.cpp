#include<bits/stdc++.h>
using namespace std;

class LibraryUser{
public:
    virtual void registerAccount() = 0;
    virtual void requestBook()=0;

};
class KidUser: public LibraryUser{
    public:
    int age;
    string bookType;
    KidUser(int a, string bt){
        age = a;
        bookType=bt;
    }
    void registerAccount() override{
        if(age<12){
            cout<<"You have successfully registered under a Kids Account"<<endl;
        }
        else{
            cout<<"Sorry, Age must be less than 12 to register as a kid"<<endl;
        }
    }
    void requestBook() override{
        if(bookType=="Kids"){
            cout<<"Book Issued successfully, please return the book within 10 days"<<endl;
        }
        else{
            cout<<"Oops, you are allowed to take only kids books"<<endl;
        }
    }
};

class AdultUser: public LibraryUser{
public:
    int age;
    string bookType;
    AdultUser(int a,string bt){
        age =a;
        bookType =  bt;
    }
    void registerAccount() override{
        if(age>12){
            cout<<"You have successfully registered under an Adult Account"<<endl;
        }
        else{
            cout<<"“Sorry, Age must be greater than 12 to register as an adult"<<endl;
        }
    }

    void requestBook() override{
        if(bookType=="Fiction"){
            cout<<"Book Issued successfully, please return the book within 7 days"<<endl;
        }
        else{
            cout<<"Oops, you are allowed to take only adult Fiction books"<<endl;
        }
    }
};

int main() {
    KidUser k1(10, "Kids");
    k1.registerAccount();
    k1.requestBook();

    cout << endl;

    KidUser k2(18, "Fiction");
    k2.registerAccount();
    k2.requestBook();
    cout<<endl;

    AdultUser a1(5, "Kids");
    a1.registerAccount();
    a1.requestBook();

    cout << endl;

    AdultUser a2(23, "Fiction");
    a2.registerAccount();
    a2.requestBook();

    return 0;
}