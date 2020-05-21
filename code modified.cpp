#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdio.h>
#include<stdliBlock[1].h>
#include<dos.h>
#include<string>
using namespace std;

class room
{
public:
    int AC1, NAC1, AC2, NAC2, AC3, NAC3, AC4, NAC4, AC6, NAC6;
};
room Block[12];



void displayTable(room &A,room &B,room &C,room &D,room &E,room &F,room &G,room &H,room &J,room &K,room &L,room &Q)
{
    cout<<"Block      1-Bed            2-Bed           3-Bed           4-Bed           6-Bed"<<endl;
    cout<<"\tAC\tNAC\t  AC\tNAC\t  AC\tNAC\t  AC\tNAC\t  AC\tNAC"<<endl;
    cout<<"A\t"<<Block[0].AC1<<"\t"<<Block[0].NAC1<<"\t  "<<Block[0].AC2<<"\t"<<Block[0].NAC2<<"\t  "<<Block[0].AC3<<"\t"<<Block[0].NAC3<<"\t  "<<Block[0].AC4<<"\t"<<Block[0].NAC4<<"\t  "<<Block[0].AC6<<"\t"<<Block[0].NAC6<<"   "<<endl;
    cout<<"B\t"<<Block[1].AC1<<"\t"<<Block[1].NAC1<<"\t  "<<Block[1].AC2<<"\t"<<Block[1].NAC2<<"\t  "<<Block[1].AC3<<"\t"<<Block[1].NAC3<<"\t  "<<Block[1].AC4<<"\t"<<Block[1].NAC4<<"\t  "<<Block[1].AC6<<"\t"<<Block[1].NAC6<<"   "<<endl;
    cout<<"C\t"<<Block[2].AC1<<"\t"<<Block[2].NAC1<<"\t  "<<Block[2].AC2<<"\t"<<Block[2].NAC2<<"\t  "<<Block[2].AC3<<"\t"<<Block[2].NAC3<<"\t  "<<Block[2].AC4<<"\t"<<Block[2].NAC4<<"\t  "<<Block[2].AC6<<"\t"<<Block[2].NAC6<<"   "<<endl;
    cout<<"D\t"<<Block[3].AC1<<"\t"<<Block[3].NAC1<<"\t  "<<Block[3].AC2<<"\t"<<Block[3].NAC2<<"\t  "<<Block[3].AC3<<"\t"<<Block[3].NAC3<<"\t  "<<Block[3].AC4<<"\t"<<Block[3].NAC4<<"\t  "<<Block[3].AC6<<"\t"<<Block[3].NAC6<<"   "<<endl;
    cout<<"E\t"<<Block[4].AC1<<"\t"<<Block[4].NAC1<<"\t  "<<Block[4].AC2<<"\t"<<Block[4].NAC2<<"\t  "<<Block[4].AC3<<"\t"<<Block[4].NAC3<<"\t  "<<Block[4].AC4<<"\t"<<Block[4].NAC4<<"\t  "<<Block[4].AC6<<"\t"<<Block[4].NAC6<<"   "<<endl;
    cout<<"F\t"<<Block[5].AC1<<"\t"<<Block[5].NAC1<<"\t  "<<Block[5].AC2<<"\t"<<Block[5].NAC2<<"\t  "<<Block[5].AC3<<"\t"<<Block[5].NAC3<<"\t  "<<Block[5].AC4<<"\t"<<Block[5].NAC4<<"\t  "<<Block[5].AC6<<"\t"<<Block[5].NAC6<<"   "<<endl;
    cout<<"G\t"<<Block[6].AC1<<"\t"<<Block[6].NAC1<<"\t  "<<Block[6].AC2<<"\t"<<Block[6].NAC2<<"\t  "<<Block[6].AC3<<"\t"<<Block[6].NAC3<<"\t  "<<Block[6].AC4<<"\t"<<Block[6].NAC4<<"\t  "<<Block[6].AC6<<"\t"<<Block[6].NAC6<<"   "<<endl;
    cout<<"H\t"<<Block[7].AC1<<"\t"<<Block[7].NAC1<<"\t  "<<Block[7].AC2<<"\t"<<Block[7].NAC2<<"\t  "<<Block[7].AC3<<"\t"<<Block[7].NAC3<<"\t  "<<Block[7].AC4<<"\t"<<Block[7].NAC4<<"\t  "<<Block[8].AC6<<"\t"<<Block[7].NAC6<<"   "<<endl;
    cout<<"J\t"<<Block[8].AC1<<"\t"<<Block[8].NAC1<<"\t  "<<Block[8].AC2<<"\t"<<Block[8].NAC2<<"\t  "<<Block[8].AC3<<"\t"<<Block[8].NAC3<<"\t  "<<Block[8].AC4<<"\t"<<Block[8].NAC4<<"\t  "<<Block[8].AC6<<"\t"<<Block[8].NAC6<<"   "<<endl;
    cout<<"K\t"<<Block[9].AC1<<"\t"<<Block[9].NAC1<<"\t  "<<Block[9].AC2<<"\t"<<Block[9].NAC2<<"\t  "<<Block[8].AC3<<"\t"<<Block[9].NAC3<<"\t  "<<Block[9].AC4<<"\t"<<Block[9].NAC4<<"\t  "<<Block[9].AC6<<"\t"<<Block[9].NAC6<<"   "<<endl;
    cout<<"L\t"<<Block[10].AC1<<"\t"<<Block[10].NAC1<<"\t  "<<Block[10].AC2<<"\t"<<Block[10].NAC2<<"\t  "<<Block[9].AC3<<"\t"<<Block[10].NAC3<<"\t  "<<Block[10].AC4<<"\t"<<Block[10].NAC4<<"\t  "<<Block[10].AC6<<"\t"<<Block[10].NAC6<<"   "<<endl;
    cout<<"Q\t"<<Block[11].AC1<<"\t"<<Block[11].NAC1<<"\t  "<<Block[11].AC2<<"\t"<<Block[11].NAC2<<"\t  "<<Block[11].AC3<<"\t"<<Block[11].NAC3<<"\t  "<<Block[11].AC4<<"\t"<<Block[11].NAC4<<"\t  "<<Block[11].AC6<<"\t"<<Block[11].NAC6<<"   "<<endl;
}


class hostel
{

    char block;
    string roomtype;
    int room_no;
    string name;
    string reg_no;

public:

    void main_menu();
    void add();
    void display();
    void rooms();
    void edit();
    int check(string);
    void modify(string);
    void delete_rec(string);

};




//FOR DISPLAYING MAIN MENU



void hostel::main_menu()
{

    int choice;
    while(choice!=5)
    {

        system("cls");
        displayTable(A, B, C, D, E, F, G, H, J, K, L, Q);
        cout<<"\n\t\t\t\t*************************";
        cout<<"\n\t\t\t\tHOSTEL MANAGEMENT ";
        cout<<"\n\t\t\t\t * MAIN MENU *";
        cout<<"\n\t\t\t\t*************************";
        cout<<"\n\n\n\t\t\t1.Room Allotment";
        cout<<"\n\t\t\t2.View Student Details";
        cout<<"\n\t\t\t3.Rooms Allotted";
        cout<<"\n\t\t\t4.Edit Record";
        cout<<"\n\t\t\t5.Exit";
        cout<<"\n\n\t\t\tEnter Your Choice: ";
        cin>>choice;

        switch(choice)
        {

        case 1:
            add();
            break;

        case 2:
            display();
            break;

        case 3:
            rooms();
            break;

        case 4:
            edit();
            break;

        case 5:
            break;

        default:
        {

            cout<<"\n\n\t\t\tWrong choicBlock[4].....!!!";
            cout<<"\n\t\t\tPress any key to   continue....!!";
            getch();

        }

        }

    }

}


//END OF MENU FUNCTION


//FUNCTION FOR ALLOTMENT OF ROOM


void hostel::add()
{
    int flag = 1;
    char b;
    string r;

    cout<<"Enter the block: ";
    cin>>b;
    cout<<"Enter the room type(1AC/1NAC/2AC/2NAC/3AC/3NAC/4AC/4NAC/6AC/6NAC): ";
    cin>>r;
   if((b=='A')&&(r=="1AC")&&(Block[0].AC1>0))
        Block[0].AC1 += 1;
    else if((b=='A')&&(r=="1NAC")&&(Block[0].NAC1>0))
        Block[0].NAC1 += 1;
    else if((b=='A')&&(r=="2AC")&&(Block[0].AC2>0))
        Block[0].AC2 += 1;
    else if((b=='A')&&(r=="2NAC")&&(Block[0].NAC2>0))
        Block[0].NAC2 += 1;
    else if((b=='A')&&(r=="3AC")&&(Block[0].AC3>0))
        Block[0].AC3 += 1;
    else if((b=='A')&&(r=="3NAC")&&(Block[0].NAC3>0))
        Block[0].NAC3 += 1;
    else if((b=='A')&&(r=="4AC")&&(Block[0].AC4>0))
        Block[0].AC4 += 1;
    else if((b=='A')&&(r=="4NAC")&&(Block[0].NAC4>0))
        Block[0].NAC4 += 1;
    else if((b=='A')&&(r=="6AC")&&(Block[0].AC6>0))
        Block[0].AC6 += 1;
    else if((b=='A')&&(r=="6NAC")&&(Block[0].NAC6>0))
        Block[0].NAC6 += 1;
    else if((b=='B')&&(r=="1AC")&&(Block[1].AC1>0))
        Block[1].AC1 += 1;
    else if((b=='B')&&(r=="1NAC")&&(Block[1].NAC1>0))
        Block[1].NAC1 += 1;
    else if((b=='B')&&(r=="2AC")&&(Block[1].AC2>0))
        Block[1].AC2 += 1;
    else if((b=='B')&&(r=="2NAC")&&(Block[1].NAC2>0))
        Block[1].NAC2 += 1;
    else if((b=='B')&&(r=="3AC")&&(Block[1].AC3>0))
        Block[1].AC3 += 1;
    else if((b=='B')&&(r=="3NAC")&&(Block[1].NAC3>0))
        Block[1].NAC3 += 1;
    else if((b=='B')&&(r=="4AC")&&(Block[1].AC4>0))
        Block[1].AC4 += 1;
    else if((b=='B')&&(r=="4NAC")&&(Block[1].NAC4>0))
        Block[1].NAC4 += 1;
    else if((b=='B')&&(r=="6AC")&&(Block[1].AC6>0))
        Block[1].AC6 += 1;
    else if((b=='B')&&(r=="6NAC")&&(Block[1].NAC6>0))
        Block[1].NAC6 += 1;
   else if((b=='C')&&(r=="1AC")&&(Block[2].AC1>0))
        Block[2].AC1 += 1;
    else if((b=='C')&&(r=="1NAC")&&(Block[2].NAC1>0))
        Block[2].NAC1 += 1;
    else if((b=='C')&&(r=="2AC")&&(Block[2].AC2>0))
        Block[2].AC2 += 1;
    else if((b=='C')&&(r=="2NAC")&&(Block[2].NAC2>0))
        Block[2].NAC2 += 1;
    else if((b=='C')&&(r=="3AC")&&(Block[2].AC3>0))
        Block[2].AC3 += 1;
    else if((b=='C')&&(r=="3NAC")&&(Block[2].NAC3>0))
        Block[2].NAC3 += 1;
    else if((b=='C')&&(r=="4AC")&&(Block[2].AC4>0))
        Block[2].AC4 += 1;
    else if((b=='C')&&(r=="4NAC")&&(Block[2].NAC4>0))
        Block[2].NAC4 += 1;
    else if((b=='C')&&(r=="6AC")&&(Block[2].AC6>0))
        Block[2].AC6 += 1;
    else if((b=='C')&&(r=="6NAC")&&(Block[2].NAC6>0))
        Block[2].NAC6 += 1;
    else if((b=='D')&&(r=="1AC")&&(Block[3].AC1>0))
        Block[3].AC1 += 1;
    else if((b=='D')&&(r=="1NAC")&&(Block[3].NAC1>0))
        Block[3].NAC1 += 1;
    else if((b=='D')&&(r=="2AC")&&(Block[3].AC2>0))
        Block[3].AC2 += 1;
    else if((b=='D')&&(r=="2NAC")&&(Block[3].NAC2>0))
        Block[3].NAC2 += 1;
    else if((b=='D')&&(r=="3AC")&&(Block[3].AC3>0))
        Block[3].AC3 += 1;
    else if((b=='D')&&(r=="3NAC")&&(Block[3].NAC3>0))
        Block[3].NAC3 += 1;
    else if((b=='D')&&(r=="4AC")&&(Block[3].AC4>0))
        Block[3].AC4 += 1;
    else if((b=='D')&&(r=="4NAC")&&(Block[3].NAC4>0))
        Block[3].NAC4 += 1;
    else if((b=='D')&&(r=="6AC")&&(Block[3].AC6>0))
        Block[3].AC6 += 1;
    else if((b=='D')&&(r=="6NAC")&&(Block[3].NAC6>0))
        Block[3].NAC6 += 1;
    else if((b=='E')&&(r=="1AC")&&(Block[4].AC1>0))
        Block[4].AC1 += 1;
    else if((b=='E')&&(r=="1NAC")&&(Block[4].NAC1>0))
        Block[4].NAC1 += 1;
    else if((b=='E')&&(r=="2AC")&&(Block[4].AC2>0))
        Block[4].AC2 += 1;
    else if((b=='E')&&(r=="2NAC")&&(Block[4].NAC2>0))
        Block[4].NAC2 += 1;
    else if((b=='E')&&(r=="3AC")&&(Block[4].AC3>0))
        Block[4].AC3 += 1;
    else if((b=='E')&&(r=="3NAC")&&(Block[4].NAC3>0))
        Block[4].NAC3 += 1;
    else if((b=='E')&&(r=="4AC")&&(Block[4].AC4>0))
        Block[4].AC4 += 1;
    else if((b=='E')&&(r=="4NAC")&&(Block[4].NAC4>0))
        Block[4].NAC4 += 1;
    else if((b=='E')&&(r=="6AC")&&(Block[4].AC6>0))
        Block[4].AC6 += 1;
    else if((b=='E')&&(r=="6NAC")&&(Block[4].NAC6>0))
        Block[4].NAC6 += 1;
    else if((b=='F')&&(r=="1AC")&&(Block[5].AC1>0))
        Block[5].AC1 += 1;
    else if((b=='F')&&(r=="1NAC")&&(Block[5].NAC1>0))
        Block[5].NAC1 += 1;
    else if((b=='F')&&(r=="2AC")&&(Block[5].AC2>0))
        Block[5].AC2 += 1;
    else if((b=='F')&&(r=="2NAC")&&(Block[5].NAC2>0))
        Block[5].NAC2 += 1;
    else if((b=='F')&&(r=="3AC")&&(Block[5].AC3>0))
        Block[5].AC3 += 1;
    else if((b=='F')&&(r=="3NAC")&&(Block[5].NAC3>0))
        Block[5].NAC3 += 1;
    else if((b=='F')&&(r=="4AC")&&(Block[5].AC4>0))
        Block[5].AC4 += 1;
    else if((b=='F')&&(r=="4NAC")&&(Block[5].NAC4>0))
        Block[5].NAC4 += 1;
    else if((b=='F')&&(r=="6AC")&&(Block[5].AC6>0))
        Block[5].AC6 += 1;
    else if((b=='F')&&(r=="6NAC")&&(Block[5].NAC6>0))
        Block[5].NAC6 += 1;
     else if((b=='G')&&(r=="1AC")&&(Block[6].AC1>0))
        Block[6].AC1 += 1;
    else if((b=='G')&&(r=="1NAC")&&(Block[6].NAC1>0))
        Block[6].NAC1 += 1;
    else if((b=='G')&&(r=="2AC")&&(Block[6].AC2>0))
        Block[6].AC2 += 1;
    else if((b=='G')&&(r=="2NAC")&&(Block[6].NAC2>0))
        Block[6].NAC2 += 1;
    else if((b=='G')&&(r=="3AC")&&(Block[6].AC3>0))
        Block[6].AC3 += 1;
    else if((b=='G')&&(r=="3NAC")&&(Block[6].NAC3>0))
        Block[6].NAC3 += 1;
    else if((b=='G')&&(r=="4AC")&&(Block[6].AC4>0))
        Block[6].AC4 += 1;
    else if((b=='G')&&(r=="4NAC")&&(Block[6].NAC4>0))
        Block[6].NAC4 += 1;
    else if((b=='G')&&(r=="6AC")&&(Block[6].AC6>0))
        Block[6].AC6 += 1;
    else if((b=='G')&&(r=="6NAC")&&(Block[6].NAC6>0))
        Block[6].NAC6 += 1;
    else if((b=='H')&&(r=="1AC")&&(Block[7].AC1>0))
        Block[7].AC1 += 1;
    else if((b=='H')&&(r=="1NAC")&&(Block[7].NAC1>0))
        Block[7].NAC1 += 1;
    else if((b=='H')&&(r=="2AC")&&(Block[7].AC2>0))
        Block[7].AC2 += 1;
    else if((b=='H')&&(r=="2NAC")&&(Block[7].NAC2>0))
        Block[7].NAC2 += 1;
    else if((b=='H')&&(r=="3AC")&&(Block[7].AC3>0))
        Block[7].AC3 += 1;
    else if((b=='H')&&(r=="3NAC")&&(Block[7].NAC3>0))
        Block[7].NAC3 += 1;
    else if((b=='H')&&(r=="4AC")&&(Block[7].AC4>0))
        Block[7].AC4 += 1;
    else if((b=='H')&&(r=="4NAC")&&(Block[7].NAC4>0))
        Block[7].NAC4 += 1;
    else if((b=='H')&&(r=="6AC")&&(Block[7].AC6>0))
        Block[7].AC6 += 1;
    else if((b=='H')&&(r=="6NAC")&&(Block[7].NAC6>0))
        Block[7].NAC6 += 1;
    else if((b=='J')&&(r=="1AC")&&(Block[8].AC1>0))
        Block[8].AC1 += 1;
    else if((b=='J')&&(r=="1NAC")&&(Block[8].NAC1>0))
        Block[8].NAC1 += 1;
    else if((b=='J')&&(r=="2AC")&&(Block[8].AC2>0))
        Block[8].AC2 += 1;
    else if((b=='J')&&(r=="2NAC")&&(Block[8].NAC2>0))
        Block[8].NAC2 += 1;
    else if((b=='J')&&(r=="3AC")&&(Block[8].AC3>0))
        Block[8].AC3 += 1;
    else if((b=='J')&&(r=="3NAC")&&(Block[8].NAC3>0))
        Block[8].NAC3 += 1;
    else if((b=='J')&&(r=="4AC")&&(Block[8].AC4>0))
        Block[8].AC4 += 1;
    else if((b=='J')&&(r=="4NAC")&&(Block[8].NAC4>0))
        Block[8].NAC4 += 1;
    else if((b=='J')&&(r=="6AC")&&(Block[8].AC6>0))
        Block[8].AC6 += 1;
    else if((b=='J')&&(r=="6NAC")&&(Block[8].NAC6>0))
        Block[8].NAC6 += 1;
    else if((b=='K')&&(r=="1AC")&&(Block[9].AC1>0))
        Block[9].AC1 += 1;
    else if((b=='K')&&(r=="1NAC")&&(Block[9].NAC1>0))
        Block[9].NAC1 += 1;
    else if((b=='K')&&(r=="2AC")&&(Block[9].AC2>0))
        Block[9].AC2 += 1;
    else if((b=='K')&&(r=="2NAC")&&(Block[9].NAC2>0))
        Block[9].NAC2 += 1;
    else if((b=='K')&&(r=="3AC")&&(Block[9].AC3>0))
        Block[9].AC3 += 1;
    else if((b=='K')&&(r=="3NAC")&&(Block[9].NAC3>0))
        Block[9].NAC3 += 1;
    else if((b=='K')&&(r=="4AC")&&(Block[9].AC4>0))
        Block[9].AC4 += 1;
    else if((b=='K')&&(r=="4NAC")&&(Block[9].NAC4>0))
        Block[9].NAC4 += 1;
    else if((b=='K')&&(r=="6AC")&&(Block[9].AC6>0))
        Block[9].AC6 += 1;
    else if((b=='K')&&(r=="6NAC")&&(Block[9].NAC6>0))
        Block[9].NAC6 += 1;
    else if((b=='L')&&(r=="1AC")&&(Block[10].AC1>0))
        Block[10].AC1 += 1;
    else if((b=='L')&&(r=="1NAC")&&(Block[10].NAC1>0))
        Block[10].NAC1 += 1;
    else if((b=='L')&&(r=="2AC")&&(Block[10].AC2>0))
        Block[10].AC2 += 1;
    else if((b=='L')&&(r=="2NAC")&&(Block[10].NAC2>0))
        Block[10].NAC2 += 1;
    else if((b=='L')&&(r=="3AC")&&(Block[10].AC3>0))
        Block[10].AC3 += 1;
    else if((b=='L')&&(r=="3NAC")&&(Block[10].NAC3>0))
        Block[10].NAC3 += 1;
    else if((b=='L')&&(r=="4AC")&&(Block[10].AC4>0))
        Block[10].AC4 += 1;
    else if((b=='L')&&(r=="4NAC")&&(Block[10].NAC4>0))
        Block[10].NAC4 += 1;
    else if((b=='L')&&(r=="6AC")&&(Block[10].AC6>0))
        Block[10].AC6 += 1;
    else if((b=='L')&&(r=="6NAC")&&(Block[10].NAC6>0))
        Block[10].NAC6 += 1;
     else if((b=='Q')&&(r=="1AC")&&(Block[11].AC1>0))
        Block[11].AC1 += 1;
    else if((b=='Q')&&(r=="1NAC")&&(Block[11].NAC1>0))
        Block[11].NAC1 += 1;
    else if((b=='Q')&&(r=="2AC")&&(Block[11].AC2>0))
        Block[11].AC2 += 1;
    else if((b=='Q')&&(r=="2NAC")&&(Block[11].NAC2>0))
        Block[11].NAC2 += 1;
    else if((b=='Q')&&(r=="3AC")&&(Block[11].AC3>0))
        Block[11].AC3 += 1;
    else if((b=='Q')&&(r=="3NAC")&&(Block[11].NAC3>0))
        Block[11].NAC3 += 1;
    else if((b=='Q')&&(r=="4AC")&&(Block[11].AC4>0))
        Block[11].AC4 += 1;
    else if((b=='Q')&&(r=="4NAC")&&(Block[11].NAC4>0))
        Block[11].NAC4 += 1;
    else if((b=='Q')&&(r=="6AC")&&(Block[11].AC6>0))
        Block[11].AC6 += 1;
    else if((b=='Q')&&(r=="6NAC")&&(Block[11].NAC6>0))
        Block[11].NAC6 += 1;
    else
    {
        cout<<"Room  not available!!";
        flag = 0;
    }


    if(flag==1)
    {
        block = b;
        roomtype=r;
        cout<<"Room no.: ";
        cin>>room_no;
        cout<<"Name: ";
        cin>>name;
        cout<<"Reg No: ";
        cin>>reg_no;
        ofstream fout("Record",ios::app);
        fout.write((char*)this,sizeof(hostel));
        fout.close();
        cout<<"\n Room is booked..!!!";

    }

    cout<<"\n Press any key to continue.....!!";
    getch();


}


//END OF BOOKING FUNCTION


//FUNCTION FOR DISPLAYING A PARTICULAR CUSTOMER`S RECORD





void hostel::display()
{

    system("cls");

    ifstream fin("Record");
    int flag=0;
    string r;

    cout<<"\nEnter the registration number of the student: ";
    cin>>r;

    while(fin.read((char*)this,sizeof(hostel)))
    {
        if(reg_no==r)
        {

            system("cls");
            cout<<"\n Student Details:";
            cout<<"\n\n Room no: "<<room_no;
            cout<<"\n Name: "<<name;
            cout<<"\n Reg No: "<<reg_no;
            cout<<"\n Block: "<<block;
            cout<<"\n Room type: "<<roomtype;
            flag=1;
            break;

        }

    }

    if(flag==0)
        cout<<"\n Sorry registration number not found !!";
    cout<<"\n\n Press any key to continue....!!";

    getch();
    fin.close();
}


//END OF DISPLAY FUNCTION

//FUNCTION TO DISPLAY ALL ROOMS OCCUPIED


void hostel::rooms()
{

    system("cls");

    ifstream fin("Record");
    cout<<"\n\t\t\t    List Of Rooms Allotted";
    cout<<"\n\t\t\t    ----------------------";
    cout<<"\n\n Room No.\t\tName\t\tReg No\t\tBlock\t\tRoom Type";

    while(fin.read((char*)this,sizeof(hostel)))
    {
        cout<<"\n\n "<<room_no<<"\t\t"<<name<<"\t\t"<<reg_no<<"\t\t"<<block<<"\t\t"<<roomtype;
    }

    cout<<"\n\n\n\t\t\tPress any key to continue.....!!";
    getch();
    fin.close();

}


//FUNCTION FOR EDITING RECORDS AND FOR BILL


void hostel::edit()
{

    system("cls");

    int choice;
    string r;
    cout<<"\n EDIT MENU:";
    cout<<"\n\n 1.Modify Student Record";
    cout<<"\n 2.Delete Student Record";
    cout<<"\n Enter your choice: ";

    cin>>choice;
    system("cls");

    cout<<"\nEnter registration number of the student: " ;
    cin>>r;

    switch(choice)
    {

    case 1:
        modify(r);
        break;

    case 2:
        delete_rec(r);
        break;

    default:
        cout<<"\n Wrong Choice.....!!";

    }
    cout<<"\n Press any key to continue....!!!";

    getch();
}



int hostel::check(string r)
{

    int flag=0;

    ifstream fin("Record");

    while(fin.read((char*)this,sizeof(hostel)))
    {
        if(reg_no==r)
        {

            flag=1;
            break;

        }

    }

    fin.close();
    return(flag);

}


//FUNCTION TO MODIFY CUSTOMERS RECORD


void hostel::modify(string r)
{

    int flag=0;
    ifstream fin("Record");
    ofstream fout("temp");

    while(fin.read((char*)this,sizeof(hostel)))
    {
        if(reg_no==r){
            cout<<"\n Enter New Details:";
            cout<<"\nEnter the block: ";
            cin>>block;
            cout<<"Enter the room type(1AC/1NAC/2AC/2NAC/3AC/3NAC/4AC/4NAC/6AC/6NAC): ";
            cin>>roomtype;
            cout<<"Room no.: ";
            cin>>room_no;
            cout<<"Name: ";
            cin>>name;
            cout<<"Reg No: ";
            cin>>reg_no;
            fout.write((char*)this,sizeof(hostel));
            flag=1;
        }
        else{
            fout.write((char*)this,sizeof(hostel));
        }
    }
    fin.close();
    fout.close();

    if(flag==0)
        cout<<"\n Sorry registration number not found !!";
    else
    {

        remove("Record");
        rename("temp","Record");

    }

}


//END OF MODIFY FUNCTION


//FUNCTION FOR DELETING RECORD


void hostel::delete_rec(string r)
{

    int flag=0;
    char ch;
    ifstream fin("Record");
    ofstream fout("temp");

    while(fin.read((char*)this,sizeof(hostel)))
    {
        if(reg_no==r)

        {

            cout<<"\n Room number: "<<room_no;
            cout<<"\n Name: "<<name;
            cout<<"\n Registration number: "<<reg_no;
            cout<<"\n\n Do you want to delete this record(y/n): ";
            cin>>ch;

            if(ch=='n')
                fout.write((char*)this,sizeof(hostel));
            flag=1;

        }

        else
            fout.write((char*)this,sizeof(hostel));

    }

    fin.close();
    fout.close();

    if(flag==0)
        cout<<"\n Sorry registration number not found !!";

    else
    {

        remove("Record");
        rename("temp","Record");

    }

}


















//END OF DELETE FUNCTION


//FUNCTION FOR CUSTOMER`S BILL



//END OF BILLING FUNCTION

//START OF MAIN PROGARM


int main()
{
    hostel h;
    Block[0].AC1=1;
    Block[0].NAC1=1;
    Block[0].AC2=0;
    Block[0].NAC2=4;
    Block[0].AC3=0;
    Block[0].NAC3=0;
    Block[0].AC4=6;
    Block[0].NAC4=4;
    Block[0].AC6=0;
    Block[0].NAC6=3;
    Block[1].AC1=1;
    Block[1].NAC1=0;
    Block[1].AC2=1;
    Block[1].NAC2=0;
    Block[1].AC3=6;
    Block[1].NAC3=7;
    Block[1].AC4=0;
    Block[1].NAC4=1;
    Block[1].AC6=0;
    Block[1].NAC6=18;
    Block[2].AC1=0;
    Block[2].NAC1=0;
    Block[2].AC2=0;
    Block[2].NAC2=8;
    Block[2].AC3=0;
    Block[2].NAC3=0;
    Block[2].AC4=0;
    Block[2].NAC4=6;
    Block[2].AC6=0;
    Block[2].NAC6=0;
    Block[3].AC1=64;
    Block[3].NAC1=94;
    Block[3].AC2=0;
    Block[3].NAC2=0;
    Block[3].AC3=0;
    Block[3].NAC3=0;
    Block[3].AC4=0;
    Block[3].NAC4=0;
    Block[3].AC6=0;
    Block[3].NAC6=0;
    Block[4].AC1=0;
    Block[4].NAC1=0;
    Block[4].AC2=0;
    Block[4].NAC2=4;
    Block[4].AC3=0;
    Block[4].NAC3=0;
    Block[4].AC4=0;
    Block[4].NAC4=0;
    Block[4].AC6=0;
    Block[4].NAC6=0;
    Block[5].AC1=0;
    Block[5].NAC1=0;
    Block[5].AC2=6;
    Block[5].NAC2=3;
    Block[5].AC3=0;
    Block[5].NAC3=0;
    Block[5].AC4=0;
    Block[5].NAC4=6;
    Block[5].AC6=0;
    Block[5].NAC6=0;
    Block[6].AC1=8;
    Block[6].NAC1=233;
    Block[6].AC2=0;
    Block[6].NAC2=0;
    Block[6].AC3=0;
    Block[6].NAC3=0;
    Block[6].AC4=7;
    Block[6].NAC4=2;
    Block[6].AC6=0;
    Block[6].NAC6=0;
    Block[7].AC1=9;
    Block[7].NAC1=1;
    Block[7].AC2=0;
    Block[7].NAC2=0;
    Block[7].AC3=0;
    Block[7].NAC3=7;
    Block[7].AC4=0;
    Block[7].NAC4=0;
    Block[7].AC6=0;
    Block[7].NAC6=2;
    Block[8].AC1=2;
    Block[8].NAC1=8;
    Block[8].AC2=0;
    Block[8].NAC2=0;
    Block[8].AC3=0;
    Block[8].NAC3=785;
    Block[8].AC4=0;
    Block[8].NAC4=0;
    Block[8].AC6=0;
    Block[8].NAC6=6;
    Block[9].AC1=0;
    Block[9].NAC1=0;
    Block[9].AC2=0;
    Block[9].NAC2=0;
    Block[9].AC3=0;
    Block[9].NAC3=0;
    Block[9].AC4=6;
    Block[9].NAC4=0;
    Block[9].AC6=5;
    Block[9].NAC6=0;
    Block[10].AC1=1;
    Block[10].NAC1=0;
    Block[10].AC2=4;
    Block[10].NAC2=2;
    Block[10].AC3=6;
    Block[10].NAC3=0;
    Block[10].AC4=3;
    Block[10].NAC4=0;
    Block[10].AC6=6;
    Block[10].NAC6=0;
    Block[11].AC1=0;
    Block[11].NAC1=0;
    Block[11].AC2=7;
    Block[11].NAC2=0;
    Block[11].AC3=4;
    Block[11].NAC3=0;
    Block[11].AC4=8;
    Block[11].NAC4=0;
    Block[11].AC6=9;
    Block[11].NAC6=0;

    system("cls");

    cout<<"\n\t\t\t****************************";
    cout<<"\n\t\t\t* HOSTEL ALLOTMENT SYSTEM *";
    cout<<"\n\t\t\t****************************";
    cout<<"\n\n\t\tDeveloped By:";
    cout<<"\t Tanish Malekar, Parth Kulkarni and Adya Agrawal";
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\tPress any key to continue....!!";

    getch();

    h.main_menu();
    return 0;
}

//END OF MAIN PROGRAM

