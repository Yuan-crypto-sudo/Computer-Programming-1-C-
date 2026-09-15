//filename: Alcuetas_Activtity_ATM

#include <iostream>
using namespace std;

int main() {
    int trans;
    int deposit = 0, withdraw = 0;
    int balance = 1000;

    cout<<" *************************************************************";
    cout<<"\n *  TECHNOLOGICAL INSTITUTE OF THE PHILIPPINES QUEZON CITY   *";
    cout<<"\n *      	   First Semester S.Y. 2023-2024             *";
    cout<<"\n *      	   ITE001 Computer Programming 1             *";
    cout<<"\n *  NAME: Alcuetas, Yuan Carlo, S.	  SECTION: CYB11S1   *";
    cout<<"\n *************************************************************";

    cout<<"\n\n\t\tT.I.P. ATM MACHINE";
    cout<<"\nBalance";
    cout<<"\nDeposit";
    cout<<"\nWithdrawal\n";   


    do {
        cout<<"\n\nChoose Transaction[1-3]: ";
        cin>>trans;

        switch(trans) {
        case 1:
            cout<<"Your total  balance is:"<<balance;
            break;
        case 2:
            cout<<"Enter the amount you want to deposit: ";
            cin>>deposit;

            if (deposit >= 100) {
                balance = balance + deposit;
                cout<<"Your total balance is: "<< balance;
            } else {
                cout<<"Sorry, your transaction cannot be processed! The minimum deposit is 100.";
            }
            break;
        case 3:
            cout<<"Enter amount: ";
            cin>>withdraw;

            if (withdraw >= 100) {
                if (withdraw > balance) {
                    cout<<"Sorry, your transaction cannot be processed!";
                } else {
                    balance = balance - withdraw;
                    cout<<"Your total balance is: "<< balance;
                }
            } else {
                cout<<"Sorry, your transaction cannot be processed! The minimum withdrawal is 100.";
            }
            break;
        default:
            break;
        }
    cout<<endl;    
    } while (trans >= 1 && trans <= 3);
    cout << "Thank you! Come again!\n";
    return 0;
}