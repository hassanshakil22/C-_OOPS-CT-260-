#include <iostream>
#include <math.h>
using namespace std ;

class Admin{
    private:
    int id;
    protected:
    static int userCount;
    public:
    string firstName;
    string lastName;
    int age;
    string country;
    Admin(string fName, string lName, int a, string c, int id)
    : firstName(fName), lastName(lName), age(a), country(c), id(id) {

    }
    void totalUsers(){
        cout << "the total number of users are --> " << userCount ;
    }
   // added this line as i was getting a problem of userCount not accessible from datascientist class
    friend class DataScientist;
};
int Admin::userCount = 0;

class DataScientist{
    private:
    string highestEdu;

    int generateID (){
        int rollNo;
        cout << "Ënter your roll number : "  ;
        cin >> rollNo;
        int returnId ;
        int length=0;
        int temp=rollNo;
        while (temp>0)
        {
            temp/=10;
            length ++;
        }
        temp = rollNo;
        while (temp >= 100)
        {
            temp/=10;
        }
        returnId = temp%10;
        returnId*=10;
        returnId +=rollNo%10;
        return returnId;
    }
    protected:
    int noOfAnswersGiven;
    int noOfQuestionsAsked;
    public:
    string firstName;
    string lastName;
    int age;
    string country;
    int id;
    DataScientist(string fname,string lname,int age,string country): firstName(fname), lastName(lname), age(age), country(country)  {
        this->id = generateID();
        noOfQuestionsAsked=0;
        noOfAnswersGiven=0;
        Admin::userCount++;

    }
    void showDetails(){
        cout << "Name: " << firstName << " " << lastName << "\n"
        << "ID: " << id << "\n"
        << "Age: " << age << "\n"
        << "Country: " << country << "\n"
        << "Highest Education: " << highestEdu << "\n" << endl;
    }
    void setHighestEdu(string highestEd){
        this->highestEdu  = highestEd;
    }
    // reding only here
    string getHighestEdu() const {
        return highestEdu;
    }
    void askQuestion(string question){
        noOfQuestionsAsked++;
    }
    void answerQuestion(string answer){
        noOfAnswersGiven++;
    }
    };

int main () {
    DataScientist ds1("hassan","shakil",20,"Pakistan");
    DataScientist ds2("abc","egf",20,"Saudia");
    DataScientist ds3("ahmed","muhammad",20,"Pakistan");
    ds1.setHighestEdu("Intermediate") ;
    ds2.setHighestEdu("BA") ;
    ds3.setHighestEdu("BCom"); 
    ds1.showDetails();
     ds2.showDetails();
     ds3.showDetails();
    Admin admin1("rehmat","ahmed",19,"pakistan",123);
    admin1.totalUsers();
    return 0;
}