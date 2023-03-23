
#include<vector>
#include "../account/account.h"


using namespace std;

class User {
private:

    string fullName;
    string citizenID;  // CCCD
    string phoneNumber;
    __int64 balance;  // __int64 = _int64


public:

    User(); //hàm khởi tạo k tham số
    User(string fullName, string citizenID, string phoneNumber, __int64 balance);
    //hàm khởi tạo sao chép
    User(User& a);
    ~User();
    //Getter, Setter
    //Fullname
    string getFullName();
    void setFullName(string fullName);
    //citizenID
    string getCitizenID();
    void setCitizenID(string citizenID);
    //ID
    string getPhoneNumber();
    void setPhoneNumber(string phoneNumber);
    //balance
    __int64 getBalance();
    void setBalance(__int64 balance);
    //in Data
    void inData(string phoneNumber);

    //display infor
    void displayData();

    //out data format
    void outData();

    //read user Data from string
    void readData(string s);

    //write data into File
    void writeData(FILE* dataFile);

    //Updating Account
    void updatingAccount();

    //change Password
    void changePassword(Account& accounts);

    //tranfer money
    void transferMoney(Account& account, vector<User>& users);

    //withdraw money
    void withdrawMoney(Account& accounts);

    //view transaction history
    void viewTransactionHistory();

};


User::User() {}
User::User(string fullName, string citizenID, string phoneNumber, __int64 balance) : fullName(fullName), citizenID(citizenID) {}
User::User(User& a){
    this->fullName = a.getFullName();
    this->citizenID = a.getCitizenID();
}
User::~User() {}
//Getter, Setter
//Fullname
string User::getFullName() {
    return this->fullName;
}
void User::setFullName(string fullName) {
    this->fullName = fullName;
}
//citizenID
string User::getCitizenID() {
    return this->citizenID;
}
void User::setCitizenID(string citizenID) {
    this->citizenID = citizenID;
}
//ID
string User::getPhoneNumber() {
    return this->phoneNumber;
}
void User::setPhoneNumber(string phoneNumber) {
    this->phoneNumber = phoneNumber;
}
//balance
__int64 User::getBalance() {
    return this->balance;
}
void User::setBalance(__int64 balance) {
    this->balance = balance;
}
