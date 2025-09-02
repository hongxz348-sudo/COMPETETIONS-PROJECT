#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

// Product class to store product info
class Product {
private:
    int id;
    string name;
    float price;

public:
    void setProduct(int _id, string _name, float _price) {
        id = _id;
        name = _name;
        price = _price;
    }

    int getId() { return id; }
    string getName() { return name; }
    float getPrice() { return price; }
};

// Class to handle file operations
class ProductManager {
public:
    // Get product input from user
    Product inputProduct() {
        Product p;
        int id;
        string name;
        float price;

        cout << "Enter Product ID: ";
        cin >> id;
        cout << "Enter Product Name: ";
        cin >> name;
        cout << "Enter Product Price: ";
        cin >> price;

        p.setProduct(id, name, price);
        return p;
    }

    // Write product to file in one line
    void writeProductToFile( Product p) {
        ofstream file("data.txt", ios::app);
        file << p.getId() << " " << p.getName() << " " << p.getPrice() << endl;
        file.close();
    }

    // Read and display all products from file
    void readProductsFromFile() {
        ifstream file("data.txt");
        int id, count = 1;
        string name;
        float price;

        cout << "\n|-------------------------------------|\n";
        cout << "| No |  ID  |  Name   |   Price (USD) |\n";
        cout << "|-------------------------------------|\n";

        while (file >> id >> name >> price) {
            cout << "| " << setw(2) << count
                 << " | " << setw(4) << id
                 << " | " << setw(7) << name
                 << " | " << setw(13) << fixed << setprecision(2) << price << " |\n";
                 cout << "|-------------------------------------|\n";
            count++;
        }
        file.close();
    }

    // Main menu loop
    void run() {
        int choice;
        Product p;

        do {
            cout << "\n========== Product Menu ==========\n";
            cout << "1. Insert Product\n";
            cout << "2. List Products\n";
            cout << "3. Exit\n";
            cout << "Choose option: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    p = inputProduct();
                    writeProductToFile(p);
                    break;
                case 2:
                    readProductsFromFile();
                    break;
                case 3:
                    cout << "Goodbye!\n";
                    break;
                default:
                    cout << "Invalid option. Try again.\n";
            }
        } while (choice != 3);
    }
};

int main() {
    system("cls");
    ProductManager pm;
    pm.run();
    return 0;
}
