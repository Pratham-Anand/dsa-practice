#include<bits/stdc++.h>

using namespace std;

class student{


    private:
    string name;
    int height;
    int age;

    public:
    int getage(){
        return this->age;
    }
};


int main(){

student s1;

cout<<s1.getage()<<endl;

    return 0;
}