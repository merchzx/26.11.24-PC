#pragma once
#include <string>
#include <iostream>
using namespace std;

class PC {
protected:
    string name;
    string cpu;
    string gpu;
    string ssd;
    string ram;
    double price;
public:
    PC() = default;
    PC(string _name, string _cpu, string _gpu, string _ssd, string _ram)
        :name(_name), cpu(_cpu), gpu(_gpu), ssd(_ssd), ram(_ram),price(0) {}
    virtual double getPrice();
    virtual void Print();
};

class OfficePC :public PC {
    string micro;
public:
    OfficePC() = default;
    OfficePC(string _name, string _cpu, string _gpu, string _ssd, string _ram, string _micro)
        :PC(_name, _cpu, _gpu, _ssd, _ram)
    {
        micro = _micro;
        price = 30000;
    }
    void Print() {
        PC::Print();
        cout << "Micro - " << micro << endl;
    }
    double getPrice() {
        cout << "Price of PC - 30 000"<<endl;
        cout << "Price of Micro - 1 000" << endl;
        price += 1000;
        return price;
    }
};

class GameePC :public PC {
    string headphones;
    string keyb;
public:
    GameePC() = default;
    GameePC(string _name, string _cpu, string _gpu, string _ssd, string _ram, string _headphones, string _keyb)
        :PC(_name, _cpu, _gpu, _ssd, _ram)
    {
        keyb = _keyb;
        headphones = _headphones;
        price = 80000;
    }
    void Print() {
        PC::Print();
        cout << "Headphones - " << headphones << endl << "Keyboard" << keyb;
    }
    double getPrice() {
        cout << "Price of PC - 80 000" << endl;
        cout << "Price of Headphones - 5 000" << endl;
        cout << "Price of keyboard - 7 000" << endl;
        price += 12000;
        return price;
    }
};

class HomePC :public PC {
    string webca;
public:
    HomePC() = default;
    HomePC(string _name, string _cpu, string _gpu, string _ssd, string _ram, string _webca)
        :PC(_name, _cpu, _gpu, _ssd, _ram)
    {
        webca = _webca;
        price = 40000;
    }
    void Print() {
        PC::Print();
        cout << "Web-Cam - " << webca << endl;
    }
    double getPrice() {
        cout << "Price of PC - 40 000" << endl;
        cout << "Price of Web-Cam - 3 000" << endl;
        price += 3000;
        return price;
    }
};

