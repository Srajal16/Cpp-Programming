#include<iostream>
using namespace std;


int factorialfinder(int x){
    if(x==1){
        return 1;
    }
    else{
        return x*factorialfinder(x-1);
    }
}

int main()
{
    factorialfinder(5);
}