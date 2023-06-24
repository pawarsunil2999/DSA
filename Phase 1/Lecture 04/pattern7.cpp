/*
1
2 3
3 4 5
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter any number : ";
    cin>>n;

    int row =1;
    while( row <= n ) {
        int col = 1, value = row;
        while( col <= row ) {
            cout<<value++<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }

cout<<endl;
cout<<endl;   

    // same without using value
    int rowi =1;
    while( rowi <= n ) {
        int colj = 1;
        while( colj <= rowi ) {
            cout<<rowi+colj-1<<" ";
            colj++;
        }
        cout<<endl;
        rowi++;
    }
}