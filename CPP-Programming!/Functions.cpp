#include<iostream>
#include<string.h>
using namespace std;

void printName(string name){
    cout<<"hey"<<name;
}

int main(){

    string name;
    cin>>name;

    printName(name);
    return 0;
}

//void->does not return anything
//paramterised
//non-para
//return

//&s reference it will change!