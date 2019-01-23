#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <string>
#include <vector>

static const int CREATE_DETAIL_DATABASE = 1;
static const int ADD_DETAILS = 2;
static const int DISPLAY_DETAILS = 3;
static const int USER_MANAGEMENT = 4;
static const int DISPLAY_PASSENGER_DETAILS = 5;
static const int RETURN_TO_MAIN_MENU = 6;
static const int RESERVE = 1;


class Login
{
private:
    std::string id;
    std::string password;

public:
    void getid();
    void displayid();
};


class Detail
{
private:
    std::string tname;
    std::string bp;
    std::string dest;
    unsigned int tno;
    unsigned int c1, c1fare;
    unsigned int c2, c2fare;
    unsigned int d, m, y;

public:
    void getdetail();
    void displaydetail();
    unsigned int getTNO();
    unsigned int getC1();
    unsigned int getC2();
    unsigned int getC1Fare();
    unsigned int getC2Fare();
    unsigned int getDay();
    unsigned int getMonth();
    unsigned int getYear();
    
    void setC1(unsigned int c1Value);
};


class Reser
{
private:
    std::string tname;
    std::string bp;
    std::string dest;
    std::vector<std::string> pname;
    std::string currentPasName;
    std::string travelClass;
    std::vector<int> age;
    int currentAge;
    unsigned int pnr;
    unsigned int tno;
    unsigned int nosr;
    unsigned int d, m, y;
    unsigned int con;
    double amc;

public:
    void getresdet();
    void displayresdet();
    unsigned int getTNO();
    std::string getTravelClass();
    unsigned int getNOSR();
};


class Canc
{
private:
    std::string tname;
    std::string bp;
    std::string dest;
    std::string travelClass;
    std::vector<std::string> pname;
    std::vector<int> age;
    int pnr;
    int tno;
    int i;
    unsigned int nosc;
    int d,m,y;
    double amr;

public:
    void getcancdet();
    void displaycancdet();
};

void manage();
void can();
void user();
void database();
void res();
void reserve();
void displaypassdetail();
void cancell();
void enquiry();



#endif // MAIN_H
