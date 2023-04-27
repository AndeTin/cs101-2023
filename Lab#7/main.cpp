#include<iostream>
using namespace std;
class Car{
        public:
        string m_brand;
        string m_model;
        int m_year;
        int m_price;
        Car(string brand, string model, int year, int price){
            m_brand = brand;
            m_model = model;
            m_year = year;
            m_price = price;
        }
    };
    class BMW_Car: public Car{
        private:
        string m_DriveMode;
        public:
        BMW_Car(string model, int year, int price):Car("BMW", model, year, price){
            cout<<"Constructing BMW_Car\n";
            m_DriveMode = "Rear-wheel";
        }
        string get_DriveMode(){
            return m_DriveMode;
        }
    };
    class AUDI_Car: public Car{
        private:
        string m_DriveMode;
        public:
        AUDI_Car(string model, int year, int price):Car("AUDI", model, year, price){
            cout<<"Constructing AUDI_Car\n";
            m_DriveMode = "Front-wheel";
        }
        string get_DriveMode(){
            return m_DriveMode;
        }
    };
    class BENZ_Car: public Car{
        private:
        string m_DriveMode;
        public:
        BENZ_Car(string model, int year, int price):Car("BENZ", model, year, price){
            cout<<"Constructing BENZ_Car\n";
            m_DriveMode = "Front-wheel";
        }
        string get_DriveMode(){
            return m_DriveMode;
        }
    };
int main(){
    BMW_Car car1("X5",2024,4);
    cout<< car1.m_brand;
    cout<< "Drive Mode: "<<car1.get_DriveMode()<<"\n";
    AUDI_Car car2("A4",2023,3);
    cout<< car2.m_brand;
    cout<< "Drive Mode: "<<car2.get_DriveMode()<<"\n";
    BENZ_Car car3("C300",2022,2);
    cout<< car3.m_brand;
    cout<< "Drive Mode: "<<car3.get_DriveMode()<<"\n";
    return 0;
}