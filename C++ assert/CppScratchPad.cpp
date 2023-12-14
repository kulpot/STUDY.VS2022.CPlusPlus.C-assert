// ---------------------------- C++ assert -----------------------------------------------------------
// ref link:https://www.youtube.com/watch?v=72dt8Fvr7x8&list=PLRwVmtr-pp056ahRbFrYbeAnIu2qvXPFe&index=5

// assert - boolean expresiong - true(nochange) - false(someError)
//#define assert(expression) (void)(                                                       \
	//            (!!(expression)) ||                                                              \
	//            (_wassert(_CRT_WIDE(#expression), _CRT_WIDE(__FILE__), (unsigned)(__LINE__)), 0) \

#include <cassert>
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int i = 5;
	int j = i * i;
	assert(j == 25);  // assert true
	assert(j == 24);  // assert false , output:assertion failed: j == 24
	cout << "continuing" << endl;

	

}