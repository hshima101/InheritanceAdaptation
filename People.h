#ifndef _PEOPLE_H_
#define _PEOPLE_H_
#include <iostream>
#include <cstring>

class Student
{
    public:
        Student();
        void getedu();
        void putedu() const; 
        ~Student(void);

    private:
        std::string school;
        std::string degree;
};

class Employee
{
    public:
        Employee();
        void getdata();
        void putdata() const;
        ~Employee(void);

    private:
        std::string name;
        unsigned long EmpNumber;

};

class Manager
{
    public:
        Manager();
        void getdata();
        void putdata() const;
        ~Manager(void);

    private:
        std::string title;
        double dues;
        Employee emp;
        Student stu;
};

class Scientist
{
    public:
        Scientist();
        void getdata();
        void putdata() const;
        ~Scientist(void);

    private:
        int pubs;
        Employee emp;
        Student stu;
};

class Worker
{
    public:
        Worker();
        void getdata();
        void putdata() const;
        ~Worker(void);

    private:
        Employee emp;
};

#endif