#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col1=1;
        while(col1<=n-row+1){
            cout<<col1;
            col1++;
}
    int col2=1;
    while(col2<=row-1){
        cout<<'*';
        col2=col2+1;
    }
    int col3=1;
    while(col3<=row-1){
        cout<<'*';
        col3=col3+1;
    }
    int col4=1;
    while(col4<=n-row+1){
            cout<<col4;
            col4++;
}

cout<<endl;
row=row+1;

}}