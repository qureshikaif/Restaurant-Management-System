#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

    int main () {
        int user_choice,user_choice_user,user_choice_manager,user_choice_chef;
        string user_name,user_password;
        label_main_menu:cout << "RESTAURANT MANAGEMENT SYSTEM" << endl;
        cout << "=============================" << endl;
        cout << "1) Login As Manager" << endl;
        cout << "2) Login As User" << endl;
        cout << "3) Login As Chef" << endl;
        cout << "4) Exit" << endl;
        cin >> user_choice;
        if(user_choice == 1) {
            label_1:cout << "Enter Username: ";
            cin >> user_name;
            if(user_name == "admin" || user_name == "ADMIN") {
                cout << "Enter Password: ";
                cin >> user_password;
                if(user_password=="admin" || user_password == "ADMIN") {
                    cout << " ===============================" << endl;
			        cout << " |                             |" << endl;
			        cout << " |  Choose from the following  |" << endl;
			        cout << " |      1) Add Deal            |" << endl;
			        cout << " |      2) Remove Deal         |" << endl;
			        cout << " |      4) Change Order Status |" << endl;
			        cout << " |      5) View Menu           |" << endl;
			        cout << " |      6) Log out             |" << endl;
			        cout << " |                             |" << endl;
			        cout << " ===============================" << endl;
                }
                else {
                    cout << "Password is incorrect" << endl;
                    cout << "Please try again" << endl;
                    goto label_1;
                }
            }
            else {
                cout << "Username is incorrect" << endl;
                cout << "Try again" << endl;
                goto label_1;
            }
            
        }
        else if(user_choice == 2) {
            label_2:cout << "Enter Username: ";
            cin >> user_name;
            if(user_name == "user" || user_name == "USER") {
                cout << "Enter Password: ";
                cin >> user_password;
                if(user_password=="user" || user_password == "USER") {
                    label_user_start:cout << " ===============================" << endl;
		            cout << " |                             |" << endl;
		            cout << " |  Choose from the following  |" << endl;
		            cout << " |      1) View Menu           |" << endl;
		            cout << " |      2) Order               |" << endl;
		            cout << " |      3) View Order          |" << endl;
		            cout << " |      4) View Order Status   |" << endl;
		            cout << " |      5) Go Back             |" << endl;
                    cout << " |      6) Exit                |" << endl;
		            cout << " |                             |" << endl;
		            cout << " ===============================" << endl;
                    cin >> user_choice_user;
                    if(user_choice_user==1) {
                        cout << "MENU" << endl;
                    }
                    else if(user_choice_user==2) {
                        cout << "ORDER" << endl;
                    }
                    else if(user_choice_user==3) {
                        cout << "VIEW ORDER" << endl;
                    }
                    else if(user_choice_user==4) {
                        cout << "ORDER STATUS" << endl;
                    }
                    else if(user_choice_user==5) {
                        cout << "Main Menu" << endl;
                    }
                    else if(user_choice_user==6) {
                        goto label_exit;
                    }
                    else {
                        cout << "Invalid Choice" << endl;
                        cout << "Try again" << endl;
                        goto label_user_start;
                    }
                }
                else {
                    cout << "Password is incorrect" << endl;
                    cout << "Please try again" << endl;
                    goto label_2;
                }
            }
            else {
                cout << "Username is incorrect" << endl;
                cout << "Try again" << endl;
                goto label_2;
            }
        }
        else if(user_choice == 3) {
            label_3:cout << "Enter Username: ";
            cin >> user_name;
            if(user_name == "chef" || user_name == "CHEF") {
                cout << "Enter Password: ";
                cin >> user_password;
                if(user_password=="chef" || user_password == "CHEF") {
                    cout << "Chef Menu" << endl;
                }
                else {
                    cout << "Password is incorrect" << endl;
                    cout << "Please try again" << endl;
                    goto label_3;
                }
            }
            else {
                cout << "Username is incorrect" << endl;
                cout << "Try again" << endl;
                goto label_3;
            }
    
        }
        else if(user_choice == 4) {
            label_exit:cout << "Program exited........";
            exit(0);
        }
        else {
            cout << "Invalid Choice" << endl;
        }
    }