/*
1 2 3 4 
  1 2 3
    1 2
      1
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter any number : ";
    cin>>n;

    int row =1;
    while( row <= n ) {
        // Printing Space
        int col = 1;
        while( col <= row - 1 ) {
            cout<<"  ";
            col++;
        }

        // print stars 
        col = 1;
        while( col <= n - row + 1 ) {
            cout<<col <<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
}