-----------------------------------------------------------------------------------------------
                                                    CLASS
-----------------------------------------------------------------------------------------------


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int N = 3;

class Product {
public:
    string name[N];
    int price;

    void print() {
        for (int i = 0; i < N; i++) {
            cout << i + 1 << " - " << name[i] << endl;
        }
        cout << "Цена: " << price << endl;
    }
};

int main() {
    ofstream outfile("test.txt");

    Product products[N];

    // записываем данные в файл
    cout << "\n\tЗапись в файл\n";
    for (int i = 0; i < N; i++) {
        cout << "\nВведите название и цену продукта " << i + 1 << ":" << endl;
        for (int j = 0; j < N; j++) {
            cout  << j + 1 << " Товар: ";
            getline(cin, products[i].name[j]);
        }

        cout << "Цена: ";
        cin >> products[i].price;
        cin.ignore();
        outfile << products[i].name[0] << " " << products[i].name[1] << " " << products[i].name[2] << " " << products[i].price << endl;
    }

    outfile.close();

    ifstream infile("test.txt");
    cout << "\n\tДанные из файла\n\n";
    // читаем данные из файла и выводим их на экран
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            infile >> products[i].name[j];
        }
        infile >> products[i].price;
        products[i].print();
    }

    infile.close();

    return 0;
}

-----------------------------------------------------------------------------------------------
                                                    STRUCT
-----------------------------------------------------------------------------------------------


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int N = 3;

struct Product {
    string name[N];
    int price;

    void print() {
        for (int i = 0; i < N; i++) {
            cout << "Товар: " << name[i] << endl;
        }
        cout << "Цена: " << price << endl;
    }
};

int main() {
    ofstream outfile("test.txt");

    Product products[N];

    // записываем данные в файл
    cout << "\n\tЗапись в файл\n";
    for (int i = 0; i < N; i++) {
        cout << "\nВведите название и цену продукта " << i + 1 << ":" << endl;
        for (int j = 0; j < N; j++) {
            cout << j+1 << " Товар: ";
            getline(cin, products[i].name[j]);
        }

        cout << "Цена: ";
        cin >> products[i].price;
        cin.ignore();
        outfile << products[i].name[0] << "\n" << products[i].name[1] << "\n" << products[i].name[2] << "\n" << products[i].price << endl;
    }

    outfile.close();

    ifstream infile("test.txt");
    cout << "\n\tДанные из файла\n\n";
    // читаем данные из файла и выводим их на экран
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            infile >> products[i].name[j];
        }
        infile >> products[i].price;
        products[i].print();
    }

    infile.close();

    return 0;
}


