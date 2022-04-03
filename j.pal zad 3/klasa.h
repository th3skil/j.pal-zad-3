#pragma once

#include <iostream>

using namespace std;
class A
{
private:
    int wart1;

protected:
    int wart2;

public:
    int wart3;
};
class B : public A
{
private:
    int wart4;

protected:
    int wart5;

public:
    int wart6;
    void metoda();
};
class C : private B
{
private:
    int wart7;

protected:
    int wart8;

public:
    int wart9;
    void metoda();
};