#include <iostream>
#include <time.h>

using namespace std;

class HeartRate{
private:
string name;
int month ;
int day;
int year;
int id;
int getID(){
    int temp = id;
    while (temp >= 1000)
    {
        temp/=10;
    }
    return temp%10;
    
}
public:
HeartRate(string n, int day,int month,int year): name(n),day(day),month(month),year(year){
    cout << "Enter your roll number" << endl;
    cin >> id;
    id=getID();
    cout << id;
    if (year <= 1000 )
    {
        if(year<=25 && year>=00)
        this->year = year + 2000 ;
        else
        this->year = year + 1900 ;
    }
    
}
//setters
void setName(string name){
    this->name= name; 
}
void setDOB(int day , int month, int year){
    this->day= day; 
    this->month= month; 
    this->year= year; 
}
//getters
string getName(){
    return this->name ;
}
string getDOB(){
    return to_string(day) + "/" + to_string(month) + "/" + to_string(year);
}
int getAge(){
    int currentYear = 2025;
    return currentYear - year;
}
int getMaximumHeartRate() {
    return 220 - getAge();
}
string getTargetHeartRate(){
int mhr = getMaximumHeartRate();
int lowR= mhr*0.5;
int highR= mhr*0.85;
return to_string(lowR) + "bpm -" + to_string(highR) + "bpm"; 
}
};
int main() {
    string name;
    int day, month, year;
    cout << "Enter your first name: ";
    cin >> name;
    cout << "Enter your date of birth (day month year): ";
    cin >> day >> month >> year;
    HeartRate h(name, day, month, year);
    cout << "\n--- Heart Rate Information ---\n";
    cout << "Name: " << h.getName() << endl;
    cout << "Date of Birth: " << h.getDOB() << endl;
    cout << "Age: " << h.getAge() << " years" << endl;
    cout << "Maximum Heart Rate: " << h.getMaximumHeartRate() << " bpm" << endl;
    cout << "Target Heart Rate Range: " << h.getTargetHeartRate() << endl;

    return 0;
}