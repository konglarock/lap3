#include<iostream>

using namespace std;

int main(){
    float sum=0,num,x=6;
    while (x<=19){
        sum=sum+(1/x);
        x=x+1;
    }
    cout<<sum;

    return 0;
}
