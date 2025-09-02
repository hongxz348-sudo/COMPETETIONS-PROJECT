#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

class Product {
private:
    int pro_id;
    string pro_name;
    float pro_price;

public:
    void Setproduct(int id, string name, float price) {
        pro_id = id;
        pro_name = name;
        pro_price = price;
    }

    int getPro_id() {
        return pro_id;
    }

    string getPro_name() {
        return pro_name;
    }

    float getPro_price() {
        return pro_price;
    }
};

class Operator {
public:
    void writeDatatoFile(Product p) {
        ofstream file("data.txt", ios::app);
        file << p.getPro_id() << " " << p.getPro_name() << " " << p.getPro_price() << endl;
        file.close();
    }

    Product getInputproduct() {
        int id;
        string name;
        float price;
        Product p;
        cout << "Input Product ID: ";
        cin >> id;
        cout << "Input Product Name: ";
        cin >> name;
        cout << "Input Product Price: ";
        cin >> price;

        p.Setproduct(id, name, price);
        return p;
    }

    void readDatafromFile() {
        ifstream file("data.txt");
        int id, no = 1;
        string name;
        float price;

        cout << setw(33) << "Product Information" << endl;
        cout << "|========================================|" << endl;
        cout << "|  No |    ID    |    Name    |   Price  |" << endl;
        cout << "|========================================|" << endl;

        while (file >> id >> name >> price) {
            cout << "| " << setw(2) << no
                 << " | " << setw(6) << id
                 << " | " << setw(8) << name
                 << " | " << setw(8) << fixed << setprecision(2) << price << " |" << endl;
            cout << "|----------------------------------------|" << endl;
            no++;
        }

        file.close();
    }

    void Search() {
        ifstream file("data.txt");
        int id;
        string name;
        float price;
        int searchId;
        bool found = false;

        cout << "Input Product ID for Searching: ";
        cin >> searchId;

        while (file >> id >> name >> price) {
            if (id == searchId) {
                found = true;
                cout << "\n✅ Product Found:\n";
                cout << "ID: " << id << "\n";
                cout << "Name: " << name << "\n";
                cout << "Price: $" << fixed << setprecision(2) << price << "\n";
                break;
            }
        }

        if (!found) {
            cout << "\n❌ Product ID " << searchId << " was not found.\n";
        }

        file.close();
    }

    void run() {
        int op;
        Product p;

        do {
            cout << "\n========== Product Menu ==========\n";
            cout << "1. Insert Product\n";
            cout << "2. List Products\n";
            cout << "3. Search Product\n";
            cout << "4. Exit\n";
            cout << "Choose your option: ";
            cin >> op;
            system("cls");

            switch (op) {
                case 1:
                    p = getInputproduct();
                    writeDatatoFile(p);
                    break;
                case 2:
                    readDatafromFile();
                    break;
                case 3:
                    Search();
                    break;
                case 4:
                    cout << "Goodbye!\n";
                    break;
                default:
                    cout << "Invalid choice.\n";
            }
        } while (op != 4);
    }
};

int main() {
    system("cls");
    Operator op;
    op.run();
    system("cls");
    return 0;
}
