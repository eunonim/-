#include "TXLib.h"
class Button // имя класса
{
    int x,y,w,h;
    string color,text="", pic;
    COLORREF TX_color;
public: // спецификатор доступа public
    Button(int BX, int BY, int BW, int BH, string color ) // конструктор класса
    {
        x=BX;
        y=BY;
        w=BW;
        h=BH;
        TX_color=TX_BLUE;

    }

    int textAdd(string txt)
    {
    text=txt;
    }

     int Draw()
     {


     txSetFillColour(TX_color);
        txRectangle(x,y,x+w,y+h);


    if (text!="")
    {  txDrawText   (x, y, x+w, y+h, text.c_str() );
        }

    }

int BClick(int xClick,int yClick)
    {
      if (xClick>x&&yClick>y&&xClick<x+w&&yClick<y+h)
            return 1;
            return 0;

    }
};
