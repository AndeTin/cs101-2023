#include <iostream>
#include <fstream>
using namespace std;

class ReadClass {
    public:
        string r_str ="class";
        string m_str;
        int i=0;
        size_t pos=0;

        int showClass(){
            ifstream fin;
            fin.open("main.cpp");
            while(getline(fin,m_str)){
                    m_str.find(r_str,pos);
                    size_t pos = m_str.find(r_str);
                    string str1 = m_str.substr(pos+6);
                    i++;
                    cout<<"class "<<str1<<endl;
            cout<<i<<" class in main.cpp"<<endl;
            }
            return 0;
            fin.close();
        }
};

int main(){
    ReadClass rfile;
    rfile.showClass();
    return 0;
}