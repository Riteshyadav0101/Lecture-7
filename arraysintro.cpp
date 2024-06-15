#include<iostream>
using namespace std;
// HOLD
void printArray() {


}

int main() {

    // declare
    int number[15];
    
    // accessing an array 
    cout<<"Value at 15 index "<< number[15]<<endl;

    // cout<<"Value at 20 index "<< number[20]<<endl;

    // /initializing an array

    int second[3] = {5, 7, 11};


// accesing an array
    cout<< endl << " Everything is Fine " <<endl <<endl;

    int third[15] ={2,7};

    int n =15;
    cout<<"printing the array"<<endl;

    // print the array

    for (int i =0; i<n;i++){
        cout<<third[i]<<" ";
        
    }
    cout<<endl;

    // initilizing all location with  o
     int fourth[10] ={0  };
     n =10;
    cout<<"printing the array"<<endl;

    // print the array

    for (int i =0; i<n;i++){
        cout<<fourth[i]<<" ";
    }


    return 0;


}