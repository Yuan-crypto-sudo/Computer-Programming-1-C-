#include <iostream>
using namespace std;

int main()
{
    string item[100];
    int price[100], quantity[100];

    int count = 0;
    int choice, subchoice, itemchoice, removechoice, editchoice, removequantity;
    int total = 0;
    int i;

    do
    {
        cout << "\n\n\tFINE DINING MENU";
        cout << "\n================================";
        cout << "\n1. Starters";
        cout << "\n2. Main Courses";
        cout << "\n3. Desserts";
        cout << "\n4. Edit Order";
        cout << "\n5. Finish Order";
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
                    cout << "\n4. Back";
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
                                cout << "\n1. Mushroom Soup       - P180";
                                cout << "\n2. Tomato Soup         - P170";
                                cout << "\n3. Pumpkin Soup        - P190";
                                cout << "\n4. Back";
                                cout << "\n================================";
                                cout << "\nEnter your choice: ";
                                cin >> itemchoice;

                                switch (itemchoice)
                                {
                                    case 1:
                                        item[count] = "Mushroom Soup";
                                        price[count] = 180;

                                        cout<<"Enter quantity: ";
                                        cin>>quantity[count];

                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 2:
                                        item[count] = "Tomato Soup";
                                        price[count] = 170;

                                        cout<<"Enter quantity: ";
                                        cin>>quantity[count];

                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 3:
                                        item[count] = "Pumpkin Soup";
                                        price[count] = 190;

                                        cout<<"Enter quantity: ";
                                        cin>>quantity[count];

                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 4:
                                        break;

                                    default:
                                        cout << "\nInvalid choice.";
                                }

                            } while (itemchoice != 4);

                            break;
                        case 2:
                            do
                            {
                                cout << "\n\nSALADS";
                                cout << "\n================================";
                                cout << "\n1. Caesar Salad        - P220";
                                cout << "\n2. Garden Salad        - P200";
                                cout << "\n3. Greek Salad         - P230";
                                cout << "\n4. Back";
                                cout << "\n================================";
                                cout << "\nEnter your choice: ";
                                cin >> itemchoice;

                                switch (itemchoice)
                                {
                                    case 1:
                                        item[count] = "Caesar Salad";
                                        price[count] = 220;

                                        cout<<"Enter quantity: ";
                                        cin>>quantity[count];

                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 2:
                                        item[count] = "Garden Salad";
                                        price[count] = 200;

                                        cout<<"Enter quantity: ";
                                        cin>>quantity[count];

                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 3:
                                        item[count] = "Greek Salad";
                                        price[count] = 230;

                                        cout<<"Enter quantity: ";
                                        cin>>quantity[count];

                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 4:
                                        break;

                                    default:
                                        cout << "\nInvalid choice.";
                                }

                            } while (itemchoice != 4);

                            break;
                        case 3:
                            do
                            {
                                cout << "\n\nAPPETIZERS";
                                cout << "\n================================";
                                cout << "\n1. Garlic Bread        - P160";
                                cout << "\n2. Calamari            - P260";
                                cout << "\n3. Stuffed Mushrooms   - P240";
                                cout << "\n4. Back";
                                cout << "\n================================";
                                cout << "\nEnter your choice: ";
                                cin >> itemchoice;

                                switch (itemchoice)
                                {
                                    case 1:
                                        item[count] = "Garlic Bread";
                                        price[count] = 160;

                                        cout<<"Enter quantity: ";
                                        cin>>quantity[count];

                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 2:
                                        item[count] = "Calamari";
                                        price[count] = 260;

                                        cout<<"Enter quantity: ";
                                        cin>>quantity[count];

                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 3:
                                        item[count] = "Stuffed Mushrooms";
                                        price[count] = 240;

                                        cout<<"Enter quantity: ";
                                        cin>>quantity[count];

                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 4:
                                        break;

                                    default:
                                        cout << "\nInvalid choice.";
                                }

                            } while (itemchoice != 4);

                            break;
                        case 4:
                            break;

                        default:
                            cout << "\nInvalid choice.";
                    }

                } while (subchoice != 4);

                break;

            case 2:
                do
                {
                    cout << "\n\nMAIN COURSES";
                    cout << "\n================================";
                    cout << "\n1. Beef";
                    cout << "\n2. Chicken";
                    cout << "\n3. Seafood";
                    cout << "\n4. Back";
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
                                cout << "\n4. Back";
                                cout << "\n================================";
                                cout << "\nEnter your choice: ";
                                cin >> itemchoice;

                                switch (itemchoice)
                                {
                                    case 1:
                                        item[count] = "Grilled Steak";
                                        price[count] = 650;

                                        cout<<"Enter quantity: ";
                                        cin>>quantity[count];

                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 2:
                                        item[count] = "Beef Tenderloin";
                                        price[count] = 720;

                                        cout<<"Enter quantity: ";
                                        cin>>quantity[count];

                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 3:
                                        item[count] = "Roast Beef";
                                        price[count] = 580;

                                        cout<<"Enter quantity: ";
                                        cin>>quantity[count];

                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 4:
                                        break;

                                    default:
                                        cout << "\nInvalid choice.";
                                }

                            } while (itemchoice != 4);

                            break;

                        case 2:
                            do
                            {
                                cout << "\n\nCHICKEN";
                                cout << "\n================================";
                                cout << "\n1. Grilled Chicken     - P420";
                                cout << "\n2. Chicken Parmesan    - P460";
                                cout << "\n3. Roast Chicken       - P440";
                                cout << "\n4. Back";
                                cout << "\n================================";
                                cout << "\nEnter your choice: ";
                                cin >> itemchoice;

                                switch (itemchoice)
                                {
                                    case 1:
                                        item[count] = "Grilled Chicken";
                                        price[count] = 420;

                                        cout<<"Enter quantity: ";
                                        cin>>quantity[count];

                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 2:
                                        item[count] = "Chicken Parmesan";
                                        price[count] = 460;

                                        cout<<"Enter quantity: ";
                                        cin>>quantity[count];

                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 3:
                                        item[count] = "Roast Chicken";
                                        price[count] = 440;

                                        cout<<"Enter quantity: ";
                                        cin>>quantity[count];

                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 4:
                                        break;

                                    default:
                                        cout << "\nInvalid choice.";
                                }

                            } while (itemchoice != 4);

                            break;

                        case 3:
                            do
                            {
                                cout << "\n\nSEAFOOD";
                                cout << "\n================================";
                                cout << "\n1. Grilled Salmon      - P560";
                                cout << "\n2. Garlic Shrimp       - P480";
                                cout << "\n3. Baked Sea Bass      - P620";
                                cout << "\n4. Back";
                                cout << "\n================================";
                                cout << "\nEnter your choice: ";
                                cin >> itemchoice;

                                switch (itemchoice)
                                {
                                    case 1:
                                        item[count] = "Grilled Salmon";
                                        price[count] = 560;

                                        cout<<"Enter quantity: ";
                                        cin>>quantity[count];

                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 2:
                                        item[count] = "Garlic Shrimp";
                                        price[count] = 480;

                                        cout<<"Enter quantity: ";
                                        cin>>quantity[count];

                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 3:
                                        item[count] = "Baked Sea Bass";
                                        price[count] = 620;

                                        cout<<"Enter quantity: ";
                                        cin>>quantity[count];

                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 4:
                                        break;

                                    default:
                                        cout << "\nInvalid choice.";
                                }

                            } while (itemchoice != 4);

                            break;

                        case 4:
                            break;

                        default:
                            cout << "\nInvalid choice.";
                    }

                } while (subchoice != 4);

                break;

            case 3:
                do
                {
                    cout << "\n\nDESSERTS";
                    cout << "\n================================";
                    cout << "\n1. Cakes";
                    cout << "\n2. Pastries";
                    cout << "\n3. Ice Cream";
                    cout << "\n4. Back";
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
                                cout << "\n4. Back";
                                cout << "\n================================";
                                cout << "\nEnter your choice: ";
                                cin >> itemchoice;

                                switch (itemchoice)
                                {
                                    case 1:
                                        item[count] = "Chocolate Cake";
                                        price[count] = 220;

                                        cout << "Enter quantity: ";
                                        cin >> quantity[count];

                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 2:
                                        item[count] = "Cheesecake";
                                        price[count] = 250;

                                        cout<<"Enter quantity: ";
                                        cin>>quantity[count];

                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 3:
                                        item[count] = "Carrot Cake";
                                        price[count] = 230;

                                        cout<<"Enter quantity: ";
                                        cin>>quantity[count];

                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 4:
                                        break;

                                    default:
                                        cout << "\nInvalid choice.";
                                }

                            } while (itemchoice != 4);

                            break;

                        case 2:
                            do
                            {
                                cout << "\n\nPASTRIES";
                                cout << "\n================================";
                                cout << "\n1. Apple Tart          - P210";
                                cout << "\n2. Chocolate Eclair    - P190";
                                cout << "\n3. Cream Puff          - P180";
                                cout << "\n4. Back";
                                cout << "\n================================";
                                cout << "\nEnter your choice: ";
                                cin >> itemchoice;

                                switch (itemchoice)
                                {
                                    case 1:
                                        item[count] = "Apple Tart";
                                        price[count] = 210;

                                        cout<<"Enter quantity: ";
                                        cin>>quantity[count];

                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 2:
                                        item[count] = "Chocolate Eclair";
                                        price[count] = 190;

                                        cout<<"Enter quantity: ";
                                        cin>>quantity[count];

                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 3:
                                        item[count] = "Cream Puff";
                                        price[count] = 180;

                                        cout<<"Enter quantity: ";
                                        cin>>quantity[count];

                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 4:
                                        break;

                                    default:
                                        cout << "\nInvalid choice.";
                                }

                            } while (itemchoice != 4);

                            break;

                        case 3:
                            do
                            {
                                cout << "\n\nICE CREAM";
                                cout << "\n================================";
                                cout << "\n1. Vanilla Ice Cream   - P160";
                                cout << "\n2. Chocolate Ice Cream - P170";
                                cout << "\n3. Strawberry Ice Cream - P170";
                                cout << "\n4. Back";
                                cout << "\n================================";
                                cout << "\nEnter your choice: ";
                                cin >> itemchoice;

                                switch (itemchoice)
                                {
                                    case 1:
                                        item[count] = "Vanilla Ice Cream";
                                        price[count] = 160;

                                        cout<<"Enter quantity: ";
                                        cin>>quantity[count];

                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 2:
                                        item[count] = "Chocolate Ice Cream";
                                        price[count] = 170;

                                        cout<<"Enter quantity: ";
                                        cin>>quantity[count];

                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 3:
                                        item[count] = "Strawberry Ice Cream";
                                        price[count] = 170;

                                        cout<<"Enter quantity: ";
                                        cin>>quantity[count];

                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 4:
                                        break;

                                    default:
                                        cout << "\nInvalid choice.";
                                }

                            } while (itemchoice != 4);

                            break;

                        case 4:
                            break;

                        default:
                            cout << "\nInvalid choice.";
                    }

                } while (subchoice != 4);

                break;

            case 4:
                cout<<"\n\n Edit Order";
                cout<<"\n================================\n";

                if (count == 0) {
                    cout<<"You current order is empty.";
                    cout<<"\n===================================";
                    break;
                }

                do {
                    cout<<"\nCurrent Order";
                    cout<<"\n============================="<<endl;
                    for (i = 0; i < count; i++) {
                        cout<<"Order "<<i+1<<": "<<item[i]<<" - P"<<price[i]<<endl;
                    }
                    cout<<"\n===================================";

                    cout << "\n1. Remove Item";
                    cout << "\n2. Back";
                    cout << "\n================================";
                    cout << "\nEnter your choice: ";
                    cin>>editchoice;
                    
                    switch (editchoice) {
                        case 1:
                            if (removechoice >= 1 && removechoice <= count) {
                                    cout<<"Choose which to remove: ";
                                cin>>removechoice;

                                removechoice --;

                                cout<<"How many would you like to remove: ";
                                cin>>removequantity;

                                if (removequantity > 0 && removequantity < quantity[removechoice]) {
                                    quantity[removechoice] = quantity[removechoice] - removequantity;

                                    cout<<"\nQuantity removed succesfully";
                                } else if (removequantity == quantity[removechoice]) {
                                    for (i = removechoice; i < count - 1; i ++) {
                                        item[i] = item[i + 1];
                                        price[i] = price[i + 1];
                                        quantity[i] = quantity[i + 1];
                                    }
                                    count--;
                                    cout<<"Item removed succesfully";
                                } else {
                                    cout<<"Invalid quantity";
                                    break;
                                }
                                break;
                            } else {
                                cout<<"Invalid order number";
                                break;
                            }
                            
                        case 2:
                            cout<<"\n Exiting...";
                            break;
                        default:
                            cout<<"Invalid option";
                            break;
                    }
                    if (count == 0) {
                        cout<<"Your order is now empty. Returning to menu...";
                        break;
                    }

                }while (editchoice !=2);
                break;

            case 5:
                break;

            default:
                cout << "\nInvalid choice.";
                break;
        }

    } while (choice != 5);

    cout << "\n\n================================";
    cout << "\n             RECEIPT";
    cout << "\n================================\n";

    total = 0;

    for (i = 0; i < count; i++)
    {
        cout << "Order " << i + 1 << ": " << endl;
        cout << "Quantity: " << quantity[i] << endl;
        cout << "Price: P" << price[i] << endl;
        cout << "Subtotal: P" << price[i] * quantity[i] << endl;

        total += price[i] * quantity[i];
    }

    cout << "--------------------------------";
    cout << "\nTotal: P" << total;
    cout << "\n================================";

    return 0;
}