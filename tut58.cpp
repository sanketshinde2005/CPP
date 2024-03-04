// Abstract base class & Pure virtual fuction
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
    virtual void display() = 0; // do-nothing function ---> pure virtual function
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
Pure Virtual Function:
Pure Virtual Function is a function that does not perform any operation and the function is declared by assigning value 0 to it.Pure virtual functions are declared in abstract classes

Abstarct Base Class:
Abstarct Base Class is a class that has at least one pure virtual function in its body. The classes which are inherting the base class must need to override the virtual function o the abstract class otherwisw compiler will throw an error.

*/