#include <iostream>
using namespace std;
class student{
    private:
    int rollno;
    string name;
    public:
    //constructor
    student(int r,string n)
    {
        rollno=r;
        name=n;
        cout<<"Student object created"<<endl;
        
    }
//member function
void display(){
    cout<<"Roll number : "<<rollno<<endl;
    cout<<"Name : "<<name<<endl;

}
//Destructor
~student(){
    cout<<"Student object destroyed"<<endl;
}


};
int main(){
    student s1(101,"Arun");
    s1.display();
    return 0;
}