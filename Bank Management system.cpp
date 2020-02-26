#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;
class bank
{
private:
    int bal;
    char name[100],add[100],y;

public:
    void open_account();
    void display_account();
    void deposit();
    void withdraw_money();
};
/*class clients
{
    ;

};*/

void bank ::open_account()
{
 //   string name,add;
    //char y;
  //  int bal;
    cout<<"Enter your name: ";
    cin.ignore();
    cin.getline(name,100);
    cout<<endl;
    cout<<"Enter your address: ";
     cin.ignore();
    cin.getline(add,100);
    cout<<endl;
    cout<<"Type of account: Saving (s)/Current (c): ";
    cin>>y;
    cout<<endl;
    cout<<"Enter the amount to be deposited: ";
    cin>>bal;
    cout<<endl;
    //getline(cin,name);
    cout<<"\t\t\tHello,"<<name<<" you are one of us and your amount is successfully deposited!";
    cout<<endl;
}
void bank::deposit()
{
    int rs;
    cout<<"Enter the amount to be deposited: ";
    cin>>rs;
    bal+=rs;
    cout<<"Total amount after deposit: "<<bal<<endl;

}
void bank::display_account()
{
    cout<<"Your  name :: "<<name<<endl;
    cout<<"Your Address :: "<<add<<endl;
    cout<<"type of account :: "<<y<<endl;
    cout<<"Current amount :: "<<bal<<endl;

}
void bank::withdraw_money()
{
    float amount;
    cout<<"Enter the amount to be withdrawn: ";
    cin>>amount;
    bal-=amount;
    cout<<"Total amount after withdrawing: "<<bal<<endl;


}

int main()
{
    int x,m;
    bank n;
    cout<<"\t \t\t\t\t\t WELCOME TO ONLINE BANKING"<<endl;
    cout<<"How can we help you?";
    cout<<endl;
    cout<<endl;

    do
{

    cout<<"1)Open your account \n\n";
    cout<<"2)Display account \n\n";
    cout<<"3)Deposit Money \n\n";
    cout<<"4)Withdraw Money \n\n";
    cout<<"5)EXIT \n\n";
    cout<<"Select your option: ";
    cin>>x;

    switch(x)
    {
        case 1: cout<<"\t \t \t \t \t OPEN BANK ACCOUNT\n"<<endl;
        n.open_account();
        break;
        case 2: cout<<"\t \t \t \t \t DISPLAY ACCOUNT\n"<<endl;
        n.display_account();
        break;
        case 3: cout<<"\t \t \t \t \t DEPOSIT MONEY\n"<<endl;
        n.deposit();
        break;
        case 4: cout<<"\t \t \t \t \t  WITHDRAW MONEY\n"<<endl;
        n.withdraw_money();
        break;
        case 5:
            if(x==5)
            {
                exit(1);
            }
        default:
            cout<<"Invalid choice\n";
    }
            cout<<"\n Do you want to continue ? Press:: 9\n";
            cout<<" Want to exit? Press :: 8 \n";
            cin>>m;
            //if(m==8)
              //  exit(0);
    }while(m==9);
    getch();
    return 0;
}
