#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class ReplaceMyString {
    public:
        string oldString;
        string newString;
        void replaceString(string oldString, string newString) {
            ifstream file;
            ofstream newfile;
            file.open("main.cpp");
            newfile.open("rmain.cpp");
            while(!file.eof()){
                file >> oldString;
                if(oldString == "IU"){
                    newfile << newString;
                }
                else{
                    newfile << oldString;
                }
                newfile << endl;
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