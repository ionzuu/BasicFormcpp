// BasicForm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int Option = 0;

void PrintMenu()
{
    while (true)
    {
        cout << "Welcome To My Second C++ Program " << endl;
        cout << "-------------------------------" <<endl;
        cout << "1-. Insert your name." << endl;
        cout << "2-. Insert your age." << endl;
        cout << "3-. Insert where are you from." << endl;
        cout << "0-. Exit" << endl;
        cout << "Insert the number of what you want to do? :";
    
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
        else
        {
            switch (Option) {
            case 0:
                cout << "Thanks for use my program, have a nice day :)" << endl;
                system("pause");
                exit(0);
                break;
            case 1:
                cout << "You Selected the option: " << Option << endl;
                break;
            case 2:
                cout << "You Selected the option: " << Option << endl;
                break;
            case 3:
                cout << "You Selected the option: " << Option << endl;
                break;
            default:
                cout << "Please select a number between 0 and 3" << endl;
                system("pause");
                system("cls");
                break;
            }
        }
    } 
}

int main()
{
    cout << "Hello World!\n";
    PrintMenu();
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
