#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class ReplaceMyString {
    public:
        string oldString;
        string newString;
        void replaceString(string x, string y) {
            ifstream file;
            ofstream newfile;
            file.open("main.cpp");
            newfile.open("rmain.cpp");
            while(!file.eof()){
                getline(file,oldString);
                size_t found = oldString.find(x);
                while(found!=string::npos){
                    oldString.replace(found , x.length() , y);
                    found = oldString.find(x, found + x.length());
                }
                newfile<<oldString<<endl;
            }
            file.close();
            newfile.close();
        }
};

int main(){
    ReplaceMyString my;
    my.replaceString("IU", "IU is best");
    return 0;
    }
