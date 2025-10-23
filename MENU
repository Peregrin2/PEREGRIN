#include <iostream>
#include <iomanip>
#include <string>
#include <thread>
#include <chrono>
using namespace std;

int main() {
    int order, payment;
    int Jollyorder, quantifood;
    double price = 0;
    double subtotal = 0;
    double overallorder = 0;
    double paid = 0;
    string allorder = "";
    string enter;
    string ordermore;
    string ordername;

    cout << "=== WELCUM TO JAYPEE'S JABI ===" << endl;
    cout << "       By: Jaypee Peregrin       " << endl;
    cout << "   GMA CAVITE, WORLD FOR THE WORLD" << endl;
    cout << "         GOVERNOR'S DRIVE         " << endl;
    cout << "   Please click 1 to proceed   -> ";
    cin >> enter;

    if (enter == "1") {
        bool ordering = true;

        while (ordering) {
            system("CLS"); // clear screen
            cout << fixed << setprecision(2);
            cout << "==============================" << endl;
            cout << "       WHAT'S YOUR ORDER?     " << endl;
            cout << "==============================" << endl;
            cout << " [1] Jolly Meal Saver" << endl;
            cout << " [2] Mixed and Match" << endl;
            cout << " [3] Dessert" << endl;
            cout << "==============================" << endl;
            cout << "Choose one: ";
            cin >> order;

            price = 0;
            ordername = "";

            switch (order) {
                case 1:
                    cout << "\n==== Jolly Meal Saver ====\n";
                    cout << " [1] 1-pc Burger Steak w/ Rice & Drink (99)\n";
                    cout << " [2] 1-pc Chickenjoy w/ Rice & Drink (99)\n";
                    cout << " [3] Jolly Spaghetti w/ Fries & Drink (99)\n";
                    cout << "Enter order: ";
                    cin >> Jollyorder;
                    cout << "Quantity: ";
                    cin >> quantifood;

                    if (Jollyorder == 1) ordername = "Burger Steak Meal";
                    else if (Jollyorder == 2) ordername = "Chickenjoy Meal";
                    else if (Jollyorder == 3) ordername = "Jolly Spaghetti Meal";
                    else {
                        cout << "Invalid input!\n";
                        continue;
                    }
                    price = 99;
                    break;

                case 2:
                    cout << "\n==== Mixed And Match ====\n";
                    cout << " [1] Burger + Fries + Drink (78)\n";
                    cout << " [2] Hotdog + Fries + Drink (78)\n";
                    cout << " [3] Chicken Sandwich + Drink (78)\n";
                    cout << "Enter order: ";
                    cin >> Jollyorder;
                    cout << "Quantity: ";
                    cin >> quantifood;

                    if (Jollyorder == 1) ordername = "Burger + Fries + Drink";
                    else if (Jollyorder == 2) ordername = "Hotdog + Fries + Drink";
                    else if (Jollyorder == 3) ordername = "Chicken Sandwich + Drink";
                    else {
                        cout << "Invalid input!\n";
                        continue;
                    }
                    price = 78;
                    break;

                case 3:
                    cout << "\n==== Dessert ====\n";
                    cout << " [1] Cassava Cake (49)\n";
                    cout << " [2] Graham (₱50)\n";
                    cout << " [3] Halo-Halo (75)\n";
                    cout << " [4] Leche Flan (100)\n";
                    cout << "Enter order: ";
                    cin >> Jollyorder;
                    cout << "Quantity: ";
                    cin >> quantifood;

                    if (Jollyorder == 1) { ordername = "Cassava Cake"; price = 49; }
                    else if (Jollyorder == 2) { ordername = "Graham"; price = 50; }
                    else if (Jollyorder == 3) { ordername = "Halo-Halo"; price = 75; }
                    else if (Jollyorder == 4) { ordername = "Leche Flan"; price = 100; }
                    else {
                        cout << "Invalid input!\n";
                        continue;
                    }
                    break;

                default:
                    cout << "Invalid input!\n";
                    continue;
            }

            subtotal = price * quantifood;
            overallorder += subtotal;
            allorder += ordername + " x" + to_string(quantifood) + " = " + to_string((int)subtotal) + "\n";

            cout << "\nDo you want to order more? [Y/N]: ";
            cin >> ordermore;
            if (ordermore == "N" || ordermore == "n") ordering = false;
        }

        system("CLS");
        cout << "=================================\n";
        cout << "===         RECEIPT          ===\n";
        cout << "=================================\n";
        cout << "      JABILI NI JP STORE         \n";
        cout << "  GMA, Cavite - Governor's Drive \n";
        cout << "=================================\n";
        cout << allorder;
        cout << "---------------------------------\n";
        cout << "TOTAL: " << overallorder << endl;
        cout << "---------------------------------\n";

        while (paid < overallorder) {
            cout << "Amount Paid: ";
            cin >> payment;
            paid += payment;
            if (paid < overallorder)
                cout << "Insufficient payment! Kulang ka pa ng ₱" << overallorder - paid << endl;
        }

        cout << "Change: " << paid - overallorder << endl;
        cout << "=================================\n";
        cout << "===    THANK YOU, COME AGAIN! ===\n";
        cout << "=================================\n";

        this_thread::sleep_for(chrono::seconds(2));

    } else {
        cout << "Invalid option. Please restart program.\n";
    }

    return 0;
}
