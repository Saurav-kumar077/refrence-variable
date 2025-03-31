#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of element of the array "<<endl;
    cin>>n;
    int **arr = new int *[n];
    for(int i=0;i<n;i++){
        arr[i]=new int [n];
    }
    //Taking input 
    cout<<"Enter the element of the array "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    //output
    cout<<"The output of the array is "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<< arr[i][j] << " ";
        }
        cout <<endl;
    }
    //releasing memory
    for(int i=0;i<n;i++){
        delete [] arr[i];
    }
    delete []arr;
    
    return 0;
}