# Bag
"Bag" is a C++ librari that makes vector easyier then use. There are konvenient funktions like "remove", "indexOf" nere.

# Examples

```
#include <iostream>
#include "bag.h"

float fact(int N)
{
	/* The factorial of one is equal to one, the factorial of zero is equal to zero.
	* Otherwise, the factorial is equal to the factorial of the number - 1.
	*/
	if (N == 0 || N == 1)
	{
		return N;
	}
	else
	{
		return N * fact(N - 1);
	}
}
int main()
{
	bag<int> factorials; //initialize the bag
	
	for (int i = 0;i < 13;i++) factorials.add(fact(i)); //add factorials to the bag

	factorials.printElements(); //print bag elements

	for (int i = 0; i < 1; i++) cout << "========================" << "\n"; //dividing line
	
	for (int i = 0; i < 10; i++) factorials.remove(0); //remove the first element through a loop
	
	factorials.printElements();//print bag elements

	for (int i = 0; i < 1; i++) cout << "========================" << "\n"; //dividing line

	cout << factorials.indexOf(479001600) << "\n"; //find the index by value

	for (int i = 0; i < 1; i++) cout << "========================" << "\n"; //dividing line

	factorials.remove(factorials.indexOf(479001600)); //we are removing an element without specifying an index.

	factorials.printElements(" element"); //print bag elements
}
```
