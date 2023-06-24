/*
1 2 3 
1 2 3
1 2 3
*/

#include<iostream>
using namespace std;

int main () {
    int n;
    cout<<"Enter any number : "<<endl;
    cin>>n;

    int row =1;
    while(row <= n) {
        int col =1;
        while(col <= n) {
            cout<<col<<" ";
            col++;
        }
        cout<<endl;
        row++;
        // cout<<row++;
        
    }
return 0;    
}