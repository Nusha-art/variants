#include <iostream>
#include <string>

using namespace std;

class FooString {
    char* buf;
public:
    FooString(char* tbuf) {
        buf = tbuf;
    };
    ~FooString() {
    };
    void show() {
        std::cout << buf << '\n';
    };
    bool compare(char* str) {
        if (str == buf) {
            cout << "true";
            return true;
        }
        else return false;
    }
};

int main()
{
    const char* myBuf = "This is a const char";
    char* myB = const_cast<char*>(myBuf);
    const char* myString = "This is a const char";
    char* myChar = const_cast<char*>(myString);
    FooString foo= myB;
    foo.compare(myChar);
}
