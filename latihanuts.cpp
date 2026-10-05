#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int isMember;
    int memberID;
    double discount;
    string name;
    int bookID;
    int cash;
    int change;

    cout << "=========================" << endl;
    cout << "   MemberID   |   Name    " << endl;
    cout << "=========================" << endl;
    cout << "       1      |    Ani     "<< endl;
    cout << "       2      |    Budi     "<< endl;
    cout << "       3      |    Wati     "<< endl;
    cout << "=========================" << endl;

    cout << "Welcome to the Book Store!" << endl;
    cout << "Are you a member? [1=yes/ 0=no]" << endl;
    cin >> isMember;

    if (isMember==1){
        cout << "Enter memberID" << endl;
        cin >> memberID;
        discount = 0.15;
        switch (memberID)
        {
        case 1:
            name = "Ani";
            cout << "Your name is Ani!" << endl;
            break;
        case 2:
            name = "Budi";
            cout << "Your name is Budi!" << endl;
            break;
        case 3:
            name = "Wati";
            cout << "Your name is Wati!" << endl;
            break;
        default:
            cout << "Not Found!" << endl;
            break;
        }
    }
    else {
        cout << "You as Guest!" << endl;
        discount = 0.05;
    }

    cout << "===================================" << endl;
    cout << "   BookID  |   Title   |   Price   " << endl;
    cout << "===================================" << endl;
    
    int BookID[5]=
    {1,2,3,4,5};

    string title[5]={
        "Harry Potter", "Algorithm","Calculus", "Sherlock Holmes", "Supernova" 
    };

    int price[5]={
        250000, 85000, 130000, 270000, 180000
    };
    
    for (int i = 0; i < 5; i++)
    {
        cout << BookID[i] << "     |    " << title[i] << "    |   " << price[i] << endl;
    }
    cout << "===================================" << endl;
    cout << "Enter bookID" << endl;
    cin >> bookID;

    int total_discount = price[bookID-1]*discount;
    int total_price = price[bookID-1] - total_discount;

    cout << name << " is buying " << title[bookID-1] << " for " << total_price << " IDR" << endl;
    
    cout << "Insert cash" << endl;
    cin >> cash;
    while(cash < total_price){
        cout << "Insufficient money!" << endl;
        cout << "Insert cash" << endl;
        cin >> cash;
    }
        change = cash - total_price;
        cout << "Money given: " << cash << ", change: " << change << endl;
        cout << "Thank you for shopping with us!" << endl;
    return 0;
}