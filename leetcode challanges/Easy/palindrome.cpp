#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num,reversedNum=0;
    cout<<"Enter the num: "<<endl;
    cin>>num;
    if(num<=0){
       cout<<"0 and below zero are not palindromic number"<<endl;
       return 0;
    }
    int fixedNumValue= num;
    while (num>0){
          int reversing=num % 10;
          reversedNum=reversedNum * 10 + reversing;
          num/=10;
    }
    if (fixedNumValue==reversedNum){
        cout<<fixedNumValue<<" is palindromic number"<<endl;
        return true;
    }
    else{
        cout<<fixedNumValue<<" is not palindromic number."<<endl;
        return false;
    }
    return 0;
}