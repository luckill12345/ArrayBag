#include <iostream>
#include <string>
#include <vector>
#include "ArrayBag.h"
using namespace std;

void displayBag(ArrayBag<string>& bag)
{
	cout << "The bag contains " << bag.getCurrentSize() << " items: " << endl;
	vector<string> bagItems = bag.toVector();

	int numberOfEntries = (int)bagItems.size();
	for(int i=0; i<numberOfEntries; i++) {
		cout << bagItems[i] << " ";
	}
	cout << endl << endl;
}

void bagTester(ArrayBag<string>& bag) {
	cout << "isEmpty: returns " << bag.isEmpty() << "; should be 1 (true)" << endl;
	displayBag(bag);

	string items[] = {"one", "two", "three", "four", "five", "one"};
	cout << "Add 6 items ot the bag: " << endl;
	for(int i=0; i<6; i++) {
		bag.add(items[i]);
	}
	displayBag(bag);

	cout << "isEmpty: returns " << bag.isEmpty() << "; should be 0 (false)" << endl;
	cout << "getCurrentSize: returns " << bag.getCurrentSize() << "; should be 6" << endl;
	cout << "Try another entry: add(\"extra\") returns " << bag.add("extra") << endl;
	cout << "frequency of \"five\": " << bag.getFrequencyOf("five") << "; should be 1" <<endl;
	cout << "frequency of \"one\": " << bag.getFrequencyOf("one") << "; should be 2" <<endl;
	cout << "contains \"four\": " << bag.getFrequencyOf("four") << "; should be 1 (true)" <<endl;
	cout << "contains \"extra\": " << bag.getFrequencyOf("extra") << "; should be 0 (false)" <<endl;
}

int main() {
	ArrayBag<string> bag;
  cout << "Testing the Array-Based Bag:" << endl;
  cout << "The intitial bag is empty." << endl;
  bagTester(bag);
	cout << "All done!" << endl;
}