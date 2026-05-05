#include<iostream>
#include<fstream>
#include<cctype>
using namespace std;

void countAlphabets(){
    ifstream fin("NOTES.TXT");
    char ch;
    int count = 0;

    while(fin.get(ch)){
        if(isalpha(ch)){
            count++;
        }
    }

    fin.close();
    cout<<"Number of alphabets: "<<count<<endl;
}

int main(){
    countAlphabets();
    return 0;
}
