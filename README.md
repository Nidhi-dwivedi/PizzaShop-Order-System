# Crust & Cravings Pizza Shop

A simple C++ application to simulate a pizza shop order system. Users can add items to their order, view a running total, and generate a bill with taxes.

## Features
- Menu with items: Pizza, Soda, Chicken Nuggets, Breadsticks, Burger, Pasta, Ice Cream, Garlic Bread
- Calculates total cost including taxes
- Displays a detailed bill with item quantities and prices

## Example Output

```bash
=====================================================
                Welcome to Pizza Palace
=====================================================
Order delicious food and satisfy your cravings!
=====================================================

-----------------------------------------------------
        Menu:
        A   Pizza                     15.50
        B   Soda                       2.00
        C   Chicken Nuggets            7.00
        D   Breadsticks                9.75
        E   Burger                     12.00
        F   Pasta                      10.50
        G   Ice Cream                   5.00
        H   Garlic Bread                6.25
        X   Exit
-----------------------------------------------------
Please enter the next menu item letter: A

Item added to your order!

Current total: $15.50

-----------------------------------------------------
        Menu:
        A   Pizza                     15.50
        B   Soda                       2.00
        C   Chicken Nuggets            7.00
        D   Breadsticks                9.75
        E   Burger                     12.00
        F   Pasta                      10.50
        G   Ice Cream                   5.00
        H   Garlic Bread                6.25
        X   Exit
-----------------------------------------------------
Please enter the next menu item letter: B

Item added to your order!

Current total: $17.50

-----------------------------------------------------
        Menu:
        A   Pizza                     15.50
        B   Soda                       2.00
        C   Chicken Nuggets            7.00
        D   Breadsticks                9.75
        E   Burger                     12.00
        F   Pasta                      10.50
        G   Ice Cream                   5.00
        H   Garlic Bread                6.25
        X   Exit
-----------------------------------------------------
Please enter the next menu item letter: X

=====================================================
                Pizza Palace Bill
=====================================================
Item               Qty    Price        Total
-----------------------------------------------------
Pizza              1      15.50        15.50
Soda               1      2.00         2.00
-----------------------------------------------------
Subtotal:                           $17.50
Tax (10%):                          $1.75
Total:                              $19.25
=====================================================
Thank you for dining at Pizza Palace! Enjoy your meal!
```
## Installation
1. Clone the repository.
```bash
git clone: https://github.com/Nidhi-dwivedi/PizzaShop-Order-System.git
```
2. Open `main.cpp` file in your IDE.
3. Compile the file first.
4. Build and run the program.
