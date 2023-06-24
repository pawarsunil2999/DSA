/*
3 2 1 
3 2 1
3 2 1
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter any number : "<<endl;
    cin>>n;


    int row =1;
    while( row <=n ) {
        int col = 1;
        while( col <= n ) {
            cout<< n-col+1 <<" ";
            col++;
        }
        cout<<endl;
        row++;
    }


}