/*
1 2 3 4 4 3 2 1 
1 2 3 * * 4 3 2 
1 2 * * * * 4 3 
1 * * * * * * 4 
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter any number : ";
    cin>>n;

    int row =1, count = 1;
    while( row <= n ) {
        // Printing Numbers
        int col = 1;
        while( col <= n - row + 1 ) {
            cout<<col++<<" ";
        }

        // print stars
        col = 1;
        while( col <= row - 1 ) {
            cout<<"* ";
            col++;
        }

        // print stars 2.0
        col =1;
        while( col <= row -1 ) {
            cout<<"* ";
            col++;
        }
        
        // print numbers 2.0
        col =1;
        while( col <= n - row +1 ) {
            cout<<n-col+1<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
}