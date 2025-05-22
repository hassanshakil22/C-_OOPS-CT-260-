#include <iostream>
using namespace std;

// class Complex {
// private:
//     float real;
//     float image;

// public:
//     Complex(float r, float i) {
//         real = r;
//         image = i;
//     }

//     Complex(const Complex& other) {
//         real = other.real;
//         image = other.image;
//     }

//     void display() const {
//         cout << "Complex Number: " << real << " + " << image << "i" << endl;
//     }
// };


// class Character {
// private:
//     string name;
//     int* health;
//     int* attackPower;
//     int* defense;

// public:
//     Character() : name("Hero") {
//         health = new int(100);
//         attackPower = new int(50);
//         defense = new int(10);
//     }

//     Character(string n, int h, int a, int d) : name(n) {
//         health = new int(h);
//         attackPower = new int(a);
//         defense = new int(d);
//     }

//     Character(const Character& other) : name(other.name) {
//         health = new int(*(other.health));
//         attackPower = new int(*(other.attackPower));
//         defense = new int(*(other.defense));
//     }

//     ~Character() {
//         delete health;
//         delete attackPower;
//         delete defense;
//     }

//     string getName() const {
//         return name;
//     }

//     int getHealth() const {
//         return *health;
//     }

//     void setHealth(int h) {
//         *health = h;
//     }

//     int getAttackPower() const {
//         return *attackPower;
//     }

//     void setAttackPower(int a) {
//         *attackPower = a;
//     }

//     int getDefense() const {
//         return *defense;
//     }

//     void setDefense(int d) {
//         *defense = d;
//     }

//     void displayStats() const {
//         cout << name << " Stats:" << endl;
//         cout << "Health: " << *health << endl;
//         cout << "Attack Power: " << *attackPower << endl;
//         cout << "Defense: " << *defense << endl;
//     }

//     void attack(Character& target) {
//         int damage = *attackPower - *target.defense;
//         if (damage < 0) damage = 0;
//         int newHealth = *target.health - damage;
//         target.setHealth(newHealth);
//         cout << name << " attacks " << target.getName() << " for " << damage << " damage!" << endl;
//     }
// };


// class TollBooth {
// private:
//     static int car;
//     static double cash;

// public:
//     TollBooth() {}

//     void payingcar() {
//         car++;
//         cash += 0.5;
//     }

//     static void display() {
//         cout << "Total Cars Passed: " << car << endl;
//         cout << "Total Money Collected: " << cash << endl;
//     }
// };

// int TollBooth::car = 0;
// double TollBooth::cash = 0.0;


// class bookType {
// private:
//     string title;
//     string authors[4];
//     int authorsNo;
//     string publisher;
//     string ISBN;
//     double price;
//     int stocked;

// public:
//     bookType() : title(""), authorsNo(0), publisher(""), ISBN(""), price(0.0), stocked(0) {}

//     void setTitle(string t) { title = t; }
//     string getTitle() const { return title; }

//     void setPublisher(string pub) { publisher = pub; }
//     string getPublisher() const { return publisher; }

//     void setISBN(string isbn) { ISBN = isbn; }
//     string getISBN() const { return ISBN; }

//     void setPrice(double pr) { price = pr; }
//     double getPrice() const { return price; }

//     void setCopiesStock(int stock) { stocked = stock; }
//     int getCopiesStock() const { return stocked; }

//     void setAuthors(string auth[], int num) {
//         if (num > 4) num = 4;
//         authorsNo = num;
//         for (int i = 0; i < authorsNo; i++) {
//             authors[i] = auth[i];
//         }
//     }

//     void addAuthor(string author) {
//         if (authorsNo < 4) {
//             authors[authorsNo] = author;
//             authorsNo++;
//         } else {
//             cout << "Cannot add more than 4 authors." << endl;
//         }
//     }

//     void getAuthors() const {
//         for (int i = 0; i < authorsNo; i++) {
//             cout << authors[i];
//             if (i < authorsNo - 1) cout << ", ";
//         }
//         cout << endl;
//     }

//     void updateStock(int num) {
//         stocked += num;
//         if (stocked < 0) stocked = 0;
//     }

//     void displayBook() const {
//         cout << "Title: " << title << endl;
//         cout << "Authors: ";
//         getAuthors();
//         cout << "Publisher: " << publisher << endl;
//         cout << "ISBN: " << ISBN << endl;
//         cout << "Price: $" << price << endl;
//         cout << "Copies in stock: " << stocked << endl;
//     }

//     static void searchByTitle(const bookType books[], int size, string searchTitle) {
//         bool found = false;
//         for (int i = 0; i < size; i++) {
//             if (books[i].getTitle() == searchTitle) {
//                 books[i].displayBook();
//                 found = true;
//                 break;
//             }
//         }
//         if (!found) {
//             cout << "Book with title \"" << searchTitle << "\" not found." << endl;
//         }
//     }

//     static void searchByISBN(const bookType books[], int size, string searchISBN) {
//         bool found = false;
//         for (int i = 0; i < size; i++) {
//             if (books[i].getISBN() == searchISBN) {
//                 books[i].displayBook();
//                 found = true;
//                 break;
//             }
//         }
//         if (!found) {
//             cout << "Book with ISBN \"" << searchISBN << "\" not found." << endl;
//         }
//     }
// };

 


    // bookType books[100];
    // string authors1[] = {"Hassan Shakil", "Terry bahman"};
    // string authors2[] = {"Harper Lee"};

    // books[0].setTitle("Good Omens");
    // books[0].setAuthors(authors1, 2);
    // books[0].setPublisher("Publisher A");
    // books[0].setISBN("199-46");
    // books[0].setPrice(19.99);
    // books[0].setCopiesStock(10);

    // books[1].setTitle("To Kill a Mockingbird");
    // books[1].setAuthors(authors2, 1);
    // books[1].setPublisher("Publisher B");
    // books[1].setISBN("233-756");
    // books[1].setPrice(18.75);
    // books[1].setCopiesStock(5);

    // cout << "Displaying book 1 info:" << endl;
    // books[0].displayBook();
    // cout << endl;

    // cout << "Displaying book 2 info:" << endl;
    // books[1].displayBook();
    // cout << endl;

    // string searchTitle = "Good Omens";
    // cout << "Searching for book with title: \"" << searchTitle << "\"" << endl;
    // bookType::searchByTitle(books, 100, searchTitle);
    // cout << endl;

    // string searchISBN = "233-756";
    // cout << "Searching for book with ISBN: \"" << searchISBN << "\"" << endl;
    // bookType::searchByISBN(books, 100, searchISBN);
    // cout << endl;

    // books[0].updateStock(3);
    // cout << "After updating copies in stock for book 1:" << endl;
    // books[0].displayBook();

 



    // TollBooth booth1;
    // TollBooth booth2, booth3;

    // booth1.payingcar();
    // booth2.payingcar();
    // booth3.payingcar();

    // TollBooth::display();










    // string heroName, villainName;
    // cout << "Enter Hero's name: ";
    // cin >> heroName;
    // cout << "Enter Villain's name: ";
    // cin >> villainName;

    // Character hero(heroName, 100, 50, 10);
    // Character villain(villainName, 150, 40, 50);

    // cout << "\nInitial Stats:" << endl;
    // hero.displayStats();
    // cout << endl;
    // villain.displayStats();
    // cout << endl;

    // Character villain2 = villain;
    // cout << villain2.getName() << " (Copy) Stats:" << endl;
    // villain2.displayStats();
    // cout << endl;

    // cout << "Battle Begins!" << endl;
    // hero.attack(villain);
    // cout << villain.getName() << "'s Stats after attack:" << endl;
    // villain.displayStats();
    // cout << endl;

    // villain2.attack(hero);
    // cout << hero.getName() << "'s Stats after attack:" << endl;
    // hero.displayStats();
    // cout << endl;


 