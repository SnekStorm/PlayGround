#include <iostream>
#include <fstream>
#include <list>
using namespace std;

list<int> Fake_resistance{0,1,2,4,8,16,32,64,128,256};
list<int> Real_resistance{0,1,3,5,6,14,30,65,120,260};

void showlist(list<int> g)
{
    list<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

void botAim(int goal, list<int> listan)
{
    int current = 0;
    list<int>::reverse_iterator it;
    
    for (it = listan.rbegin(); it != listan.rend(); ++it)
        if (goal >= (current + *it))
            current += *it;

    
    cout << "Goal: " << goal << " Found: " << current << endl;
}

void setRes(list<int> listan)
{
    ofstream MyFile("resistance.txt");

    // Write to the file
    list<int>::iterator it;
    for (it = listan.begin(); it != listan.end(); ++it)
        MyFile << *it << endl;

    // Close the file
    MyFile.close();
}

list<int> getRes()
{
    list<int> temp;
    string myText;

    // Read from the text file
    ifstream MyReadFile("resistance.txt");

    while (getline (MyReadFile, myText)) 
        temp.push_back(stoi(myText));

    MyReadFile.close();

    return temp;
}


int main()
{
    int goal = 0;
    list<int> resistance;

    cout << "Goal: ";
    cin >> goal;
//###### TEST #############
    botAim(goal, Real_resistance);
    botAim(goal, Fake_resistance);
    
//#########################################
    
    // Read from file
    resistance = getRes();
    showlist(resistance);
    botAim(goal, resistance);
    // Write values to file, shouldn't execute every time only during calibration
    setRes(resistance);
}