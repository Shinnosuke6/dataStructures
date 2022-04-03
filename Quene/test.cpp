#include"Quene.h"
#include<iostream>
using namespace std;

int main()
{
    Quene q(4);
    q.enQuene(10);
    q.enQuene(12);
    q.enQuene(15);
    q.enQuene(17);
    q.traverseQuene();

    q.deQuene();
    q.traverseQuene();

    q.clearQuene();
    q.enQuene(20);
    q.traverseQuene();

    system("pause");
    return 0;
}