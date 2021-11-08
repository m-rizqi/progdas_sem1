#include<string.h>
#include<string>
#include<iostream>

using namespace std;

class Person {
    private:
        string name;
        int age;
    public:
        Person(string mName, int mAge){
            name = mName;
            age = mAge;
        }
        string getName(){
            return name;
        }
        void setName(string mName){
            name = mName;
        }
        int getAge(){
            return age;
        }
        void setName(int mAge){
            age = mAge;
        }
    
};

int main()
{
    Person person1("Rizqi",19); 
    printf("My name is %s, and i'm %d years old\n",person1.getName().c_str(), person1.getAge());
    return 0;
}
