/*
A 
B B
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
        // char ch = 'A' + row - col;
        char ch = 'A' + row - col;
        while( col <= row ) {
            cout<< ch << " ";
            col++;
        }
        cout<<endl;
        row++;
    }

}