#include<iostream>
#include<string>

using namespace std;
class Engine {
    private:
        int m_EngineCapacity;
        int m_Horsepower;
        bool m_EngineRunning;
    public:
        Engine(int EngineCapacity=2000, int Horsepower = 200){
            m_EngineCapacity = EngineCapacity;
            m_Horsepower = Horsepower;
            m_EngineRunning = false;
        }
    bool EngineStart(){
        m_EngineRunning = true;
        return true;
    }
    bool EngineStop(){
        m_EngineRunning = false;
        return false;
    }
    bool get_EngineStatus(){
        return m_EngineRunning;
    }
};

class Fueltank {
    private:
        int m_FueltankCapacity;
        int m_Gas_grade;
    public:
        Fueltank(int FueltankCapacity=3000, int Gas=98){
            m_FueltankCapacity = FueltankCapacity;
            m_Gas_grade = Gas;
        }
        int fuel_up(int v, int gas){
            if(v > m_FueltankCapacity){
                cout << "Error: FueltankCapacity: " << m_FueltankCapacity <<" but fuel up: " << v << endl;
            }
            if(gas != m_Gas_grade){
                cout<<"Error: Gas_grade: " << gas << " Correct Gas_grade: " << m_Gas_grade << endl;
            }
            if(v <= m_FueltankCapacity && gas == m_Gas_grade){
                cout << "Fuel_up: " << v << " Gas_grade: " << gas << endl;
            }
            return 0;
        }   
        int set_Gas_grade(int Gas_grade){
            m_Gas_grade = Gas_grade;
            return 0;
        }
        int get_Gas_grade(){
            cout<< m_Gas_grade << endl;
            return 0;
        }

};

class Car {
    private:
        Engine m_Engine;
        Fueltank m_Fueltank;
        int m_MaxSeating;
        int m_price;
        int m_base;
        string m_brand;
        string m_model;
        int m_year;
        void m_UpdatePrice(int base=500000){
            
        }
    public:
        Car(string x,  int z, int s){
            m_model = x;
            m_year = z;
            m_MaxSeating = s;
        }
};

class Audi_Car : public Car{
    private:
        

    public:
        Engine m_Engine;
        Fueltank m_Fueltank;
        Audi_Car(string x, int z, int s) : Car(x,z,s){
            cout << "Constructing Audi_Car" << endl;
            }
        

};

int main(){
    Audi_Car car_a("A1", 2021, 5);
    car_a.m_Fueltank.fuel_up(3000,98);
}

