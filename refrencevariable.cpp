#include <iostream>
using namespace std;
int main(){
    int i=5;
    int &j=i;
    cout<<"Printing the value of i"<<endl;
    cout<< i <<endl;
    cout << j <<endl;
    i++;
    cout<< i <<endl;
    j++;
    cout<< j <<endl;


    return 0;
}