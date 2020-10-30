#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

void zapiszWynik(string text){
    ofstream myfile("wynik4.txt", std::ios::app);
    if(myfile.is_open()){
        myfile << text+'\n';
        myfile.close();
    }else{
        cout<<"ERROR";
    }
}

void cosDziwnego(){
    zapiszWynik("\n Zadanie 4.3 \n");
    ifstream myfile("przyklad.txt");
    if(myfile.is_open()){
        string text;
        while(getline(myfile, text)){
            int lowest = 90;
            int highest = 65;
            for(int i = 0; i < text.length(); i++){
                char c = text[i];
                if(int(c) < lowest) lowest = int(c);
                if(int(c) > highest) highest = int(c);
            }
            if((highest - lowest) <= 10){
                zapiszWynik(text);
            }
        }
    }
}


void mostCharacters(){
    zapiszWynik("\n Zadanie 4.2 \n");
    string most;
    int length = 0;
    ifstream myfile("przyklad.txt");
    if(myfile.is_open()){
        string text;
        while(getline(myfile, text)){
            int arr[25] = {0};
            int lengt = 0;
            for(int i = 0; i < text.length(); i++){
                if(arr[int(text[i]) - 65] == 0){
                    arr[int(text[i]) - 65] = 1;
                    lengt++;
                }
            }
            if(lengt > length){
                length = lengt;
                most = text;
            }
        }
        myfile.close();
    }
    zapiszWynik(most);
}

void read(){
    zapiszWynik("\n Zadanie 4.1 \n");
    string arr[1000];
    string stringed;
    ifstream myfile("przyklad.txt");
    if(myfile.is_open()){
        int i = 0;
        string text;
        while(getline(myfile, text)){
            i++;
            if(i%40 == 0){
                stringed = stringed + text[9];
            }
        }

        zapiszWynik("stringed");

        myfile.close();
    }else{
        cout<<"Error";
    }
}
int main()
{

    read();
    mostCharacters();
    cosDziwnego();

    return 0;
}
