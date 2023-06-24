/*
      * 
    * *
  * * *
* * * *
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
        while( col <= n-row ) {
            cout<<"  ";
            col++;
        }

        // print stars 
        col = 1;
        while( col <= row ) {
            cout<<"* ";
            col++;
        }
        cout<<endl;
        row++;
    }
}