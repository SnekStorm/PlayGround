
#include <iostream>
#include <array>
#include "functions\message.cpp"
#include "functions\typefinder.cpp"


typefinder myClass;

message taskMain;

using namespace std;

void temp(int * item)
{
    (*item)++;
}

int main()
{
    
    int x[2] = {5,7};  
    for (auto i = begin(x); i < end(x); ++i)
    {
        cout << *i << " x " << endl;
    }
    
    for (auto &&i : x)
    {
        cout << i << " x " << endl;
    }
    

    int t = 3;
    cout << t << " ";
    cout << ++t << " ";
    cout << t << " ";
    cout << t++ << " ";
    cout << t << " ";

    (t > 4) ? t = 1 : t = 0;
    cout << endl << t << " "<< endl;

    myClass.printer(t);
    myClass.printer(x);

    int z = 5;
    int *y;
    y = &z;
    myClass.printer(*y);
    temp(y);
    myClass.printer(*y);

    cout << taskMain.getInput() << endl;
    taskMain.input.msg = 5;
    cout << taskMain.getInput() << endl;
    
    
}