#include<iostream>
using namespace std;

int sum(int a, int b, int c){
    return a+b+c;
}

float subtract(float a, float b){
    return a+b;
}
int main(){
    cout<<"mi codigo"<<endl;

    cout<<sum(4,4,4)<<endl;

    cout<<subtract(4,4)<<endl;

    return 0;
}