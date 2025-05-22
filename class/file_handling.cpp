#include <iostream>
#include <fstream>
using namespace std;
// using namespace ios;
class Student
{
public:
    string name;
    int roll;
    float marks;
};
int main()
{
    // ofstream myfile ("file1");
    // if (!myfile){
    // cout << "File not created!";
    // }
    // else {
    // cout << "File created successfully!";
    // myfile.close();
    // }
    // try
    // {
    //     ofstream my_file("file.txt");
    //     if (!my_file)
    //     {
    //         throw runtime_error("file not opened for writing");
    //     }
    //     my_file << "Hassan is the best person " << endl;
    //     my_file << "Hassan is a developer " << endl;

    //     my_file.close();
    //     ifstream my_file_read("file.txt");
    //     if (!my_file_read)
    //     {
    //         throw runtime_error("file not opened for reading");
    //     }
    //     string line1;
    //     while (my_file_read >> line1)
    //     {
    //         cout << line1 << " ";
    //     }

    //     my_file_read.close();
    // }
    // catch (const exception &e)
    // {
    //     cerr << "Exception --> " << e.what();
    // }
    // Student s;
    // s.marks = 100.3;
    // s.name = "hassan";
    // s.roll = 185;
    // ofstream infile("hassan.dat", ios::binary);
    // infile.write((char *)&s, sizeof(s));
    // infile.close();

    // Student s2 ; 
    // ifstream outfile("hassan.dat",ios::binary);
    // outfile.read((char*)&s2 , sizeof(s2));
    // infile.close();

    // cout << s2.name << s2.roll << s2.marks <<endl;




    string data;
    
    // Writing
    ofstream outfile("data.txt");
    cout << "Enter name: ";
    getline(cin, data);
    outfile << data << endl;
    
    cout << "Enter age: ";
    cin >> data;
    outfile << data << endl;
    outfile.close();
    
    // Reading
    ifstream infile("data.txt");
    infile >> data;
    cout << "Name: " << data << endl;
    infile >> data;
    cout << "Age: " << data << endl;
    infile.close();
    
    return 0;

}
