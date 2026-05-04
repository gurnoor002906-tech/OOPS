#include <iostream>
using namespace std;

/* =========================================================
   1. SINGLE INHERITANCE
   One base → one derived
   ========================================================= */
class SingleBase {
public:
    void showBase() {
        cout << "SingleBase function\n";
    }
};

class SingleDerived : public SingleBase {
public:
    void showDerived() {
        cout << "SingleDerived function\n";
    }
};

/* =========================================================
   2. MULTIPLE INHERITANCE
   Multiple base → one derived
   ========================================================= */
class Base1 {
public:
    void func1() {
        cout << "Base1 function\n";
    }
};

class Base2 {
public:
    void func2() {
        cout << "Base2 function\n";
    }
};

class MultipleDerived : public Base1, public Base2 {
public:
    void show() {
        cout << "MultipleDerived function\n";
    }
};

/* =========================================================
   3. MULTILEVEL INHERITANCE
   Base → Derived → Derived
   ========================================================= */
class Level1 {
public:
    void func1() {
        cout << "Level1 function\n";
    }
};

class Level2 : public Level1 {
public:
    void func2() {
        cout << "Level2 function\n";
    }
};

class Level3 : public Level2 {
public:
    void func3() {
        cout << "Level3 function\n";
    }
};

/* =========================================================
   4. HIERARCHICAL INHERITANCE
   One base → multiple derived
   ========================================================= */
class Parent {
public:
    void parentFunc() {
        cout << "Parent function\n";
    }
};

class Child1 : public Parent {
public:
    void child1Func() {
        cout << "Child1 function\n";
    }
};

class Child2 : public Parent {
public:
    void child2Func() {
        cout << "Child2 function\n";
    }
};

/* =========================================================
   5. HYBRID INHERITANCE
   Combination (Multilevel + Multiple)
   ========================================================= */
class HybridBase {
public:
    void baseFunc() {
        cout << "HybridBase function\n";
    }
};

class HybridDerived1 : public HybridBase {
public:
    void func1() {
        cout << "HybridDerived1 function\n";
    }
};

class HybridDerived2 : public HybridBase {
public:
    void func2() {
        cout << "HybridDerived2 function\n";
    }
};

// Hybrid: combining both derived classes
class HybridFinal : public HybridDerived1, public HybridDerived2 {
public:
    void finalFunc() {
        cout << "HybridFinal function\n";
    }
};

/* =========================================================
   MAIN FUNCTION
   ========================================================= */
int main() {

    cout << "----- Single Inheritance -----\n";
    SingleDerived s;
    s.showBase();     // inherited
    s.showDerived();

    cout << "\n----- Multiple Inheritance -----\n";
    MultipleDerived m;
    m.func1();        // from Base1
    m.func2();        // from Base2
    m.show();

    cout << "\n----- Multilevel Inheritance -----\n";
    Level3 l;
    l.func1();        // Level1
    l.func2();        // Level2
    l.func3();        // Level3

    cout << "\n----- Hierarchical Inheritance -----\n";
    Child1 c1;
    Child2 c2;
    c1.parentFunc();
    c1.child1Func();
    c2.parentFunc();
    c2.child2Func();

    cout << "\n----- Hybrid Inheritance -----\n";
    HybridFinal h;
    h.func1();        // from HybridDerived1
    h.func2();        // from HybridDerived2
    // h.baseFunc();   ambiguous (two paths)

    return 0;
}
