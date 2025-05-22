#include <iostream>
#include <string>
using namespace std;


class Movie{
    public:
    string movieName;
    string showTime;

    Movie(string name, string time) {
        movieName = name;
        showTime = time;
    }

    void displayMovie() {
        cout << "Movie: " << movieName << "--Showtime: " << showTime << endl;
    }
};

class Ticket{
    private:
    bool isSold;
    public:
    int rowNumber;
    int seatNumber;
    int ticketID;

    Ticket(int row, int seat, string rollNo) {
        rowNumber = row;
        seatNumber = seat;
        ticketID = getID(rollNo) * 100 + (row * 10 + seat); // Generating a unique ticket ID
        isSold = false;
    }
    
    int getID(string rollno) {
        bool foundDash = false;
        int id = 0;
    
        for (char ch : rollno) {  
            if (ch == '-') {
                foundDash = true; 
                continue;
            }
    
            if (foundDash) {  
                id = id * 10 + (ch - '0'); 
            }
        }
    
        // Extract only the first two digits
        while (id >= 100) {
            id /= 10;
        }
    
        return id;
    }

    void sellTicket() {
        if (!isSold) {
            isSold = true;
            cout << "Ticket successfully sold!" << endl;
        } else {
            cout << "This seat is already taken." << endl;
        }
    }

    void displayTicket() {
        cout << "Row: " << rowNumber << "--Seat: " << seatNumber 
             << " -> Ticket ID: " << ticketID 
             << " -> Status: " << (isSold ? "Sold" : "Available") << endl;
    }
};

int main() {
    string  rollNo;
    cout << "Enter your Roll No (e.g., CT-2409): ";
    cin >> rollNo;


    Movie movies[3] = {
        Movie("Avengers: Endgame", "7:00 PM"),
        Movie("Inception", "9:30 PM"),
        Movie("Interstellar", "6:00 PM")
    };

    cout << "\nMovies currently showing:" << endl;
    for (int i = 0; i < 3; i++) {
        movies[i].displayMovie();
    }
    cout << "\nBuying a ticket..."<< endl;
    int row, seat;
    cout << "Enter row number: ";
    cin >> row;
    cout << "Enter seat number: ";
    cin >> seat;

    Ticket ticket= Ticket(row,seat,rollNo);
    ticket.sellTicket();
    cout << "\nTicket Details:"<< endl;
    ticket.displayTicket();
    
    return 0;
}
