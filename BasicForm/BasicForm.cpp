// BasicForm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void InsertName(int Option)
{
    char Name[50];
    system("cls");
    cout << "You Selected the option: " << Option << endl;
    system("pause");
    system("cls");
    cout << "Insert your name: ";
    cin >> Name;
    cout << "Your name is: " << Name << endl;
    system("pause");
}

void InsertAge(int Option)
{
    int Age;
    system("cls");
    cout << "You Selected the option: " << Option << endl;
    system("pause");
    system("cls");
    cout << "Insert your age: ";
    cin >> Age;
    cout << "Your age is: " << Age << endl;
    system("pause");
}

void InsertWhereFrom(int Option)
{
    char Location[100];
    system("cls");
    cout << "You Selected the option: " << Option << endl;
    system("pause");
    system("cls");
    cout << "Insert where are you from: ";
    getline(cin >> Location);
    cout << "Your are from: " << Location << endl;
    system("pause");
}

void PrintMenu()
{
    int Option = 0;

    cout << "Welcome To My Second C++ Program " << endl;
    cout << "-------------------------------" << endl;
    cout << "1-. Insert your name." << endl;
    cout << "2-. Insert your age." << endl;
    cout << "3-. Insert where are you from." << endl;
    cout << "0-. Exit" << endl;
    cout << "Insert the number of what you want to do? :";
    while (true)
    {
        cin >> Option;
        if (!cin)
        {
            cout << "Wrong Choice. Enter again " << endl;
            system("pause");
            system("cls");
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        else break;
    }
    switch (Option)
    {
        case 0:
            cout << "Thanks for use my program, have a nice day :)" << endl;
            system("pause");
            exit(0);
        break;
        case 1:
            InsertName(Option);
        break;
        case 2:
            InsertAge(Option);
        break;
        case 3:
            InsertWhereFrom(Option);
        break;
        default:
            cout << "Please select a number between 0 and 3" << endl;
            system("pause");
            system("cls");
        break;
    }
}

int main()
{
    cout << "Hello World!\n";
    PrintMenu();
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
