#include <iostream>

using namespace std;
void addition();
void subtraction();
void multiplication();
void division();


int main()
{
    cout << "\t\tWelcome to the Calculator ......!!\n"
         << endl;
    cout << "*******Press 0 to quit the program*******\n"
         << endl;
    cout << "Enter 1 for Addition \n";
    cout << "Enter 2 for Subtraction \n";
    cout << "Enter 3 for Multiplication \n";
    cout << "Enter 4 for Division \n";

    int choice;
    while (1)
    {
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;

        default:
            cout << "\n*******Wrong choice, Enter valid choice*******\n\n";
            break;
        }
    }

    return 0;
}

void addition(){
    cout<<"Enter the two numbers you want to add: ";
    int a,b;
    cin>>a>>b;
    cout<<"The addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
}
void subtraction(){
    cout<<"Enter the two numbers you want to subtract: ";
    int a,b;
    cin>>a>>b;
    cout<<"The subtraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
}
void multiplication(){
    cout<<"Enter the two numbers you want to multiply: ";
    int a,b;
    cin>>a>>b;
    cout<<"The multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
}
void division(){
    cout<<"Enter the two numbers you want to divide: ";
    int a,b;
    cin>>a>>b;
    cout<<"The division of "<<a<<" and "<<b<<" is "<<(float)a/(float)b<<endl;
}


