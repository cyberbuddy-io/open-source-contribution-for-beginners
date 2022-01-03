#include <iostream>
using namespace std;

class student
{
protected:
    int roll_num;

public:
    void setum(int a)
    {
        roll_num = a;
    }
    void printnum(void)
    {
        cout << "your roll no. is : " << roll_num << endl;
    }
};
class test : virtual public student
{
protected:
    float maths;
    float phy;

public:
    void setmarks(float m1, float m2)
    {
        maths = m1;
        phy = m2;
    }
    void printmarks(void)
    {
        cout << "your result is : "
             << "maths: " << maths << endl
             << "physics: " << phy << endl;
    }
};
class sports : virtual public student
{
protected:
    float score;

public:
    void setscore(float sc)
    {
        score = sc;
    }
    void printscore(void)
    {
        cout << "your PT score is : " << score << endl;
    }
};
class result : public test, public sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + phy + score;
        printnum();
        printmarks();
        printscore();
        cout << "your total score is : " << total << endl;
    }
};
int main()
{
    result r;
    r.setum(469);
    r.setmarks(98, 99);
    r.setscore(9);
    r.display();
    return 0;
}