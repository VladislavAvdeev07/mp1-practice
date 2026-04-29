#include <iostream>

using namespace std;

class  A {
public:
	A() { cout << "A::A()" << endl; };
	A(const A&) { cout << "A::A(const A&)" << endl; };
	const A& operator=(const A&) { cout << "A::operator=(const A&)" << endl; return *this; };
	virtual ~A() { cout << "A::~A()" << endl; };
	virtual void f() { cout << "A::f()" << endl; };
};
class B : public A {
public:
	B() { cout << "B::B()" << endl; };
	B(const B&) { cout << "B::B(const B&)" << endl; };
	B(const A&) { cout << "B::B(const A&)" << endl; };
	const B& operator=(const B&) { cout << "B::operator=(const B&)" << endl; return *this; };
	virtual ~B() { cout << "B::~B()" << endl; };
	virtual void f() { cout << "B::f()" << endl; };
};
class C : public B {
public:
	C() { cout << "C::C()" << endl; };
	C(const C&) { cout << "C::C(const C&)" << endl; };
	const C& operator=(const C&) { cout << "C::operator=(const C&)" << endl; return *this; };
	~C() { cout << "C::~C()" << endl; };
	void f() { cout << "C::f()" << endl; };
};