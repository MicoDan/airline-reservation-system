#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void mainMenu();

class Management
{
public:
    Management()
    {
        mainMenu();
    }
};

class Details
{
public:
    static string name, gender; // a non static string may not be declared or used outside its class
    int phoneNo;
    int age;
    string add;
    static int cId;
    char arr[100];

    void information()
    {
        cout << "\nEnter the customer ID:";
        cin >> cId;
        cout << "\nEnter the name :";
        cin.ignore();       // clearing the newline character from the buffer
        getline(cin, name); // reading strings with spaces
        cout << "\nEnter the age :";
        cin >> age;
        cin.ignore(); // clear the newline character from the buffer
        cout << "\nEnter the address :";
        getline(cin, add);
        cout << "\nEnter gender :";
        getline(cin, gender);
        cout << "Your details are saved with us\n"
             << endl;
    }
};

int Details::cId; // how to get static variables outside their class
string Details::name;
string Details::gender;

class registration
{
public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void flights()
    {
        string flightN[] = {"Dubai", "Canada", "UK", "USA", "Australia", "Europe"};

        for (int a = 0; a < 6; a++)
        {
            cout << (a + 1) << ".flight to " << flightN[a] << endl;
        }

        cout << "\nWelcome to the Airlines!" << endl;
        cout << "Press the number of the country of which you want to book the flight:";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "________________________________Welcome to Dubai Emirates______________________________\n"
                 << endl;
            cout << "Your comfort is our priority. Enjoy the journey!" << endl;
            cout << "Following are the flights \n"
                 << endl;
            cout << "1. DUB - 498" << endl;
            cout << "\t08-01-2023 8:00AM 10hrs $ 300" << endl;
            cout << "2. DUB - 658" << endl;
            cout << "\t09-01-2023 4:00AM 8hrs $ 200" << endl;
            cout << "3. DUB - 499" << endl;
            cout << "\t10-01-2023 11:00AM 11hrs $ 150";

            cout << "\nSelect the flight you want to book :";
            cin >> choice1;
            if (choice1 == 1)
            {
                charges = 300;
                cout << "\nYou have successfully booked the flight DUB - 498" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 200;
                cout << "\nYou have successfully booked the flight DUB - 658" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else if (choice1 == 3)
            {
                charges = 150;
                cout << "\nYou have successfully booked the flight DUB - 499" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else
            {
                cout << "Invalid input , shifting to the previous menu" << endl;
                flights();
            }
            cout << "Press any key to go back to the main menu:" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
        }
        case 2:
        {
            cout << "________________________________Welcome to Canedian Airlines______________________________\n"
                 << endl;
            cout << "Your comfort is our priority. Enjoy the journey!" << endl;
            cout << "Following are the flights \n"
                 << endl;
            cout << "1. CA - 400" << endl;
            cout << "\t08-02-2023 8:00AM 10hrs $ 600" << endl;
            cout << "2. CA - 401" << endl;
            cout << "\t09-02-2023 4:00AM 8hrs $ 500" << endl;
            cout << "3. CA - 402" << endl;
            cout << "\t10-02-2023 11:00AM 11hrs $ 400";

            cout << "\nSelect the flight you want to book :";
            cin >> choice1;
            if (choice1 == 1)
            {
                charges = 600;
                cout << "\nYou have successfully booked the flight CA - 400" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 500;
                cout << "\nYou have successfully booked the flight CA - 401" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else if (choice1 == 3)
            {
                charges = 400;
                cout << "\nYou have successfully booked the flight CA - 402" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else
            {
                cout << "Invalid input , shifting to the previous menu" << endl;
                flights();
            }
            cout << "Press any key to go back to the main menu:" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
        }

        case 3:
        {
            cout << "________________________________Welcome to UK Airways______________________________\n"
                 << endl;
            cout << "Your comfort is our priority. Enjoy the journey!" << endl;
            cout << "Following are the flights \n"
                 << endl;
            cout << "1. UK - 500" << endl;
            cout << "\t08-03-2023 7:00AM 7hrs $ 300" << endl;
            cout << "2. UK - 501" << endl;
            cout << "\t09-03-2023 5:00AM 9hrs $ 250" << endl;
            cout << "3. UK - 502" << endl;
            cout << "\t10-03-2023 12:00AM 10hrs $ 200";

            cout << "\nSelect the flight you want to book :";
            cin >> choice1;
            if (choice1 == 1)
            {
                charges = 300;
                cout << "\nYou have successfully booked the flight UK - 500" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 250;
                cout << "\nYou have successfully booked the flight UK - 501" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else if (choice1 == 3)
            {
                charges = 200;
                cout << "\nYou have successfully booked the flight UK - 502" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else
            {
                cout << "Invalid input , shifting to the previous menu" << endl;
                flights();
            }
            cout << "Press any key to go back to the main menu:" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
        }
        case 4:
        {
            cout << "________________________________Welcome to US Airlines______________________________\n"
                 << endl;
            cout << "Your comfort is our priority. Enjoy the journey!" << endl;
            cout << "Following are the flights \n"
                 << endl;
            cout << "1. US - 800" << endl;
            cout << "\t08-05-2023 1:00PM 10hrs $ 400" << endl;
            cout << "2. US - 801" << endl;
            cout << "\t09-05-2023 5:00PM 8hrs $ 350" << endl;
            cout << "3. US - 802" << endl;
            cout << "\t10-05-2023 11:00PM 11hrs $ 250";

            cout << "\nSelect the flight you want to book :";
            cin >> choice1;
            if (choice1 == 1)
            {
                charges = 400;
                cout << "\nYou have successfully booked the flight US - 800" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 350;
                cout << "\nYou have successfully booked the flight US - 801" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else if (choice1 == 3)
            {
                charges = 250;
                cout << "\nYou have successfully booked the flight US - 802" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else
            {
                cout << "Invalid input , shifting to the previous menu" << endl;
                flights();
            }
            cout << "Press any key to go back to the main menu:" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
        }
        case 5:
        {
            cout << "________________________________Welcome to Australian Airlines______________________________\n"
                 << endl;
            cout << "Your comfort is our priority. Enjoy the journey!" << endl;
            cout << "Following are the flights \n"
                 << endl;
            cout << "1. AU - 356" << endl;
            cout << "\t08-07-2023 1:00AM 5hrs $ 200" << endl;
            cout << "2. AU - 342" << endl;
            cout << "\t09-07-2023 3:00AM 4hrs $ 150" << endl;
            cout << "3. AU - 332" << endl;
            cout << "\t10-07-2023 4:00AM 5hrs $ 180";

            cout << "\nSelect the flight you want to book :";
            cin >> choice1;
            if (choice1 == 1)
            {
                charges = 200;
                cout << "\nYou have successfully booked the flight AU - 356" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 150;
                cout << "\nYou have successfully booked the flight AU - 342" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else if (choice1 == 3)
            {
                charges = 180;
                cout << "\nYou have successfully booked the flight AU - 332" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else
            {
                cout << "Invalid input , shifting to the previous menu" << endl;
                flights();
            }
            cout << "Press any key to go back to the main menu:" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
        }

        case 6:
        {
            cout << "________________________________Welcome to European Airlines______________________________\n"
                 << endl;
            cout << "Your comfort is our priority. Enjoy the journey!" << endl;
            cout << "Following are the flights \n"
                 << endl;
            cout << "1. EU - 100" << endl;
            cout << "\t08-10-2023 8:00AM 3hrs $ 200" << endl;
            cout << "2. EU - 101" << endl;
            cout << "\t09-10-2023 4:00AM 4hrs $ 200" << endl;
            cout << "3. EU - 102" << endl;
            cout << "\t10-10-2023 11:00AM 3hrs $ 300";

            cout << "\nSelect the flight you want to book :";
            cin >> choice1;
            if (choice1 == 1)
            {
                charges = 200;
                cout << "\nYou have successfully booked the flight EU - 100" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 200;
                cout << "\nYou have successfully booked the flight EU - 101" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else if (choice1 == 3)
            {
                charges = 300;
                cout << "\nYou have successfully booked the flight EU - 102" << endl;
                cout << "You can go back to menu and take the ticket" << endl;
            }
            else
            {
                cout << "Invalid input , shifting to the previous menu" << endl;
                flights();
            }
            cout << "Press any key to go back to the main menu:" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
        }
        default:
        {
            cout << "Invalid input, shifting to the main menu....";
            mainMenu();
            break;
        }
        }
    }
};

float registration::charges; // important when you want to acquire public input from another class
int registration::choice;

class ticket : public registration, Details
{
public:
    void Bill()
    {
        string destination = "";
        ofstream outf("records.txt"); // opens a file called records.txt
        {
            outf << "___________________XYZ Airlines____________" << endl; // writes in the file called records.txt
            outf << "___________________Ticket__________________" << endl;
            outf << "___________________________________________" << endl;

            outf << "Customer ID:" << Details::cId << endl;
            outf << "Customer Name:" << Details::name << endl;
            outf << "Customer Gender:" << Details::gender << endl;
            outf << "Description" << endl;

            if (registration::choice == 1)
            {
                destination = "Dubai";
            }
            else if (registration::choice == 2)
            {
                destination = "Canada";
            }
            else if (registration::choice == 3)
            {
                destination = "UK";
            }
            else if (registration::choice == 4)
            {
                destination = "USA";
            }
            else if (registration::choice == 5)
            {
                destination = "Australia";
            }
            else if (registration::choice == 5)
            {
                destination = "Europe";
            }

            outf << "Destination\t" << destination << endl;
            outf << "Flight cost :\t" << registration::charges << endl;
        }
        outf.close(); // closes the file
    }
    void dispBill()
    {
        ifstream ifs("records.txt"); // reads from the file only.
        if (!ifs)
        {
            cout << "File error!" << endl;
        }
        while (!ifs.eof())
        {
            ifs.getline(arr, 100);
            cout << arr << endl;
        }
        ifs.close();
    }
};

void mainMenu()
{
    int lchoice;
    int schoice;
    int back;

    cout << "\t              Rwanda National Airport\n"
         << endl;
    cout << "\t___________________Main Menu________________________" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|" << endl;

    cout << "\t|\t Press 1 to add the Customer Details    \t|" << endl;
    cout << "\t|\t Press 2 for flight registration        \t|" << endl;
    cout << "\t|\t Press 3 for Ticket and Charges         \t|" << endl;
    cout << "\t|\t Press 4 to exit                        \t|" << endl;
    cout << "\t|\t\t\t\t\t\t|" << endl;
    cout << "\t____________________________________________________" << endl;

    cout << "Enter the choice : ";
    cin >> lchoice;

    Details d;
    registration r;
    ticket t;

    switch (lchoice)
    {
    case 1:
        cout << "________________Customers__________________\n"
             << endl;
        d.information();
        cout << "Press 1 to go back to Main menu";
        cin >> back;

        if (back == 1)
        {
            mainMenu();
        }
        else
        {
            mainMenu();
        }
        break;

    case 2:
        cout << "____________Book a flight using this system__________________\n"
             << endl;
        r.flights();
        break;

    case 3:
        cout << "__________GET YOUR TICKET___\n"
             << endl;
        t.Bill();

        cout << "Your ticket is printed, you can collect it \n"
             << endl;
        cout << "Press 1 to display your ticket";

        cin >> back;
        if (back == 1)
        {
            t.dispBill();
            cout << "Press any key to go back to main menu:";
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        else
        {
            mainMenu();
        }
        break;

    case 4:
        cout << "\n\n\t______________Thank you____________" << endl;
        break;

    default:
        cout << "Invalid input, Please try again!\n";
        mainMenu();
    }
}

int main()
{
    Management Mobj;
    return 0;
}