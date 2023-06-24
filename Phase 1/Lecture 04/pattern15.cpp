/*
A 
B C
C D E
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
            ch = 'A' + row + col - 2;
            cout<< ch <<' ';
            col++;
        }
        cout<<endl;
        row++;
    }

}