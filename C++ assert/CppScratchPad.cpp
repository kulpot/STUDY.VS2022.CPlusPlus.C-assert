// ---------------------------- C++ assert -----------------------------------------------------------
// ref link:https://www.youtube.com/watch?v=72dt8Fvr7x8&list=PLRwVmtr-pp056ahRbFrYbeAnIu2qvXPFe&index=5

// assert - boolean expresiong - true(nochange) - false(someError)
// #ifdef NDEBUG
// 
// #define assert(expression) ((void)0)		<-- compile out
// 
// #else
// 
// _ACRTIMP void __cdecl _wassert(
// 	_In_z_ wchar_t const* _Message,
// 	_In_z_ wchar_t const* _File,
// 	_In_   unsigned       _Line
// );
// 
// #define assert(expression) (void)(                                                       \
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
	//assert(j == 24);  // assert false , output:assertion failed: j == 24
	cout << "continuing" << endl;

	

}