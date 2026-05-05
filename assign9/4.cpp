#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char str[100];
    int length = 0;

    cout<<"Enter a string: ";
    cin.getline(str,100);

    for(int i=0; str[i] != '\0'; i++){
        length++;
    }

    cout<<"Length of string: "<<length<<endl;

    ofstream fout("DATA.TXT");
    fout<<str;
    fout.close();

    ifstream fin("DATA.TXT");
    char ch;

    cout<<"Content from file: ";
    while(fin.get(ch)){
        cout<<ch;
    }
    fin.close();

    return 0;
}
