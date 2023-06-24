/*
       1
     2 3
   4 5 6
 7 8 9 10
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter any number : ";
    cin>>n;

    int row =1, count = 1;
    while( row <= n ) {
        // Printing Space
        int col = 1;
        while( col <= n - row ) {
            cout<<"  ";
            col++;
        }

        // print stars 
        col = 1;
        while( col <= row ) {
            cout<<count++ <<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
}