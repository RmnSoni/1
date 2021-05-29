#include <iostream>
#include <string>

using namespace std;



string XorFun(string &divident, string divisor, int initindex ){
    int j= initindex;
    while (divident[j]=='0' && j<12){
        j++;
    }
    if (j<8){
        for (int i=0;i<5;i++){
            if(divident[i+j]==divisor[i]){
                divident[i+j]=='0';
            }else divident[i+j]=='1';
        }
        return( XorFun(divident,divisor,j-1 ));
    }
    else{
        return divident.substr(8,4);
    }
}


string givefinal(string message, string divisor){
    string divident=message+"0000";
    return message + XorFun(divident, divisor, 0);
}


int main(){
    string divisor="10110";
    string message= "10110010";
    string ans = givefinal(message, divisor);
    cout << "hello world";
    cout << ans;

    return 0;
}