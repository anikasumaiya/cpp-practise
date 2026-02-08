#include <iostream>

using namespace std;

int main()
{
    string ticketNo, itemName, table;
    int token;

    cout << "Enter Ticket No: ";
    cin >> ticketNo;

    cout << "Enter item name: ";
    cin >> itemName;

    cout << "Enter table name: ";
    cin >> table;

    cout << "Enter token number: ";
    cin >> token;

    cout << "\n--- Kitchen Order ---\n";
    cout << "Ticket: " << ticketNo << endl;
    cout << "Item: " << itemName << endl;
    cout << "Table: " << table << endl;
    cout << "Token: " << token << endl;

    return 0;
}
