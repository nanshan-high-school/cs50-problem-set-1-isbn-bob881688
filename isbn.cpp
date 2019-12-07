#include <iostream>
using namespace std;

int main(){
    long long isbn=0;
    long long c=0;
    do{
    cout<<"請輸入isbn碼=";
    cin>>isbn;
    }while(isbn<0 || isbn>=9999999999);
    for(int i=9;i>0;i--){
        for(int t=1;t<=9;t++){
            c+=isbn/(10^t)%10;
            continue;
        }
    }
    if(c%11==isbn%10){
        cout<<"yes";}
    else{
        cout<<"no";
    }   
}
