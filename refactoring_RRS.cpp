#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <cstring>
#include <string>
#include <iostream>
#include <time.h>
#include <iomanip>
#include <fstream>

#include "main.h"

char f[10]="f";
char s[10]="s";
int flag, f1, d, m, i;
double tamt;

unsigned int amt;       //  res
long long int addr;     //  res
int ad;                 //  res


void Login::getid(){
    std::cout << "Enter your id:" << std::endl;
    std::cin >> id;
    std::cout << "Enter the password:" << std::endl;
    std::cin >> password;
}

void Login::displayid(){
    std::cout << std::endl << "Id: " << id;
    std::cout << std::endl << "Password: " << password;
}


void Detail::getdetail()
{
    std::cout << std::endl << "Enter the details as follows" << std::endl;

    std::cout << std::endl << "Train no:";
    std::cin >> tno;

    std::cout << std::endl << "Train name:";
    std::cin >> tname;

    std::cout << std::endl << "Boarding point:";
    std::cin >> bp;

    std::cout << std::endl << "Destination pt:";
    std::cin >> dest;

    std::cout << std::endl << "No of seats in first class:";
    std::cin >> c1;

    std::cout << std::endl << "fare per ticket:";
    std::cin >> c1fare;

    std::cout << std::endl << "No of seats in second class:";
    std::cin >> c2;

    std::cout << std::endl << "fare per ticket:";
    std::cin >> c2fare;

    std::cout << std::endl << "Full date of travel:";

    std::cout << std::endl << "Date:";
    std::cin >> d;

    std::cout << std::endl << "Mounth:";
    std::cin >> m;

    std::cout << std::endl << "Year:";
    std::cin >> y;
}

void Detail::displaydetail()
{
    std::cout << std::endl << tno <<"\t" << tname << "\t" << bp << "\t" << dest << "\t";
    std::cout << c1 << "\t" << c1fare << "\t" << c2 << "\t" << c2fare << "\t";
    std::cout << d << "-" << m << "-" << y << "\t" << std::endl;
}

unsigned int Detail::getTNO()
{
    return tno;
}


unsigned int Detail::getC1()
{
    return c1;
}


unsigned int Detail::getC2()
{
    return c2;
}


unsigned int Detail::getC1Fare()
{
    return c1fare;
}


unsigned int Detail::getC2Fare()
{
    return c2fare;
}


unsigned int Detail::getDay()
{
    return d;
}


unsigned int Detail::getMonth()
{
    return m;
}


unsigned int Detail::getYear()
{
    return y;
}


void Detail:: setC1(unsigned int c1Value)
{
    c1 = c1Value;
}


void Reser::getresdet()
{
    std::cout << std::endl << "Enter the details as follows\n";

    std::cout << std::endl << "Train no:";
    std::cin >> tno;

    std::cout<< std::endl << "Train name:";
    std::cin >> tname;

    std::cout << std::endl << "Boarding point:";
    std::cin >> bp;

    std::cout << std::endl << "Destination pt:";
    std::cin >> dest;

    std::cout << std::endl << "No of seats required:";
    std::cin >> nosr;

    for(unsigned int i = 0; i < nosr; i++)
    {
        std::cout << std::endl << "Passenger name:";
        std::cin >> currentPasName;
        pname.push_back(currentPasName);
        std::cout << std::endl << "Passenger age:";
        std::cin >> currentAge;
        age.push_back(currentAge);
    }

    std::cout << "Enter the class f-first class s-second class:";
    std::cin >> travelClass;

    std::cout << std::endl << "Full date of travel:";

    std::cout << std::endl << "Date:";
    std::cin >> d;

    std::cout << std::endl << "Mounth:";
    std::cin >> m;

    std::cout << std::endl << "Year:";
    std::cin >> y;

    std::cout << "Enter the concession category\n";

    std::cout << "1.Military" << std::endl << "2.Senior citizen" << std::endl << "3.Children below 5 yrs" << std::endl << "4.None";

    std::cin >> con;

   std::cout << "............END OF GETTING DETAILS............" << std::endl;
}
void Reser::displayresdet()
{
    std::cout << std::endl << "...........................................";
    std::cout << std::endl << "...........................................";

    std::cout << "Pnr no: " << pnr;

    std::cout << std::endl << "Train no: " << tno;

    std::cout << std::endl << "Train name: " << tname;

    std::cout << std::endl << "Boarding point: " << bp;

    std::cout << std::endl << "Destination pt: " << dest;

    std::cout << std::endl << "No of seats reserved: " << nosr;

    for(unsigned int i = 0; i < nosr; i++)
    {
        std::cout << std::endl << "Passenger name: " << pname[i];

        std::cout << std::endl << "Passenger age: " << age[i];
    }

    std::cout << std::endl << "Your class: " << travelClass;

    std::cout << std::endl << "Date of reservation: " << d << "-" << m << "-" << y;

    std::cout << std::endl << "Your concession category: " << con;

    std::cout << std::endl << "You must pay: " << amc << std::endl;

    std::cout << "***********************************************" << std::endl;
    std::cout << ".........END OF RESERVATION...................." << std::endl;
    std::cout << "***********************************************" << std::endl;
}


unsigned int Reser::getTNO()
{
    return tno;
}

std::string Reser::getTravelClass()
{
    return travelClass;
}


unsigned int Reser::getNOSR()
{
    return nosr;
}


void Canc::getcancdet()
{
    std::cout << "Enter the details as follows" << std::endl;

    std::cout << "Pnr no:" << std::endl;
    std::cin >> pnr;

    std::cout << std::endl << "Full Date of cancellation:";

    std::cout << std::endl << "Date:";
    std::cin >> d;

    std::cout << std::endl << "Mounth:";
    std::cin >> m;

    std::cout << std::endl << "Year:";
    std::cin >> y;

    std::cout << "...........END OF GETTING DETAILS..........." << std::endl;
}


void Canc::displaycancdet()
{
    std::cout << std::endl << "...........................................";
    std::cout << std::endl << "...........................................";

    std::cout << std::endl << "Pnr no: " << pnr;

    std::cout << std::endl << "Train no: " << tno;

    std::cout << std::endl << "Train name: " << tname;

    std::cout << std::endl << "Boarding point: " << bp;

    std::cout << std::endl << "Destination pt: " << dest;

    std::cout << std::endl << "Your class: " << travelClass;

    std::cout << std::endl << "no of seats to be cancelled: " << nosc;

    for(unsigned int i = 0; i < nosc; i++)
    {
        std::cout << std::endl << "Passenger name: " << pname[i];

        std::cout << std::endl << "Passenger age: " << age[i];
    }

    std::cout << std::endl << "Date of cancellation: " << d << "-" << m << "-" << y;

    std::cout << std::endl << "You can collect: " << amr << "rs" << std::endl;

    std::cout << std::endl << "*****************************************";
    std::cout << std::endl << ".........END OF CANCELLATION.............";
    std::cout << std::endl << "*****************************************";
}



void database()
{
    std::string password;
    std::string pass = "codewithc";
    int ch;
    std::string choice;

    Detail a;
    std::fstream f;

    std::cout << std::endl << "Enter the administrator password:" << std::endl;
    std::cin >> password;

    if(password != pass)
    {
        std::cout << std::endl << "Enter the password correctly";
        std::cout << std::endl << "You are not permitted to logon this mode";
        return;
    }

    if(password == pass)
    {
        do
        {
            std::cout << std::endl << "...........ADMINISTRATOR MENU...........";
            std::cout << std::endl << "1.Create detail data base";
            std::cout << std::endl << "2.Add details";
            std::cout << std::endl << "3.Display details";
            std::cout << std::endl << "4.User management";
            std::cout << std::endl << "5.Display passenger details";
            std::cout << std::endl << "6.Return to main menu" << std::endl;

            std::cout << std::endl << "Enter your choice:" << std::endl;
            std::cin >> ch;

            std::cout << std::endl;

            switch(ch)
            {
            case CREATE_DETAIL_DATABASE:
                f.open("t.txt",std::ios::out | std::ios::binary);

                do
                {
                    a.getdetail();
//                  f.write(a, sizeof(a));

                    std::cout << std::endl << "Do you want to add one more record?";
                    std::cout << std::endl << "y-for Yes" << std::endl << "n-for No" << std::endl;
                    std::cin >> choice;
                }
                while(choice == "y");

                f.close();
                break;

            case ADD_DETAILS:
                f.open("t.txt", std::ios::in | std::ios::out | std::ios::binary | std::ios::app);

                a.getdetail();
//              f.write((char *) & a,sizeof(a));

                f.close();
                break;

            case DISPLAY_DETAILS:
                f.open("t.txt", std::ios::in | std::ios::out | std::ios::binary | std::ios::app);
                f.seekg(0);

//                while(f.read((char *) & a,sizeof(a)))
//                {
//                    a.displaydetail();
//                }

                f.close();
                break;

            case USER_MANAGEMENT:
                manage();
                break;

            case DISPLAY_PASSENGER_DETAILS:
                displaypassdetail();
                break;

            default:
                break;
            }
        }
        while(ch < RETURN_TO_MAIN_MENU);

        f.close();
    }
}

void reserve()
{
    int choice;

    do
    {
        std::cout << std::endl << "1.Reserve";
        std::cout << std::endl << "2.Return to the main menu";

        std::cout << std::endl << "Enter your choice:" << std::endl;
        std::cin >> choice;

        std::cout << std::endl;

        switch(choice)
        {
        case RESERVE:
            res();
            break;
        }
    }
    while(choice == RESERVE);

    getch();
}

void res()
{
    Detail a;
    Reser b;
    std::fstream f1,f2;
    time_t t;
    int ch;
    const int WHY_SEVEN = 7;
    
    f1.open("t.txt", std::ios::in | std::ios::out | std::ios::binary);
    f2.open("p.txt", std::ios::in | std::ios::out | std::ios::binary | std::ios::app);    

    b.getresdet();

    while(f1.read((char*) &a, sizeof(a)))
    {
        if(a.getTNO() == b.getTNO())
        {
            if(b.getTravelClass() == f)
            {
                if(a.getC1() >= b.getNOSR())

                {
                    amt = a.getC1Fare();
                    
                    addr = f1.tellg();
                    
                    ad = sizeof(a.getC1());
                    
                    f1.seekp(addr - (WHY_SEVEN * ad));
                    
                    a.setC1(a.getC1() - b.getNOSR());
                    
                    //f1.write((char*) &(a.getC1()), sizeof(a.getC1()));
                    f1.write((char*)a.getC1(), sizeof(a.getC1()));
                    
                    if(b.con==1)
                    {
                        cout<<"Concession category:MILITARY PERSONNEL\n";

                        b.amc=b.nosr*((amt*50)/100);
                    }
                    else if(b.con==2)
                    {
                        cout<<"Concession category:SENIOR CITIZEN\n";
                        b.amc=b.nosr*((amt*60)/100);
                    }
                    else if(b.con==3)
                    {
                        cout<<"Concession category:CHILDERN BELOW FIVE\n";
                        b.amc=0.0;
                    }
                    else if(b.con==4)
                    {
                        cout<<"You cannot get any concession\n";
                        b.amc=b.nosr*amt;
                    }
                    srand((unsigned) time(&t));
                    b.pnr=rand();
                    f2.write((char *) & b,sizeof(b));
                    b.displayresdet();
                    cout<<"------------------------------------------------------\n";
                    cout<<"--------------Your ticket is reserved-----------\n";
                    cout<<"-----------------End of reservation menu-------\n";
                }
                else
                {
                    cout<<"**********Sorry req seats not available********\n";

                }
            }
            else if(strcmp(b.clas,s)==0)
            {
                if(a.c2>=b.nosr)
                {
                    amt=a.c2fare;
                    addr=f1.tellg();
                    ad=sizeof(a.c2);
                    f1.seekp(addr-(5*ad));
                    a.c2=a.c2-b.nosr;
                    f1.write((char *) & a.c2,sizeof(a.c2));
                    if(b.con==1)
                    {
                        cout<<"Concession category:MILITARY PRESONNEL\n";
                        b.amc=b.nosr*((amt*50)/100);
                    }
                    else if(b.con==2)
                    {
                        cout<<"Concession category:SENIOR CITIZEN\n";
                        b.amc=b.nosr*((amt*60)/100);
                    }
                    else if(b.con==3)
                    {
                        cout<<"Concession category:CHILDERN BELOW FIVE\n";
                        b.amc=0.0;
                    }
                    else if(b.con==4)
                    {
                        cout<<"You cannot get any concession\n";
                        b.amc=b.nosr*amt;
                    }
                    f2.write((char *) & b,sizeof(b));
                    b.displayresdet();
                    cout<<"---------------------------------------\n";
                    cout<<"--------Your ticket is reserved--------\n";
                    cout<<"------------End of reservation---------\n";
                }
                else


                {
                    cout<<"********Sorry req no of seats not available*******\n";
                }
            }
            getch();

            goto h;
        }
        else
        {
            flag=0;
        }
    }
    if(flag==0)
    {
        cout<<"............Wrong train no......................\n";
        cout<<"......Enter the train no from the data base.....\n";
    }
    f1.close();
    f2.close();
    getch();
h:
}
void displaypassdetail()
{
    fstream f;
    reser b;
    f.open("p.txt",ios::in|ios::out|ios::binary);
    f.seekg(0);
    while(f.read((char *) & b,sizeof(b)))
    {
        b.displayresdet();
    }
    f.close();
    getch();
}
void enquiry()
{

    fstream f;
    f.open("t.txt",ios::in|ios::out|ios::binary);
    detail a;
    while(f.read((char *) & a,sizeof(a)))
    {
        a.displaydetail();
    }
    getch();
}
void cancell()
{
    detail a;
    reser b;
    canc c;
    fstream f1,f2,f3;
    f1.open("t.txt",ios::in|ios::out|ios::binary);
    f2.open("p.txt",ios::in|ios::out|ios::binary);
    f3.open("cn.txt",ios::in|ios::out|ios::binary);
    cout<<"**********CANCELLATION MENU*********\n";
    c.getcancdet();
    while(f2.read((char *) & b,sizeof(b)))
    {
        if(b.pnr==c.pnr)
        {
            c.tno=b.tno;
            strcpy(c.tname,b.tname);
            strcpy(c.bp,b.bp);
            strcpy(c.dest,b.dest);
            c.nosc=b.nosr;
            for(int j=0; j<c.nosc; j++)
            {
                strcpy(c.pname[j],b.pname[j]);
                c.age[j]=b.age[j];
            }
            strcpy(c.clas,b.clas);
            if(strcmp(c.clas,f)==0)
            {
                while(f1.read((char *) & a,sizeof(a)))
                {

                    if(a.tno==c.tno)
                    {
                        a.c1=a.c1+c.nosc;
                        d=a.d;
                        m=a.m;
                        addr=f1.tellg();
                        ad=sizeof(a.c1);
                        f1.seekp(addr-(7*ad));
                        f1.write((char *) & a.c1,sizeof(a.c1));
                        tamt=b.amc;
                        if((c.d==d)&&(c.m==m))
                        {
                            cout<<"You are cancelling at the date of departure\n";
                            c.amr=tamt-((tamt*60)/100);
                        }
                        else if(c.m==m)
                        {
                            cout<<"You are cancelling at the month of departure\n";
                            c.amr=tamt-((tamt*50)/100);
                        }
                        else if(m>c.m)
                        {
                            cout<<"You are cancelling one month before the date of departure\n";
                            c.amr=tamt-((tamt*20)/100);
                        }
                        else
                        {
                            cout<<"Cancelling after the departure\n";
                            cout<<"Your request cannot be completed\n";
                        }
                        goto h;
                        c.displaycancdet();
                    }
                }
            }
            else if(strcmp(c.clas,s)==0)
            {
                while(f1.read((char *) & a,sizeof(a)))
                {

                    if(a.tno==c.tno)
                    {
                        a.c2=a.c2+c.nosc;
                        d=a.d;
                        m=a.m;
                        addr=f1.tellg();
                        ad=sizeof(a.c2);
                        f1.seekp(addr-(5*ad));
                        f1.write((char *) & a.c2,sizeof(a.c2));
                        tamt=b.amc;
                        if((c.d==d)&&(c.m==m))
                        {
                            cout<<"You are cancelling at the date of departure\n";
                            c.amr=tamt-((tamt*60)/100);
                        }
                        else if(c.m==m)
                        {
                            cout<<"You are cancelling at the month of departure\n";
                            c.amr=tamt-((tamt*50)/100);
                        }
                        else if(m>c.m)
                        {
                            cout<<"You are cancelling one month before the date of departure\n";
                            c.amr=tamt-((tamt*20)/100);
                        }
                        else
                        {
                            cout<<"Cancelling after the departure\n";
                            cout<<"Your request cannot be completed\n";
                        }
                        goto h;
                        c.displaycancdet();
                    }
                }
            }
        }
        else
        {
            flag=0;

        }
    }
h:
    if(flag==0)
    {
        cout<<"Enter the correct pnr no\n";
    }
    f1.close();
    f2.close();
    f3.close();
    getch();
}
void can()
{
    int ch;
    do
    {
        cout<<".................CANCELLATION MENU.........\n";
        cout<<"1.Cancell\n2.Return to the main menu\n";
        cout<<"Enter your choice:";
        cin>>ch;
        cout<<endl;
        switch(ch)
        {
        case 1:
            cancell();
            break;
        }
    }
    while(ch==1);
    getch();
}
void user()
{
    login a;
    int ch;
    cout<<"*****************************************************\n";
    cout<<"***********WELCOME TO THE USER MENU**\n";
    cout<<"****************************************************\n";
    char *password;

    fstream f;
    f.open("id.txt",ios::in|ios::out|ios::binary);
    char id[100];
    puts("Enter your id:");
    gets(id);
    password=getpass("Enter your password:");
    while(f.read((char *) & a,sizeof(a)))
    {
        if((strcmp(a.id,id)==0)&&(strcmp(a.pass,password)==0))
        {
            do
            {
                cout<<"1.Reserve\n2.Cancell\n3.Enquiry\n4.Return to the main menu\n";
                cout<<"Enter your choice:";
                cin>>ch;
                cout<<endl;
                switch(ch)
                {
                case 1:
                    reserve();
                    break;
                case 2:
                    cancell();
                    break;
                case 3:
                    enquiry();
                    break;
                }
            }
            while(ch<=3);
            goto j;
        }
        else
        {
            d=1;
        }
    }
    if(d==1)
    {
        cout<<"Enter your user id and password correctly\n";
    }

    getch();
j:
}
void manage()
{
    int ch;
    fstream f;
    char c;
    login a;
    cout<<".........WELCOME TO THE USER MANAGEMENT MENU........\n";
    do
    {
        cout<<"1.Create id data base\n2.Add details\n";
        cout<<"3.Display details\n4.Return to the main menu\n";
        cout<<"Enter your choice:";
        cin>>ch;
        cout<<endl;
        switch(ch)
        {
        case 1:
            f.open("id.txt",ios::out|ios::binary);
            do
            {
                a.getid();
                f.write((char *) & a,sizeof(a));
                cout<<"Do you want to add one more record\n";
                cout<<"y-Yes\nn-No\n";
                cin>>c;
            }
            while(c=='y');
            f.close();
            break;
        case 2:
            f.open("id.txt",ios::in|ios::out|ios::binary|ios::app);
            a.getid();
            f.write((char *) & a,sizeof(a));
            f.close();
            break;
        case 3:
            f.open("id.txt",ios::in|ios::out|ios::binary);

            f.seekg(0);
            while(f.read((char *) & a,sizeof(a)))
            {
                a.displayid();
            }
            f.close();
            break;
        }
    }
    while(ch<=3);
    getch();
}

void main()
{
    clrscr();
    int ch;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<".......WELCOME TO RAILWAY RESERVATION SYSTEM..........\n";
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    do
    {
        cout<<"^^^^^^^^^^^^^^^^^^^^^^MAIN MENU^^^^^^^^^^^^^^^^^^^^\n";
        cout<<"1.Admin mode\n2.User mode\n3.Exit\n";
        cout<<"Enter your choice:";
        cin>>ch;
        cout<<endl;
        switch(ch)

        {
        case 1:
            database();
            break;
        case 2:
            user();
            break;
        case 3:
            exit(0);
        }
    }
    while(ch<=3);
    getch();
}
