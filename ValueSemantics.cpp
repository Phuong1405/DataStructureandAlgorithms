#include <iostream>
using namespace std;
int main(){
    int a = 42; 
    int b = a;
    cout << "Int A: " <<a<< endl;
    cout << "Int B: " <<b<< endl;
    cout << "Changing value of b" <<endl;
    b = 9;
    cout << "Int A: " <<a<< endl;
    cout << "Int B: " <<b<< endl;
    //value of b is changing and a is the same
    cout <<endl;
    cout << "resetting"<<endl; //2 spaces
    a = 42; 
    b = a;
    int& c = a;
    cout << "Int A: " <<a<< endl;
    cout << "Int B: " <<b<< endl;
    cout << "Int reference C: " <<c<< endl;
    cout << "Changing value of C"<< endl;
    c = 10;
    cout << "Int A: " <<a<< endl;
    cout << "Int B: " <<b<< endl;
    cout << "Int reference C: " <<c<< endl;

    cout <<endl;
    cout << "resetting"<< endl;
    a = 42; 
    b = a;
    int* d = &a;
    cout << "Int A: " <<a<< endl;
    cout << "Int B: " <<b<< endl;
    cout << "Int pointed value d: " <<*d<< endl;
    cout << "Changing value of the value which is pointed by d" <<endl;
    *d = 50;
    cout << "Int A: " <<a<< endl;
    cout << "Int B: " <<b<< endl;
    cout << "Int pointed value d: " <<*d<< endl;

    cout <<endl;
    cout << "resetting"<< endl;
    a = 42; 
    b = a;
    int* n = &a;
    cout << "Int A: " <<a<< endl;
    cout << "Int B: " <<b<< endl;
    cout << "Int pointed value n: " <<n<< endl;
    cout << "Changing value of the value which is pointed by n" <<endl;
    *n = 50;
    cout << "Int A: " <<a<< endl;
    cout << "Int B: " <<b<< endl;
    cout << "Int pointed value d: " <<n<< endl;

    return 0;
}