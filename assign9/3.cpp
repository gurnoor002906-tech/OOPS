#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream fin("SOURCE.TXT");
    ofstream fout("DEST.TXT");

    char ch;

    while(fin.get(ch)){
        fout.put(ch);
    }

    fin.close();
    fout.close();

    cout<<"File copied successfully";

    return 0;
}
