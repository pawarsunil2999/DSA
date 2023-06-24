/*
* * * * 
  * * *
    * *
      *
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
        // Printing stars
        col = 1;
        while( col <= n -row + 1 ) {
          cout<<"* ";
          col++;
        }
        cout<<endl;
        row++;
    } 
}