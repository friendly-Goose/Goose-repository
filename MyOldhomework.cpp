#include<iostream>//�������� ������ ����������
#include<vector>
using namespace std;

class Butterfly//������� ����� �������
{


    int days;
    string stage;
public:
    void setDays(int days)
    {
        this->days = days;
        setStage(days);
    }
    void setStage(int days)
    {
        if (days > 0 && days < 8) this->stage = "caterpillar";//������� ������ �����
        else if (days > 7 && days < 16) this->stage = "chrysalis";
        else if (days > 15 && days < 24) this->stage = "Butterfly";
        else if (days > 16 && days < 26) this->stage = "NewEgg";
    }
    void daysUp()
    {
        this->days++;
        setStage(this->days);
    }
    string getStage()
    {
        return this->stage;
    }
};

int main()
{
    Butterfly* a;//������� ����� �������
    Butterfly* b;
    Butterfly* c;
    Butterfly* d;
    Butterfly* g;
    Butterfly* f;
    Butterfly* x;
    Butterfly* t;
    Butterfly* o;
    Butterfly* p;
    vector<Butterfly*> v;//������ �� � ������
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    v.push_back(g);
    v.push_back(f);
    v.push_back(x);
    v.push_back(t);
    v.push_back(o);
    v.push_back(p);
    v[0]->setDays(7);//�������� �� ������ ���� ����� ������� �������� ������� ������� ����� ���� �������
    cout << v[0]->getStage();
    v[0]->daysUp();
    cout << v[0]->getStage();
    v[0]->daysUp();
    cout << v[0]->getStage();
}
