#include < iostream>
#include < vector>
#include < string>

using namespace std;

class GroceryStore {       // The class
public:
	string item1;
	GroceryStore(string item, int price, int wallet) {
		item1 = item;
	}
};


int main()
{
	GroceryStore Bob("milk", 15, 20);  //Call class
	cout << Bob.item1 << endl;
	return 0;
}