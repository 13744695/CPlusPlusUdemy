#include <iostream>

namespace hitchhikers {
	int the_answer = 42;										// variable declaration & initialised
}

namespace guide {
	int the_answer = 43;
}

int main () {
	std::cout 	<< hitchhikers::the_answer << std::endl
		<< guide::the_answer << std::endl;				// his worked without std::cout at beginning of the second row. once you don't finish the first statement with a semi colon
	return 0;
}
