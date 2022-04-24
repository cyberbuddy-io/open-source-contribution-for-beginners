#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

class Contact
{
private:
    char fname[50], lname[50], address[100], email[50];
    long long phNo;

public:
    void createContact()
    {
        cout << "Enter your first name: ";
        cin >> fname;
        cout << "Enter your second name: ";
        cin >> lname;
        cout << "Enter your phone number: ";
        cin >> phNo;
        cout << "Enter address: ";
        cin >> address;
        cout << "Enter email: ";
        cin >> email;
    }
    void showContact()
    {
        cout << "Name: " << fname << " " << lname << endl;
        cout << "Phone: " << phNo << endl;
        cout << "Address: " << address << endl;
        cout << "Email: " << email << endl;
    }
    void writeOnFile()
    {
        char ch;
        ofstream f1;
        f1.open("CMS.dat", ios::binary | ios::app);
        do
        {
            createContact();
            f1.write(reinterpret_cast<char *>(this), sizeof(*this));
            cout << "Do you want to enter next data?(Y/N)";
            cin >> ch;
        } while (ch == 'y' || ch == 'Y');
        cout << "Contact has been successfully created..." << endl;
        f1.close();
    }
    void readFromFile()
    {
        ifstream f2;
        f2.open("CMS.dat", ios::binary);
        cout << "\n==========================\n";
        cout << "LIST OF CONTACTS";
        cout << "\n==========================\n";

        while (!f2.eof())
        {
            if (f2.read(reinterpret_cast<char *>(this), sizeof(*this)))
            {
                showContact();
                cout << "\n==========================\n";
                continue;
            }
            f2.close();
        }
    }
    void searchOnFile()
    {
        ifstream f3;
        long long phone;
        cout << "Enter Contact ";
        cin >> phone;
        f3.open("CMS.dat", ios::binary);
        while (!f3.eof())
        {
            if (f3.read(reinterpret_cast<char *>(this), sizeof(*this)))
            {
                if (phone == phNo)
                {
                    showContact();
                    return;
                }
            }
        }
        cout << "\n\n!! NO RECORD FOUND !!";
        f3.close();
    }
    void deleteFromFile()
    {
        long long phone;
        int flag = 0;
        ofstream f4;
        ifstream f5;

        f5.open("CMS.dat", ios::binary);
        f4.open("temp.dat", ios::binary);

        cout << "Enter contact to delete: ";
        cin >> phone;

        while (!f5.eof())
        {
            if (f5.read(reinterpret_cast<char *>(this), sizeof(*this)))
            {
                if (phNo != phone)
                {
                    f4.write(reinterpret_cast<char *>(this), sizeof(*this));
                }
                else
                {
                    flag = 1;
                }
            }
        }
        f5.close();
        f4.close();
        remove("CMS.dat");
        rename("temp.dat", "CMS.dat");
        flag == 1 ? cout << "\tContact Deleted...." : cout << "\tContact Not Found....";
    }
    void editContact()
    {
        long long phone;
        fstream f6;
        cout << "Edit contact";
        cout << "\n================================\n";
        cout << "Enter the contact to be edited: ";
        cin >> phone;
        f6.open("CMS.dat", ios::binary | ios::out | ios::in);
        while (!f6.eof())
        {
            if (f6.read(reinterpret_cast<char *>(this), sizeof(*this)))
            {
                if (phone == phNo)
                {
                    cout << "Enter new record\n";
                    createContact();

                    int pos = -1 * sizeof(*this);
                    f6.seekp(pos, ios::cur);
                    f6.write(reinterpret_cast<char *>(this), sizeof(*this));
                    cout << endl
                         << endl
                         << "\tContact successfully updated....";
                    return;
                }
            }
        }
        cout << "\n\nNo Record Found";
        f6.close();
    }
};

int main()
{
    system("cls");
    system("color 3f"); //xy-> x is for background color and y is for text color
    cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t * WELCOME TO CONTACT MANAGEMENT SYSTEM *";
    getch();
    Contact c1;
    int choice;
    while (1)
    {
        system("cls");
        system("color 3f");

        cout << "\nCONTACT MANAGEMENT SYSTEM";
        cout << "\n\nMAIN MENU";
        cout << "\n==================================\n";
        cout << "[1] Add a New Contact\n[2] List All Contacts\n[3] Search For Contact\n[4] Edit Contact\n[5] Delete Contact\n[0] Exit\n\n=================================\n";
        cout << "Enter your choice? ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            system("cls");
            c1.writeOnFile();
            break;
        }
        case 2:
        {
            system("cls");
            c1.readFromFile();
            break;
        }
        case 3:
        {
            system("cls");
            c1.searchOnFile();
            break;
        }
        case 4:
        {
            system("cls");
            c1.editContact();
            break;
        }
        case 5:
        {
            system("cls");
            c1.deleteFromFile();
            break;
        }
        case 0:
        {
            system("cls");
            cout << "\n\n\n\n\t\t Thankyou For Using CMS." << endl
                 << endl;
            exit(0);
            break;
        }
        default:
        {
            cout << "Invalid choice !!  Enter your choice again ";
            break;
        }
        }
        int opt;
        cout << "\n\n\tEnter The Choice:\n[1] Main Menu\t\t[0] Exit" << endl;
        cin >> opt;
        switch (opt)
        {
        case 0:
        {
            system("cls");
            cout << "\n\n\n\n\t\t Thankyou For Using CMS." << endl
                 << endl;
            exit(0);
            break;
        }
        default:
        {
            continue;
        }
        }
        return 0;
    }
}
