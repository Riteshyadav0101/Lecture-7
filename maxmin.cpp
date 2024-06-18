#include<bits/stdc++.h>
using namespace std;
int getMax(int num[],int n) {

    int maxi = -999 ;

    for(int i = 0; i<n; i++) {
        if(num[i]>maxi){
            maxi = max(num[i],maxi);
        }
    }

    // returning max value
    return maxi;
}

int getMin(int num[],int n) {

     int min = 999;

    for(int i = 0; i<n; i++) {
        if(num[i]<min){
            min = num[i];
        }
    }

    // returning min value
    return min;
}


int main(){

    int size;
    cout<<"enter the size of array:\n";
    cin>>size;

    int num[size];

    // takin input in array
    for(int i = 1;i<=size;i++) {
        cin>>num[i];
    }
    int c =getMax(num, size);
    cout<<"Maximum value is "<<c<<endl;

    int v =getMin(num, size);
    cout<<"Minimum value is "<<v<<endl;



    return 0;
}