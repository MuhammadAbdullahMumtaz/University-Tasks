//#include<iostream>
//#include<string>
//using namespace std;
//struct booktype {// Main  structure....
//	string title;
//	string authors[4];
//	string publisher;
//	int ISBN,price,year_Of_Publication,No_Of_Copies;
//	// four function for the title of the book in the book type structure...
//	void setTitle(string str) {
//		title = str;
//	}
//	void updateTitle(string str) {
//		title = str;
//	}
//	string getTitle() {
//		return title;
//	}
//	void printTitle() {
//		cout << "The enetered title is : " << title << endl;;
//	}
//	// four function for the authors array of the book in the book type structure...
//	void setAuther(string *arr) {
//		for (int i = 0; i < 4; i++)
//			authors[i] = arr[i];
//	}
//	void updateAuthors(string *arr) {
//		for (int i = 0; i < 4; i++)
//			authors[i] = arr[i];
//	}
//	string* getAuthors() {
//		return authors;
//	}
//	void printAuthors() {
//		for (int i = 0; i < 4; i++) 
//			cout << "Entered author " << i + 1 << " is : " << authors[i] << endl;
//	}
//	// four function for the publisher of the book in the book type structure...
//	void setPublisher(string str) {
//		publisher = str;
//	}
//	void updatePublisher(string str) {
//		publisher = str;
//	}
//	string getPublisher() {
//		return publisher;
//	}
//	void printPublisher() {
//		cout << "The enetered title is : " << publisher << endl;;
//	}
//	// four function for the ISBN of the book in the book type structure...
//	void setISBN(int num) {
//		ISBN = num;
//	}
//	void updateISBN(int num) {
//		ISBN = num;
//	}
//	int getISBN() {
//		return ISBN;
//	}
//	void printISBN(){
//		cout << "ISBN number is  : " << ISBN << endl;
//	}
//	// four function for the Price of the book in the book type structure...
//	void setPrice(int num) {
//		price = num;
//	}
//	void updatePrice(int num) {
//		price = num;
//	}
//	int getPrice() {
//		return price;
//	}
//	void printPrice() {
//		cout << "Price number is  : " << price << endl;
//	}
//	// four function for the copies of the book in the book type structure...
//	void setCopy(int num) {
//		No_Of_Copies = num;
//	}
//	void updateCopy(int num) {
//		No_Of_Copies = num;
//	}
//	int getCopy() {
//		return No_Of_Copies;
//	}
//	void printCopy() {
//		cout << "Copies number is  : " << No_Of_Copies << endl;
//	}
//};
//int main()
//{
//	booktype book;
//	// major variables that uses in the main function...
//	string stitle, utitle,auth[4],spublish,upublish;
//	int sISBN, uISBN, sprice, uprice, scopy, ucopy;
//	// function of Title of object  book  below...
//	cout << "Enter title do you want to set : ";
//	getline(cin, stitle);
//	book.setTitle(stitle);
//	cout << "result : " << book.getTitle() << endl;
//	cout << "Enter the title do you want to update : ";
//	getline(cin, utitle);
//	book.updateTitle(utitle);
//	book.printTitle();
//
//	// function of Authors array of object  book  below...
//	for (int i = 0; i < 4; i++) {
//		cout << "Enter the author " << i + 1 << " : ";
//		cin >> auth[i];
//	}
//	book.setAuther(auth);
//	string *ptrAuth = book.getAuthors();
//	for (int i = 0; i < 4; i++)
//		cout << ptrAuth[i] << "  ";
//	cout << endl;
//	for (int i = 0; i < 4; i++) {
//		cout << "Enter authors do you want to update " << i + 1 << " : ";
//		cin >> auth[i];
//	}
//	book.updateAuthors(auth);
//	book.printAuthors();
//
//	// function of Publisher of object  book  below...
//	cout << "Enter publisher do you want to set : ";
//	cin.ignore();
//	getline(cin, spublish);
//	book.setPublisher(spublish);
//	cout << "publisher : " << book.getPublisher() << endl;
//	cout << "Enter the publisher name do you want to update : ";
//	getline(cin, upublish);
//	book.updatePublisher(upublish);
//	book.printPublisher();
//
//	// function of ISBN of object  book  below...
//	cout << "Enter the ISBN you want to set : ";
//	cin >> sISBN;
//	book.setISBN(sISBN);
//	cout << "ISBN : " << book.getISBN() << endl;
//	cout << "Enter the ISBN number you want to update : ";
//	cin >> uISBN;
//	book.updateISBN(uISBN);
//	book.printISBN();
//
//	// function of Price of object  book  below...
//	cout << "Enter the price you want to set : ";
//	cin >> sprice;
//	book.setPrice(sprice);
//	cout << "Price : " << book.getPrice() << endl;
//	cout << "Enter the Price number you want to update : ";
//	cin >> uprice;
//	book.updatePrice(uprice);
//	book.printPrice();
//
//	// function of Copies of object  book  below...
//	cout << "Enter the number of copies you want to set : ";
//	cin >> scopy;
//	book.setCopy(scopy);
//	cout << "Price : " << book.getCopy() << endl;
//	cout << "Enter number of copies you want to update : ";
//	cin >> ucopy;
//	book.updateCopy(ucopy);
//	book.printCopy();
//
//	system("pause");
//	return 0;
//}