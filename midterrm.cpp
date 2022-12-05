#include <iostream> 
#include <iomanip> 
using namespace std;

int choice, details, change;

int qty1 = 0, qty2 = 0, qty3 = 0, qty4 = 0, qty5 = 0, qty6 = 0, qty7 = 0; // drinks 
int qty8 = 0, qty9 = 0, qty10 = 0, qty11 = 0, qty12 = 0, qty13 = 0, qty14 = 0; 
int qty15 = 0, qty16 = 0, qty17 = 0, qty18 = 0, qty19 = 0, qty20 = 0, qty21 = 0; // candy
int qty22 = 0, qty23 = 0, qty24 = 0, qty25 = 0, qty26 = 0, qty27 = 0; // detergent
int qty28 = 0, qty29 = 0, qty30 = 0, qty31 = 0, qty32 = 0, qty33 = 0, qty34 = 0, qty35 = 0, qty36 = 0; // canned goods
int qty37 = 0, qty38 = 0, qty39 = 0, qty40 = 0, qty41 = 0, qty42 = 0; // chips

int price1 = 12, price2 = 27, price3 = 12, price4 = 27, price5 = 12, price6 = 27, price7 = 63;  // drinks prices
int price8 = 120, price9 = 55, price10 = 20, price11 = 20, price12 = 20, price13 = 10, price14 = 20;
int price15 = 1, price16 = 1, price17 = 1, price18 = 1, price19 = 1, price20 = 2, price21 = 3; // candy prices
int price22 = 7, price23 = 15, price24 = 7, price25 = 15, price26 = 7, price27 = 15; // detergent prices
int price28 = 23, price29 = 35, price30 = 47, price31 = 23, price32 = 35, price33 = 47, price34 = 23, price35 = 35, price36 = 47; // canned goods prices
int price37 = 15, price38 = 15, price39 = 15, price40 = 15, price41 = 15, price42 = 15; // chips prices

int nqty1, nqty2, nqty3, nqty4, nqty5, nqty6, nqty7, nqty8, nqty9, nqty10; // variables to store new quantity values
int nqty11, nqty12, nqty13, nqty14, nqty15, nqty16, nqty17, nqty18, nqty19, nqty20;
int nqty21, nqty22, nqty23, nqty24, nqty25, nqty26, nqty27, nqty28, nqty29, nqty30;
int nqty31, nqty32, nqty33, nqty34, nqty35, nqty36, nqty37, nqty38, nqty39, nqty40, nqty41, nqty42;

int total1, total2, total3, total4, total5, total6, total7, total8, total9, total10; // variables to store new price values
int total11, total12, total13, total14, total15, total16, total17, total18, total19, total20;
int total21, total22, total23, total24, total25, total26, total27, total28, total29, total30;
int total31, total32, total33, total34, total35, total36, total37, total38, total39, total40, total41, total42;

int listprice, totalprice; 

void drinks() { // drinks list
	system("cls");
	cout << "============================================================" << endl;
	cout << "				DRINKS" << endl;
	cout << "============================================================" << endl;
	cout << " ID" << "\tPrice" << "\t\tProduct" << endl;
	cout << "============================================================" << endl;
	cout << " 1" << "\tPhp 12" << "\t\tCoke" << endl;
	cout << " 2" << "\tPhp 27" << "\t\tCoke 1 ltr" << endl;
	cout << " 3" << "\tPhp 12" << "\t\tSprite" << endl;
	cout << " 4" << "\tPhp 27" << "\t\tSprite 1 ltr" << endl;
	cout << " 5" << "\tPhp 12" << "\t\tRoyal" << endl;
	cout << " 6" << "\tPhp 27" << "\t\tRoyal 1 ltr" << endl;
	cout << " 7" << "\tPhp 63" << "\t\tRed Horse(small)" << endl;
	cout << " 8" << "\tPhp 120" << "\t\tRed Horse(big)" << endl;
	cout << " 9" << "\tPhp 55" << "\t\tSan Miguel" << endl;
	cout << " 10" << "\tPhp 20" << "\t\tTanduay Ice Red" << endl;
	cout << " 11" << "\tPhp 20" << "\t\tTanduay Ice Blue" << endl;
	cout << " 12" << "\tPhp 20" << "\t\tTanduay Ice White" << endl;
	cout << " 13" << "\tPhp 10" << "\t\tBottled Water(small)" << endl;
	cout << " 14" << "\tPhp 20" << "\t\tBottled Water(big)" << endl;
	cout << "============================================================" << endl;
	cout << endl;
}

void candy() { // candy list
	system("cls");
	cout << "============================================================" << endl;
	cout << "				CANDY" << endl;
	cout << "============================================================" << endl;
	cout << " ID" << "\tPric" << "\t\tProduct"  << endl;
	cout << "============================================================" << endl;
	cout << " 15" << "\tPhp 1" << "\t\tMax Red" << endl;
	cout << " 16" << "\tPhp 1" << "\t\tMax Yellow" << endl;
	cout << " 17" << "\tPhp 1" << "\t\tMax Orange" << endl;
	cout << " 18" << "\tPhp 1" << "\t\tMentos" << endl;
	cout << " 19" << "\tPhp 1" << "\t\tPochi" << endl;
	cout << " 20" << "\tPhp 2" << "\t\tWhite Rabbbit" << endl;
	cout << " 21" << "\tPhp 3" << "\t\tHoney Choco" << endl;
	cout << "============================================================" << endl;
	cout << endl;
}

void deter() { // detergent list
	system("cls");
	cout << "============================================================" << endl;
	cout << "			DETERGENTS" << endl;
	cout << "============================================================" << endl;
	cout << " ID" << "\tPrice" << "\t\tProduct" << endl;
	cout << "============================================================" << endl;
	cout << " 22" << "\tPhp 7" << "\t\tSurf(small)" << endl;
	cout << " 23" << "\tPhp 15" << "\t\tSurf(big)" << endl;
	cout << " 24" << "\tPhp 7" << "\t\tTide(small)" << endl;
	cout << " 25" << "\tPhp 15" << "\t\tTide(big)" << endl;
	cout << " 26" << "\tPhp 7" << "\t\tChampion(small)" << endl;
	cout << " 27" << "\tPhp 15" << "\t\tChampion(big)" << endl;
	cout << "============================================================" << endl;
	cout << endl;
}

void can() { // canned goods list
	system("cls");
	cout << "============================================================" << endl;
	cout << "			CANNED GOODS" << endl;
	cout << "============================================================" << endl;
	cout << " ID" << "\tPrice" << "\t\tProduct" << endl;
	cout << "============================================================" << endl;
	cout << " 28" << "\tPhp 23" << "\t\tCentury Tuna(small)" << endl;
	cout << " 29" << "\tPhp 35" << "\t\tCentury Tuna(medium)" << endl;
	cout << " 30" << "\tPhp 47" << "\t\tCentury Tuna(large)" << endl;
	cout << " 31" << "\tPhp 23" << "\t\tArgentina Corned Beef(small)" << endl;
	cout << " 32" << "\tPhp 35" << "\t\tArgentina Corned Beef(medium)" << endl;
	cout << " 33" << "\tPhp 47" << "\t\tArgentina Corned Beef(large)" << endl;
	cout << " 34" << "\tPhp 23" << "\t\tSan Marino(small)" << endl;
	cout << " 35" << "\tPhp 35" << "\t\tSan Marino(medium)" << endl;
	cout << " 36" << "\tPhp 47" << "\t\tSan Marino(large)" << endl;
	cout << "============================================================" << endl;
	cout << endl;
}

void chips() { // chips list
	system("cls");
	cout << "============================================================" << endl;
	cout << "			CHIPS" << endl;
	cout << "============================================================" << endl;
	cout << " ID" << "/tPrice" << "/t/tProduct" << endl;
	cout << "============================================================" << endl;
	cout << " 37" << "\tPhp 15" << "\t\tPiatos Cheese" << endl;
	cout << " 38" << "\tPhp 15" << "\t\tPiatos Barbeque" << endl;
	cout << " 39" << "\tPhp 15" << "\t\tNove Cheese" << endl;
	cout << " 40" << "\tPhp 15" << "\t\tNova Barbeque" << endl;
	cout << " 41" << "\tPhp 15" << "\t\tV Cut Cheese" << endl;
	cout << " 42" << "\tPhp 15" << "\t\tV Cut Barbeque" << endl;
	cout << "============================================================" << endl;
	cout << endl;
}

void add() { // add another product to cart
	int choice, quantity;
	cout << " Enter Product Id: ";
	cin >> choice;

	while (choice >= 43) {
		cout << " Choice is out of range, please try again" << endl;
		cout << " Enter Product Id: ";
		cin >> choice;
	}

	if (choice == 1) {
		cout << " How many?: ";
		cin >> nqty1;
		qty1 = qty1 + nqty1;
	}
	else if (choice == 2) {
		cout << " How many?: ";
		cin >> nqty2;
		qty2 = qty2 + nqty2;
	}
	else if (choice == 3) {
		cout << " How many?: ";
		cin >> nqty3;
		qty3= qty3 + nqty3;
	}
	else if (choice == 4) {
		cout << " How many?: ";
		cin >> nqty4;
		qty4 = qty4 + nqty4;
	}
	else if (choice == 5) {
		cout << " How many? ";
		cin >> nqty5;
		qty5 = qty5 + nqty5;
	}
	else if (choice == 6) {
		cout << " How many?: ";
		cin >> nqty6;
		qty6 = qty6 + nqty6;
	}
	else if (choice == 7) {
		cout << " How many?: ";
		cin >> nqty7;
		qty7 = nqty7 + nqty7;
	}
	else if (choice == 8) {
		cout << " How many?: ";
		cin >> nqty8;
		qty8 = qty8 + nqty8;
	}
	else if (choice == 9) {
		cout << " How many?: ";
		cin >> nqty9;
		qty9 = qty9 + nqty9;
	}
	else if (choice == 10) {
		cout << " How many?: ";
		cin >> nqty10;
		qty10 = qty10 + nqty10;
	}
	else if (choice == 11) {
		cout << " How many?: ";
		cin >> nqty11;
		qty11 = qty11 + nqty11;
	}
	else if (choice == 12) {
		cout << " How many?: ";
		cin >> nqty12;
		qty12 = qty12 + nqty12;
	}
	else if (choice == 13) {
		cout << " How many?: ";
		cin >> nqty13;
		qty13 = qty13 + nqty13;
	}
	else if (choice == 14) {
		cout << " How many?: ";
		cin >> nqty14;
		qty14 = qty14 + nqty14;
	}
	else if (choice == 15) {
		cout << " How many?: ";
		cin >> nqty15;
		qty15 = qty15 + nqty15;
	}
	else if (choice == 16) {
		cout << " How many?: ";
		cin >> nqty16;
		qty16 = qty16 + nqty16;
	}
	else if (choice == 17) {
		cout << " How many?: ";
		cin >> nqty17;
		qty17 = qty17 + nqty17;
	}
	else if (choice == 18) {
		cout << " How many?: ";
		cin >> nqty18;
		qty18 = qty18 + nqty18;
	}
	else if (choice == 19) {
		cout << " How many?: ";
		cin >> nqty19;
		qty19 = qty19 + nqty19;
	}
	else if (choice == 20) {
		cout << " How many?: ";
		cin >> nqty20;
		qty20 = qty20 + nqty20;
	}
	else if (choice == 21) {
		cout << " How many?: ";
		cin >> nqty21;
		qty21 = qty21 + nqty21;
	}
	else if (choice == 22) {
		cout << " How many?: ";
		cin >> nqty22;
		qty22 = qty22 + nqty22;
	}
	else if (choice == 23) {
		cout << " How many?: ";
		cin >> nqty23;
		qty23 = qty23 + nqty23;
	}
	else if (choice == 24) {
		cout << " How many?: ";
		cin >> nqty24;
		qty24 = qty24 + nqty24;
	}
	else if (choice == 25) {
		cout << " How many?: ";
		cin >> nqty25;
		qty25 = qty25 + nqty25;
	}
	else if (choice == 26) {
		cout << " How many?: ";
		cin >> nqty26;
		qty26 = qty26 + nqty26;
	}
	else if (choice == 27) {
		cout << " How many?: ";
		cin >> nqty27;
		qty1 = qty27 + nqty27;
	}
	else if (choice == 28) {
		cout << " How many?: ";
		cin >> nqty28;
		qty28 = qty28 + nqty28;
	}
	else if (choice == 29) {
		cout << " How many?: ";
		cin >> nqty29;
		qty29 = qty29 + nqty29;
	}
	else if (choice == 30) {
		cout << " How many?: ";
		cin >> nqty30;
		qty30 = qty30 + nqty30;
	}
	else if (choice == 31) {
		cout << " How many?: ";
		cin >> nqty31;
		qty31 = qty31 + nqty31;
	}
	else if (choice == 32) {
		cout << " How many?: ";
		cin >> nqty32;
		qty32 = qty32 + nqty32;
	}
	else if (choice == 33) {
		cout << " How many?: ";
		cin >> nqty33;
		qty33 = qty33 + nqty33;
	}
	else if (choice == 34) {
		cout << " How many?: ";
		cin >> nqty34;
		qty34 = qty34 + nqty34;
	}
	else if (choice == 35) {
		cout << " How many?: ";
		cin >> nqty35;
		qty35 = qty35 + nqty35;
	}
	else if (choice == 36) {
		cout << " How many?: ";
		cin >> nqty36;
		qty36 = qty36 + nqty36;
	}
	else if (choice == 37) {
		cout << " How many?: ";
		cin >> nqty37;
		qty37 = qty37 + nqty37;
	}
	else if (choice == 38) {
		cout << " How many?: ";
		cin >> nqty38;
		qty38 = qty38 + nqty38;
	}
	else if (choice == 39) {
		cout << " How many?: ";
		cin >> nqty39;
		qty39 = qty39 + nqty39;
	}
	else if (choice == 40) {
		cout << " How many?: ";
		cin >> nqty40;
		qty40 = qty40 + nqty40;
	}
	else if (choice == 41) {
		cout << " How many?: ";
		cin >> nqty41;
		qty41 = qty41 + nqty41;
	}
	else if (choice == 42) {
		cout << " How many?: ";
		cin >> nqty42;
		qty42 = qty42 + nqty42;
	}
}

void remove() { // remove a product in cart
	int choice;
	cout << " Enter product Id to Delete: ";
	cin >> choice;
	
	while (choice >= 43) {
		cout << "Choice is out of range, please try again" << endl;
		cout << "Enter Product Id:";
		cin >> choice;
	}
	
	if (choice == 1) {
		if (qty1 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty1 = 0;
			total1 = 0;
		}
	}
	else if (choice == 2) {
		if (qty2 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty2 = 0;
			total2 = 0;
		}
	}
	else if (choice == 3) {
		if (qty3 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty3 = 0;
			total3 = 0;
		}
	}
	else if (choice == 4) {
		if (qty4 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty4 = 0;
			total4 = 0;
		}
	}
	else if (choice == 5) {
		if (qty5 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty5 = 0;
			total5 = 0;
		}
	}
	else if (choice == 6) {
		if (qty6 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty6 = 0;
			total6 = 0;
		}
	}
	else if (choice == 7) {
		if (qty7 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty7 = 0;
			total7 = 0;
		}
	}
	else if (choice == 8) {
		if (qty8 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty8 = 0;
			total8 = 0;
		}
	}
	else if (choice == 9) {
		if (qty9 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty9 = 0;
			total9 = 0;
		}
	}
	else if (choice == 10) {
		if (qty10 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty10 = 0;
			total10 = 0;
		}
	}
	else if (choice == 11) {
		if (qty11 == 0) {
			cout << " No Product Exists in the List" << endl;
		}else {
			qty11 = 0;
			total11 = 0;
		}
	}
	else if (choice == 12) {
		if (qty12 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty12 = 0;
			total12 = 0;
		}
	}
	else if (choice == 13) {
		if (qty13 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty13 = 0;
			total13 = 0;
		}
	}
	else if (choice == 14) {
		if (qty14 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty14 = 0;
			total14 = 0;
		}
	}
	else if (choice == 15) {
		if (qty15 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty15 = 0;
			total15 = 0;
		}
	}
	else if (choice == 16) {
		if (qty16 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty16 = 0;
			total16 = 0;
		}
	}
	else if (choice == 17) {
		if (qty17 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty17 = 0;
			total17 = 0;
		}
	}
	else if (choice == 18) {
		if (qty18 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty18 = 0;
			total18 = 0;
		}
	}
	else if (choice == 19) {
		if (qty19 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty19 = 0;
			total19 = 0;
		}
	}
	else if (choice == 20) {
		if (qty20 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty20 = 0;
			total20 = 0;
		}
	}
	if (choice == 21) {
		if (qty21 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty21 = 0;
			total21 = 0;
		}
	}
	else if (choice == 22) {
		if (qty22 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty22 = 0;
			total22 = 0;
		}
	}
	else if (choice == 23) {
		if (qty23 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty23 = 0;
			total23 = 0;
		}
	}
	else if (choice == 24) {
		if (qty24 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty24 = 0;
			total24 = 0;
		}
	}
	else if (choice == 25) {
		if (qty25 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty25 = 0;
			total25 = 0;
		}
	}
	else if (choice == 26) {
		if (qty26 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty26 = 0;
			total26 = 0;
		}
	}
	else if (choice == 27) {
		if (qty27 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty27 = 0;
			total27 = 0;
		}
	}
	else if (choice == 28) {
		if (qty28 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty28 = 0;
			total28 = 0;
		}
	}
	else if (choice == 29) {
		if (qty29 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty29 = 0;
			total29 = 0;
		}
	}
	else if (choice == 30) {
		if (qty30 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty30 = 0;
			total30 = 0;
		}
	}
	if (choice == 31) {
		if (qty31 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty31 = 0;
			total31 = 0;
		}
	}
	else if (choice == 32) {
		if (qty32 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty32 = 0;
			total32 = 0;
		}
	}
	else if (choice == 33) {
		if (qty33 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty33 = 0;
			total33 = 0;
		}
	}
	else if (choice == 34) {
		if (qty34 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty34 = 0;
			total34 = 0;
		}
	}
	else if (choice == 35) {
		if (qty35 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty35 = 0;
			total35 = 0;
		}
	}
	else if (choice == 36) {
		if (qty36 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty36 = 0;
			total36 = 0;
		}
	}
	else if (choice == 37) {
		if (qty37 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty37 = 0;
			total37 = 0;
		}
	}
	else if (choice == 38) {
		if (qty38 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty38 = 0;
			total38 = 0;
		}
	}
	else if (choice == 39) {
		if (qty39 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty39 = 0;
			total39 = 0;
		}
	}
	else if (choice == 40) {
		if (qty40 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty40 = 0;
			total40 = 0;
		}
	}
	if (choice == 41) {
		if (qty41 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty41 = 0;
			total41 = 0;
		}
	}
	else if (choice == 42) {
		if (qty42 == 0) {
			cout << " No Product Exists in the List" << endl;
		}
		else {
			qty42 = 0;
			total42 = 0;
		}
	}
	cout << " ";
	system("pause");
}

void list(){ // view list of products in cart
	system("cls");
	cout << setw(50) << "Your Order list" << endl;
	cout << "===============================================================================" << endl;
	cout << " ID" << setw(25) << "PRODUCT" << setw(25) << "QUANTITY" << setw(25) << "PRICE" << endl;
	cout << "===============================================================================" << endl;
	if (qty1 > 0) {
		cout << " 1" << setw(26) << "Coke" << setw(25) << qty1 << setw(23) << "Php " << qty1 * price1 << endl;
		total1 = qty1 * price1;
	}
	if (qty2 > 0) {
		cout << " 2" << setw(26) << "Coke 1 ltr" << setw(25) << qty2 << setw(23) << "Php " << qty2 * price2 << endl;
		total2 = qty2 * price2;
	}
	if (qty3 > 0) {
		cout << " 3" << setw(26) << "Sprite" << setw(25) << qty3 << setw(23) << "Php " << qty3 * price3 << endl;
		total3 = qty3 * price3;
	}
	if (qty4 > 0) {
		cout << " 4" << setw(26) << "Sprite 1 ltr" << setw(25) << qty4 << setw(23) << "Php " << qty4 * price4 << endl;
		total4 = qty4 * price4;
	}
	if (qty5 > 0) {
		cout << " 5" << setw(26) << "Royal" << setw(25) << qty5 << setw(23) << "Php " << qty5 * price5 << endl;
		total5 = qty5 * price5;
	}
	if (qty6 > 0) {
		cout << " 6" << setw(26) << "Royal 1 ltr" << setw(25) << qty6 << setw(23) << "Php " << qty6 * price6 << endl;
		total6 = qty6 * price6;
	}
	if (qty7 > 0) {
		cout << " 7" << setw(26) << "Red Horse(small)" << setw(25) << qty7 << setw(23) << "Php " << qty7 * price7 << endl;
		total7 = qty7 * price7;
	}
	if (qty8 > 0) {
		cout << " 8" << setw(26) << "Red Horse(Large)" << setw(25) << qty8 << setw(23) << "Php " << qty8 * price8 << endl;
		total8 = qty8 * price8;
	}
	if (qty9 > 0) {
		cout << " 9" << setw(26) << "San Miguel" << setw(25) << qty9 << setw(23) << "Php " << qty9 * price9 << endl;
		total9 += qty9 * price9;
	}
	if (qty10 > 0) {
		cout << " 10" << setw(26) << "Tanduay Ice Red" << setw(25) << qty10 << setw(23) << "Php " << qty10 * price10 << endl;
		total10 = qty10 * price10;
	}
	if (qty11 > 0) {
		cout << " 11" << setw(26) << "Tanduay Ice Blue" << setw(25) << qty11 << setw(23) << "Php " << qty11 * price11 << endl;
		total11 = qty11 * price11;
	}
	if (qty12 > 0) {
		cout << " 12" << setw(26) << "Tanduay Ice White" << setw(25) << qty12 << setw(23) << "Php " << qty12 * price12 << endl;
		total12 = qty12 * price12;
	}
	if (qty13 > 0) {
		cout << " 13" << setw(26) << "Bottled Water(small)" << setw(25) << qty13 << setw(23) << "Php " << qty13 * price13 << endl;
		total13 = qty13 * price13;
	}
	if (qty14 > 0) {
		cout << " 14" << setw(26) << "Bottled Water(big)" << setw(25) << qty14 << setw(23) << "Php " << qty14 * price14 << endl;
		total14 = qty14 * price14;
	}
	if (qty15 > 0) {
		cout << " 15" << setw(26) << "Max Red" << setw(25) << qty15 << setw(23) << "Php " << qty15 * price15 << endl;
		total15 = qty15 * price15;
	}
	if (qty16 > 0) {
		cout << " 16" << setw(26) << "Max Yellow" << setw(25) << qty16 << setw(23) << "Php " << qty16 * price16 << endl;
		total16 = qty16 * price16;
	}
	if (qty17 > 0) {
		cout << " 17" << setw(26) << "Max Orange" << setw(25) << qty17 << setw(23) << "Php " << qty17 * price17 << endl;
		total17 = qty17 * price17;
	}
	if (qty18 > 0) {
		cout << " 18" << setw(26) << "Mentos" << setw(25) << qty18 << setw(23) << "Php " << qty18 * price18 << endl;
		total18 = qty18 * price18;
	}
	if (qty19 > 0) {
		cout << " 19" << setw(26) << "Pochi" << setw(25) << qty19 << setw(23) << "Php " << qty19 * price19 << endl;
		total19 = qty19 * price19;
	}
	if (qty20 > 0) {
		cout << " 20" << setw(26) << "White Rabbit" << setw(25) << qty20 << setw(23) << "Php " << qty20 * price20 << endl;
		total20 = qty20 * price20;
	}
	if (qty21 > 0) {
		cout << " 21" << setw(26) << "Honey Choco" << setw(25) << qty21 << setw(23) << "Php" << qty21 * price21 << endl;
		total21 = qty21 * price21;
	}
	if (qty22 > 0) {
		cout << " 22" << setw(26) << "Surf(small)" << setw(25) << qty22 << setw(23) << "Php " << qty22 * price22 << endl;
		total22 = qty22 * price22;
	}
	if (qty23 > 0) {
		cout << " 23" << setw(26) << "Surf(big)" << setw(25) << qty23 << setw(23) << "Php " << qty23 * price23 << endl;
		total23 = qty23 * price23;
	}
	if (qty24 > 0) {
		cout << " 24" << setw(26) << "Tide(small)" << setw(25) << qty24 << setw(23) << "Php " << qty24 * price24 << endl;
		total24 = qty24 * price24;
	}
	if (qty25 > 0) {
		cout << " 25" << setw(26) << "Tide(big)" << setw(25) << qty25 << setw(23) << "Php " << qty25 * price25 << endl;
		total25 = qty25 * price25;
	}
	if (qty26 > 0) {
		cout << " 26" << setw(26) << "Champion(small)" << setw(25) << qty26 << setw(23) << "Php " << qty26 * price26 << endl;
		total26 = qty26 * price26;
	}
	if (qty27 > 0) {
		cout << " 27" << setw(26) << "Champion(big)" << setw(25) << qty27 << setw(23) << "Php " << qty27 * price27 << endl;
		total27 = qty27 * price27;
	}
	if (qty28 > 0) {
		cout << " 28" << setw(26) << "Century Tuna(small)" << setw(25) << qty28 << setw(23) << "Php " << qty28 * price28 << endl;
		total28 = qty28 * price28;
	}
	if (qty29 > 0) {
		cout << " 29 " << setw(26) << "Century Tuna(medium)" << setw(25) << qty29 << setw(23) << "Php " << qty29 * price29 << endl;
		total29 = qty29 * price29;
	}
	if (qty30 > 0) {
		cout << " 30" << setw(26) << "Century Tuna(large)" << setw(25) << qty30 << setw(23) << "Php " << qty30 * price30 << endl;
		total30 = qty30 * price30;
	}
	if (qty31 > 0) {
		cout << " 31" << setw(26) << "Argentina Corned Beef(small)" << setw(25) << qty31 << setw(23) << "Php " << qty31 * price31 << endl;
		total31 = qty31 * price31;
	}
	if (qty32 > 0) {
		cout << " 32" << setw(26) << "Argentina Corned Beef(medium)" << setw(25) << qty32 << setw(23) << "Php " << qty32 * price32 << endl;
		total32 = qty32 * price32;
	}
	if (qty33 > 0) {
		cout << " 33" << setw(26) << "Argentina Corned Beef(large)" << setw(25) << qty33 << setw(23) << "Php " << qty33 * price33 << endl;
		total33 = qty33 * price33;
	}
	if (qty34 > 0) {
		cout << " 34" << setw(26) << "San Marino(small)" << setw(25) << qty34 << setw(23) << "Php " << qty34 * price34 << endl;
		total34 = qty34 * price34;
	}
	if (qty35 > 0) {
		cout << " 35" << setw(26) << "San Marino(medium)" << setw(25) << qty35 << setw(23) << "Php " << qty35 * price35 << endl;
		total35 = qty35 * price35;
	}
	if (qty36 > 0) {
		cout << " 36" << setw(26) << "San Marino(large)" << setw(25) << qty36 << setw(23) << "Php " << qty36 * price36 << endl;
		total36 = qty36 * price36;
	}
	if (qty37 > 0) {
		cout << " 37" << setw(26) << "Piatos Cheese" << setw(25) << qty37 << setw(23) << "Php " << qty37 * price37 << endl;
		total37 = qty37 * price37;
	}
	if (qty38 > 0) {
		cout << " 38" << setw(26) << "Piatos Barbeque" << setw(25) << qty38 << setw(23) << "Php " << qty38 * price38 << endl;
		total38 = qty38 * price38;
	}
	if (qty39 > 0) {
		cout << " 39" << setw(26) << "Nove Cheese" << setw(25) << qty39 << setw(23) << "Php " << qty39 * price39 << endl;
		total39 = qty39 * price39;
	}
	if (qty40 > 0) {
		cout << " 40" << setw(26) << "Nova Barbeque" << setw(25) << qty40 << setw(23) << "Php " << qty40 * price40 << endl;
		total40 = qty40 * price40;
	}
	if (qty41 > 0) {
		cout << " 41" << setw(26) << "V Cut Cheese" << setw(25) << qty41 << setw(23) << "Php " << qty41 * price41 << endl;
		total41 = qty41 * price41;
	}
	if (qty42 > 0) {
		cout << " 42" << setw(26) << "V Cut Barbeque" << setw(25) << qty42 << setw(23) << "Php " << qty42 * price42 << endl;
		total42 = qty42 * price42;
	}
	// formula
	listprice = total1 + total2 + total3 + total4 + total5 + total6 + total7 + total8 + total9 + total10 + total11 + total12 + total13 + total14 + total15 + total16 + total17 + total18 + total19 + total20 + total21 + total22 + total23 + total24 + total25 + total26 + total27 + total28 + total29 + total30 + total31 + total32 + total33 + total34 + total35 + total36 + total37 + total38 + total39 + total40 + total41 + total42;
	cout << "===============================================================================" << endl;
	cout << " Your Total Bill is : Php " << listprice << endl;
	cout << " ";
	system("pause");
}

void checkout() { // checkout
	system("cls");
	cout << setw(50) << "Your Order list" << endl;
	cout << "===============================================================================" << endl;
	cout << " ID" << setw(25) << "PRODUCT" << setw(25) << "QUANTITY" << setw(25) << "PRICE" << endl;
	cout << "===============================================================================" << endl;
	if (qty1 > 0) {
		cout << "1" << setw(26) << "Coke" << setw(25) << qty1 << setw(23) << "Php " << qty1 * price1 << endl;
		totalprice += qty1 * price1;
	}
	if (qty2 > 0) {
		cout << "2" << setw(26) << "Coke 1 ltr" << setw(25) << qty2 << setw(23) << "Php " << qty2 * price2 << endl;
		totalprice += qty2 * price2;
	}
	if (qty3 > 0) {
		cout << "3" << setw(26) << "Sprite" << setw(25) << qty3 << setw(23) << "Php " << qty3 * price3 << endl;
		totalprice += qty3 * price3;
	}
	if (qty4 > 0) {
		cout << "4" << setw(26) << "Sprite 1 ltr" << setw(25) << qty4 << setw(23) << "Php " << qty4 * price4 << endl;
		totalprice += qty4 * price4;
	}
	if (qty5 > 0) {
		cout << "5" << setw(26) << "Royal" << setw(25) << qty5 << setw(23) << "Php " << qty5 * price5 << endl;
		totalprice += qty5 * price5;
	}
	if (qty6 > 0) {
		cout << "6" << setw(26) << "Royal 1 ltr" << setw(25) << qty6 << setw(23) << "Php " << qty6 * price6 << endl;
		totalprice += qty6 * price6;
	}
	if (qty7 > 0) {
		cout << "7" << setw(26) << "Red Horse(small)" << setw(25) << qty7 << setw(23) << "Php " << qty7 * price7 << endl;
		totalprice += qty7 * price7;
	}
	if (qty8 > 0) {
		cout << "8" << setw(26) << "Red Horse(big)" << setw(25) << qty8 << setw(23) << "Php " << qty8 * price8 << endl;
		totalprice += qty8 * price8;
	}
	if (qty9 > 0) {
		cout << "9 " << setw(26) << "San Miguel" << setw(25) << qty9 << setw(23) << "Php " << qty9 * price9 << endl;
		totalprice += qty9 * price9;
	}
	if (qty10 > 0) {
		cout << "10" << setw(26) << "Tanduay Ice Red" << setw(25) << qty10 << setw(23) << "Php " << qty10 * price10 << endl;
		totalprice += qty10 * price10;
	}
	if (qty11 > 0) {
		cout << "11" << setw(26) << "Tanduay Ice Blue" << setw(25) << qty1 << setw(23) << "Php " << qty11 * price11 << endl;
		totalprice += qty11 * price11;
	}
	if (qty12 > 0) {
		cout << "12" << setw(26) << "Tanduay Ice White" << setw(25) << qty12 << setw(23) << "Php " << qty12 * price12 << endl;
		totalprice += qty12 * price12;
	}
	if (qty13 > 0) {
		cout << "13" << setw(26) << "Bottled Water(small)" << setw(25) << qty13 << setw(23) << "Php " << qty13 * price13 << endl;
		totalprice += qty13 * price13;
	}
	if (qty14 > 0) {
		cout << "14" << setw(26) << "Bottled Water(big)" << setw(25) << qty14 << setw(23) << "Php " << qty14 * price14 << endl;
		totalprice += qty14 * price14;
	}
	if (qty15 > 0) {
		cout << "15" << setw(26) << "Max Red" << setw(25) << qty15 << setw(23) << "Php " << qty15 * price15 << endl;
		totalprice += qty15 * price15;
	}
	if (qty16 > 0) {
		cout << "16" << setw(26) << "Max Yellow" << setw(25) << qty16 << setw(23) << "Php " << qty16 * price16 << endl;
		totalprice += qty16 * price16;
	}
	if (qty17 > 0) {
		cout << "17" << setw(26) << "Max Orange" << setw(25) << qty17 << setw(23) << "Php " << qty17 * price17 << endl;
		totalprice += qty17 * price17;
	}
	if (qty18 > 0) {
		cout << "18" << setw(26) << "Mentos" << setw(25) << qty18 << setw(23) << "Php " << qty18 * price18 << endl;
		totalprice += qty18 * price18;
	}
	if (qty19 > 0) {
		cout << "19" << setw(26) << "Pochi" << setw(25) << qty19 << setw(23) << "Php " << qty19 * price19 << endl;
		totalprice += qty19 * price19;
	}
	if (qty20 > 0) {
		cout << "20" << setw(26) << "White Rabbit" << setw(25) << qty20 << setw(23) << "Php " << qty20 * price20 << endl;
		totalprice += qty20 * price20;
	}
	if (qty21 > 0) {
		cout << "21" << setw(26) << "Honey Choco" << setw(25) << qty21 << setw(23) << "Php " << qty21 * price21 << endl;
		totalprice += qty21 * price21;
	}
	if (qty22 > 0) {
		cout << "22" << setw(26) << "Surf(small)" << setw(25) << qty22 << setw(23) << "Php " << qty22 * price22 << endl;
		totalprice += qty22 * price22;
	}
	if (qty23 > 0) {
		cout << "23" << setw(26) << "Surf(big)" << setw(25) << qty23 << setw(23) << "Php " << qty23 * price23 << endl;
		totalprice += qty23 * price23;
	}
	if (qty24 > 0) {
		cout << "24" << setw(26) << "Tide(small)" << setw(25) << qty24 << setw(23) << "Php " << qty24 * price24 << endl;
		totalprice += qty24 * price24;
	}
	if (qty25 > 0) {
		cout << "25" << setw(26) << "Tide(big)" << setw(25) << qty25 << setw(23) << "Php " << qty25 * price25 << endl;
		totalprice += qty25 * price25;
	}
	if (qty26 > 0) {
		cout << "26" << setw(26) << "Champion(small)" << setw(25) << qty26 << setw(23) << "Php " << qty26 * price26 << endl;
		totalprice += qty26 * price26;
	}
	if (qty27 > 0) {
		cout << "27" << setw(26) << "Champion(big)" << setw(25) << qty27 << setw(23) << "Php " << qty27 * price27 << endl;
		totalprice += qty27 * price27;
	}
	if (qty28 > 0) {
		cout << "28" << setw(26) << "Century Tuna(small)" << setw(25) << qty28 << setw(23) << "Php " << qty28 * price28 << endl;
		totalprice += qty28 * price28;
	}
	if (qty29 > 0) {
		cout << "29" << setw(26) << "Century Tuna(medium)" << setw(25) << qty29 << setw(23) << "Php " << qty29 * price29 << endl;
		totalprice += qty29 * price29;
	}
	if (qty30 > 0) {
		cout << "30" << setw(26) << "Century Tuna(large)" << setw(25) << qty30 << setw(23) << "Php " << qty30 * price30 << endl;
		totalprice += qty30 * price30;
	}
	if (qty31 > 0) {
		cout << "31" << setw(26) << "Argentina Corned Beef(small)" << setw(25) << qty31 << setw(23) << "Php " << qty31 * price31 << endl;
		totalprice += qty31 * price31;
	}
	if (qty32 > 0) {
		cout << "32" << setw(26) << "Argentina Corned Beef(medium)" << setw(25) << qty32 << setw(23) << "Php " << qty32 * price32 << endl;
		totalprice += qty32 * price32;
	}
	if (qty33 > 0) {
		cout << "33" << setw(26) << "Argentina Corned Beef(large)" << setw(25) << qty33 << setw(23) << "Php " << qty33 * price33 << endl;
		totalprice += qty33 * price33;
	}
	if (qty34 > 0) {
		cout << "34" << setw(26) << "San Marino(small)" << setw(25) << qty34 << setw(23) << "Php " << qty34 * price34 << endl;
		totalprice += qty34 * price34;
	}
	if (qty35 > 0) {
		cout << "35" << setw(26) << "San Marino(medium)" << setw(25) << qty35 << setw(23) << "Php " << qty35 * price35 << endl;
		totalprice += qty35 * price35;
	}
	if (qty36 > 0) {
		cout << "36" << setw(26) << "San Marino(large)" << setw(25) << qty36 << setw(23) << "Php " << qty36 * price36 << endl;
		totalprice += qty36 * price36;
	}
	if (qty37 > 0) {
		cout << "37" << setw(26) << "Piatos Cheese" << setw(25) << qty37 << setw(23) << "Php " << qty37 * price37 << endl;
		totalprice += qty37 * price37;
	}

	if (qty38 > 0) {
		cout << "38" << setw(26) << "Piatos Barbeque" << setw(25) << qty38 << setw(23) << "Php " << qty38 * price38 << endl;
		totalprice += qty38 * price38;
	}
	if (qty39 > 0) {
		cout << "39 " << setw(26) << "Nova Cheese" << setw(25) << qty39 << setw(23) << "Php " << qty39 * price39 << endl;
		totalprice += qty39 * price39;
	}
	if (qty40 > 0) {
		cout << "40" << setw(26) << "Nove Barbeque" << setw(25) << qty40 << setw(23) << "Php " << qty40 * price40 << endl;
		totalprice += qty40 * price40;
	}
	if (qty41 > 0) {
		cout << "41" << setw(26) << "V Cut Cheese" << setw(25) << qty41 << setw(23) << "Php " << qty41 * price41 << endl;
		totalprice += qty41 * price41;
	}

	if (qty42 > 0) {
		cout << "42" << setw(26) << "V Cut Barbeque" << setw(25) << qty42 << setw(23) << "Php " << qty42 * price42 << endl;
		totalprice += qty42 * price42;
	}
	cout << "===============================================================================" << endl;
	cout << " Your Total Bill is : Php " << totalprice << endl;
	cout << " Please Proceed to the Counter" << endl;
}

int main() { // main code
	system("color 09");
	cout << "============================================================" << endl;
	cout << "                     WELCOME                 " << endl << " ";
	system("pause");
	
	menu:system("cls");
	system("color 0E");
	cout << "============================================================" << endl;
	cout << "\n What would you like to purchase?" << endl;
	cout << " (1) - Drinks - " << endl;
	cout << " (2) - Candy - " << endl;
	cout << " (3) - Detergent - " << endl;
	cout << " (4) - Canned Goods - " << endl;
	cout << " (5) - Chips - " << endl;
	cout << "\n Enter: ";
	cin >> choice;
	switch (choice) {
		case 1:
			drinks(); // shows drinks list
			break;
		case 2:
			candy(); // shows candy list
			break;
		case 3:
			deter(); // shows detergent list
			break;
		case 4:
			can(); // shows canned goods list
			break;
		case 5:
			chips(); // shows chips list
			break;
		default:
			cout << " Not in the Choices, Please Try Again" << endl;
			goto menu; // returns to menu
	}
	ask:cout << "============================================================" << endl;
	cout << " What would you like to do?" << endl;
	cout << " (1)View other Products" << endl;
	cout << " (2)Add a Product" << endl;
	cout << " (3)Remove a Product" << endl;
	cout << " (4)View Your Product List" << endl;
	cout << " (5)Proceed to Checkout" << endl;
	cout << "\n I would like to: ";
	cin >> change;
	if (change == 1)
		goto menu; // returns to menu
	else if (change == 2){
		add(); // option to add product
		system("cls");
	}
	else if (change == 3){
		remove(); // option to remove produvt
		system("cls");
	}
	else if (change == 4){
		list(); // option to show list of products
		system("cls");
	}
	else if (change == 5)
		goto exit; // jump to checkout, skip ask menu
	else
		cout << " Invalid Choice, Please try Again" << endl;
	
	goto ask; // returns to ask menu
	exit:checkout(); // proceeds to checkout	
	return 0;
}
