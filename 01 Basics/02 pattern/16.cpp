#include<iostream>
using namespace std;

int pattern (int n ){

for (int i = 0 ; i <n ; i++){
    for (int j = 0 ; j <i+1 ; j++){
        cout<<char('A'+i);
    }cout<<endl;
}
return 0;
}

int main (){
    int n ;
    cin>>n;
    pattern (n);
}

/*

A
BB
CCC
DDDD
EEEEE

*/