#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("input.txt");
    fout<<"Hello World";
    fout.close();
    return 0;
}
