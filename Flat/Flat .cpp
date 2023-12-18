#include <iostream>

using namespace std;

class Flat 
{
private:
    double area;
    int price;

public:
    Flat(double area = 0.0, int price = 0) : area(area), price(price) {}

    bool operator==(const Flat& other) const {
        return area == other.area;
    }

    Flat& operator=(const Flat& other) {
        if (this != &other) {
            area = other.area;
            price = other.price;
        }
        return *this;
    }

    bool operator>(const Flat& other) const {
        return price > other.price;
    }

    double getArea() const {
        return area;
    }

    int getPrice() const {
        return price;
    }
};

int main() 
{
    setlocale(LC_ALL, "");
    Flat flat1(70.5, 100000);
    Flat flat2(75.0, 90000);
    Flat flat3 = flat1;

    cout << "������� �������� 1: " << flat1.getArea() << endl;
    cout << "������� �������� 2: " << flat2.getArea() << endl;
    cout << "������� �������� 3: " << flat3.getArea() << endl;

    if (flat1 == flat2) {
        cout << "������� ���������� 1 � 2 �����." << endl;
    }
    else {
        cout << "������� ���������� 1 � 2 �� �����." << endl;
    }

    if (flat1 > flat3) {
        cout << "�������� 1 ����� ������, ��� �������� 3." << endl;
    }
    else {
        cout << "�������� 1 ����� �� ������ �������� 3." << endl;
    }

    return 0;
}