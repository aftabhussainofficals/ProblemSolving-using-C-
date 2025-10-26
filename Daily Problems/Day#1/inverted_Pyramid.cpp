#include <iostream>
using namespace std;
int main (){
    int rows;
    cout<<"Enter the number of rows to make full Inverted pyramids : "<<endl;
    cin>>rows;    
   for (int i=rows;i>=1;i--){
        for (int spaces=1;spaces<= rows-i; spaces++){
            cout<<"  ";  
        }
        for (int j=1;j<=2*i-1;j++){
            cout<<"* ";
        }
       cout<<endl;
    }
    return 0;
}
