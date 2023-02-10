//the prices in this code matched to the date February 10, 2023 :)


#include <iostream>
using namespace std;
 
void exit();
void usd_btc();
void usd_eur();
void btc_usd();
void btc_eur();
void eur_usd();
void eur_btc();
 
int main()
{
    int choice;
    
    do {
        cout << "1. USD -> BTC\n";
        cout << "2. USD -> EUR\n";
        cout << "3. BTC -> USD\n";
        cout << "4. BTC -> EUR\n";
        cout << "5. EUR -> USD\n";
        cout << "6. EUR -> BTC\n" << "\n";
        cout << "7. Exit program.\n\n";
        do {
            cout << "Enter your choice: \n\n";
            cin >> choice;
             
    if (choice<1 || choice>7) cout << "Invalid number. Please enter the number from 1 to 6.\n\n";
        } while (choice<1 || choice >7); 
        switch (choice) {
        case 1:
            usd_btc();
            break;
        case 2:
            usd_eur();
            break;
        case 3:
            btc_usd();
            break;
        case 4:
            btc_eur();
            break;
        case 5:
            eur_usd();
            break;
        case 6:
            eur_btc();
            break;
        case 7:
            cout << "See ya!";
            break;
        }
        
    } while (choice != 7);
    return 0;
}

void exit() {
    int choice;
 
    
    cout << "Want to exit program? \n";
    cout << "1. Yes \n";
    cout << "2. No \n";
    cin >> choice;
    switch (choice) {
    case 0:
        cout << "See you again!\n";
        
        exit(0);
    case 1:
        cout << "\n";
    }
 
}
 

void usd_btc() {
    double btc, usd;
 
    cout << "\nHow many dollars you want me to convert?: \n\n";
    cin >> usd;
 
    btc = usd * 0.000046;
    cout << "\n" << usd << " dollars equivalent to " << btc << " bitcoins.\n\n";
 
    exit();
}
 
 

void usd_eur() {
    double eur, usd;
 
    cout << "\nHow many dollars you want me to convert?: \n\n";
    cin >> usd;
 
    eur = usd / 1.07;
    cout << "\n" << usd << " dollars equivalent to " << eur << " euro.\n\n";
 
    exit();
 
}
 

void btc_usd() {
    double btc, usd;
 
    cout << "\nEnter the number of bitcoins: \n\n";
    cin >> btc;
 
    usd = btc / 35.6339;
    cout << "\n" << btc << " bitcoin is equivalent to " << usd << " dollars\n\n";
 
    exit();
 
}

void btc_eur() {
    double btc, eur;
        cout << "\nEnter the number of bitcoins: \n\n";
    cin >> btc;
 
    eur = btc / 20381.69;
    cout << "\n" << btc << " bitcoin is equivalent to " << eur << " euro.\n\n";
 
    exit();
}

void eur_usd() {
    double eur, usd;
 
    cout << "\nEnter the number of euro: \n\n";
    cin >> eur;
 
    usd = eur * 1.07;
    cout << "\n" << eur << " euro is equivalent to " << usd << " dollars.\n\n";
 
    exit();
}
 

void eur_btc() {
    double btc, eur;
 
    cout << "\nEnter the number of euro: \n\n";
    cin >> eur;
 
    btc = eur * 0.000049;
    cout << "\n" << eur << " euro is equivalent to " << btc << " btc.\n";
 
    exit();
}
