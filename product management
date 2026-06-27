#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Product
{
public:
    int id, quantity;
    string name, category;
    float price;

    void input()
    {
        cout << "Nhap ID: ";
        cin >> id;
        cin.ignore();

        cout << "Nhap ten: ";
        getline(cin, name);

        cout << "Nhap gia: ";
        cin >> price;

        cout << "Nhap so luong: ";
        cin >> quantity;
        cin.ignore();

        cout << "Nhap danh muc: ";
        getline(cin, category);
    }

    void display()
    {
        cout << "\nID: " << id;
        cout << "\nTen: " << name;
        cout << "\nGia: " << price;
        cout << "\nSo luong: " << quantity;
        cout << "\nDanh muc: " << category << "\n";
    }
};

class Inventory
{
public:
    vector<Product> products;

    void add();
    void show();
    void search();
    void remove();
    void stock();
};
void Inventory::add()
{
    Product p;
    p.input();
    products.push_back(p);
}

void Inventory::show()
{
    if(products.empty()) cout << "Khong co san pham!\n";
    else
        for(Product p : products)
            p.display();
}

void Inventory::search()
{
    string t;
    cin.ignore();
    cout << "Nhap ten: ";
    getline(cin, t);

    for(Product p : products)
        if(p.name == t)
            p.display();
}

void Inventory::remove()
{
    int id;
    cout << "Nhap ID can xoa: ";
    cin >> id;

    for(int i=0;i<products.size();i++)
        if(products[i].id==id)
        {
            products.erase(products.begin()+i);
            cout<<"Da xoa!\n";
            return;
        }

    cout<<"Khong tim thay!\n";
}

void Inventory::stock()
{
    for(Product p : products)
        cout<<p.name<<" : "<<p.quantity<<" san pham\n";
}

int main()
{
    Inventory shop;
    int ch;

    do
    {
        cout<<"\n1.Them 2.Hien thi 3.Tim 4.Xoa 5.Ton kho 0.Thoat\n";
        cin>>ch;

        if(ch==1) shop.add();
        else if(ch==2) shop.show();
        else if(ch==3) shop.search();
        else if(ch==4) shop.remove();
        else if(ch==5) shop.stock();

    }while(ch!=0);

    return 0;
}
