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

string food_menu[] = {"Pizza", "Burger", "Wraps"};
int prices[] = {100, 200, 300};
float calculated_price;
int user_choice, user_choice_user, user_choice_manager, user_choice_chef, quantity, order_choice;
string user_name, user_password;
void display_menu1();
void display_menu2();
float price_calculator(int quantity, int user_choice);
void user_main_function();
void proceed_to_order();

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
        getline(cin, user_name);
        if (user_name == "admin" || user_name == "ADMIN")
        {
            cout << "Enter Password: ";
            getline(cin, user_password);
            if (user_password == "admin" || user_password == "ADMIN")
            {
                cout << " ===============================" << endl;
                cout << " |                             |" << endl;
                cout << " |  Choose from the following  |" << endl;
                cout << " |      1) View Menu           |" << endl;
                cout << " |      2) Add Deal            |" << endl;
                cout << " |      3) Remove Deal         |" << endl;
                cout << " |      4) Log out             |" << endl;
                cout << " |                             |" << endl;
                cout << " ===============================" << endl;
                cin >> user_choice_manager;
                if (user_choice_manager == 1)
                {
                }
                else if (user_choice_manager == 2)
                {
                }
                else if (user_choice_manager == 3)
                {
                }
                else if (user_choice_manager == 4)
                {
                }
                else if (user_choice_manager == 5)
                {
                }
                else if (user_choice_manager == 6)
                {
                }
                else
                {
                }
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
    label_exit:
        cout << "Program exited........";
        exit(0);
    }
    else
    {
        cout << "Invalid Choice" << endl;
    }
}

void display_menu1()
{
    cout << "Menu is displayed below:" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << ")"
             << " " << food_menu[i] << setw(7) << prices[i] << " Rs" << endl;
    }
}
void display_menu2()
{
    for (int i = 0; i < 3; i++)
    {
        cout << "Press " << i + 1 << " for " << food_menu[i] << endl;
    }
}
float price_calculator(int quantity, int user_choice)
{
    if (user_choice == 1)
    {
        float total_price = quantity * prices[0];
        return total_price;
    }
    else if (user_choice == 2)
    {
        float total_price = quantity * prices[1];
        return total_price;
    }
    else if (user_choice == 3)
    {
        float total_price = quantity * prices[2];
        return total_price;
    }
}
void user_main_function()
{
    cout << " ===============================" << endl;
    cout << " |                             |" << endl;
    cout << " |  Choose from the following  |" << endl;
    cout << " |      1) View Menu           |" << endl;
    cout << " |      2) Place Order         |" << endl;
    cout << " |      3) View Order          |" << endl;
    cout << " |      5) Go Back             |" << endl;
    cout << " |      6) Exit                |" << endl;
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
                exit(0);
            }
            else
            {
                cout << "Invalid choice." << endl;
            }
        }
        else
        {
            cout << "Option out of context." << endl;
            cout << "Please enter correct option." << endl;
        }
    }
    else if (user_choice_user == 2)
    {
        cout << "ORDER" << endl;
    }
    else if (user_choice_user == 3)
    {
        cout << "VIEW ORDER" << endl;
    }
    else if (user_choice_user == 4)
    {
        cout << "ORDER STATUS" << endl;
    }
    else if (user_choice_user == 5)
    {
        main();
    }
    else if (user_choice_user == 6)
    {
    }
    else
    {
        cout << "Invalid Choice" << endl;
        cout << "Try again" << endl;
    }
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
    cout << "Place your order: " << endl;
    display_menu2();
    cin >> order_choice;
    cout << "Enter your quantity: " << endl;
    cin >> quantity;
    calculated_price = price_calculator(quantity, order_choice);
    cout << "Your total price is: " << calculated_price;
}
