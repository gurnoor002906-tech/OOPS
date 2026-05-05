#include<iostream>
using namespace std;

class Matrix{
    int a[10][10], r, c;

public:
    void input(){
        cout<<"Enter rows and cols: ";
        cin>>r>>c;
        cout<<"Enter elements:\n";
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                cin>>a[i][j];
    }

    void display(){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
    }

    friend Matrix operator*(Matrix, Matrix);
};

Matrix operator*(Matrix m1, Matrix m2){
    Matrix temp;
    temp.r = m1.r;
    temp.c = m2.c;

    for(int i=0;i<temp.r;i++){
        for(int j=0;j<temp.c;j++){
            temp.a[i][j]=0;
            for(int k=0;k<m1.c;k++){
                temp.a[i][j] += m1.a[i][k]*m2.a[k][j];
            }
        }
    }
    return temp;
}

int main(){
    Matrix m1,m2,m3;

    cout<<"Matrix 1:\n";
    m1.input();

    cout<<"Matrix 2:\n";
    m2.input();

    m3 = m1 * m2;

    cout<<"Result:\n";
    m3.display();

    return 0;
}
