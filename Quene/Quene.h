#include<iostream>
using namespace std;

class Quene
{
public:

    //有参构造 传入队列长度
    Quene(int num);

    //判断当前队列是否为空
    bool queneIsEmpty();

    //判断当前队列是否为满
    bool queneIsFull();

    //清空当前队列
    void clearQuene();

    //入队
    void enQuene(int a);

    //出队
    void deQuene();

    //遍历当前队列中的所有元素
    void traverseQuene();

    //队列数组指针
    int* m_PtrQuene;

    //队列长度
    int m_QueLen;

    //队列容量
    int m_Capacity;

    //队列头
    int m_Head;

    //队列尾
    int m_Tail;

    //析构函数
    ~Quene();

};