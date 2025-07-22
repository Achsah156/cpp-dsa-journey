# include <bits/stdc++.h>
using namespace std;
void print1(int n){


    for(int i = 0; i<n ;i++){
        for (int j = 0; j <=i;j++){
            cout <<  j ;

        }
       
   

        for (int j = 0; j < (2*n)-2*i;j++){
            cout <<  " ";

        }
        
    

        for (int j = 0; j >=i;j--){
            cout <<  j ;

        }
    cout << endl;     
    }
}