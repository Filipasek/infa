#include <iostream>
#include <fstream>
using namespace std;

void writing_chars()
{
    ifstream myfile1("slowa1.txt");
    ofstream myfile("wynikSlowa2.txt");
    if (myfile.is_open() && myfile1.is_open()){
        char c;
        while (myfile1.get(c)){
            myfile << c;
        }
        myfile1.close();
        myfile.close();
    }
    else{
        cout << "Couldn't open the file";
    }
}

void writing()
{
    ifstream myfile1("slowa1.txt");
    ofstream myfile("wynikSlowa1.txt");
    if (myfile.is_open() && myfile1.is_open()){
        string text;
        while (getline(myfile1, text))
            myfile << text+'\n';
        myfile1.close();
        myfile.close();
    }
    else{
        cout << "Couldn't open the file";
    }


    //ofstream myfile("wynikSlowa1.txt", std::ios::app);
}
int main()
{
    writing_chars();
    writing();
    return 0;
}
