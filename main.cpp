#include <iostream>
using namespace std;

float CalculateRemaining(float total, float payment);
int CalculateTotal(int price[], int quantity[], int count);
float CalculateDiscount(float total, float discount);
float CalculateFinalTotal(float total, float discountamount);

int main()
{
    string item[100];
    int price[100], quantity[100];

    int count = 0;
    int choice, subchoice, itemchoice, removechoice, editchoice, removequantity;
    int total = 0;
    int i;

    char continuechoice = 'Y';
    bool itemAdded;

    int discountchoice;
    float discount = 0;
    float discountamount = 0;
    float finaltotal = 0;

    float payment;
    float remaining;
    float change;

    do
    {
        bool itemAdded = false;

        cout << "\n\n\tFINE DINING MENU";
        cout << "\n================================";
        cout << "\n1. Starters";
        cout << "\n2. Main Courses";
        cout << "\n3. Desserts";
        cout << "\n4. Drinks";
        cout << "\n5. Edit Order";
        cout << "\n6. Finish Order";
        cout << "\n================================";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                do
                {
                    cout << "\n\nSTARTERS";
                    cout << "\n================================";
                    cout << "\n1. Soups";
                    cout << "\n2. Salads";
                    cout << "\n3. Appetizers";
                    cout << "\n================================";
                    cout << "\nEnter your choice: ";
                    cin >> subchoice;

                    switch (subchoice)
                    {
                        case 1:
                            do
                            {
                                cout << "\n\nSOUPS";
                                cout << "\n================================";
                                cout << "\n1. Creamy Mushroom Soup       - P180";
                                cout << "\n2. Roasted Tomato Soup         - P170";
                                cout << "\n3. Pumpkin Soup        - P190";
                                cout << "\n================================";
                                cout << "\nEnter your choice: ";
                                cin >> itemchoice;

                                switch (itemchoice)
                                {
                                    case 1:
                                        item[count] = "Creamy Mushroom Soup";
                                        price[count] = 180;

                                        break;

                                    case 2:
                                        item[count] = "Roasted Tomato Soup";
                                        price[count] = 170;

                                        break;

                                    case 3:
                                        item[count] = "Pumpkin Soup";
                                        price[count] = 190;
                                        
                                        break;

                                    default:
                                        cout << "\nInvalid choice.";
                                }

                                if (itemchoice >= 1 && itemchoice <= 3) {
                                    cout<<"Enter quantity: ";
                                    cin>>quantity[count];

                                    count++;
                                    itemAdded = true;

                                    cout << "\nAdded to order.";
                                }

                            } while (!itemAdded);

                            break;
                        case 2:
                            do
                            {
                                cout << "\n\nSALADS";
                                cout << "\n================================";
                                cout << "\n1. Caesar Salad        - P220";
                                cout << "\n2. Garden Salad        - P200";
                                cout << "\n3. Greek Salad         - P230";
                                cout << "\n================================";
                                cout << "\nEnter your choice: ";
                                cin >> itemchoice;

                                switch (itemchoice)
                                {
                                    case 1:
                                        item[count] = "Caesar Salad";
                                        price[count] = 220;

                                        break;

                                    case 2:
                                        item[count] = "Garden Salad";
                                        price[count] = 200;

                                        break;

                                    case 3:
                                        item[count] = "Greek Salad";
                                        price[count] = 230;

                                        break;

                                    default:
                                        cout << "\nInvalid choice.";
                                }

                            if (itemchoice >= 1 && itemchoice <= 3) {
                                    cout<<"Enter quantity: ";
                                    cin>>quantity[count];

                                    count++;
                                    itemAdded = true;

                                    cout << "\nAdded to order.";
                                }

                            } while (!itemAdded);

                            break;
                        case 3:
                            do
                            {
                                cout << "\n\nAPPETIZERS";
                                cout << "\n================================";
                                cout << "\n1. Garlic Bread        - P160";
                                cout << "\n2. Calamari            - P260";
                                cout << "\n3. Stuffed Mushrooms   - P240";
                                cout << "\n================================";
                                cout << "\nEnter your choice: ";
                                cin >> itemchoice;

                                switch (itemchoice)
                                {
                                    case 1:
                                        item[count] = "Garlic Bread";
                                        price[count] = 160;

                                        break;

                                    case 2:
                                        item[count] = "Calamari";
                                        price[count] = 260;

                                        break;

                                    case 3:
                                        item[count] = "Stuffed Mushrooms";
                                        price[count] = 240;

                                        break;

                                    default:
                                        cout << "\nInvalid choice.";
                                }

                                if (itemchoice >= 1 && itemchoice <= 3) {
                                    cout<<"Enter quantity: ";
                                    cin>>quantity[count];

                                    count++;
                                    itemAdded = true;

                                    cout << "\nAdded to order.";
                                }

                            } while (!itemAdded);

                            break;

                        default:
                            cout << "\nInvalid choice.";
                    }

                    do {
                        cout << "\nDo you want to continue ordering? [Y/N]: ";
                        cin >> continuechoice;

                        if (continuechoice != 'Y' && continuechoice != 'y' && continuechoice != 'N' && continuechoice != 'n') {
                            cout << "Invalid choice. Enter Y or N.\n";
                        }
                    } while (continuechoice != 'Y' && continuechoice != 'y' && continuechoice != 'N' && continuechoice != 'n');

                } while (!itemAdded || continuechoice == 'Y' || continuechoice == 'y');
                break;

            case 2:
                do
                {
                    cout << "\n\nMAIN COURSES";
                    cout << "\n================================";
                    cout << "\n1. Beef";
                    cout << "\n2. Chicken";
                    cout << "\n3. Seafood";
                    cout << "\n================================";
                    cout << "\nEnter your choice: ";
                    cin >> subchoice;

                    switch (subchoice)
                    {
                        case 1:
                            do
                            {
                                cout << "\n\nBEEF";
                                cout << "\n================================";
                                cout << "\n1. Grilled Steak       - P650";
                                cout << "\n2. Beef Tenderloin     - P720";
                                cout << "\n3. Roast Beef          - P580";
                                cout << "\n================================";
                                cout << "\nEnter your choice: ";
                                cin >> itemchoice;

                                switch (itemchoice)
                                {
                                    case 1:
                                        item[count] = "Grilled Steak";
                                        price[count] = 650;

                                        break;

                                    case 2:
                                        item[count] = "Beef Tenderloin";
                                        price[count] = 720;

                                        break;

                                    case 3:
                                        item[count] = "Roast Beef";
                                        price[count] = 580;

                                        break;

                                    default:
                                        cout << "\nInvalid choice.";
                                }
                                if (itemchoice >= 1 && itemchoice <= 3) {
                                    cout<<"Enter quantity: ";
                                    cin>>quantity[count];

                                    count++;
                                    itemAdded = true;

                                    cout << "\nAdded to order.";
                                }

                            } while (!itemAdded);

                            break;

                        case 2:
                            do
                            {
                                cout << "\n\nCHICKEN";
                                cout << "\n================================";
                                cout << "\n1. Grilled Chicken     - P420";
                                cout << "\n2. Chicken Parmesan    - P460";
                                cout << "\n3. Roast Chicken       - P440";
                                cout << "\n================================";
                                cout << "\nEnter your choice: ";
                                cin >> itemchoice;

                                switch (itemchoice)
                                {
                                    case 1:
                                        item[count] = "Grilled Chicken";
                                        price[count] = 420;

                                        break;

                                    case 2:
                                        item[count] = "Chicken Parmesan";
                                        price[count] = 460;

                                        break;

                                    case 3:
                                        item[count] = "Roast Chicken";
                                        price[count] = 440;

                                        break;

                                    default:
                                        cout << "\nInvalid choice.";
                                }

                                if (itemchoice >= 1 && itemchoice <= 3) {
                                    cout<<"Enter quantity: ";
                                    cin>>quantity[count];

                                    count++;
                                    itemAdded = true;

                                    cout << "\nAdded to order.";
                                }

                            } while (!itemAdded);

                            break;

                        case 3:
                            do
                            {
                                cout << "\n\nSEAFOOD";
                                cout << "\n================================";
                                cout << "\n1. Grilled Salmon      - P560";
                                cout << "\n2. Garlic Shrimp       - P480";
                                cout << "\n3. Baked Sea Bass      - P620";
                                cout << "\n================================";
                                cout << "\nEnter your choice: ";
                                cin >> itemchoice;

                                switch (itemchoice)
                                {
                                    case 1:
                                        item[count] = "Grilled Salmon";
                                        price[count] = 560;

                                        break;

                                    case 2:
                                        item[count] = "Garlic Shrimp";
                                        price[count] = 480;

                                        break;

                                    case 3:
                                        item[count] = "Baked Sea Bass";
                                        price[count] = 620;

                                        break;

                                    default:
                                        cout << "\nInvalid choice.";
                                }
                                
                                if (itemchoice >= 1 && itemchoice <= 3) {
                                    cout<<"Enter quantity: ";
                                    cin>>quantity[count];

                                    count++;
                                    itemAdded = true;

                                    cout << "\nAdded to order.";
                                }

                            } while (!itemAdded);

                            break;

                        default:
                            cout << "\nInvalid choice.";
                    }


                    do {
                        cout << "\nDo you want to continue ordering? [Y/N]: ";
                        cin >> continuechoice;

                        if (continuechoice != 'Y' && continuechoice != 'y' && continuechoice != 'N' && continuechoice != 'n') {
                            cout << "Invalid choice. Enter Y or N.\n";
                        }
                    } while (continuechoice != 'Y' && continuechoice != 'y' && continuechoice != 'N' && continuechoice != 'n');

                } while (!itemAdded || continuechoice == 'Y' || continuechoice == 'y');
                break;

            case 3:
                do
                {
                    cout << "\n\nDESSERTS";
                    cout << "\n================================";
                    cout << "\n1. Cakes";
                    cout << "\n2. Pastries";
                    cout << "\n3. Ice Cream";
                    cout << "\n================================";
                    cout << "\nEnter your choice: ";
                    cin >> subchoice;

                    switch (subchoice)
                    {

                        case 1:
                            do
                            {
                                cout << "\n\nCAKES";
                                cout << "\n================================";
                                cout << "\n1. Chocolate Cake      - P220";
                                cout << "\n2. Cheesecake          - P250";
                                cout << "\n3. Carrot Cake         - P230";
                                cout << "\n================================";
                                cout << "\nEnter your choice: ";
                                cin >> itemchoice;

                                switch (itemchoice)
                                {
                                    case 1:
                                        item[count] = "Chocolate Cake";
                                        price[count] = 220;

                                        break;

                                    case 2:
                                        item[count] = "Cheesecake";
                                        price[count] = 250;

                                        break;

                                    case 3:
                                        item[count] = "Carrot Cake";
                                        price[count] = 230;

                                        break;

                                    default:
                                        cout << "\nInvalid choice.";
                                }

                                if (itemchoice >= 1 && itemchoice <= 3) {
                                    cout<<"Enter quantity: ";
                                    cin>>quantity[count];

                                    count++;
                                    itemAdded = true;

                                    cout << "\nAdded to order.";
                                }

                            } while (!itemAdded);

                            break;

                        case 2:
                            do
                            {
                                cout << "\n\nPASTRIES";
                                cout << "\n================================";
                                cout << "\n1. Apple Tart          - P210";
                                cout << "\n2. Chocolate Eclair    - P190";
                                cout << "\n3. Cream Puff          - P180";
                                cout << "\n================================";
                                cout << "\nEnter your choice: ";
                                cin >> itemchoice;

                                switch (itemchoice)
                                {
                                    case 1:
                                        item[count] = "Apple Tart";
                                        price[count] = 210;

                                        break;

                                    case 2:
                                        item[count] = "Chocolate Eclair";
                                        price[count] = 190;

                                        break;

                                    case 3:
                                        item[count] = "Cream Puff";
                                        price[count] = 180;

                                        break;

                                    default:
                                        cout << "\nInvalid choice.";
                                }

                                if (itemchoice >= 1 && itemchoice <= 3) {
                                    cout<<"Enter quantity: ";
                                    cin>>quantity[count];

                                    count++;
                                    itemAdded = true;

                                    cout << "\nAdded to order.";
                                }

                            } while (!itemAdded);

                            break;

                        case 3:
                            do
                            {
                                cout << "\n\nICE CREAM";
                                cout << "\n================================";
                                cout << "\n1. Vanilla Ice Cream   - P160";
                                cout << "\n2. Chocolate Ice Cream - P170";
                                cout << "\n3. Strawberry Ice Cream - P170";
                                cout << "\n================================";
                                cout << "\nEnter your choice: ";
                                cin >> itemchoice;

                                switch (itemchoice)
                                {
                                    case 1:
                                        item[count] = "Vanilla Ice Cream";
                                        price[count] = 160;

                                        break;

                                    case 2:
                                        item[count] = "Chocolate Ice Cream";
                                        price[count] = 170;

                                        break;

                                    case 3:
                                        item[count] = "Strawberry Ice Cream";
                                        price[count] = 170;

                                        break;

                                    default:
                                        cout << "\nInvalid choice.";
                                }

                                if (itemchoice >= 1 && itemchoice <= 3) {
                                    cout<<"Enter quantity: ";
                                    cin>>quantity[count];

                                    count++;
                                    itemAdded = true;

                                    cout << "\nAdded to order.";
                                }

                            } while (!itemAdded);

                            break;

                        default:
                            cout << "\nInvalid choice.";
                    }

                    do {
                        cout << "\nDo you want to continue ordering? [Y/N]: ";
                        cin >> continuechoice;

                        if (continuechoice != 'Y' && continuechoice != 'y' && continuechoice != 'N' && continuechoice != 'n') {
                            cout << "Invalid choice. Enter Y or N.\n";
                        }
                    } while (continuechoice != 'Y' && continuechoice != 'y' && continuechoice != 'N' && continuechoice != 'n');

                } while (!itemAdded || continuechoice == 'Y' || continuechoice == 'y');
                break;

            case 4:
                do
                {
                    cout << "\n\t\tDRINKS";
                    cout << "\n================================";
                    cout << "\n1. House Iced Tea  - P100";
                    cout << "\n2. Fresh Lemonade  - P130";
                    cout << "\n3. Mango Shake     - P160";
                    cout << "\n4. Coca-Cola       - P90";
                    cout << "\n5. Bottled Water   - P60";
                    cout << "\n================================";
                    cout << "\nEnter your choice: ";
                    cin >> itemchoice;

                    switch (itemchoice)
                    {
                        case 1:
                            item[count] = "House Iced Tea";
                            price[count] = 100;
                            break;

                        case 2:
                            item[count] = "Fresh Lemonade";
                            price[count] = 130;
                            break;

                        case 3:
                            item[count] = "Mango Shake";
                            price[count] = 160;
                            break;

                        case 4:
                            item[count] = "Coca-Cola";
                            price[count] = 90;
                            break;

                        case 5:
                            item[count] = "Bottled Water";
                            price[count] = 60;
                            break;

                        default:
                            cout << "\nInvalid item choice. Please try again.\n";
                    }

                    if (itemchoice >= 1 && itemchoice <= 5) {
                        cout<<"Enter quantity: ";
                        cin>>quantity[count];

                        count++;
                        cout << "\nAdded to order.";
                    }

                    do {
                        cout << "\nDo you want to continue ordering? [Y/N]: ";
                        cin >> continuechoice;

                        if (continuechoice != 'Y' && continuechoice != 'y' && continuechoice != 'N' && continuechoice != 'n') {
                            cout << "Invalid choice. Enter Y or N.\n";
                        }
                    } while (continuechoice != 'Y' && continuechoice != 'y' && continuechoice != 'N' && continuechoice != 'n');

                } while (!itemAdded || continuechoice == 'Y' || continuechoice == 'y');
                break;

            case 5:
                cout<<"\n\n Edit Order";
                cout<<"\n================================\n";

                if (count == 0) {
                    cout<<"You current order is empty.";
                    cout<<"\n===================================";
                    break;
                } else {
                    do {
                        cout<<"\nCurrent Order";
                        cout<<"\n============================="<<endl;
                        for (i = 0; i < count; i++) {
                            cout<<"Order " << i+1 << ": "<<endl;
                            cout<<item[i]<<endl;
                            cout<<"Quantity: " << quantity[i]<<endl;
                            cout<<"Price: P"<<price[i]
                            <<endl<<endl;
                        }
                        cout<<"\n===================================";

                        cout << "\n1. Remove Item";
                        cout << "\n2. Back";
                        cout << "\n================================";
                        cout << "\nEnter your choice: ";
                        cin>>editchoice;
                        
                        switch (editchoice) {
                            case 1:
                                cout<<"Choose which to remove: ";
                                cin>>removechoice;
                                if (removechoice >= 1 && removechoice <= count) {
                                    removechoice --;

                                    cout<<"How many would you like to remove: ";
                                    cin>>removequantity;

                                    if (removequantity > 0 && removequantity < quantity[removechoice]) {
                                        quantity[removechoice] = quantity[removechoice] - removequantity;

                                        cout<<"\nQuantity removed succesfully" << endl;
                                    } else if (removequantity == quantity[removechoice]) {
                                        for (i = removechoice; i < count - 1; i ++) {
                                            item[i] = item[i + 1];
                                            price[i] = price[i + 1];
                                            quantity[i] = quantity[i + 1];
                                        }
                                        count--;
                                        cout<<"Item removed succesfully" << endl;
                                    } else {
                                        cout<<"Invalid quantity";
                                        break;
                                    }
                                    break;
                                } else {
                                    cout<<"Invalid order number" << endl;
                                    break;
                                }
                                
                            case 2:
                                cout<<"\n Exiting..." << endl;
                                break;
                            default:
                                cout<<"Invalid option" << endl;
                                break;
                        }
                        if (count == 0) {
                            cout<<"Your order is now empty. Returning to menu..." << endl;
                            break;
                        }

                    }while (editchoice !=2);
                }
                break;

            case 6:
                break;

            default:
                cout << "\nInvalid choice." << endl;
        }

        if (itemAdded)
        {
            do
            {
                cout << "\nDo you want to order again? [Y/N]: ";
                cin >> continuechoice;

                if (continuechoice != 'Y' && continuechoice != 'y' &&
                    continuechoice != 'N' && continuechoice != 'n')
                {
                    cout << "Please enter Y or N.\n";
                }

            } while (continuechoice != 'Y' && continuechoice != 'y' &&
                    continuechoice != 'N' && continuechoice != 'n');
        }

    } while (!itemAdded || continuechoice == 'Y' || continuechoice == 'y');

    cout << "\n\n================================";
    cout << "\n             RECEIPT";
    cout << "\n================================\n";

    total = CalculateTotal(price, quantity, count);

    for (i = 0; i < count; i++)
    {
        cout << "Order " << i + 1 << ": " << endl;
        cout << "Item: " << item[i] << endl;
        cout << "Quantity: " << quantity[i] << endl;
        cout << "Price: P" << price[i] << endl;
        cout << "Subtotal: P" << price[i] * quantity[i] << endl << endl;
    }
    cout << "--------------------------------";
    cout << "\nTotal: P" << total;
    cout << "\n================================";

    //might make this optional output:

    cout << "\n\nDISCOUNT";
    cout << "\n================================";
    cout << "\n1. Regular Customer";
    cout << "\n2. Senior Citizen";
    cout << "\n3. PWD";
    cout << "\n4. Student";
    cout << "\n================================";

    cout<<"\nEnter discount type: ";
    cin>>discountchoice;

    switch(discountchoice) {
        case 1:
            discount = 0;
            break;
        case 2:
        case 3:
            discount = 0.20;
            break;
        case 4:
            discount = 0.10;
            break;
        default:
            cout<<"\nInvalid choice";
            discount = 0;
            break;
    }

    discountamount = CalculateDiscount(total, discount);
    finaltotal = CalculateFinalTotal(total, discountamount); 

    cout << "\n================================";
    cout << "\nTotal: P" << total;
    cout << "\nDiscount: P" << discountamount;
    cout << "\nFinal Total: P" << finaltotal;
    cout << "\n================================" << endl;



    cout << "\n\t\tPAYMENT" << endl;
    cout << "===================================";

    remaining = finaltotal;
    
    do{
        cout << "\nRemaining Balance: P" << remaining;

        cout << "\nEnter your payment: P";
        cin >> payment;

        remaining = CalculateRemaining(remaining, payment);

        if (remaining > 0) {
            cout << "\nInsufficient Payment" << endl;
            cout << "You are still P" << remaining << " short.";
        }
    } while (remaining > 0);

    if (remaining < 0) {
        change = remaining * -1;
        cout << "\nChange: P" << change;
    } else {
            cout << "\nExact Payment Received.";
    }

    return 0;
}

float CalculateRemaining(float total, float payment)
{
    return total - payment;
}

int CalculateTotal(int price[], int quantity[], int count)
{
    int total = 0;

    for (int i = 0; i < count; i++)
    {
        total += quantity[i] * price[i];
    }
    return total;
}

float CalculateDiscount(float total, float discount)
{
    return total * discount;
}

float CalculateFinalTotal(float total, float discountamount)
{
    return total - discountamount;
}