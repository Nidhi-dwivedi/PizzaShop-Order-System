#include <iomanip>
#include <iostream>
#include <map>
#include <cctype>
using namespace std;

int main() {
    // Prices of items
    const double PIZZA = 15.50,
                 SODA = 2.00,
                 CHICKEN_NUGGETS = 7.00,
                 BREADSTICKS = 9.75,
                 BURGER = 12.00,
                 PASTA = 10.50,
                 ICE_CREAM = 5.00,
                 GARLIC_BREAD = 6.25;

    // Tax rate
    const double TAX_RATE = 0.10;

    // Variables for tracking order
    map<string, pair<int, double>> order; // {Item Name: (Quantity, Price)}
    char itemLetter;
    double total = 0;

    cout << "=====================================================\n"
         << "\t\tWelcome to Crust & Cravings\n"
         << "=====================================================\n"
         << "Order delicious food and satisfy your cravings!\n"
         << "=====================================================\n";

    cout << fixed << setprecision(2);

    do {
        // Display menu
        cout << "\n-----------------------------------------------------\n"
             << "\tMenu:\n"
             << "\tA\tPizza" << setw(26) << PIZZA << "\n"
             << "\tB\tSoda" << setw(27) << SODA << "\n"
             << "\tC\tChicken Nuggets" << setw(16) << CHICKEN_NUGGETS << "\n"
             << "\tD\tBreadsticks" << setw(20) << BREADSTICKS << "\n"
             << "\tE\tBurger" << setw(24) << BURGER << "\n"
             << "\tF\tPasta" << setw(25) << PASTA << "\n"
             << "\tG\tIce Cream" << setw(21) << ICE_CREAM << "\n"
             << "\tH\tGarlic Bread" << setw(18) << GARLIC_BREAD << "\n"
             << "\tX\tExit\n"
             << "-----------------------------------------------------\n"
             << "Please enter the next menu item letter: ";
        cin >> itemLetter;
        itemLetter = toupper(itemLetter);

        string itemName;
        double price;

        switch (itemLetter) {
            case 'A': itemName = "Pizza"; price = PIZZA; break;
            case 'B': itemName = "Soda"; price = SODA; break;
            case 'C': itemName = "Chicken Nuggets"; price = CHICKEN_NUGGETS; break;
            case 'D': itemName = "Breadsticks"; price = BREADSTICKS; break;
            case 'E': itemName = "Burger"; price = BURGER; break;
            case 'F': itemName = "Pasta"; price = PASTA; break;
            case 'G': itemName = "Ice Cream"; price = ICE_CREAM; break;
            case 'H': itemName = "Garlic Bread"; price = GARLIC_BREAD; break;
            case 'X': break;
            default:
                cerr << "\nInvalid option. Please pick a valid menu item.\n";
                continue;
        }

        // Add item to order if valid
        if (itemLetter >= 'A' && itemLetter <= 'H') {
            total += price;
            if (order.find(itemName) != order.end()) {
                order[itemName].first++; // Increment quantity
            } else {
                order[itemName] = {1, price}; // Add new item
            }
            cout << "\nItem added to your order!\n";
        }

        // Display running total
        cout << "\nCurrent total: $" << total << "\n";

    } while (itemLetter != 'X');

    // Generate and display the bill
    cout << "\n=====================================================\n"
         << "\t\tCrust & Cravings Bill\n"
         << "=====================================================\n"
         << left << setw(20) << "Item" 
         << setw(10) << "Qty" 
         << setw(15) << "Price" 
         << "Total\n"
         << "-----------------------------------------------------\n";

    double subtotal = 0;
    for (const auto &item : order) {
        string itemName = item.first;
        int quantity = item.second.first;
        double price = item.second.second;
        double itemTotal = quantity * price;
        subtotal += itemTotal;
        cout << left << setw(20) << itemName
             << setw(10) << quantity
             << setw(15) << price
             << itemTotal << "\n";
    }

    double tax = subtotal * TAX_RATE;
    double finalTotal = subtotal + tax;

    cout << "-----------------------------------------------------\n"
         << left << setw(30) << "Subtotal:" << "$" << subtotal << "\n"
         << left << setw(30) << "Tax (10%):" << "$" << tax << "\n"
         << left << setw(30) << "Total:" << "$" << finalTotal << "\n"
         << "=====================================================\n"
         << "Thank you for dining at Crust & Cravings! Enjoy your meal!\n";

    return 0;
}
