/*
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1 
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

        // print numbers
        col = 1;
        while( col <= row ) {
            cout<<col <<" ";
            col++;
        }

        // print numbers
        col =1;
        while( col <= row -1 ) {
            cout<<row-col<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
}