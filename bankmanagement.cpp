#include <iostream>
#include <stdlib.h>

using namespace std;

class Bank
{
private:
    int client_id = 0;
    int client_balance = 0;
    int client_donation = 0;

    string client_city;
    string client_name;

    static int total_donation;

public:
    void setDetails()
    {

        cout << "Client Id: ";
        cin >> client_id;

        cout << "Client Name: ";
        cin >> client_name;

        cout << "Client City: ";
        cin >> client_city;
    }
    void debit(int amt)
    {
        client_balance -= amt;
    }
    void credit(int amt)
    {
        client_balance += amt;
    }
    void donate(int amt)
    {
        client_donation += amt;
        total_donation += amt;
    }
    int getTotalDonation()
    {
        return total_donation;
    }
    string getname() { return client_name; }
    int getid() { return client_id; }
    string getcity() { return client_city; }
    int getbalance() { return client_balance; }
    int getdonation() { return client_donation; }
    static int gettotaldonation() { return total_donation; }
};

int Bank::total_donation = 0;

int main()
{
    Bank c1, c2, c3, c4, c5;
    cout << "Client 1" << endl;
    c1.setDetails();
    cout << "Client 2" << endl;
    c2.setDetails();
    cout << "Client 3" << endl;
    c3.setDetails();
    cout << "Client 4" << endl;
    c4.setDetails();
    cout << "Client 5" << endl;
    c5.setDetails();

    int ch = 1;
    char city;
    int amt = 0;

    cout << "------| Welcome to Bank |------\n";
    do
    {
        cout << "Press 0. Exit\n";
        cout << "Press 1. Select Client\n";
        cout << "Press 2. View Max Donation\n";
        cout << "Press 3. Search By City\n";
        cout << "Press 4. Total Donation\n";
        cout << "Press 5. Display Info\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            //selectClient ;
            system("CLS");
            cout << "Select Client \n";
            cout << "S.no\tName\tBalance\n";
            cout << "1.\t" << c1.getname() << "\t" << c1.getbalance() << endl;
            cout << "2.\t" << c2.getname() << "\t" << c2.getbalance() << endl;
            cout << "3.\t" << c3.getname() << "\t" << c3.getbalance() << endl;
            cout << "4.\t" << c4.getname() << "\t" << c4.getbalance() << endl;
            cout << "5.\t" << c5.getname() << "\t" << c5.getbalance() << endl;
            cin >> ch;
            switch (ch)
            {
            case 1:
                cout << c1.getname() << endl;
                cout << "Press 1. Get Info\n";
                cout << "Press 2. Debit\n";
                cout << "Press 3. Credit\n";
                cout << "Press 4. Add Donation\n";
                cin >> ch;
                switch (ch)
                {
                case 1: //getinfo;
                    cout << "ID\tName\1tBalance\tCity\n";
                    cout << c1.getid() << "\t" << c1.getname() << "\t" << c1.getbalance() << "\t" << c1.getcity() << endl;
                    break;
                case 2: // debit;
                    cout << "Amount to Debit: ";
                    cin >> amt;
                    if (c1.getbalance() > amt)
                    {
                        c1.debit(amt);
                    }
                    else
                    {
                        cout << "Insufficent Balance\n";
                    }

                    amt = 0;

                    break;
                case 3: // credit;
                    cout << "Amount to credit: ";
                    cin >> amt;
                    c1.credit(amt);
                    amt = 0;
                    break;
                case 4: // Add donation
                    cout << "Enter Donation Amount: ";
                    cin >> amt;
                    c1.donate(amt);
                    amt = 0;
                    break;
                default:
                    cout << "Invalid Option" << endl;
                }
                break;
            case 2:
                // c2
                cout << c2.getname() << endl;
                cout << "Press 1. Get Info\n";
                cout << "Press 2. Debit\n";
                cout << "Press 3. Credit\n";
                cout << "Press 4. Add Donation\n";
                cin >> ch;
                switch (ch)
                {
                case 1: //getinfo;
                    cout << "ID\tName\1tBalance\tCity\n";
                    cout << c2.getid() << "\t" << c2.getname() << "\t" << c2.getbalance() << "\t" << c2.getcity() << endl;
                    break;
                case 2: // debit;
                    cout << "Amount to Debit: ";
                    cin >> amt;
                    if (c2.getbalance() > amt)
                    {
                        c2.debit(amt);
                    }
                    else
                    {
                        cout << "Insufficent Balance\n";
                    }

                    amt = 0;

                    break;
                case 3: // credit;
                    cout << "Amount to credit: ";
                    cin >> amt;
                    c2.credit(amt);
                    amt = 0;
                    break;
                case 4: // Add donation
                    cout << "Enter Donation Amount: ";
                    cin >> amt;
                    c2.donate(amt);
                    amt = 0;
                    break;
                default:
                    cout << "Invalid Option" << endl;
                }
                break;
            case 3:
                // c3
                cout << c3.getname() << endl;
                cout << "Press 1. Get Info\n";
                cout << "Press 2. Debit\n";
                cout << "Press 3. Credit\n";
                cout << "Press 4. Add Donation\n";
                cin >> ch;
                switch (ch)
                {
                case 1: //getinfo;
                    cout << "ID\tName\1tBalance\tCity\n";
                    cout << c3.getid() << "\t" << c3.getname() << "\t" << c3.getbalance() << "\t" << c3.getcity() << endl;
                    break;
                case 2: // debit;
                    cout << "Amount to Debit: ";
                    cin >> amt;
                    if (c3.getbalance() > amt)
                    {
                        c3.debit(amt);
                    }
                    else
                    {
                        cout << "Insufficent Balance\n";
                    }

                    amt = 0;

                    break;
                case 3: // credit;
                    cout << "Amount to credit: ";
                    cin >> amt;
                    c3.credit(amt);
                    amt = 0;
                    break;
                case 4: // Add donation
                    cout << "Enter Donation Amount: ";
                    cin >> amt;
                    c3.donate(amt);
                    amt = 0;
                    break;
                default:
                    cout << "Invalid Option" << endl;
                }
                break;
            case 4:
                // c4
                cout << c2.getname() << endl;
                cout << "Press 1. Get Info\n";
                cout << "Press 2. Debit\n";
                cout << "Press 3. Credit\n";
                cout << "Press 4. Add Donation\n";
                cin >> ch;
                switch (ch)
                {
                case 1: //getinfo;
                    cout << "ID\tName\1tBalance\tCity\n";
                    cout << c4.getid() << "\t" << c4.getname() << "\t" << c4.getbalance() << "\t" << c4.getcity() << endl;
                    break;
                case 2: // debit;
                    cout << "Amount to Debit: ";
                    cin >> amt;
                    if (c4.getbalance() > amt)
                    {
                        c4.debit(amt);
                    }
                    else
                    {
                        cout << "Insufficent Balance\n";
                    }

                    amt = 0;

                    break;
                case 3: // credit;
                    cout << "Amount to credit: ";
                    cin >> amt;
                    c4.credit(amt);
                    amt = 0;
                    break;
                case 4: // Add donation
                    cout << "Enter Donation Amount: ";
                    cin >> amt;
                    c4.donate(amt);
                    amt = 0;
                    break;
                default:
                    cout << "Invalid Option" << endl;
                }
                break;
            case 5:
                // c5
                cout << c2.getname() << endl;
                cout << "Press 1. Get Info\n";
                cout << "Press 2. Debit\n";
                cout << "Press 3. Credit\n";
                cout << "Press 4. Add Donation\n";
                cin >> ch;
                switch (ch)
                {
                case 1: //getinfo;
                    cout << "ID\tName\1tBalance\tCity\n";
                    cout << c5.getid() << "\t" << c5.getname() << "\t" << c5.getbalance() << "\t" << c5.getcity() << endl;
                    break;
                case 2: // debit;
                    cout << "Amount to Debit: ";
                    cin >> amt;
                    if (c5.getbalance() > amt)
                    {
                        c5.debit(amt);
                    }
                    else
                    {
                        cout << "Insufficent Balance\n";
                    }

                    amt = 0;

                    break;
                case 3: // credit;
                    cout << "Amount to credit: ";
                    cin >> amt;
                    c5.credit(amt);
                    amt = 0;
                    break;
                case 4: // Add donation
                    cout << "Enter Donation Amount: ";
                    cin >> amt;
                    c5.donate(amt);
                    amt = 0;
                    break;
                default:
                    cout << "Invalid Option" << endl;
                }
                break;
            default:
                cout << "Invalid Option" << endl;
            }
            break;
        case 2:
            // getMaxDonation ;

            int a = c1.getdonation();
            int b = c2.getdonation();
            int c = c3.getdonation();
            int d = c4.getdonation();
            int e = c5.getdonation();

            if (a > b && a > c && a > d && a > e)
            {
                cout << "Name\tBalance\tCity\n";
                cout << c1.getname() << "\t" << c1.getbalance() << "\t" << c1.getcity() << endl;
            }
            else if (b > a && b > c && b > d && b > e)
            {
                cout << "Name\tBalance\tCity\n";
                cout << c2.getname() << "\t" << c2.getbalance() << "\t" << c2.getcity() << endl;
            }
            else if (c > b && c > a && c > d && c > e)
            {
                cout << "Name\tBalance\tCity\n";
                cout << c3.getname() << "\t" << c3.getbalance() << "\t" << c3.getcity() << endl;
            }
            else if (d > b && d > c && d > a && d > e)
            {
                cout << "Name\tBalance\tCity\n";
                cout << c4.getname() << "\t" << c4.getbalance() << "\t" << c4.getcity() << endl;
            }
            else if (e > b && e > c && e > d && e > a)
            {
                cout << "Name\tBalance\tCity\n";
                cout << c5.getname() << "\t" << c5.getbalance() << "\t" << c5.getcity();
            }
            else
            {
                cout << "Error Occured" << endl;
            }
            break;
        case 3:
            //searchbycity ;
            cout << "Search By City" << endl;
            cout << "Enter City first Char: ";
            cin >> city;
            if (city == c1.getcity[0])
            {
                cout << c1.getname() << "\t" << c1.getbalance() << "\t" << c1.getcity() << endl;
            }
            if (city == c2.getcity[0])
            {
                cout << c2.getname() << "\t" << c2.getbalance() << "\t" << c2.getcity() << endl;
            }
            if (city == c3.getcity[0])
            {
                cout << c3.getname() << "\t" << c3.getbalance() << "\t" << c3.getcity() << endl;
            }
            if (city == c4.getcity[0])
            {
                cout << c4.getname() << "\t" << c4.getbalance() << "\t" << c4.getcity() << endl;
            }
            if (city == c5.getcity[0])
            {
                cout << c5.getname() << "\t" << c5.getbalance() << "\t" << c5.getcity() << endl;
            }
            else
            {
                cout << "No User Found" << endl;
            }
            break;
        case 4:
            // total donations ;
            cout << "Total Donations: " << Bank::gettotaldonation();

            break;
        default:
            cout << "Invalid Option\n";
        }
    } while (ch != 0);
}