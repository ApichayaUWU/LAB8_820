#include <iostream>
#include<string>
using namespace std;


int main()
{
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl << "?????: ";
    string name;
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name." << endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;
    cout << name << ": ";
    int id;
    cin >> id;
    string str = to_string(id);
    string first_two_digits = str.substr(0, 2);
    int gear = std::stoi(first_two_digits) - 12;
    cout << "Fahsai: I think you may be GEAR " << gear << ". I have a free movie ticket for you."<<endl;
    cout << "Fahsai: Let's go to the cinema together!!!" << endl;
    cout << "Fahsai: What movie do you want to watch?"<< endl;
    cout << name << ": ";
    string mov;
    getline(cin,mov);
    cout << "Fahsai: So....which day are you free to go with me?" << endl;
    cout << name << ": ";
    string date;
    getline(cin,date);
    cout << "Fahsai: " << date << "....that is OK!!! I'm looking forward to watching " << mov << " with you." << endl;
    cout << name << ": ";
    string c;
    getline(cin,c);
    cout << "Fahsai: 555+ see you " << date << ". Bye Bye \(^ ^)/";
    return 0;
}