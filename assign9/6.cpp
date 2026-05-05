#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream file("sample.txt", ios::out | ios::in | ios::trunc);

    string text = "Hello World";

    for(int i=0;i<text.length();i++){
        file.put(text[i]);
        cout<<"Position after writing '"<<text[i]<<"': "<<file.tellp()<<endl;
    }

    file.seekp(6, ios::beg);
    file<<"C++";

    file.close();

    ifstream fin("sample.txt");
    char ch;
    cout<<"\nFinal content:\n";
    while(fin.get(ch))
        cout<<ch;
    fin.close();

    return 0;
}
