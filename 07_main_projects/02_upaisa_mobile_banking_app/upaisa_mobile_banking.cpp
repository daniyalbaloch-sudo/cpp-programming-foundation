#include <iostream>
#include <string>

using namespace std;

// UPaisa Mobile Banking (*786#)
int main() {
    string ussdCode;
    int pin = 1234;
    double balance = 25000.0;
    string lastTransaction = "No recent transactions";
    bool running = true;

    cout << "--- UPaisa Mobile Banking ---" << endl;
    cout << "Enter USSD code (*786#): ";
    cin >> ussdCode;

    if (ussdCode != "*786#" && ussdCode != "786" && ussdCode != "0") {
        cout << "Invalid USSD Code. Session ended." << endl;
        return 0;
    }

    while (running) {
        cout << "\n--- UPaisa Menu ---" << endl;
        cout << "1. Send Money" << endl;
        cout << "2. Pay Bills" << endl;
        cout << "3. Mobile Load" << endl;
        cout << "4. Bundles & Super Cards" << endl;
        cout << "5. Payments" << endl;
        cout << "6. Debit Cards" << endl;
        cout << "7. My Account & Balance" << endl;
        cout << "8. Invite a Friend" << endl;
        cout << "9. Exit" << endl;
        cout << "Enter choice (1-9): ";

        int choice;
        cin >> choice;

        // 1. send money
        if (choice == 1) {
            cout << "\n--- Send Money ---" << endl;
            cout << "1. To UPaisa Account" << endl;
            cout << "2. To CNIC" << endl;
            cout << "3. To Bank Account" << endl;
            cout << "4. Raast Transfer" << endl;
            cout << "Enter option (1-4): ";

            int transferType;
            cin >> transferType;

            // to upaisa account
            if (transferType == 1) {
                string phone;
                double amount;
                int enteredPin;

                cout << "Enter receiver mobile number: ";
                cin >> phone;
                cout << "Enter amount: Rs. ";
                cin >> amount;

                if (amount <= 0 || amount > balance) {
                    cout << "Transaction failed: Invalid amount or insufficient balance." << endl;
                } else {
                    cout << "Enter 4-digit PIN: ";
                    cin >> enteredPin;

                    if (enteredPin == pin) {
                        balance -= amount;
                        lastTransaction = "Transferred Rs. " + to_string(static_cast<int>(amount)) + " to " + phone;
                        cout << "\nSuccessfully transferred Rs. " << amount << " to " << phone << endl;
                        cout << "Remaining Balance: Rs. " << balance << endl;
                    } else {
                        cout << "Incorrect PIN!" << endl;
                    }
                }
            } 
            // to cnic
            else if (transferType == 2) {
                string cnic;
                string receiverPhone;
                double amount;
                int enteredPin;

                cout << "Enter receiver CNIC (13 digits): ";
                cin >> cnic;
                cout << "Enter receiver mobile number: ";
                cin >> receiverPhone;
                cout << "Enter amount: Rs. ";
                cin >> amount;

                if (amount <= 0 || amount > balance) {
                    cout << "Transaction failed: Insufficient funds or invalid amount." << endl;
                } else {
                    cout << "Enter 4-digit PIN: ";
                    cin >> enteredPin;

                    if (enteredPin == pin) {
                        balance -= amount;
                        lastTransaction = "CNIC transfer of Rs. " + to_string(static_cast<int>(amount)) + " to " + cnic;
                        cout << "\nMoney sent to CNIC: " << cnic << endl;
                        cout << "Amount: Rs. " << amount << " | Balance: Rs. " << balance << endl;
                    } else {
                        cout << "Incorrect PIN!" << endl;
                    }
                }
            }
            // to bank account
            else if (transferType == 3) {
                cout << "\nSelect Bank:" << endl;
                cout << "1. HBL" << endl;
                cout << "2. Meezan Bank" << endl;
                cout << "3. UBL" << endl;
                cout << "4. Allied Bank" << endl;
                cout << "Enter choice (1-4): ";
                int bankChoice;
                cin >> bankChoice;

                string bankName = (bankChoice == 1) ? "HBL" : (bankChoice == 2) ? "Meezan Bank" : (bankChoice == 3) ? "UBL" : "Allied Bank";
                string accountNum;
                double amount;
                int enteredPin;

                cout << "Enter Account / IBAN: ";
                cin >> accountNum;
                cout << "Enter amount: Rs. ";
                cin >> amount;

                if (amount <= 0 || amount > balance) {
                    cout << "Transaction failed: Insufficient balance." << endl;
                } else {
                    cout << "Enter 4-digit PIN: ";
                    cin >> enteredPin;

                    if (enteredPin == pin) {
                        balance -= amount;
                        lastTransaction = "Bank transfer Rs. " + to_string(static_cast<int>(amount)) + " to " + bankName + " (" + accountNum + ")";
                        cout << "\nTransferred Rs. " << amount << " to " << bankName << " (" << accountNum << ")" << endl;
                        cout << "Remaining Balance: Rs. " << balance << endl;
                    } else {
                        cout << "Incorrect PIN!" << endl;
                    }
                }
            }
            // raast transfer
            else if (transferType == 4) {
                string raastId;
                double amount;
                int enteredPin;

                cout << "Enter Raast ID / Mobile: ";
                cin >> raastId;
                cout << "Enter amount: Rs. ";
                cin >> amount;

                if (amount > 0 && amount <= balance) {
                    cout << "Enter 4-digit PIN: ";
                    cin >> enteredPin;

                    if (enteredPin == pin) {
                        balance -= amount;
                        lastTransaction = "Raast transfer Rs. " + to_string(static_cast<int>(amount)) + " to " + raastId;
                        cout << "\nRaast transfer of Rs. " << amount << " completed." << endl;
                        cout << "Remaining Balance: Rs. " << balance << endl;
                    } else {
                        cout << "Incorrect PIN!" << endl;
                    }
                } else {
                    cout << "Invalid amount or insufficient balance." << endl;
                }
            } else {
                cout << "Invalid selection." << endl;
            }
        }

        // 2. pay bills
        else if (choice == 2) {
            cout << "\n--- Bill Payment ---" << endl;
            cout << "1. Electricity" << endl;
            cout << "2. Gas" << endl;
            cout << "3. Water" << endl;
            cout << "4. Internet / Telephone" << endl;
            cout << "Select bill type (1-4): ";

            int billType;
            cin >> billType;

            string billName = (billType == 1) ? "Electricity" : (billType == 2) ? "Gas" : (billType == 3) ? "Water" : "Internet";
            string company;
            string refNum;
            double billAmount;
            int enteredPin;

            cout << "Enter company name: ";
            cin >> company;
            cout << "Enter reference number: ";
            cin >> refNum;
            cout << "Enter bill amount: Rs. ";
            cin >> billAmount;

            if (billAmount <= 0 || billAmount > balance) {
                cout << "Payment failed: Insufficient balance or invalid amount." << endl;
            } else {
                cout << "Enter 4-digit PIN: ";
                cin >> enteredPin;

                if (enteredPin == pin) {
                    balance -= billAmount;
                    lastTransaction = billName + " bill paid Rs. " + to_string(static_cast<int>(billAmount)) + " (" + company + ")";
                    cout << "\n" << billName << " bill paid successfully." << endl;
                    cout << "Paid: Rs. " << billAmount << " | Remaining Balance: Rs. " << balance << endl;
                } else {
                    cout << "Incorrect PIN!" << endl;
                }
            }
        }

        // 3. mobile load
        else if (choice == 3) {
            cout << "\n--- Mobile Load ---" << endl;
            cout << "1. Ufone" << endl;
            cout << "2. Telenor" << endl;
            cout << "3. Zong" << endl;
            cout << "4. Jazz" << endl;
            cout << "Select network (1-4): ";

            int netChoice;
            cin >> netChoice;

            string network = (netChoice == 1) ? "Ufone" : (netChoice == 2) ? "Telenor" : (netChoice == 3) ? "Zong" : "Jazz";
            string phone;
            double loadAmount;
            int enteredPin;

            cout << "Enter mobile number: ";
            cin >> phone;
            cout << "Enter amount (Rs. 100 - 10000): ";
            cin >> loadAmount;

            if (loadAmount < 100 || loadAmount > balance) {
                cout << "Invalid amount or insufficient balance." << endl;
            } else {
                cout << "Enter 4-digit PIN: ";
                cin >> enteredPin;

                if (enteredPin == pin) {
                    balance -= loadAmount;
                    lastTransaction = "Mobile load Rs. " + to_string(static_cast<int>(loadAmount)) + " on " + network + " (" + phone + ")";
                    cout << "\nMobile load of Rs. " << loadAmount << " credited to " << phone << " (" << network << ")" << endl;
                    cout << "Remaining Balance: Rs. " << balance << endl;
                } else {
                    cout << "Incorrect PIN!" << endl;
                }
            }
        }

        // 4. bundles and super cards
        else if (choice == 4) {
            cout << "\n--- Super Cards & Bundles ---" << endl;
            cout << "1. Super Card Grand (Rs. 999 - 100 GB, 5000 Mins - 30 Days)" << endl;
            cout << "2. Super Card Max   (Rs. 750 - 50 GB, 3000 Mins - 30 Days)" << endl;
            cout << "3. Weekly Heavy Data(Rs. 350 - 20 GB Internet - 7 Days)" << endl;
            cout << "4. Daily Data Feast (Rs. 60  - 3 GB Internet - 1 Day)" << endl;
            cout << "Select bundle (1-4): ";

            int bundleChoice;
            cin >> bundleChoice;

            int bundlePrice = (bundleChoice == 1) ? 999 : (bundleChoice == 2) ? 750 : (bundleChoice == 3) ? 350 : 60;
            string bundleName = (bundleChoice == 1) ? "Super Card Grand" : (bundleChoice == 2) ? "Super Card Max" : (bundleChoice == 3) ? "Weekly Heavy Data" : "Daily Data Feast";

            if (balance < bundlePrice) {
                cout << "Insufficient balance to subscribe to " << bundleName << endl;
            } else {
                string subMobile;
                cout << "Enter mobile number: ";
                cin >> subMobile;

                int enteredPin;
                cout << "Enter 4-digit PIN: ";
                cin >> enteredPin;

                if (enteredPin == pin) {
                    balance -= bundlePrice;
                    lastTransaction = "Subscribed " + bundleName + " (Rs. " + to_string(bundlePrice) + ") for " + subMobile;
                    cout << "\n" << bundleName << " activated on " << subMobile << endl;
                    cout << "Cost: Rs. " << bundlePrice << " | Remaining Balance: Rs. " << balance << endl;
                } else {
                    cout << "Incorrect PIN!" << endl;
                }
            }
        }

        // 5. payments
        else if (choice == 5) {
            cout << "\n--- Payments ---" << endl;
            cout << "1. Merchant Payment" << endl;
            cout << "2. School / College Fee" << endl;
            cout << "3. Traffic Challan" << endl;
            cout << "Select option (1-3): ";

            int payOption;
            cin >> payOption;

            string refCode;
            double payAmount;
            cout << "Enter reference / ID: ";
            cin >> refCode;
            cout << "Enter amount: Rs. ";
            cin >> payAmount;

            if (payAmount <= 0 || payAmount > balance) {
                cout << "Payment failed: Invalid amount or insufficient balance." << endl;
            } else {
                int enteredPin;
                cout << "Enter 4-digit PIN: ";
                cin >> enteredPin;

                if (enteredPin == pin) {
                    balance -= payAmount;
                    lastTransaction = "Payment of Rs. " + to_string(static_cast<int>(payAmount)) + " to " + refCode;
                    cout << "\nPayment of Rs. " << payAmount << " completed for: " << refCode << endl;
                    cout << "Remaining Balance: Rs. " << balance << endl;
                } else {
                    cout << "Incorrect PIN!" << endl;
                }
            }
        }

        // 6. debit card services
        else if (choice == 6) {
            cout << "\n--- Debit Card Services ---" << endl;
            cout << "1. Order PayPak Debit Card (Rs. 1000)" << endl;
            cout << "2. View Card Status" << endl;
            cout << "3. Block Debit Card" << endl;
            cout << "4. Set ATM PIN" << endl;
            cout << "Select option (1-4): ";

            int cardOption;
            cin >> cardOption;

            if (cardOption == 1) {
                if (balance >= 1000.0) {
                    balance -= 1000.0;
                    cout << "\nPayPak Debit Card ordered successfully." << endl;
                    cout << "Remaining Balance: Rs. " << balance << endl;
                } else {
                    cout << "Insufficient balance (Rs. 1000 needed)." << endl;
                }
            } else if (cardOption == 2) {
                cout << "\nCard: 5048-XXXX-XXXX-8921 (Active)" << endl;
            } else if (cardOption == 3) {
                cout << "\nCard 5048-XXXX-XXXX-8921 has been blocked." << endl;
            } else if (cardOption == 4) {
                int newPin;
                cout << "Enter new 4-digit ATM PIN: ";
                cin >> newPin;
                cout << "ATM PIN updated successfully." << endl;
            } else {
                cout << "Invalid option." << endl;
            }
        }

        // 7. my account & balance
        else if (choice == 7) {
            cout << "\n--- My Account ---" << endl;
            cout << "1. Check Balance" << endl;
            cout << "2. Last Transaction" << endl;
            cout << "3. Change MPIN" << endl;
            cout << "Select option (1-3): ";

            int accOption;
            cin >> accOption;

            if (accOption == 1) {
                int enteredPin;
                cout << "Enter 4-digit PIN: ";
                cin >> enteredPin;

                if (enteredPin == pin) {
                    cout << "\nWallet Balance: Rs. " << balance << endl;
                } else {
                    cout << "Incorrect PIN!" << endl;
                }
            } else if (accOption == 2) {
                cout << "\nLast Transaction: " << lastTransaction << endl;
            } else if (accOption == 3) {
                int oldPin, newPin, confirmPin;
                cout << "Enter current PIN: ";
                cin >> oldPin;

                if (oldPin == pin) {
                    cout << "Enter new 4-digit PIN: ";
                    cin >> newPin;
                    cout << "Confirm new PIN: ";
                    cin >> confirmPin;

                    if (newPin == confirmPin && newPin >= 1000 && newPin <= 9999) {
                        pin = newPin;
                        cout << "PIN changed successfully." << endl;
                    } else {
                        cout << "PIN mismatch or invalid format." << endl;
                    }
                } else {
                    cout << "Incorrect current PIN." << endl;
                }
            } else {
                cout << "Invalid option." << endl;
            }
        }

        // 8. invite a friend
        else if (choice == 8) {
            string friendNum;
            cout << "\nEnter friend's mobile number: ";
            cin >> friendNum;
            cout << "Invitation SMS sent to " << friendNum << "." << endl;
        }

        // 9. exit
        else if (choice == 9) {
            running = false;
        } else {
            cout << "Invalid choice. Please select 1-9." << endl;
        }

        // check if user wants to continue
        if (running) {
            cout << "\nDo another transaction? (1 for Yes, 0 to Exit): ";
            int cont;
            cin >> cont;
            if (cont == 0) {
                running = false;
            }
        }
    }

    cout << "\nThank you for using UPaisa!" << endl;
    return 0;
}
