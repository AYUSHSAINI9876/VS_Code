// #include<bits/stdc++.h>
// using namespace std;

// class teacher{
//     public:
//     string name;
//     string dept;
//     string subject;
//     double salary;
//   void changedep(string newdep){
//     dept=newdep;
//   }
//   //setter
//   void setsalary(double s){
//     salary=s;
//   }
//   //getter
// double getsalary(){
//     return salary;
//   }
// };
// int main(){
//  teacher t1;
//  t1.name="ayush";
//  t1.dept="cy";
//  t1.subject="cs";
//  t1.salary=80000;
//  t1.setsalary(25000);
// cout<<t1.name<<endl;
// cout<<t1.dept<<endl;
// cout<<t1.subject<<endl;
// cout<<t1.getsalary()<<endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// class student{
//     public:
//     string name;
//     double* cgpaptr;
//     student(string name,double cgpa){
// this->name=name;
// cgpaptr=new double;
// *cgpaptr=cgpa;
//     }
//     //destructor
//     ~student(){
//         cout<<"hey,i delete everything"<<endl;
//         delete cgpaptr;
//     }
//     void getinfo(){
//         cout<<"name:"<<name<<endl;
//         cout<<"cgpa:"<<*cgpaptr<<endl;
//     }
// };
// int main(){
//  student s1("ayush saini",8.01);
// //  student s2(s1);
// //   s1.getinfo();
// //  *(s2.cgpaptr)=9.1;
//  s1.getinfo();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class person
{
public:
    string name;
    int age;
    // person(string name,int age){
    //     this->name=name;
    //     this->age=age;
    // }
};
class student : public person
{
public:
    int rollno;
};
class gradstudent : public student
{
public:
    string researcharea;
};

int main()
{
    gradstudent s1;
    s1.name = "ayush saini";
    s1.researcharea = "cs";
    cout << s1.name << endl;
    cout << s1.researcharea << endl;
    return 0;
}