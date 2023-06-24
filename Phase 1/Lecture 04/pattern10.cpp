/*
A A A 
B B B
C C C
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter any number : ";
    cin>>n;

    int row =1;
    while( row <= n ) {
        int col = 1;
        char ch = 'A';
        ch = 'A' + col - row;
        while( col <= n ) {
            cout<<ch;
            col++;
        }
        cout<<endl;
        row++;
    }
}