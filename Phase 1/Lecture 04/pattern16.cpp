/*
C 
B C
A B C
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter any number : ";
    cin>>n;

    int row =1;
    char ch = 'A';
    while( row <= n ) {
        int col =1;

        while( col <= row ) {
            ch = 'A' + n - row + col -1;
            cout<< ch <<' ';
            col++;
        }
        cout<<endl;
        row++;
    }

}