#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int row=1;
    char ch='A';
    char value = ch;
    while(row<=n){
        int col=1;
        while(col<=n){
        char ch='A'+col-1;
            cout<<value;
            value=value+1;
            col=col+1;
        }
        cout<<endl;
        row = row+1;
    }
}