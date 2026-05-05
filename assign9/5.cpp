#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream file("A-Z.txt", ios::out);
    for(char ch='A'; ch<='Z'; ch++)
        file<<ch;
    file.close();

    file.open("A-Z.txt", ios::in | ios::out);

    file.seekg(9, ios::beg);
    char ch;
    file.get(ch);
    cout<<"10th character: "<<ch<<endl;

    file.seekp(4, ios::beg);
    file.put('X');

    file.seekg(0, ios::end);
    cout<<"File size: "<<file.tellg()<<endl;

    file.seekg(-1, ios::end);
    file.get(ch);
    cout<<"Last character: "<<ch<<endl;

    file.close();

    ofstream fout("data.txt");
    fout<<"Hello world\nThis is file handling\nC++ is powerful";
    fout.close();

    ifstream fin("data.txt");

    fin.seekg(10, ios::beg);

    cout<<"Current position: "<<fin.tellg()<<endl;

    cout<<"Remaining content:\n";
    while(fin.get(ch))
        cout<<ch;

    fin.close();

    return 0;
}
