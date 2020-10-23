#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void writing()
{
    ofstream myfile("text.txt");
    if (myfile.is_open())
    {
        myfile << "this is new line\n";
        myfile << "this is another new line";
        myfile.close();
    }
    else
    {
        cout << "Couldn't open the file";
    }
}
void reading()
{
    string text;
    ifstream myfile("text.txt");
    if (myfile.is_open())
    {
        while (getline(myfile, text))
        {
            cout << text << '\n';
        }
        myfile.close();
    }else
    {
        cout << "Couldn't open the file";
    }
}
int main()
{
    // writing();
    reading();
    return 0;
}