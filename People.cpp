#include <iostream>
#include <cstring>
#include <string>
#include "People.h"

//Student class
Student::Student()
{
    getedu();
    putedu();
};

Student::~Student(void)
{

};

void Student::getedu()
{
    std::cout<<"Enter the name of the School or University: "<<std::endl;
    std::cin>>school;
    std::cout<<std::endl;
    std::cout<<"Enter highest degree earned: "<<std::endl;
    std::cout<<"High School, Bachelors, Masters, PhD: "<<std::endl;
    std::cin>>degree;
    std::cout<<std::endl;
};

void Student::putedu() const
{
    std::cout<<"\n School or University: "<< school;
    std::cout<<"\n Highest degree earned: "<< degree;
};

//Employee class
Employee::Employee()
{
    getdata();
    putdata();
};

Employee::~Employee(void)
{

};

void Employee::getdata()
{
    std::cout<< "\n Enter Last Name: "; std::cin>>name;
    std::cout<< "\n Enter Number: "; std::cin>>EmpNumber;
};

void Employee::putdata() const
{
    std::cout<<"\n Name: " << name;
    std::cout<<"\n Number: "<<EmpNumber;
    std::cout<<std::endl;
};

//Manager class
Manager::Manager()
{
    getdata();
    putdata();
};

Manager::~Manager(void)
{

};

void Manager::getdata()
{
    std::cout<<std::endl;
    emp.getdata();
    std::cout<<"\n Enter Title: "; 
    std::cin>>title;
    std::cout<<"\n Enter golf club dues: ";
    std::cin>>dues;
    stu.getedu();
};

void Manager::putdata() const
{
    emp.putdata();
    std::cout<<"\n Title: "<< title;
    std::cout<<"\n Golf Club Dues: "<< dues;
    stu.putedu();
};

//Scientist class
Scientist::Scientist()
{
    getdata();
    putdata();
};

Scientist::~Scientist(void)
{

};

void Scientist::getdata()
{
    emp.getdata();
    std::cout<<"\n Enter the number of publications: "; std::cin >> pubs;
    stu.getedu();
};

void Scientist::putdata() const
{
    emp.putdata();
    std::cout<<"\n Number of Publications: "<< pubs;
    stu.putedu();
};

//Worker class
//Object of class Employee
Worker::Worker()
{
    getdata();
    putdata();
};

Worker::~Worker(void)
{

};

void Worker::getdata()
{
    emp.getdata();
};

void Worker::putdata() const
{
    emp.putdata();
};