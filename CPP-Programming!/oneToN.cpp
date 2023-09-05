#include<iostream>
using namespace std;
void printName(int n){
    if(n==0){
        return ;
    }
    cout<<n<<endl;   // Just switch these for 1 to N and N to 1.
    printName(n-1);
    

    
}
int main(){
    printName(5);
}