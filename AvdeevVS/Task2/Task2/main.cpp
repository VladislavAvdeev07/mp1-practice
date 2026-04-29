#include "addition.hpp"

int main() {
	B* a = new B();
	a->f();

	A* ma = new B[5];
	ma[0].f();
	ma[1] = *a;
	
	A* b = new A(*a);
	b->f();

	A aa;
	B bb = *a;
	B bbb = B(*b);

	B* mc = new C[4];
	mc[1] = *a;
	mc[1].f();

	A** mma = new A * [3];
	mma[0] = a;
	mma[0]->f();

	delete a;
	delete[] ma;
	delete b;
	delete[] mc;
	//delete[] mma; + statical perem.
}