#include<iostream>
using namespace std;
int main( ){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        //print space
        int col = 1;
        int space=n-row;
         while(space){
            cout<<" ";
            space=space-1;
        }
//print first triangle
        while(col<=row){
            cout<< col;
            col = col+1;
        
        }
        //print second triangle
        int k=row-1;

        while(k){
            cout << k;
            k = k-1;
        }
        cout << endl;
      row = row+1;  
    }
}