#include < iostream>
#include < vector>
#include < string>

using namespace std;

class GroceryStore {       // The class
public:
	string item1;
	int price1;
	int wallet_money;

	GroceryStore(string item, int price, int wallet) {
		item1 = item;
		price1 = price;
		wallet_money = wallet;
	}
	bool Check() {
		if (price1 > wallet_money) {
			cout << "You cannot afford " << item1 << endl;
			return false;
		}
		else {
			cout << "You can afford " << item1 << endl;
			return true;
		}
	}
};


int main()
{
	GroceryStore Bob("milk", 15, 20);  //Call class
	Bob.Check();
	return 0;
}