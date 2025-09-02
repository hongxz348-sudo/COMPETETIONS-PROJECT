#include <iostream>
using namespace std;
int main()
{
    string name[3] = {"Hong", "Hour", "Chetra"};
    int num;
    for (int i = 0; i < 3; i++)
    {
        cout << (i + 1) << ". " << name[i] << endl;
    };
    do{
        cout << "Input number to delete: ";
    cin >> num;
    if (num >= 1 && num <= 3)
    {
        for (int i = num - 1; i < 2; i++)
        {
            name[i] = name[i + 1];
        }
        name[2] = ""; // Optional: clear the last slot
        cout << "Updated list:\n";
        for (int i = 0; i < 2; i++)
        {
            cout << (i + 1) << ". " << name[i] << endl;
        }
    }
    else
    {
        cout << "Invalid number!" << endl;
    }
    }while(num!= 3);
    
    return 0;
}