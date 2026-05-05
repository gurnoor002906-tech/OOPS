#include <iostream>
#include <string>
using namespace std;

class Account{
private:
    const long accNo;
    long txnId;
    string type;
    double bal;

    static long nextId;

public:
    Account(long a, double b) : accNo(a){
        bal = b;
        txnId = 0;
        type = "None";
    }

    long depositAmount(const long to, const long from, const double amt){
        if (accNo == to){
            bal += amt;
            type = "Credit";
            txnId = ++nextId;
        }
        return txnId;
    }

    long creditAmount(const long to, const long from, const double amt){
        if (accNo == from && bal >= amt){
            bal -= amt;
            type = "Debit";
            txnId = ++nextId;
        }
        return txnId;
    }

    void displayDetails() const{
        cout << "\nAcc No: " << accNo;
        cout << "\nBal: " << bal;
        cout << "\nTxn Id: " << txnId;
        cout << "\nType: " << type << endl;
    }
};

long Account::nextId = 1000;

int main(){
    Account a1(101, 5000), a2(102, 3000);

    a1.depositAmount(101, 102, 1000);
    a2.creditAmount(101, 102, 500);

    a1.displayDetails();
    a2.displayDetails();

    return 0;
}
