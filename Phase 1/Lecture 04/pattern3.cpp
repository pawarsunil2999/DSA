/*
1 2 3 
4 5 6
7 8 9
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter any number : ";
    cin>>n;

    int value = 1;
    int row = 1;
    while( row <= n ) {
        int col = 1;
        while( col <= n ) {
            cout<<value++<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
}