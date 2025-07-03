#include<iostream>
using namespace std;

template<class T>
void change(T &a, T &b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    double a,b;
    cin>>a;
    cin>>b;
    cout<<"a\t"<<a<<endl;
    cout<<"b\t"<<b<<endl;

    cout<<"Change..."<<endl;
    cout<<"a\t"<<a<<endl;
    cout<<"b\t"<<b<<endl;

}