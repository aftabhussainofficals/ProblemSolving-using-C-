//Sum of given digits:
#include <iostream>
using namespace std;
int main(){
     int sum=0,num,digits;
     cout<<"Enter the numbers which u want their sum: "<<endl;
     cin>>num;
     int temp_var=num; 
     while( temp_var != 0){
          digits=temp_var % 10;
          sum+=digits;
         // cout<<"Sum is "<<sum<<endl;    //this line check sum at each itration for clearance
          temp_var /=10;
     }
     cout<<"The Sum of "<<num<<" is "<<sum<<endl;
     return 0;
}
