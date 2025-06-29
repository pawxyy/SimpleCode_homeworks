// Напишите функцию, меняющую местами значения переменных с помощью указателей.
#include<iostream>
using namespace std;

void Change(int *pa, int *pb){
    int temp;
    temp = (*pa);
    (*pa) = (*pb);
    (*pb) = temp;
}

int main(){
    int a = 1, b = 2;
    cout<< "a "<< a << endl;
    cout<< "b "<< b << endl;

    cout<<"Меняем местами.."<<endl;

    Change(&a, &b);
    cout<< "a "<< a << endl;
    cout<< "b "<< b << endl;
}
