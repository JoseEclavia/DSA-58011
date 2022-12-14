#include <bits/stdc++.h>
#include <cstring>
#include <iostream>
#include <map>
using namespace std;

char c1, confirm_quantity;
float quantity;
int selectedNum;
double total_amount = 0;
int flag = 0;

// Stores items with their corresponding price
map<string, double> items = {
    { "Coke", 12 },
    { "Sprite", 12 },
    { "Royal", 12 },
    { "Mentos", 1 },
    { "Max", 1 },
    { "Honey", 1 },
    { "Nova", 15 },
    { "Clover", 15 },
    { "Piatos", 15 },
    { "V-cut", 13 }
};
// Stores the selected items with their quantity
map<string, int> selected_items;

// Function to print the bill after shopping
void bill(map<string, double> items, map<string, int> selected_items, float total_amount) {
	cout << "Item	 " << "Quantity	 " << "Cost" << endl;

	for (auto j = selected_items.begin(); j != selected_items.end(); j++) {
		cout << j->first << "	 ";
		cout << j->second << "		 ";
		cout << (selected_items[j->first]) * (items[j->first]) << endl;
	}

	cout << "------------------------------------" << endl;
	cout << "Total amount: "<< total_amount << endl;
	cout << "------------------------------------"  << endl;
	cout << "*****THANK YOU FOR YOUR PURCHASE*****";
}

// print the menu to the user
void menu() {
	cout << "Menu" << endl;
	cout << "= = = = = = = = = = = = =" << endl;
	cout << "(1) Drinks\n(2) Candy\n(3) Chips" << endl;
	cout << "= = = = = = = = = = = = =" << endl;
}

// function to display the drinks
void drinks() {
	cout << "- - - - - - - - - - - - -" << endl;
	cout << "Item		Cost" << endl;
	cout << "(1)Coke		Php 12" << endl;
	cout << "(2)Sprite	Php 12" << endl;
	cout << "(3)Royal	Php 12" << endl;
	cout << "- - - - - - - - - - - - -\n";
}

// function to display the candy
void candy() {
	cout << "- - - - - - - - - - - - -" << endl;
	cout << "Item		Cost" << endl;
	cout << "(1)Mentos	Php 1" << endl;
	cout << "(2)Max		Php 1" << endl;
	cout << "(3)Honey	Php 3" << endl;
	cout << "- - - - - - - - - - - - -\n";
}

// function to display the chips
void chips() {
	cout << "- - - - - - - - - - - -" << endl;
	cout << "Item		Cost" << endl;
	cout << "(1)Nova	        Php 15" << endl;
	cout << "(2)Clover	Php 15" << endl;
	cout << "(3)Piatos	Php 15" << endl;
	cout << "(4)V-cut	Php 13" << endl;
	cout << "- - - - - - - - - - - - -\n";
}

// if drink category is selected
void selectedDrinks() {
	cout << "Do you wish to continue? (for yes press (Y/y), if no press any other letter ): ";
	cin >> c1;

	if (c1 == 'Y' || c1 == 'y') {
		cout << "Enter respective number: ";
		cin >> selectedNum;

		if (selectedNum == 1 || selectedNum == 2 || selectedNum == 3) {

			// selected drink
			if (selectedNum == 1) {
				cout << "Selected Coke" << endl;
				
				do {
					cout << "How many?: ";
					cin >> quantity;
					cout << "You have selected Coke - " << quantity << endl;
					cout << "Are you sure? (for yes press (Y/y), if no press any other letter): ";
					cin >> confirm_quantity;

				} while ((confirm_quantity != 'y' && confirm_quantity != 'Y') || (quantity < 0) || (ceil(quantity) != floor(quantity)));

				if (confirm_quantity == 'y' || confirm_quantity == 'Y') {
					total_amount += quantity * items["Coke"];
					selected_items["Coke"] = quantity;
					cout << "Amount = Php " << total_amount << endl;
				}
			}

			// selected sprite
			if (selectedNum == 2) {
				cout << "Selected Sprite" << endl;
				
				do {
					cout << "How many?: ";
					cin >> quantity;
					cout << "You have selected Sprite - " << quantity << endl;
					cout << "Are you sure? (for yes press (Y/y), if no press any other letter): ";
					cin >> confirm_quantity;
					
				} while ((confirm_quantity != 'y' && confirm_quantity != 'Y') || (quantity < 0) || (ceil(quantity) != floor(quantity)));

				if (confirm_quantity == 'y' || confirm_quantity == 'Y') {

					total_amount += quantity * items["Sprite"];
					selected_items["Sprite"] = quantity;
					cout << "amount = Php " << total_amount << endl;
				}
			}

			// selected royal
			if (selectedNum == 3) {

				cout << "You have selected Royal" << endl;
				
				do {
					cout << "How many?: ";
					cin >> quantity;
					cout << "You have selected Royal - " << quantity << endl;
					cout << "Are you sure? (for yes press (Y/y), if no press any other letter): ";
					cin >> confirm_quantity;
					
				} while ((confirm_quantity != 'y' && confirm_quantity != 'Y') || (quantity < 0) || (ceil(quantity) != floor(quantity)));

				if (confirm_quantity == 'y' || confirm_quantity == 'Y') {
					total_amount += quantity * items["Royal"];
					selected_items["Royal"] = quantity;
					cout << "amount = Php " << total_amount << endl;
				}
			}
		}
		else {
			flag = 1;
		}
	}
	else {
		flag = 1;
	}
}

// if candy category is selected
void selectedCandy() {
	cout << "Do you wish to continue? (for yes press (Y/y), if no press other letter): ";
	cin >> c1;
	
	if (c1 == 'Y' || c1 == 'y') {
		cout << "Enter respective number: ";
		cin >> selectedNum;

		if (selectedNum == 1 || selectedNum == 2 || selectedNum == 3) {

			// selected mentos
			if (selectedNum == 1) {
				cout << "Selected Mentos" << endl;
				
				do {
					cout << "How many?: ";
					cin >> quantity;
					cout << "You have selected Mentos - " << quantity << endl;
					cout << "Are you sure? (for yes press (Y/y), if no press any other letter): ";
					cin >> confirm_quantity;
					
				} while ((confirm_quantity != 'y' && confirm_quantity != 'Y') || (quantity < 0) || (ceil(quantity) != floor(quantity)));

				if (confirm_quantity == 'y' || confirm_quantity == 'Y') {
					total_amount += quantity * items["Mentos"];
					selected_items["Mentos"] = quantity;
					cout << "amount = Php " << total_amount << endl;
				}
			}

			// selected max
			if (selectedNum == 2) {
				cout << "Selected Max" << endl;
				
				do {
					cout << "How many?: ";
					cin >> quantity;
					cout << "You have selected Max - " << quantity << endl;
					cout << "Are you sure? (for yes press (Y/y), if no press other letter): ";
					cin >> confirm_quantity;
					
				} while ((confirm_quantity != 'y' && confirm_quantity != 'Y') || (quantity < 0) || (ceil(quantity) != floor(quantity)));

				if (confirm_quantity == 'y' || confirm_quantity == 'Y') {
					total_amount += quantity * items["Max"];
					selected_items["Max"] = quantity;
					cout << "amount = Php " << total_amount << endl;
				}
			}

			// selected honey
			if (selectedNum == 3) {
				cout << "Selected Honey" << endl;
				
				do {
					cout << "How many?: ";
					cin >> quantity;
					cout << "You have selected Honey - " << quantity << endl;
					cout << "Are you sure? (for yes press (Y/y), if no press any other letter): ";
					cin >> confirm_quantity;
					
				} while ((confirm_quantity != 'y' && confirm_quantity != 'Y') || (quantity < 0) || (ceil(quantity) != floor(quantity)));

				if (confirm_quantity == 'y' || confirm_quantity == 'Y') {
					total_amount += quantity * items["Honey"];
					selected_items["Honey"] = quantity;
					cout << "amount = Php " << total_amount << endl;
				}
			}
		}
		else {
			flag = 1;
		}
	}
	else {
		flag = 1;
	}
}

// if chips category is selected
void selectedChips() {
	cout << "Do you wish to continue? (for yes press (Y/y), if no press any other letter): ";
	cin >> c1;
	
	if (c1 == 'Y' || c1 == 'y') {
		cout << "Enter the respective number: ";
		cin >> selectedNum;
		
		if (selectedNum == 1 || selectedNum == 2 || selectedNum == 3 || selectedNum == 4) {

			// selected nova
			if (selectedNum == 1) {
				cout << "Selected Nova" << endl;
				
				do {
					cout << "How many?: ";
					cin >> quantity;
					cout << "You have selected Nova - " << quantity << endl;
					cout << "Are you sure? (for yes press (Y/y), if no press any other letter): ";
					cin >> confirm_quantity;
					
				} while ((confirm_quantity != 'y' && confirm_quantity != 'Y') || (quantity < 0) || (ceil(quantity) != floor(quantity)));

				if (confirm_quantity == 'y' || confirm_quantity == 'Y') {
					total_amount += quantity * items["Nova"];
					selected_items["Nova"] = quantity;
					cout << "amount = Php " << total_amount << endl;
				}
			}

			// selected clover
			if (selectedNum == 2) {
				cout << "Selected Clover" << endl;
				
				do {
					cout << "How many?: ";
					cin >> quantity;
					cout << "You have selected Clover - " << quantity << endl;
					cout << "Are you sure? (for yes press (Y/y), if no press any other letter): ";
					cin >> confirm_quantity;
					
				} while ((confirm_quantity != 'y' && confirm_quantity != 'Y') || (quantity < 0) || (ceil(quantity) != floor(quantity)));

				if (confirm_quantity == 'y' || confirm_quantity == 'Y') {
					total_amount += quantity * items["Clover"];
					selected_items["Clover"] = quantity;
					cout << "amount = Php " << total_amount << endl;
				}
			}

			// selected piatos
			if (selectedNum == 3) {
				cout << "Selected Piatos" << endl;
				
				do {
					cout << "How many?: ";
					cin >> quantity;
					cout << "You have selected Piatos - " << quantity << endl;
					cout << "Are you sure? (for yes press (Y/y), if no press any other letter): ";
					cin >> confirm_quantity;
					
				} while ((confirm_quantity != 'y' && confirm_quantity != 'Y') || (quantity < 0) || (ceil(quantity) != floor(quantity)));

				if (confirm_quantity == 'y' || confirm_quantity == 'Y') {
					total_amount += quantity * items["Piatos"];
					selected_items["Piatos"] = quantity;
					cout << "amount = Php " << total_amount << endl;
				}
			}

			// selected v-cut
			if (selectedNum == 4) {
				cout << "Selected V-cut" << endl;
				
				do {
					cout << "How many?: ";
					cin >> quantity;
					cout << "You have selected V-cut - " << quantity << endl;
					cout << "Are you sure? (for yes press (Y/y), if no press any other letter): ";
					cin >> confirm_quantity;
					
				} while ((confirm_quantity != 'y' && confirm_quantity != 'Y') || (quantity < 0) || (ceil(quantity) != floor(quantity)));

				if (confirm_quantity == 'y' || confirm_quantity == 'Y') {
					total_amount += quantity * items["V-cut"];
					selected_items["V-cut"] = quantity;
					cout << "amount = Php " << total_amount << endl;
				}
			}
		}
		else {
			flag = 1;
		}
	}
	else {
		flag = 1;
	}
}

// main code
int main(){
	do {
		menu();
		cout << "Do you wish to continue? (for yes press (Y/y), if no press any other letter): ";
		char c;
		cin >> c;
		if (c == 'Y' || c == 'y') {
			cout << "Enter respective number: ";
			int num;
			cin >> num;
			if (num == 1 || num == 2 || num == 3) {
				switch (num) {
				case 1:
					// for drinks
					drinks();
					selectedDrinks();
					break;

				case 2:
					// for candy
					candy();
					selectedCandy();
					break;

				case 3:
					// for chips
					chips();
					selectedChips();
					break;
				}
			}
			else {
				flag = 1;
			}
		}
		else {
			flag = 1;
		}

	} while (flag == 0);

	// print bill
	bill(items, selected_items, total_amount);
}
