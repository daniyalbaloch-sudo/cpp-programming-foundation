#include <iostream>
#include <string>

using namespace std;

// Restaurant Management System
int main() {
    int orderQty[12] = {0};
    int itemPrices[12] = {99, 199, 300, 500, 999, 800, 500, 999, 800, 150, 180, 70};
    string itemNames[12] = {
        "Cup of tea + Paratha",
        "Omelette + Halwa Puri",
        "Choly Paay + two Naan",
        "Chicken Biryani",
        "Mutton Karahi",
        "Beef Pulao",
        "BBQ Tikka",
        "Beef Nihari",
        "Fried Rice",
        "Special Kulfa Ice Cream",
        "Fresh Mint Margarita",
        "Chilled Soft Drink"
    };

    bool ordering = true;
    int grandTotal = 0;

    cout << "--- Welcome to Daniyal's Restaurant ---" << endl << endl;

    while (ordering) {
        cout << "\n--- Main Menu ---" << endl;
        cout << "1. Breakfast" << endl;
        cout << "2. Lunch" << endl;
        cout << "3. Dinner" << endl;
        cout << "4. Desserts & Drinks" << endl;
        cout << "5. Generate Bill & Exit" << endl;
        cout << "Select an option (1-5): ";

        string menuChoice;
        cin >> menuChoice;

        // breakfast
        if (menuChoice == "1" || menuChoice == "breakfast" || menuChoice == "Breakfast") {
            cout << "\n--- Breakfast Menu ---" << endl;
            cout << "1. Cup of tea + Paratha (Rs. 99)" << endl;
            cout << "2. Omelette + Halwa Puri (Rs. 199)" << endl;
            cout << "3. Choly Paay + two Naan (Rs. 300)" << endl;
            cout << "Select dish (1-3): ";

            int dishChoice;
            cin >> dishChoice;

            if (dishChoice >= 1 && dishChoice <= 3) {
                int index = dishChoice - 1;
                cout << "Enter quantity: ";
                int qty;
                cin >> qty;

                if (qty > 0) {
                    orderQty[index] += qty;
                    cout << "Added " << qty << "x " << itemNames[index] << " to your order." << endl;
                } else {
                    cout << "Invalid quantity." << endl;
                }
            } else {
                cout << "Invalid selection." << endl;
            }
        }
        // lunch
        else if (menuChoice == "2" || menuChoice == "lunch" || menuChoice == "Lunch") {
            cout << "\n--- Lunch Menu ---" << endl;
            cout << "1. Chicken Biryani (Rs. 500)" << endl;
            cout << "2. Mutton Karahi (Rs. 999)" << endl;
            cout << "3. Beef Pulao (Rs. 800)" << endl;
            cout << "Select dish (1-3): ";

            int dishChoice;
            cin >> dishChoice;

            if (dishChoice >= 1 && dishChoice <= 3) {
                int index = 3 + (dishChoice - 1);
                cout << "Enter quantity: ";
                int qty;
                cin >> qty;

                if (qty > 0) {
                    orderQty[index] += qty;
                    cout << "Added " << qty << "x " << itemNames[index] << " to your order." << endl;
                } else {
                    cout << "Invalid quantity." << endl;
                }
            } else {
                cout << "Invalid selection." << endl;
            }
        }
        // dinner
        else if (menuChoice == "3" || menuChoice == "dinner" || menuChoice == "Dinner") {
            cout << "\n--- Dinner Menu ---" << endl;
            cout << "1. BBQ Tikka (Rs. 500)" << endl;
            cout << "2. Beef Nihari (Rs. 999)" << endl;
            cout << "3. Fried Rice (Rs. 800)" << endl;
            cout << "Select dish (1-3): ";

            int dishChoice;
            cin >> dishChoice;

            if (dishChoice >= 1 && dishChoice <= 3) {
                int index = 6 + (dishChoice - 1);
                cout << "Enter quantity: ";
                int qty;
                cin >> qty;

                if (qty > 0) {
                    orderQty[index] += qty;
                    cout << "Added " << qty << "x " << itemNames[index] << " to your order." << endl;
                } else {
                    cout << "Invalid quantity." << endl;
                }
            } else {
                cout << "Invalid selection." << endl;
            }
        }
        // desserts and drinks
        else if (menuChoice == "4" || menuChoice == "desserts" || menuChoice == "drinks") {
            cout << "\n--- Desserts & Drinks ---" << endl;
            cout << "1. Special Kulfa Ice Cream (Rs. 150)" << endl;
            cout << "2. Fresh Mint Margarita (Rs. 180)" << endl;
            cout << "3. Chilled Soft Drink (Rs. 70)" << endl;
            cout << "Select item (1-3): ";

            int dishChoice;
            cin >> dishChoice;

            if (dishChoice >= 1 && dishChoice <= 3) {
                int index = 9 + (dishChoice - 1);
                cout << "Enter quantity: ";
                int qty;
                cin >> qty;

                if (qty > 0) {
                    orderQty[index] += qty;
                    cout << "Added " << qty << "x " << itemNames[index] << " to your order." << endl;
                } else {
                    cout << "Invalid quantity." << endl;
                }
            } else {
                cout << "Invalid selection." << endl;
            }
        }
        // checkout
        else if (menuChoice == "5" || menuChoice == "bill" || menuChoice == "exit") {
            ordering = false;
        } else {
            cout << "Invalid choice. Please select 1-5." << endl;
        }

        // ask if customer wants to add more items
        if (ordering) {
            cout << "\nOrder more items? (1 for Yes, 0 for Checkout): ";
            int more;
            cin >> more;
            if (more == 0) {
                ordering = false;
            }
        }
    }

    // print bill receipt
    cout << "\n--- Final Bill ---" << endl;

    bool hasOrdered = false;
    int subtotal = 0;

    for (int i = 0; i < 12; i++) {
        if (orderQty[i] > 0) {
            hasOrdered = true;
            int itemCost = orderQty[i] * itemPrices[i];
            subtotal += itemCost;
            cout << orderQty[i] << "x " << itemNames[i]
                 << " @ Rs. " << itemPrices[i] << " = Rs. " << itemCost << endl;
        }
    }

    if (!hasOrdered) {
        cout << "No items were ordered. Thanks for visiting!" << endl;
        return 0;
    }

    // 5% tax
    int tax = (subtotal * 5) / 100;
    grandTotal = subtotal + tax;

    cout << "--------------------" << endl;
    cout << "Subtotal: Rs. " << subtotal << endl;
    cout << "Tax (5%): Rs. " << tax << endl;
    cout << "Total:    Rs. " << grandTotal << endl;
    cout << "--------------------" << endl;

    // payment
    cout << "\nEnter cash paid: Rs. ";
    int cashPaid;
    cin >> cashPaid;

    while (cashPaid < grandTotal) {
        cout << "Remaining amount needed: Rs. " << (grandTotal - cashPaid) << endl;
        cout << "Enter additional cash: ";
        int extraCash;
        cin >> extraCash;
        cashPaid += extraCash;
    }

    int change = cashPaid - grandTotal;
    cout << "Change returned: Rs. " << change << endl;
    cout << "\nThank you for dining with us!" << endl;

    return 0;
}
