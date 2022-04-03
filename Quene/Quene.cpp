#include"Quene.h"

//有参构造 传入队列长度
Quene::Quene(int num)
{
    m_Capacity = num;
    m_PtrQuene = new int[m_Capacity]; //在堆上申请内存有可能失败，暂且不考虑那种情况
    this->clearQuene();
}

//判断当前队列是否为空
bool Quene::queneIsEmpty()
{
    if (m_QueLen == 0)
    {
        return true;
    }
    return false;
}

//判断当前队列是否为满
bool Quene::queneIsFull()
{
    if (m_QueLen == m_Capacity)
    {
        return true;
    }
    return false;
}

//清空当前队列
void Quene::clearQuene()
{
    m_Head = 0;
    m_Tail = 0;
    m_QueLen = 0;
}

//入队 从尾部入
void Quene::enQuene(int a) //a是要插入的元素
{
    if (queneIsFull())
    {
        cout << "队列已满，无法插入！" << endl;
        return;
    }
    m_PtrQuene[m_Tail] = a;
    m_Tail = (m_Tail + 1) % m_Capacity;
    m_QueLen++;

}

//出队 从头部出
void Quene::deQuene()
{
    if (queneIsEmpty())
    {
        cout << "队列为空，没有元素可以出队！" << endl;
        return;
    }
    m_Head = (m_Head + 1) % m_Capacity;
    m_QueLen--;
}

//遍历当前队列中的所有元素
void Quene::traverseQuene()
{
    if (queneIsEmpty())
    {
        cout << "队列为空，没有元素可以遍历！" << endl;
        return;
    }
    for (int i = 0; i < m_QueLen; i++)
    {
        cout << m_PtrQuene[(i + m_Head) % m_Capacity] << endl;
    }
    cout << endl;
}

//析构函数
Quene::~Quene()
{
    delete[] m_PtrQuene;
    m_PtrQuene = NULL;
}