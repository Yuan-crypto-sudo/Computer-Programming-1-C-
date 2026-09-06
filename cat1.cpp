#include <iostream>
using namespace std;

int main () {
    int order [20], price [20];
    int count = 0;
    string item [20];
    int i, choice;

    do {
        cout<<"\tMenu";
        cout<<"\n=====================";
        cout<<"\n1. Burger";
        cout<<"\n2. Chicken";
        cout<<"\n3. Fries";
        cout<<"\n4. Drinks";
        cout<<"\n5. Desert";
        cout<<"\n6. Finish Order";

        cout<<"\n=====================";
        cout<<"\nEnter your choice: ";
        cin>>choice;

        if (choice >= 1 && choice <= 5) {
            order[count] = choice;
            count++;
        }
    }while (choice != 6);

    for (i=0; i<count; i++) {
        if (order[i] == 1) {
            item[i] = "Burger";
            price[i] = 240;
        } else if (order[i] == 2) {
            item[i] = "Chicken";
            price[i] = 100;
                
        }
        else if (order[i] == 3) {
            item[i] = "Fries";
            price[i] = 45;
                
        }
        else if (order[i] == 4) {
            item[i] = "Drinks";
            price[i] = 30;
                
        }
        else if (order[i] == 5) {
            item[i] = "Desert";
            price[i] = 60;
                
        }
        else {
            cout<<"Unknown Item.";
            }
    }

    cout<<"================================"<<endl;
    cout<<"             RECEIPT            "<<endl;
    cout<<"================================"<<endl;

    for (i = 0; i <= count; i++) {
        cout<<"Order "<<i+1<<": "<< item[i] <<" - P"<< price[i]<<endl;
    }

    return 0;
}