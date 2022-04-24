#include <iostream>
#include<string>
using namespace std;
class lagonite
{
protected:
    string title;
    float rating;

public:
    lagonite(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display(){} // if we make this func=0 then it is called pure virtual function.
    
};


class youtube : public lagonite // creating 1st  derived class called Youtube.
{
private:
    float Engagement;

public:
    youtube(string s, float r, float e1) : lagonite(s, r)
    {
        Engagement = e1;
    }
    void diaplay()
    {
        cout << "Title of the video is: " << title << endl;
        cout << "Rating of this video is: " << rating << "out of 10" << endl;
        cout << "Engagement on this video is: " << Engagement << endl;
    }
};
class lagoVlogs : public lagonite
{
protected:
    int blogs;

public:
    lagoVlogs(string s, float r, int b2) : lagonite(s, r)
    {
        blogs = b2;
    }
    void display()
    {
        cout << "Title of the wesite is: " << title << endl;
        cout << "Rating of this Website is: " << rating << "out of 10" << endl;
        cout << "Number of blogs uploaded on this website: " << blogs << endl;
    }
};

int main()
{
    string title;
    float rating, lnd;
    int blog;
    // for youtube
    title = "Lagonite is Lagging king";
     lnd = 4.9;
    rating = 7.86;
    youtube objtube(title, rating,lnd);
    // for website
    title = "Lagonite blogs for gamers";
    blog = 500;
    rating = 8.9;
    lagoVlogs objsite(title, rating, blog);

    lagonite *pointer[2];
    pointer[0] = &objtube;
    pointer[1] = &objsite;

    pointer[0]->display();
    pointer[1]->display();

    return 0;
    /*
    Rules for defining the Virtual functions:-
    1.They cant be static.
    2.They are accessed by object pointers.
    3.Virtual functions can be a freind of another class.
    4.A virtual function in base class might not be used.
    5.If a virtual function us defined in a base class, there is no necessity of reducing it
    in the derived class.
    */
}