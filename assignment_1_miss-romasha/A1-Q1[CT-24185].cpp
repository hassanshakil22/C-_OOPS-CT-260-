
#include <iostream>
#include <vector> // using this library as i tried doing with the arrays and pointers and it was becoming complex
using namespace std;

class Room; //moving this up as we need to passs this as arg to the func heat
class Radiator{
private:
int radiatorId;
bool isOn;

public:    
Radiator(){
    radiatorId = getdigs();
    isOn = false;

}
int getdigs(){
    int rollnum;
    cout << "Enter your roll number: ";  
    cin >> rollnum;
    return rollnum%1000;
}
int getRadiatorId(){
    return radiatorId;
}
void heats(Room &room);
};
class Room{
    public:
    string roomName;
    int seatingCapacity;
    int numRadiators;
    vector<Radiator*> radiators;
    
    Room(string roomName){
        this->roomName = roomName;
        seatingCapacity = 12;
        numRadiators = 0;
    }
    void isHeatedBy(Radiator* radiator){
        for (int i = 0; i < radiators.size() ; i++)
        {
            if (radiator->getRadiatorId() == radiators[i]->getRadiatorId() )
            {
                cout << "Radiator already added into the room" << endl;
            }
        }
        if (numRadiators < 2) {
            radiators.push_back(radiator);
            numRadiators++;
            cout << "Radiator successfully added to room." << endl;
        } else {
            cout << "Cannot add Radiator. Room has a maximum number of radiators." << endl;
        }
    }
    
};

void Radiator::heats(Room &room){
    cout << "Radiator " << radiatorId << " heats " << room.roomName << endl;

}
int main(){
    Room room1("Store-Room");
    Radiator rd1;
    Radiator rd2;
    room1.isHeatedBy(&rd1);
    room1.isHeatedBy(&rd2);

return 0;
}