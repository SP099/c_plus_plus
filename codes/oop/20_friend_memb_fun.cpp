#include<iostream>

/*
 * Friend member functions
 * a member function with access to private and protected members of some other class
 * useful when we don't want the entire class to have access
 */

#include<iostream>
#include<string>

class Diary;

class BestFriend {
    public:
        void readSecret(Diary d);
        void talk() { 
            std::cout << "Talking ........";
        }
};

class Diary {
    private:
        std::string secret;
    public:
        void setSecret(std::string s)
        {
            secret = s;
        }
        friend void BestFriend::readSecret(Diary d);
};

void BestFriend::readSecret(Diary d) {
    std::cout << "Reading diary secret: " 
              << d.secret << "\n";
}

int main() {
    Diary myDiary;
    myDiary.setSecret("i have a crush on coding");
    BestFriend bf;
    bf.readSecret(myDiary);
    return 0;
}
