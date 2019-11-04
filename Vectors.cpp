#include <iostream>
#include <vector>

using namespace std;

int main()
{

	std::vector<int> data = { 1,2,3 };
	// In vectors you write vector you then include the data type and you name the vector in this case it is called "Data"
	data.push_back(7);
	// Next you pass in a value into the the array in this case im using the name of the vector and I'm using the pushback notation
	std::cout << data[3] << std::endl;
	// this line above passes an index so it will display the value "7" as it is the third number inside the new array I essentially created; remember in arrays you count from zero.
    
}

// Above is the syntax for vectors
