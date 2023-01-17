#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
using namespace std;
struct user_details
{
    string name;
    long long number;
    long long ID;
    string address;
} userdetails;

string food_menu[11] = {"Chicken Chowmein", "Crispy Roll", "Cheese Roll","Chicken Burger","Cheesy Chicken Burger","Grilled Chicken Burger","Club Sandwich","Regular Fries","Zinger Burger","Cold Coffee"};
int prices[11] = {380,220,200,260,300,320,320,150,320,250};
float calculated_price;
int user_choice, user_choice_user, user_choice_manager, user_choice_chef, quantity, order_choice;
string user_name, user_password;
void display_menu1();
void display_menu2();
float price_calculator(int quantity, int user_choice);
void user_main_function();
void proceed_to_order();
void condition_checker();
void manager_main_function();

int main()
{
    cout << "RESTAURANT MANAGEMENT SYSTEM" << endl;
    cout << "=============================" << endl;
    cout << "1) Login As Manager" << endl;
    cout << "2) Login As User" << endl;
    cout << "3) Exit" << endl;
    cin >> user_choice;
    if (user_choice == 1)
    {
    label_1:
        cout << "Enter Username: ";
        cin >> user_name;
        if (user_name == "admin" || user_name == "ADMIN")
        {
            cout << "Enter Password: ";
            cin >> user_password;
            if (user_password == "admin" || user_password == "ADMIN")
            {
                manager_main_function();
            }
            else
            {
                cout << "Password is incorrect" << endl;
                cout << "Please try again" << endl;
                goto label_1;
            }
        }
        else
        {
            cout << "Username is incorrect" << endl;
            cout << "Try again" << endl;
            goto label_1;
        }
    }
    else if (user_choice == 2)
    {
    label_2:
        cout << "Enter Username: ";
        cin >> user_name;
        if (user_name == "user" || user_name == "USER")
        {
            cout << "Enter Password: ";
            cin >> user_password;
            if (user_password == "user" || user_password == "USER")
            {
                user_main_function();
            }
            else
            {
                cout << "Password is incorrect" << endl;
                cout << "Please try again" << endl;
                goto label_2;
            }
        }
        else
        {
            cout << "Username is incorrect" << endl;
            cout << "Try again" << endl;
            goto label_2;
        }
    }
    else if (user_choice == 3)
    {
        cout << "Program exited........";
        exit(0);
    }
    else
    {
        cout << "Invalid Choice" << endl;
    }
}
void manager_main_function () {
    system("cls");
                cout << " ===============================" << endl;
                cout << " |                             |" << endl;
                cout << " |  Choose from the following  |" << endl;
                cout << " |      1) View Menu           |" << endl;
                cout << " |      2) Add Deal            |" << endl;
                cout << " |      3) Remove Deal         |" << endl;
                cout << " |      4) Log out             |" << endl;
                cout << " |      5) Exit                |" << endl;
                cout << " |                             |" << endl;
                cout << " ===============================" << endl;
                cin >> user_choice_manager;
                if (user_choice_manager == 1)
                {
                    display_menu1();
                    condition_checker();
                }
                else if (user_choice_manager == 2)
                {
                    display_menu1();
                    cout << "Add a new deal" << endl;
                    cout << "Add the title of your deal" << endl;
                    cin >> food_menu[10];
                    cout << "Add the price of your deal" << endl;
                    cin >> prices[10];
                    cout << "New meal added" << endl;
                    condition_checker();
                }
                else if (user_choice_manager == 3)
                {
                    string choice;
                    display_menu1();
                    cout << "Remove Deal" << endl;
                    cout << "YOU CAN ONLY REMOVE THE DEAL YOU ADDED MANUALLY" << endl;
                    cout << "Remove the last deal?" << endl;
                    cout << "Press Y for Yes, N for No" << endl;
                    cin >> choice;
                    if(choice == "Y" || choice == "y") {
                        food_menu[10] = "\0";
                        prices[10]=0;
                        cout << "Deal Removed" << endl;
                        condition_checker();
                    }
                    else if(choice == "N" || choice == "n") {
                        condition_checker();
                    }
                    else {
                        cout << "Option out of context" << endl;
                        condition_checker();
                    }
                }
                else if (user_choice_manager == 4)
                {
                    system("cls");
                    main();
                }
                else if (user_choice_manager == 5)
                {
                    cout << "Program Exited......";
                    exit(0);
                }
                else
                {
                    cout << "Option out of context" << endl;
                }
}
void user_main_function()
{
    system("cls");
    cout << " ===============================" << endl;
    cout << " |                             |" << endl;
    cout << " |  Choose from the following  |" << endl;
    cout << " |      1) View Menu           |" << endl;
    cout << " |      2) Place Order         |" << endl;
    cout << " |      3) View Order          |" << endl;
    cout << " |      4) Go Back             |" << endl;
    cout << " |      5) Exit                |" << endl;
    cout << " |                             |" << endl;
    cout << " ===============================" << endl;
    cin >> user_choice_user;
    if (user_choice_user == 1)
    {
        display_menu1();
        user_choice_user = 0;
        cout << "Would you like to place the order?" << endl;
        cout << "1) Yes\n2) No" << endl;
        cin >> user_choice_user;
        if (user_choice_user == 1)
        {
            proceed_to_order();
        }
        else if (user_choice_user == 2)
        {
            condition_checker();
        }
        else
        {
            cout << "Option out of context." << endl;
            cout << "Please enter correct option." << endl;
        }
    }
    else if (user_choice_user == 2)
    {
        proceed_to_order();
    }
    else if (user_choice_user == 3)
    {
        cout << "VIEW ORDER" << endl;
    }
    else if (user_choice_user == 4)
    {
        system("cls");
        main();
    }
    else if (user_choice_user == 5)
    {
        cout << "Program exited.....";
        exit(0);
    }
    else
    {
        cout << "Invalid Choice" << endl;
        cout << "Try again" << endl;
    }
}

void display_menu1()
{
    cout << "Menu is displayed below:" << endl;
    for (int i = 0; i <11; i++)
    {
        if(food_menu[i]=="\0") {
            cout << "\0";
        }
        else { 
            cout << i + 1 << ")"
             << " " << food_menu[i] << setw(15) << prices[i] << " Rs" << endl;
        }
        
    }
}
void display_menu2()
{
    for (int i = 0; i <11; i++)
    {
        if(food_menu[i]=="\0") {
            cout << "\0";
        }
        else {
            cout << "Press " << i + 1 << " for " << food_menu[i] << endl;
        }
        
    }
}
void condition_checker() {
    char user_choice;
            cout << "Press Y to go back to main menu or Press N to terminate the program." << endl;
            cin >> user_choice;
            if (user_choice == 'Y' || user_choice == 'y')
            {
                system("cls");
                main();
            }
            else if (user_choice == 'N' || user_choice == 'n')
            {
                cout << "Program Exited......";
                exit(0);
                
            }
            else
            {
                cout << "Invalid choice." << endl;
            }
            user_choice=0;
}
float price_calculator(int quantity, int user_choice)
{
        float total_price = quantity * prices[user_choice-1];
        return total_price;
}
void proceed_to_order()
{
    cout << "Enter your full name: " << endl;
    getline(cin, userdetails.name);
    cin.ignore(1000, '\n');
    cout << "Enter your phone number: " << endl;
    cin >> userdetails.number;
    cout << "Enter your ID: " << endl;
    cin >> userdetails.ID;
    cout << "Enter your address: " << endl;
    getline(cin, userdetails.address);
    cin.ignore(1000, '\n');
    cout << "\n";
    cout << "Place your order: " << endl;
    display_menu2();
    cin >> order_choice;
    if(order_choice>20) {
        cout << "Invalid order";
    }
    else {
        cout << "Enter your quantity: " << endl;
        cin >> quantity;
        calculated_price = price_calculator(quantity, order_choice);
        cout << "Your total price is: " << calculated_price << endl;
        cout << "Thank You for using our services." << endl;
        condition_checker();
    }
    
}
