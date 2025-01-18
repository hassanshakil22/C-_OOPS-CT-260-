#include <iostream>
using namespace std;

// class Bank {
// public:
//     void addAccount() {
//         cout << "Account added to the bank." << endl;
//     }
//     void removeAccount() {
//         cout << "Account removed from the bank." << endl;
//     }
//     void addClient() {
//         cout << "Client added to the bank." << endl;
//     }
//     void removeClient() {
//         cout << "Client removed from the bank." << endl;
//     }
//     void credit() {
//         cout << "Amount credited to an account." << endl;
//     }
//     void debit() {
//         cout << "Amount debited from an account." << endl;
//     }
// };

// class Account {
// private:
//     int number = 0;
//     int balance = 0;

// public:
//     void credit(int value) {
        
//     }
//     void debit(int value) {
        
//     }
//     void getNumber() {
//         cout << "Account Number: " << number << endl;
//     }
//     void getBalance() {
//         cout << "Account Balance: " << balance << endl;
//     }
//     void compose() {
//         cout << "Account composition logic here." << endl;
//     }
// };

// class Client {
// private:
//     string name;
//     string address;
//     int id;

// public:
//     void getName() {
//         cout << "Client Name: " << name << endl;
//     }
//     void getAddress() {
//         cout << "Client Address: " << address << endl;
//     }
//     void getId() {
//         cout << "Client ID: " << id << endl;
//     }
// };

// class Person{
//     public:
//         string name;
//         string phoneNumber;
//         string emailAdress;
//         void purchaseParkingPass();
// };

// class Student : public Person{
// public:
// int studnetNumber;
// int averageMark;
// bool isEligibleToEnroll(string str);
// int getSeminarsTaken();

// };

// class Professor : public Person{
// public:
// int salary;
// int numberOfClasses;

// protected:
// int staffNumber;
// private:
// int yearsOfService;
// };

// class Address {
//     public:
//     string street;
//     string city;
//     string state;
//     string postalCode;
//     string country;
//     bool validated();
//     string outputAsLabel();
// };

class Author{
    public:
    string name;
    string description;
    string getName();   
};
class Book{
public:
string isbn;
string title;
string subject;
string publisher;
string language;
int numberOfPages;
string getTitle();

};
class BookItem : public Book{
    public:
    string barcode;
    bool isReferenceOnly;
    string borrowed;
    string dueDate;
    double price;
    string format;
    string status;
    string dateOfPurchase;
    string publicationDate ;
    bool checkout(){}
};
class Rack : public BookItem{
public:
int number;
string locationIdentifier;
};
class Library{
   public:
    string name;
    string address;
    string getAddress(){
        cout << "The address is " << address << endl;
    } 

};
int main() {
    Author author;
    author.name = "J.K. Rowling";
    author.description = "Author of the Harry Potter series.";

    Book book;
    book.isbn = "978-0-7432-7356-5";
    book.title = "Harry Potter and the Philosopher's Stone";
    book.subject = "Fantasy";
    book.publisher = "Bloomsbury";
    book.language = "English";
    book.numberOfPages = 223;

    BookItem bookItem;
    bookItem.barcode = "1234567890";
    bookItem.isReferenceOnly = false;
    bookItem.borrowed = "No";
    bookItem.dueDate = "2025-01-18";
    bookItem.price = 20.99;
    bookItem.format = "Hardcover";
    bookItem.status = "available";
    bookItem.dateOfPurchase = "2023-09-01";
    bookItem.publicationDate = "1997-06-26";


    Rack rack;
    rack.number = 101;
    rack.locationIdentifier = "A1";
    rack.barcode = bookItem.barcode;

    Library library;
    library.name = "NED University Library";
    library.address = "University Road, Karachi, Pakistan";
    return 0;
}

   // Student hassan;
    // hassan.name = "Hassan Shakil";
    // hassan.getSeminarsTaken();
    // hassan.averageMark = 3.995;
    // hassan.studnetNumber= 185;
    // Professor p1;
    // p1.name = "abc";
    // p1.emailAdress="äbc@gmail.com";

    
// Bank bank;
    // Account account;
    // Client client;

    // // Example usage
    // bank.addClient();
    // bank.addAccount();

    // account.getNumber();
    // account.getBalance();

    