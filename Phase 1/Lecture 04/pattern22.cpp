/*
      1 
    2 2
  3 3 3
4 4 4 4
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter any number : ";
    cin>>n;

    int row =1;
    while( row <= n ) {
      // Printing space 
        int col = 1;
        while( col <= n - row ) {
            cout<<"  ";
            col++;
        }
        // Printing numbers
        col = 1;
        while( col <= row ) {
          cout<< row <<" ";
          col++;
        }
        cout<<endl;
        row++;
    } 
}