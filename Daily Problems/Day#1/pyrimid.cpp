#include <iostream>
using namespace std;
int main (){
    int rows;
    cout<<"Enter the number of rows to make full pyramids : "<<endl;
    cin>>rows;    
//      int rows=3;   //considering 3 as number of rows
    for (int i=1;i<=rows;i++){
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
