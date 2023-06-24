/*
1 1 1 1 
  2 2 2
    3 3
      4
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
        while( col <= row -1 ) {
            cout<<"  ";
            col++;
        }
        // Printing numbers
        col = 1;
        while( col <= n -row + 1 ) {
          cout<< row <<" ";
          col++;
        }
        cout<<endl;
        row++;
    } 
}