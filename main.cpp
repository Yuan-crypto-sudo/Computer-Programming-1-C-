#include <iostream>
using namespace std;

int main()
{
    string item[100];
    int price[100];

    int count = 0;
    int choice, subchoice, itemchoice, removechoice;
    int total = 0;
    int i;

    do
    {
        cout << "\n\n\tFINE DINING MENU";
        cout << "\n================================";
        cout << "\n1. Starters";
        cout << "\n2. Main Courses";
        cout << "\n3. Desserts";
        cout << "\n4. View Current Order";
        cout << "\n5. Edit Order";
        cout << "\n6. Finish Order";
        cout << "\n================================";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {

            // ==========================
            // 1. STARTERS
            // ==========================

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

                        // SOUPS
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
                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 2:
                                        item[count] = "Tomato Soup";
                                        price[count] = 170;
                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 3:
                                        item[count] = "Pumpkin Soup";
                                        price[count] = 190;
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

                        // SALADS
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
                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 2:
                                        item[count] = "Garden Salad";
                                        price[count] = 200;
                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 3:
                                        item[count] = "Greek Salad";
                                        price[count] = 230;
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

                        // APPETIZERS
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
                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 2:
                                        item[count] = "Calamari";
                                        price[count] = 260;
                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 3:
                                        item[count] = "Stuffed Mushrooms";
                                        price[count] = 240;
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


            // ==========================
            // 2. MAIN COURSES
            // ==========================

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

                        // BEEF
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
                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 2:
                                        item[count] = "Beef Tenderloin";
                                        price[count] = 720;
                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 3:
                                        item[count] = "Roast Beef";
                                        price[count] = 580;
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

                        // CHICKEN
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
                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 2:
                                        item[count] = "Chicken Parmesan";
                                        price[count] = 460;
                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 3:
                                        item[count] = "Roast Chicken";
                                        price[count] = 440;
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

                        // SEAFOOD
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
                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 2:
                                        item[count] = "Garlic Shrimp";
                                        price[count] = 480;
                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 3:
                                        item[count] = "Baked Sea Bass";
                                        price[count] = 620;
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


            // ==========================
            // 3. DESSERTS
            // ==========================

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

                        // CAKES
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
                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 2:
                                        item[count] = "Cheesecake";
                                        price[count] = 250;
                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 3:
                                        item[count] = "Carrot Cake";
                                        price[count] = 230;
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

                        // PASTRIES
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
                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 2:
                                        item[count] = "Chocolate Eclair";
                                        price[count] = 190;
                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 3:
                                        item[count] = "Cream Puff";
                                        price[count] = 180;
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

                        // ICE CREAM
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
                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 2:
                                        item[count] = "Chocolate Ice Cream";
                                        price[count] = 170;
                                        count++;
                                        cout << "\nAdded to order.";
                                        break;

                                    case 3:
                                        item[count] = "Strawberry Ice Cream";
                                        price[count] = 170;
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
                cout << "\n\nCURRENT ORDER";
                cout << "\n================================\n";
                for (i = 0; i < count; i++) {
                    cout<<"Order "<<i+1<<": "<<item[i]<<" - P"<<price[i]<<endl;
                }
                break;

            case 5:
                cout<<"\n\n Edit Order";
                cout<<"\n================================\n";

                for (i = 0; i < count; i++) {
                    cout<<"Order "<<i+1<<": "<<item[i]<<" - P"<<price[i]<<endl;
                }

                cout<<"Choose which to edit: ";
                cin>>removechoice;
                break;

                if(removechoice >= 1 && removechoice <= count) {
                    removechoice = removechoice - 1;

                    for (i = removechoice; i < count - 1; i++) {
                        item[i] = item[i + 1];
                        price[i] = price[i + 1];
                    }

                    count--;
                    cout << "\nItem removed successfully!";
                } else {
                    cout<<"\n Invalid order number";
                }
                break;

            case 6:
                break;

            default:
                cout << "\nInvalid choice.";
                break;
        }

    } while (choice != 6);


    // ==========================
    // RECEIPT
    // ==========================

    cout << "\n\n================================";
    cout << "\n             RECEIPT";
    cout << "\n================================\n";

    for (i = 0; i < count; i++)
    {
        cout << "Order " << i + 1 << ": "
             << item[i] << " - P" << price[i] << endl;

        total = total + price[i];
    }

    cout << "--------------------------------";
    cout << "\nTotal: P" << total;
    cout << "\n================================";

    return 0;
}