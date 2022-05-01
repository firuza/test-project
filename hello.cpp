#include <iostream>

bool testFunction() {
	bool mano=false;

	for (int i=0; i<no_circles; i++) {
		if (sqrt(((x-a[i])*(x-a[i]))+((y-b[i])*(y-b[i])))<20) {
			mano=true;
			break;
		}
	}
	return mano;//we are returning the true when it is inside of the snake @@@@@@@@    
}

int main()
{
    std::cout << "Hello, World!" << std::endl;
}
