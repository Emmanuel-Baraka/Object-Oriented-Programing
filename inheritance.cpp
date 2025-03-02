#include <iostream>
#include <string>
using namespace std;
/* NAME: EMMANUEL BARAKA
REG NO: BSCIT-05-0113/2024
*/
// Base class: Person
class Person {
protected:
    string name;

public:
    void setName(string n) { name = n; }
    string getName() { return name; }
};

// Derived class: LibraryMember
class LibraryMember : public Person {
private:
    int memberID;
    int booksBorrowed;

public:
    LibraryMember(string n, int id, int books) {
        setName(n);
        memberID = id;
        booksBorrowed = books;
    }
    int getMemberID() { return memberID; }
    int getBooksBorrowed() { return booksBorrowed; }
};

// Derived class: PremiumMember
class PremiumMember : public LibraryMember {
private:
    double membershipFee;

public:
    PremiumMember(string n, int id, int books, double fee) 
        : LibraryMember(n, id, books) {
        membershipFee = fee;
    }
    double getMembershipFee() { return membershipFee; }
};

int main() {
    // Creating a PremiumMember object
    PremiumMember p1("Alice", 101, 5, 29.99);
    
    // Displaying details
    cout << "Name: " << p1.getName() << endl;
    cout << "Member ID: " << p1.getMemberID() << endl;
    cout << "Books Borrowed: " << p1.getBooksBorrowed() << endl;
    cout << "Membership Fee: $" << p1.getMembershipFee() << endl;
    
    return 0;
}

