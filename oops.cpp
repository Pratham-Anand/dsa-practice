#include<bits/stdc++.h>
using namespace std;

class hero{

private:
int health;

public:
int level;
char *name;
static int time;

int gethealth(){
    return health;
}

int sethealth(int h){
    health=h;
}

hero(){
    // cout<<"Default constructor is called"<<endl;
    name=new char [100];
}

// hero(int level){// if i pass input with same name as data member then 'this' should be written.
//     this->level=level;
// }


hero (hero &temp){
    char *namecpy= new char[strlen(temp.name)+1];
    strcpy(namecpy,temp.name); // this points to another memory location;
    this->name=namecpy;
    this->health=temp.health;
    this->level=temp.level;
}

// hero(int health,int level,char name[]){
//     this->name=name;
//     this->health=health;
//     this->level=level;
// }

void print(){
    // cout<<"address of this pointer:"<<this<<endl;
    cout<<"health :"<<this->health<<endl; 
    // cout<<"level :"<<this->level<<endl; 
    cout<<"name:"<<this->name<<endl; 
}

void setname(char name[]){
    strcpy(this->name,name);
}

~hero(){
    cout<<"destructor is called"<<endl;
}

static int func(){

    return hero::time;
}

};

int hero::time=5;

int main(){

hero a;

// hero b(20);
// hero a(40,1,"babbar");
hero *b=new hero;

delete b;
cout<<hero::time<<endl;

cout<<hero::func()<<endl;



// b.sethealth(100);
// char name[7]= "babbar";
// b.setname(name);

// a.print();
// cout<<"address of a:"<<&a<<endl;
// b.print();
// cout<<"address of b:"<<&b<<endl;

// hero c(b);  //copy constructor...
// c.print();

// b.name[0]='g';
// b.sethealth(200);
// b.print();

// c.print();



// cout<<a.level<<endl;

// hero *d=new hero;

// a.level=1;
// d->level=2;

// cout<<"level of b:"<<b.level<<endl;
// cout<<"level of d"<<d->level<<endl;

// a.sethealth(70);
// cout<<"health of a:"<<a.health()<<endl;
// cout<<"health of b:"<<b.health<<endl;

    return 0;
}


