#include <iostream>
#include <fstream>
using namespace std;

void writing()
{
    ofstream myfile("text.txt");
    if (myfile.is_open()){
        myfile << "this is new line\n";
        myfile << "this is another new line";
        myfile.close();
    }
    else{
        cout << "Couldn't open the file";
    }
}
void reading_chars()
{
    string text;
    ifstream myfile("slowa1.txt");
    if (myfile.is_open()){
        char c;
        while (myfile.get(c))          // loop getting single characters
            cout << c;
        myfile.close();
    }else{
        cout << "Couldn't open the file";
    }
}

void reading_lines()
{
    string text;
    ifstream myfile("slowa1.txt");
    if (myfile.is_open()){
        while (getline(myfile, text))
            cout << text << '\n';
        myfile.close();
    }else{
        cout << "Couldn't open the file";
    }
}
int main()
{
    reading_chars();
    cout<<endl;
    reading_lines();
    return 0;
}
