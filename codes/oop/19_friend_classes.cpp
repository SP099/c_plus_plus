#include<iostream>

/*
 * Friend Classes
 * can access private and protected members of some other class
 * friendship is not mutual. class Diary cannot access private and protected members of
 * the class BestFriend.
 */

#include<iostream>
#include<string>

class BestFriend;

class Diary {
    private:
        std::string secret;
    public:
        void setSecret(std::string s)
        {
            secret = s;
        }
        friend class BestFriend;
};

class BestFriend {
    public:
        void readSecret(Diary d) {
            std::cout << "Reading diary secret: " << d.secret << "\n";
        }
};

int main() {
    Diary myDiary;
    myDiary.setSecret("i have a crush on coding");
    BestFriend bf;
    bf.readSecret(myDiary);
    return 0;
}
