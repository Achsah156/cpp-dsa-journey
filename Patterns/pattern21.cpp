#include<iostream>
    using namespace std;
    int main(){
    int i,j,space,n;
    cin>>n;
    i=1;
//for printing spaces

while(i<=n){
 space=i-1;
  while(space){
     cout<<" ";
     space--;
  }
// for counting variables

 j=1;
// for printing numbers

while(j<=n-i+1){        
    int num=i+j-1;        
    cout<<num;       
    num--;
    j++;
    }
    cout<<"\n";
       i++;
    }
    return 0;
    
    }