//Factorial of number.............................................................

//Using for loop:
#include <iostream>
using namespace std;
int main(){
    int num,factorial=1;
    cout<<"Enter the number to find its factorial: ";
    cin>>num;
    //int temp=factorial;
    for(int i=1;i<=num;i++){
          factorial*=i;
    }
    cout<<"Factorial of "<<num<<"is"<<factorial<<endl;
     return 0;
}


//Using While loop:................................................................
#include <iostream>
using namespace std;
int main(){
    int num,factorial=1;
    cout<<"Enter the number to find its factorial: ";
    cin>>num;
    int temp=num;
    while (temp!=0){
           factorial*=temp;
           temp-=1;
    }
    cout<<"The factorial of "<<num<<" is "<<factorial;
    //cout<<"Factorial of "<<num<<"is"<<factorial<<endl;
     return 0;
}