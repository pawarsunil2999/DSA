/*
1 
2 3
4 5 6
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter any number : ";
    cin>>n;

    int row =1, value =1;
    while( row <= n ) {
        int col = 1;
        while( col <= row ) {
            cout<<value++<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
 
}