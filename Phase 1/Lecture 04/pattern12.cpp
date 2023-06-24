/*
A B C 
B C D
C D E
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
        char ch = 'A' + row + col - 2;
        while( col <= n ) {
            cout<< ch++ << " ";
            col++;
        }
        cout<<endl;
        row++;
    }

}