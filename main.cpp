#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <chrono>
#include <string>
#include <ctime>
#include <sstream>
using namespace std;

float CalculateRemaining(float total, float payment);
int CalculateTotal(int price[], int quantity[], int count);
float CalculateDiscount(float total, float discount);
float CalculateFinalTotal(float total, float discountamount);
void EditOrder(string item[], int price[], int quantity[], int &count);
int AskContinueChoice();
int AskMiniMenuChoice(string miniMenu, string subMenu);

int main()
{
    string item[100];
    int price[100], quantity[100];

    int count = 0;
    int choice, subchoice, itemchoice, removechoice, editchoice, removequantity, minimenuChoice = 1;
    int i;

    int continuechoice = 1;
    char discountOption;
    string subMenu, miniMenu;
    int menuChoice = 1;
    char editOption;

    int discountchoice;
    string discountType;

    int numorders = 0;
    string orders [100];
    char addOrderChoice;
    char closeProgramChoice;
    string operatorName;
    int inOutChoice;
    int ReceiptChoice;
    string inOutText;

    float total = 0;
    float discount = 0;
    float discountamount = 0;
    float finaltotal = 0;

    float payment;
    float remaining;
    float change;

    cout << fixed << setprecision(2);

    cout << "     SIGN IN" << endl;
    cout << "Operator Name: ";
    getline(cin, operatorName);

    bool running = true;

    do {
        cout << "\nList of Orders:\n";
        if (numorders == 0) {
            cout << "There are currently no orders compiled yet.\n";
        } else {
            for (i = 0; i < numorders; i++) {
                cout << i + 1 << ". Receipt" << endl;
            }

            cout << "Enter receipt number to view (0 to go back): ";
            cin >> ReceiptChoice;

            if (ReceiptChoice >= 1 && ReceiptChoice <= numorders) {
                cout << orders[ReceiptChoice - 1] << endl;
            } else if (ReceiptChoice != 0) {
                cout << "Invalid receipt number.\n";
            }
        }
        do {
            cout << "Would you like to add an order? [Y/N]: ";
            cin >> addOrderChoice;
        } while (
                    (addOrderChoice != 'Y' && addOrderChoice != 'y') &&
                    (addOrderChoice != 'N' && addOrderChoice != 'n')
                );

        if (addOrderChoice == 'Y' || addOrderChoice == 'y') {
            do {
                cout << "Dine In or Take Out?" << endl;
                cout << "1. Dine-In" << endl;
                cout << "2. Take-Out" << endl;
                cout << "Choice: ";
                cin >> inOutChoice;
            } while (inOutChoice != 1 && inOutChoice !=2);
        }

        if (addOrderChoice == 'N' || addOrderChoice == 'n') {
            do {
                cout << "Would you like to close the program? [Y/N]: ";
                cin >> closeProgramChoice;
            } while (
                    (closeProgramChoice != 'Y' && closeProgramChoice != 'y') &&
                    (closeProgramChoice != 'N' && closeProgramChoice != 'n')
                );

            if (closeProgramChoice == 'Y' || closeProgramChoice == 'y') {
                exit(0);
            } else {
                continue;
            }
        }

            do
            {
                cout << R"( _   __      _                     _____        )" << endl;
                cout << R"(| | / /     | |            ___    /  __ \       )" << endl;
                cout << R"(| |/ /  ___ | |__   ___   ( _ )   | /  \/ ___   )" << endl;
                cout << R"(|    \ / _ \| '_ \ / _ \  / _ \/\ | |    / _ \  )" << endl;
                cout << R"(| |\  \ (_) | |_) |  __/ | (_>  < | \__/\ (_) | )" << endl;
                cout << R"(\_| \_/\___/|_.__/ \___|  \___/\/  \____/\___(_))" << endl << endl;
                cout << "        ~ ~ ~ B R A S S E R I E ~ ~ ~";
                
                        cout << "\n\n\tFINE DINING MENU";

                cout << "\n================================";
                cout << "\n1. Starters";
                cout << "\n2. Main Dishes";
                cout << "\n3. Desserts";
                cout << "\n4. Drinks";
                cout << "\n================================";
                cout << "\nEnter your choice: ";
                cin >> choice;

                switch (choice)
                {
                    case 1:
                        subMenu = "STARTERS";
                        menuChoice = 1;
                        do
                        {
        cout << R"(

                    @@       @@       @@
                    @-       @-       @-
                    @@       @@       @@
                    @@       @@       @@
                    -@       -@       -@
                @@@@@@@@@@@@@@@@@@@@@@@@@
            @@@...::::++++=====++++::::...@@@
            @ ..:::+++===---*-----*-===+++:::.. @
            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
            @:...............................:@
            @:+-+-+-+-+-+-+-+-+-+-+-+-+-+-+:@
            @:...........................:@
                @@:.....................:@@
                    @@@:.............:@@@
                    @@@@@@@@@@@@@@@@@
                        @:.........:@
                    @@@@@@@@@@@@@@@
        ___   _                  _
        / __| | |_   __ _   _ _  | |_   ___   _ _   ___
        \__ \ |  _| / _` | | '_| |  _| / -_) | '_| (_-<
        |___/  \__| \__,_| |_|    \__| \___| |_|   /__/
        )" << std::endl;
                            cout << "================================";
                            cout << "\n1. Soups";
                            cout << "\n2. Salads";
                            cout << "\n3. Appetizers";
                            cout << "\n================================";
                            cout << "\nEnter your choice: ";
                            cin >> subchoice;

                            switch (subchoice)
                            {
                                case 0:
                                    break;
                                case 1:
                                    miniMenu = "SOUPS";
                                    minimenuChoice = 1;
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

                                            cout << "\nAdded to order.";
                                            continuechoice = AskContinueChoice();
                                            if (continuechoice == 1) {
                                                minimenuChoice = AskMiniMenuChoice(miniMenu, subMenu);
                                            }
                                        }

                                    } while (continuechoice == 1 && minimenuChoice == 1);

                                    break;
                                case 2:
                                    miniMenu = "SALADS";
                                    minimenuChoice = 1;
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

                                            cout << "\nAdded to order.";
                                            continuechoice = AskContinueChoice();
                                            if (continuechoice == 1) {
                                                minimenuChoice = AskMiniMenuChoice(miniMenu, subMenu);
                                            }
                                        }

                                    } while (continuechoice == 1 && minimenuChoice == 1);

                                    break;
                                case 3:
                                    miniMenu = "APPETIZERS";
                                    minimenuChoice = 1;
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

                                            cout << "\nAdded to order.";
                                            continuechoice = AskContinueChoice();
                                            if (continuechoice == 1) {
                                                minimenuChoice = AskMiniMenuChoice(miniMenu, subMenu);
                                            }
                                        }

                                    } while (continuechoice == 1 && minimenuChoice == 1);

                                    break;

                                default:
                                    cout << "\nInvalid choice.";
                            }

                            if (continuechoice == 1) {
                                do
                                {
                                    cout << "\nWould you like to remain in " << subMenu << " or return to Main Menu?";
                                    cout << "\n1. Remain ordering in " << subMenu;
                                    cout << "\n2. Return to Main Menu";
                                    cout << "\nChoice: ";
                                    cin >> menuChoice;

                                    if (menuChoice != 1 && menuChoice != 2)
                                    {
                                        cout << "Please enter 1 or 2.\n";
                                    } 

                                } while (menuChoice != 1 && menuChoice != 2);
                            }

                        } while (continuechoice == 1 && menuChoice == 1);
                        break;

                    case 2:
                        subMenu = "MAIN DISHES";
                        menuChoice = 1;
                        do
                        {
                            cout << R"(
                            
                                    @@@
                                @:...-@
                                @@@@@
                            @@@@@@@@@@@@@
                            @@=+:..........--@@
                        @@=++:............---@@
                        @@=+++:...............---@@
                        @=+++:...................---@
                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                    @...:::::::::::::::::::::::::::::...@
                    @@.............................@@
                        @@@@@@@@@@@@@@@@@@@@@@@@@
        __  __          _            ____    _       __
        |  \/  |  __ _  (_)  _ _      |   \  (_)  ___ | |_    ___   ___
        | |\/| | / _` | | | | ' \     | |) | | | (_-< | ' \  / -_) (_-<
        |_|  |_| \__,_| |_| |_||_|    |___/  |_| /__/ |_||_| \___| /__/

        )" << std::endl;
                            cout << "================================";
                            cout << "\n1. Beef";
                            cout << "\n2. Chicken";
                            cout << "\n3. Seafood";
                            cout << "\n================================";
                            cout << "\nEnter your choice: ";
                            cin >> subchoice;

                            switch (subchoice)
                            {
                                case 1:
                                    miniMenu = "BEEF";
                                    minimenuChoice = 1;
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

                                            cout << "\nAdded to order.";
                                            continuechoice = AskContinueChoice();
                                            if (continuechoice == 1) {
                                                minimenuChoice = AskMiniMenuChoice(miniMenu, subMenu);
                                            }
                                        }

                                    } while (continuechoice == 1 && minimenuChoice == 1);

                                    break;

                                case 2:
                                    miniMenu = "CHICKEN";
                                    minimenuChoice = 1;
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

                                            cout << "\nAdded to order.";
                                            continuechoice = AskContinueChoice();
                                            if (continuechoice == 1) {
                                                minimenuChoice = AskMiniMenuChoice(miniMenu, subMenu);
                                            }
                                        }

                                    } while (continuechoice == 1 && minimenuChoice == 1);

                                    break;

                                case 3:
                                    miniMenu = "SEAFOOD";
                                    minimenuChoice = 1;
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

                                            cout << "\nAdded to order.";
                                            continuechoice = AskContinueChoice();
                                            if (continuechoice == 1) {
                                                minimenuChoice = AskMiniMenuChoice(miniMenu, subMenu);
                                            }
                                        }

                                    } while (continuechoice == 1 && minimenuChoice == 1);

                                    break;

                                default:
                                    cout << "\nInvalid choice.";
                            }

                            if (continuechoice == 1) {
                                do
                                {
                                    cout << "\nWould you like to remain in " << subMenu << " or return to Main Menu?";
                                    cout << "\n1. Remain ordering in " << subMenu;
                                    cout << "\n2. Return to Main Menu";
                                    cout << "\nChoice: ";
                                    cin >> menuChoice;

                                    if (menuChoice != 1 && menuChoice != 2)
                                    {
                                        cout << "Please enter 1 or 2.\n";
                                    } 

                                } while (menuChoice != 1 && menuChoice != 2);
                            }

                        } while (continuechoice == 1 && menuChoice == 1);
                        break;

                    case 3:
                        subMenu = "DESSERTS";
                        menuChoice = 1;
                        do
                        {
                            
                            cout << R"(
                                            
                            @@                                
                            @+@                                
                        @+=--@                                
                        @-:-@     @@@                        
                        @@@     @      @@                    
                        @@@@   @       .@                    
                        @#@@@  @@..         @                  
                    @@####  +*@..         @@                
                    @@@@@##+*+##@    .         @              
                @@@@@   @@@%#***+               @              
            @@                                @              
        @@@                                 .@              
        @                            ....++++ @              
        @                   .....++++++++    @              
        @:    .....++++++++++++++------=+  ::@              
        @----------------------..         @@                
            @-----------.                    @@                
            @         .................... .@@                
            @............................ @                  
            @. ...................@@@@@@@@                  
                @........@@@@@@@@@@@@.                          
                @@@@@@@@
            ___                     _      
            |   \ ___ ______ ___ _ _| |_ ___
            | |) / -_|_-<_-</ -_) '_|  _(_-<
            |___/\___/__/__/\___|_|  \__/__/
                            )" << std::endl;
                            
                            cout << "================================";
                            cout << "\n1. Cakes";
                            cout << "\n2. Pastries";
                            cout << "\n3. Sundaes";
                            cout << "\n================================";
                            cout << "\nEnter your choice: ";
                            cin >> subchoice;

                            switch (subchoice)
                            {

                                case 1:
                                    miniMenu = "CAKES";
                                    minimenuChoice = 1;
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

                                            cout << "\nAdded to order.";
                                            continuechoice = AskContinueChoice();
                                            if (continuechoice == 1) {
                                                minimenuChoice = AskMiniMenuChoice(miniMenu, subMenu);
                                            }
                                        }

                                    } while (continuechoice == 1 && minimenuChoice == 1);

                                    break;

                                case 2:
                                    miniMenu = "PASTRIES";
                                    minimenuChoice = 1;
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

                                            cout << "\nAdded to order.";
                                            continuechoice = AskContinueChoice();
                                            if (continuechoice == 1) {
                                                minimenuChoice = AskMiniMenuChoice(miniMenu, subMenu);
                                            }
                                        }

                                    } while (continuechoice == 1 && minimenuChoice == 1);

                                    break;

                                case 3:
                                    miniMenu = "SUNDAES";
                                    minimenuChoice = 1;
                                    do
                                    {
                                        cout << "\n\nSUNDAES";
                                        cout << "\n================================";
                                        cout << "\n1. Original Vanilla Sundae - P160";
                                        cout << "\n2. Hot Fudge Sundae        - P170";
                                        cout << "\n3. Banana Split Sundae     - P170";
                                        cout << "\n================================";
                                        cout << "\nEnter your choice: ";
                                        cin >> itemchoice;

                                        switch (itemchoice)
                                        {
                                            case 1:
                                                item[count] = "Original Vanilla Sundae";
                                                price[count] = 160;

                                                break;

                                            case 2:
                                                item[count] = "Hot Fudge Sundae";
                                                price[count] = 170;

                                                break;

                                            case 3:
                                                item[count] = "Banana Split Sundae";
                                                price[count] = 170;

                                                break;

                                            default:
                                                cout << "\nInvalid choice.";
                                        }

                                        if (itemchoice >= 1 && itemchoice <= 3) {
                                            cout<<"Enter quantity: ";
                                            cin>>quantity[count];

                                            count++;

                                            cout << "\nAdded to order.";
                                            continuechoice = AskContinueChoice();
                                            if (continuechoice == 1) {
                                                minimenuChoice = AskMiniMenuChoice(miniMenu, subMenu);
                                            }
                                        }

                                    } while (continuechoice == 1 && minimenuChoice == 1);

                                    break;

                                default:
                                    cout << "\nInvalid choice.";
                            }

                            if (continuechoice == 1) {
                                do
                                {
                                    cout << "\nWould you like to remain in " << subMenu << " or return to Main Menu?";
                                    cout << "\n1. Remain ordering in " << subMenu;
                                    cout << "\n2. Return to Main Menu";
                                    cout << "\nChoice: ";
                                    cin >> menuChoice;

                                    if (menuChoice != 1 && menuChoice != 2)
                                    {
                                        cout << "Please enter 1 or 2.\n";
                                    } 

                                } while (menuChoice != 1 && menuChoice != 2);
                            }

                        } while (continuechoice == 1 && menuChoice == 1);
                        break;

                    case 4:
                        subMenu = "DRINKS";
                        menuChoice = 1;
                        do
                        {
                            cout << R"(
            @@@@@                   @@@
        @+:+:+@                 @.@
        @:+:@:+:@               @.@
        @+:+:+@               @.@
            @@@@@               @.@
            @@@@@@@@@@@@@@@@@@@.@@@@@
            @               @.@   @
            @-------------@.@---@
            @:.o.......o.@.@..o.@
                @:..o......@.@....@
                @:........@.@...o.@
                @:......@@@.....@
                @:..............@
                @@@@@@@@@@@@@@@@@@@
            ___      _      _       
            |   \ _ _(_)_ _ | |__ ___
            | |) | '_| | ' \| / /(_-<
            |___/|_| |_|_||_|_\_\/__/
                                
        )";
                            cout << "================================";
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

                                continuechoice = AskContinueChoice();

                                if (continuechoice == 1) {
                                    do
                                    {
                                        cout << "\nWould you like to remain in " << subMenu << " or return to Main Menu?";
                                        cout << "\n1. Remain ordering in " << subMenu;
                                        cout << "\n2. Return to Main Menu";
                                        cout << "\nChoice: ";
                                        cin >> menuChoice;

                                        if (menuChoice != 1 && menuChoice != 2)
                                        {
                                            cout << "Please enter 1 or 2.\n";
                                        } 

                                    } while (menuChoice != 1 && menuChoice != 2);
                                }
                            }

                        } while (continuechoice == 1 && menuChoice == 1);
                        break;

                    default:
                        cout << "\nInvalid choice." << endl;
                }

            } while (continuechoice == 1);

            cout << "\nWould you like to edit your order? [Y/N]: ";
            cin >> editOption;

            if (editOption == 'Y' || editOption == 'y') {
                EditOrder(item, price, quantity, count);

                if (count == 0) {
                    cout << "\nYour order is empty. Returning to the order list.\n";
                    continuechoice = 1;
                    continue;
                }
            }

            cout << "\n\n================================";
            cout << "\n         BILL OF RECEIPT";
            cout << "\n================================\n";

            total = CalculateTotal(price, quantity, count);

            for (i = 0; i < count; i++)
            {
                cout << "Order " << i + 1 << ": " << endl;
                cout << "Item: " << item[i] << endl;
                cout << "Quantity: " << quantity[i] << endl;
                cout << "Price: P" << static_cast<float>(price[i]) << endl;
                cout << "Subtotal: P" << static_cast<float>(price[i] * quantity[i]) << endl << endl;
            }
            cout << "--------------------------------";
            cout << "\nTotal: P" << total;
            cout << "\n================================";

            do {
                cout << "\nWould you like to apply for price discounts? [Y/N]: ";
                cin >> discountOption;
            } while (discountOption != 'Y' && discountOption != 'y' && discountOption != 'N' && discountOption != 'n');



            if (discountOption == 'Y' || discountOption == 'y') {
                    while (discountOption == 'Y' || discountOption == 'y') {
                        discount = 0.20;

                        cout << "\n\n             DISCOUNT";
                        cout << "\n================================";
                        cout << "\n1. Senior Citizen";
                        cout << "\n2. PWD";
                        cout << "\n================================";

                        cout<<"\nEnter discount type: ";
                        cin>>discountchoice;

                        if (discountchoice == 1) {
                            discountType = "Senior Citizen";
                            break;
                        } else if (discountchoice == 2){
                            discountType = "PWD";
                            break;
                        } else {
                            cout << "Invalid option. Choose again.";
                        }
                    }

                    discountamount = CalculateDiscount(total, discount);
                    finaltotal = CalculateFinalTotal(total, discountamount); 

                    cout << "\n================================";
                    cout << "\nTotal: P" << total;
                    cout << "\nDiscount Type: "<< discountType; 
                    cout << "\nDiscount: P" << discountamount;
                    cout << "\nFinal Total: P" << finaltotal;
                    cout << "\n================================" << endl;

                    remaining = finaltotal;
            } else {
                discountType = "None";
                discountamount = 0;
                finaltotal = total;
                remaining = finaltotal;
            }



            cout << "\n\t\tPAYMENT" << endl;
            cout << "===================================";
            
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

            change = 0;

            if (remaining < 0) {
                change = remaining * -1;
                cout << "\nChange: P" << change;
            } else {
                    cout << "\nExact Payment Received.";
            }

            if (inOutChoice == 1) {
                inOutText = "Dine-In";
            } else {
                inOutText = "Take-Out";
            }

            stringstream invoice;
            invoice << fixed << setprecision(2);

            auto now = chrono::system_clock::now();
            time_t now_time = chrono::system_clock::to_time_t(now);

            invoice << "\n\n         Kobe & Co. Brasserie" << endl;
            invoice << "938 Aurora Boulevard, Cubao, Quezon City" << endl;
            invoice << "    1109 Metro Manila, Philippines" << endl;
            invoice << "            Sales Invoice" << endl;
            invoice << "Cashier Name: " << operatorName << endl;
            invoice << "-----------------------------------------" << endl;
            invoice << put_time(localtime(&now_time), "%d-%m-%Y %H:%M:%S") << "       Trans No.: " << numorders + 1 << endl;
            invoice << "----------" << inOutText << "-----------" << endl;
            for (i = 0; i < count; i++)
            {
                invoice << "Order " << i + 1 << ": " << endl;
                invoice << "Item: " << item[i] << endl;
                invoice << "Quantity: " << quantity[i] << endl;
                invoice << "Price: P" << static_cast<float>(price[i]) << endl;
                invoice << "Subtotal: P" << static_cast<float>(price[i] * quantity[i]) << endl << endl;
            }
            invoice << "\n================================";
            invoice << "\nTotal: P" << total;
            invoice << "\nDiscount Type: "<< discountType; 
            invoice << "\nDiscount: P" << discountamount;
            invoice << "\nFinal Total: P" << finaltotal;
            invoice << "\n================================" << endl;
            invoice << "\nChange: P" << change;

            orders[numorders] = invoice.str();

            cout << orders[numorders];

            numorders++;

            count = 0;
            total = 0;
            discount = 0;
            discountamount = 0;
            finaltotal = 0;
            change = 0;
            discountType = "None";
            continuechoice = 1;

            
                                cout << R"(
        _____ _              _                   _    ___                   _             _      _ 
        |_   _| |_  __ _ _ _ | |__  _  _ ___ _  _| |  / __|___ _ __  ___    /_\  __ _ __ _(_)_ _ | |
        | | | ' \/ _` | ' \| / / | || / _ \ || |_| | (__/ _ \ '  \/ -_)  / _ \/ _` / _` | | ' \|_|
        |_| |_||_\__,_|_||_|_\_\  \_, \___/\_,_(_)  \___\___/_|_|_\___| /_/ \_\__, \__,_|_|_||_(_)
                                    |__/                                        |___/               
                            )" << std::endl;
    } while (running);
}


        

int AskContinueChoice()
{
    int answer;
    do {
        cout << "\nDo you want to continue ordering or proceed to the checkout?";
        cout << "\n1. Continue Ordering";
        cout << "\n2. Proceed to Checkout";
        cout << "\nChoice: ";
        cin >> answer;

        if (answer != 1 && answer != 2) {
            cout << "Invalid choice. Enter 1 or 2\n";
        }
    } while (answer != 1 && answer != 2);

    return answer;
}

int AskMiniMenuChoice(string miniMenu, string subMenu)
{
    int answer;
    do {
        cout << "\nWould you like to remain in " << miniMenu << " or return to " << subMenu << "?";
        cout << "\n1. Remain ordering in " << miniMenu;
        cout << "\n2. Return to " << subMenu;
        cout << "\nChoice: ";
        cin >> answer;

        if (answer != 1 && answer != 2) {
            cout << "Please enter 1 or 2.\n";
        }
    } while (answer != 1 && answer != 2);

    return answer;
}

void EditOrder(string item[], int price[], int quantity[], int &count)
{
    int editchoice;
    int removechoice;
    int removequantity;
    int i;

    do {
        cout<<"\n\n Edit Order";
            cout<<"\n================================\n";

            if (count == 0) {
                cout<<"Your current order is empty.";
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
                    cout << "\n2. Cancel Order";
                    cout << "\n3. Proceed to Receipt";
                    cout << "\n================================";
                    cout << "\nEnter your choice: ";
                    cin>>editchoice;
                        
                    switch (editchoice) {
                        case 1:
                            cout << "Choose which to remove: ";
                            cin >> removechoice;

                            if (removechoice < 1 || removechoice > count) {
                                cout << "Invalid order number" << endl;
                                break;
                            }

                            removechoice--;          // decrement exactly once
                            removequantity = 1;

                            if (quantity[removechoice] > 1) {
                                cout << "How many would you like to remove: ";
                                cin >> removequantity;
                            }

                            if (removequantity < 1 || removequantity > quantity[removechoice]) {
                                cout << "Invalid quantity" << endl;
                            } else if (removequantity == quantity[removechoice]) {
                                for (i = removechoice; i < count - 1; i++) {
                                    item[i] = item[i + 1];
                                    price[i] = price[i + 1];
                                    quantity[i] = quantity[i + 1];
                                }
                                count--;
                                cout << "Item removed successfully" << endl;
                            } else {
                                quantity[removechoice] -= removequantity;
                                cout << "Quantity removed successfully" << endl;
                            }
                            break;

                        case 2:
                            char confirmCancel;

                            cout << "\nAre you sure you want to cancel your order? [Y/N]: ";
                            cin >> confirmCancel;

                            if (confirmCancel == 'Y' || confirmCancel == 'y') {
                                cout << "\nOrder cancelled.";
                                count = 0;
                                return;
                            } else {
                                cout << "\nOrder cancellation aborted.";
                            }

                            break;
                                
                        case 3:
                            cout<<"\nProceeding to Receipt..." << endl;
                            break;
                        default:
                            cout<<"Invalid option" << endl;
                            break;
                    }
                    if (count == 0) {
                        cout<<"Your order is now empty." << endl;
                        break;
                    }

                }while (editchoice !=3);
            }
            break;
    } while (editchoice != 3);
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