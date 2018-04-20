#include <iostream>

/* This class demonstrates use of copy/move constructors/assignments
 * along with funnctions return statements.
 */

class T 
{
public:
	// default constructor
	T() {
		std::cout << "DEFAULT " << this << std::endl;
	}
	// copy constructor: copy content of const t to self
	T(const T& t) {
		std::cout << "COPY.C " << this << " < " << &t << std::endl;
	}
	// move constructor: move content of NON const (will be changed) t to self
	T(T&& t) {
		std::cout << "MOVE.C " << this << " < " << &t << std::endl;
	}

	// copy assign: copy content of const t to self
	T& operator=(const T& t) {
		std::cout << "COPY.A " << this << " < " << &t << std::endl;
		return *this;
	}
	// move assign: move content of NON const (will be changed) t to self
	T& operator=(T&& t) {
		std::cout << "MOVE.A " << this << " < " << &t << std::endl;
		return *this;
	}

	// destructor
	~T() {
		std::cout << "DESTRUCTOR " << this << std::endl;
	}

	T createNewT() {
	        std::cout << "createNewT() " << this << std::endl;
		T t;
		return t;
	}

	T fun() {
	        std::cout << "createNewT() " << this << std::endl;
		T t;
		return std::move(t);
	}
};


// std::move
// choose move() if defined, otherwise copy()

int main(void) {
	T t;
	T r = fun();
	//T u = std::move(t);

	std::cout << "MAIN r " << &r << std::endl;

	return 0;
}
