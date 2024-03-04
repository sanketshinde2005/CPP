// Virtual fuction example & creation rules in c++
#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() {}
};

class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "This is a video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is: " << videoLength << " minutes" << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is a text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial:  " << rating << " out of 5 stars" << endl;
        cout << "Number of words in this text tutorial is: " << words << " words" << endl;
    }
};
int main()
{
    string title;
    float rating, videolength;
    int words;

    // for CWH video
    title = "Virtual function";
    videolength = 5.30;
    rating = 4.5;
    CWHVideo VFvideo(title, rating, videolength);
    // VFvideo.display();

    // for CWH Text
    title = "Virtual function";
    words = 270;
    rating = 3.6;
    CWHText VFText(title, rating, words);
    // VFText.display();

    CWH *tut[2];
    tut[0] = &VFvideo;
    tut[1] = &VFText;

    tut[0]->display();
    tut[1]->display();
    return 0;
}

/*
Rules for virtual functions:
1. They cannot be static
2. They are accessed by object pointers 
3. Virtual functions can be a friend of another class
4. A virtual function in base class might not be used
5. If a virtual function is defined in a base class, there is no necessity of redefining it in derived class
*/