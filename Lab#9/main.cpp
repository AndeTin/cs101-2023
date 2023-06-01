#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class ReplaceMyString {
    public:
        string oldString;
        string newString;
        string tmp;
        void replaceString(string oldString, string newString) {
            ifstream file;
            ofstream newfile;
            file.open("main.cpp");
            newfile.open("rmain.cpp");
            while(!file.eof()){
                getline(file, tmp);
                if(oldString == "IU"){
                    newfile << newString;
                }
                else{
                    newfile << oldString;
                }
                
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