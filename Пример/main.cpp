//========================================================================
//! @file       Main.cpp
//{=======================================================================
//!
//! @brief      <Заголовок>\n
//! @brief      <Подзаголовок>
//!
//! @version    [Version 0.01 alpha, build 1]
//! @author     Copyright (C) <Автор>, <Год> (<Имя> <Почта>)
//! @date       <Дата>
//!
//! @par        Протестировано
//!           - (TODO: список платформ)
//!
//! @todo     - (TODO: список ближайших планов по этому файлу)
//!
//! @bug      - (TODO: список найденных ошибок в этом файле)
//!
//! @par        История изменений файла
//!           - Версия 0.01 Alpha
//!             - Только что созданный файл
//!
//}=======================================================================

#include "TXLib.h"
 //область создания функций

 void Sea(int x)
 {
  txSetFillColor(RGB(0,130,185));
  txSetColor(RGB(0,130,185));
  txRectangle(x+0-0,450,x+800-0,600);
  }


     void drawKarabl(int x,int y)
     {
     txSetColor(RGB(185,122,87));
     txSetFillColor(RGB(185,122,87));
     txRectangle(x+187-428,y+427-160, x+568-428,y+605-160);
     txRectangle(x+117-428,y+353-160, x+329-428,y+542-160);
     txEllipse(x+117-428,y+460-160,x+319-428,y+605-160);
     POINT noskarabla[3] = {{x+568-428,y+427-160},{x+690-428,y+427-160},{x+568-428,y+605-160}};
     txPolygon (noskarabla, 3);
     txSetColor(RGB(185,122,87),5) ;
     txLine(x+690-428,y+427-160,x+803-428,y+395-160);
     txSetColor(RGB(163,82,58),3);
     txRectangle(x+428-428,y+160-160, x+450-428,y+427-160);
     txSetFillColor(TX_WHITE);
     txSetColor(TX_WHITE);
     POINT parus[3] = {{x+450-428,y+160-160},{x+533-428,y+295-160},{x+450-428,y+295-160}};
     txPolygon (parus, 3);
     txEllipse(x+474-428,y+286-160,x+540-428,y+316-160);
     POINT parus1[3] = {{x+450-428,y+310-160},{x+533-428,y+310-160},{x+450-428,y+373-160}};
     txPolygon (parus1, 3);
     txRectangle(x+450-428,y+286-160,x+500-428,y+316-160);
     txSetColor(RGB(163,82,58),3);
     txLine(x+117-428,y+353-160,x+329-428,y+353-160);
     txLine(x+690-428,y+427-160,x+118-428,y+427-160);
     txLine(x+118-428,y+542-160,x+117-428,y+353-160);
     txLine(x+329-428,y+353-160,x+329-428,y+427-160);
     txLine(x+118-428,y+540-160,x+129-428,y+567-160);
     txLine(x+129-428,y+567-160,x+155-428,y+588-160);
     txLine(x+189-428,y+605-160,x+155-428,y+588-160);
     txLine(x+189-428,y+605-160,x+568-428,y+605-160);
     txLine(x+690-428,y+427-160,x+568-428,y+605-160);











 }

void Man(int x, int y, int xLegs)
{
    txSetColor(TX_BLACK, 5);
    txSetFillColor(TX_BLACK);
  //legs
  txSetColor(TX_BLUE,5);
  //655-657
  //r
  txLine(x+655-657,y+400-291,x+615-657+xLegs,y+485-291);
  //l
  txLine(x+655-657,y+400-291,x+685-657-xLegs,y+485-291);


  // telo
  txSetColor(TX_GREEN,5);
  txLine(x+655-657,y+400-291,x+655-657,y+315-291);
  // hands
  // left hand
  txLine(x+655-657,y+315-291,x+630-657,y+350-291);
  txLine(x+630-657,y+350-291,x+630-657, y+385-291);
  //right hand

  txLine(x+655-657,y+315-291,x+685-657,y+350-291);
  txLine(x+685-657,y+350-291,x+685-657,y+385-291);
  //head
  //x=657, y=256
  txSetColor(RGB(239,228,176),5);
    txSetFillColor(RGB(239,228,176));
  txCircle(x+657-657,y+291-291,25);
  }


 void fon()
 {// Фон
    txSetColor(TX_BLACK);
    txLine(0, 450, 800, 450);
  }

 void drawSky(COLORREF color)
 //RGB (31, 196, 224)
 {txSetColor(color);
 txSetFillColor(color);
    txRectangle(0, 0, 800, 600);

 }

 void drawSun(int x, int y)
 {txSetColor(RGB (255,255,0));
    txSetFillColor(RGB (255,255,0));
    txCircle  ( x, y,60 );}
    // 700, 102

void drawLand()
    {     txSetFillColor(RGB (85, 205, 50));
    txRectangle(0, 450, 800, 600);
    txSetColor(TX_YELLOW);
    }
    void DrawSand()
    {     txSetFillColor(RGB (255, 201, 14));
    txRectangle(0, 450, 800, 600);
    }

    void tree(int x, int y)
    {//дерево

    txSetColor(TX_BLACK);
    txSetFillColor(RGB(185,122,87));
    txRectangle(x+115-145,y+410-450,x+145-145,y+450-450);
    txSetColor(TX_BLACK);
    txSetFillColor(RGB(64,151,60));
   POINT star[3] = {{x+90-145, y+410-450}, {x+170-145, y+410-450}, {x+130-145,y+340-450}};
          txPolygon (star, 3);

    POINT tree [3] = {{x+100-145, y+370-450}, {x+160-145, y+370-450}, {x+130-145,y+300-450}};
    txPolygon (tree, 3);

    POINT tree1 [3] = {{x+108-145, y+330-450}, {x+153-145, y+330-450}, {x+130-145,y+275-450}};
    txPolygon (tree1, 3);}

    void tree2(int x, int y)
    {
    txSetColor(TX_BLACK);
    txSetFillColor(RGB(185,122,87));
    txRectangle(x+315-341,y+321-474,x+341-341,y+474-474);


    txSetColor(RGB(34,177,76));
    txSetFillColor(RGB(34,177,76));
    txEllipse (x+292-341,y+186-474,x+376-341,y+310-474);
    txEllipse (x+320-341,y+256-474,x+409-341,y+349-474);
    txEllipse (x+265-341,y+239-474,x+346-341,y+346-474);
    txEllipse (x+296-341,y+299-474,x+360-341,y+384-474);
     }
    void drawHome()
    {//рисую дом
      //стена
     txSetColor(TX_BLACK);
    txLine(200, 280, 200,550);
    txLine(560, 280, 560, 550);
    txLine(560, 550, 200,550);
    txSetFillColor(RGB(185,122,87));
    txRectangle(200, 280, 560, 550);

    // Крыша

    txSetFillColor(TX_ORANGE);
    POINT star[3] = {{380, 30}, {180, 280}, {580, 280}};
    txPolygon (star, 3);
txSetColor(TX_BLACK);
    txLine(180, 280, 580, 280);
    txLine(380, 30, 580, 280);
    txLine(380, 30, 180, 280);



    //окно
    txSetFillColor(RGB (129,228,254));
    txRectangle(320,380, 450,480);

    txLine(320, 380, 450, 380);
    txLine(320, 380, 320, 480);
    txLine(450,380, 450, 480);
    txLine(450, 480, 320, 480);
    txLine(385, 380, 385, 480);
    txLine(320,430, 450, 430);
}
    void drawCloud(int x, int y)
    {
    //txEllipse (61, 57, 280, 141);
     //txEllipse (190,30, 340, 124);
     //txEllipse (220,78,190,150);
     //txEllipse (120,87, 280,175);
    txSetColor (TX_WHITE);
    txSetFillColor(TX_WHITE);
     txEllipse (x+61-61, y, x+280-61, 141);
     txEllipse (x+190-61,30, x+340-61, 124);
     txEllipse (x+220-61,78,x+190-61,150);
     txEllipse (x+120-61,87, x+280-61,175);
     }
 void drawMapa(int x, int y)
   {

    txSetColor(RGB(239,228,176));
    txSetFillColor(RGB(239,228,176));
    POINT mapa[4] = {{x+109-109, y+390-390},{x+138-109,y+420-390},{x+165-109,y+390-390},{x+138-109,y+364-390}};
    txPolygon (mapa, 4);
    txSetColor(RGB(236,14,26), 3);
    txLine (x+125-109,y+395-390, x+138-109, y+392-390);
    txLine (x+138-109,y+385-390,x+153-109,y+392-390);
    txLine (x+143-109,y+397-390,x+143-109,y+383-390);

    }
  void doska ()
  {txSetColor(RGB(123,77,51));
    txSetFillColor(RGB(123,77,51));
    POINT doska[4] = {{394,576},{743,343},{801,343},{497,576}};
    txPolygon (doska, 4);
}
    void bar(int x, int y)
    {
    // sand
    txSetColor(RGB (255, 201, 14));
    txSetFillColor(RGB (255, 201, 14));
    txRectangle(x+0-0, y+450-450, x+800-0, y+600-450);
    //bar
    txSetColor(TX_BLACK);
    txSetFillColor(RGB(139,87,58));
    txRectangle(x+373-0,y+306-450,x+805-0,y+544-450);
    txRectangle(x+361-0,y+261-450,x+817-0,y+326-450);
    txRectangle(x+11-0,y+454-450,x+26-0,y+605-450);
    POINT pirs[4] = {{x+9-0,y+453-450},{x+373-0,y+451-450},{x+373-0,y+519-450},{x+54-0,y+519-450}};
    txPolygon (pirs, 4);
    txRectangle(x+55-0,y+519-450,x+70-0,y+605-450);

     }




int main()
    {
    txCreateWindow (800, 600);

        int yMan = 291;
        int xMan = 657;
        int xLegs = 0;
        int xSun = -100;
        int ySun = 250;
        int xCloud = -20;
        int xMapa = 109;
        int yMapa = 390;
        int xBar = 0;
        int yBar = 450;





    while (yMan<375)
    {
    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);

    txEnd();
    xMan = xMan - 2;
    yMan = yMan + 2;
    ySun = ySun - 1;
    xSun = xSun + 3;
    xLegs = xLegs + 35;
    xCloud = xCloud + 2;
    txSleep(15);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);


    txEnd();
    xMan = xMan - 2;
    yMan = yMan + 2;
    ySun = ySun - 1;
    xSun = xSun + 3;
    xLegs = xLegs - 35;
    xCloud = xCloud + 2;
    txSleep(15);
    }



    while (xMan>100)
    {
    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    txEnd();
    xMan = xMan - 3;
    ySun = ySun - 1;
    xSun = xSun + 2;
    xLegs = xLegs + 35;
    xCloud = xCloud + 2;
    txSleep(15);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    txEnd();
    xMan = xMan - 3;
    ySun = ySun - 1;
    xSun = xSun + 2;
    xLegs = xLegs - 35;
    xCloud = xCloud + 2;
    txSleep(15);
                }







    while (yMan >291)
    {
    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    txEnd();
    yMan = yMan - 3;
    xSun = xSun + 3;
    xLegs = xLegs + 35;
    xCloud = xCloud + 2;
    txSleep(15);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    txEnd();
    yMan = yMan - 3;
    xSun = xSun + 3;
    xLegs = xLegs - 35;
    xCloud = xCloud + 2;
    txSleep(15);
    }


    while (yMan <375)
    {
    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    yMan = yMan + 3;
    yMapa = yMapa + 3;
    xSun = xSun + 3;
    xLegs = xLegs + 35;
    xCloud = xCloud + 2;
    txSleep(15);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    yMan = yMan + 3;
    yMapa = yMapa + 3;
    xSun = xSun + 3;
    xLegs = xLegs - 35;
    xCloud = xCloud + 2;
    txSleep(15);
    }


    while (xMan <890)
    {txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xMan = xMan + 4;
    xMapa = xMapa + 4;
    xSun = xSun + 3;
    xCloud = xCloud + 2;
    xLegs = xLegs + 35;
    txSleep(15);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xMan = xMan + 4;
    xMapa = xMapa + 4;
    xSun = xSun + 3;
    xCloud = xCloud + 2;
    xLegs = xLegs - 35;
    txSleep(15);
    }

    while (xSun<900)
    {
    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xCloud = xCloud + 2;
    xSun = xSun + 3;
    txSleep(10);
    }



    while (xCloud<900)
    {
    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xCloud = xCloud + 2;
    txSleep(10);
    }

    xMan = -50;
    xMapa = -50;
    xCloud = -50;
    xSun = -50;

    while (xMan<900)
    {
    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    drawLand();
    fon();
    tree2(50,480);
    tree(145,450);
    tree(180,480);
    tree(270,473);
    tree(350,475);
    tree(410,460);
    tree(450,480);
    tree2(430,485);
    tree(500,460);
    tree(550,470);
    tree(600,450);
    tree(100,460);
    tree2(700,480);
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xLegs = xLegs + 35;
    xMan = xMan + 3;
     xMapa = xMapa + 3;
    xCloud = xCloud + 2;
    xSun = xSun + 1;
    txSleep(10);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    drawLand();
    fon();
    tree2(50,480);
    tree(145,450);
    tree(180,480);
    tree(270,473);
    tree(350,475);
    tree(410,460);
    tree(450,480);
    tree2(430,485);
    tree(500,460);
    tree(550,470);
    tree(600,450);
    tree(100,460);
    tree2(700,480);
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xLegs = xLegs - 35;
    xMan = xMan + 3;xBar = 0;
    yBar = 450;
    xMapa = xMapa + 3;
    xCloud = xCloud + 2;
    xSun = xSun + 3;
    txSleep(10);
    }

    xMan = -50;
    xMapa = -50;
    xCloud = -50;
    xSun = -50;

    //берег
    int xKarabl = 838;
    int yKarabl = 80;
    int xSea = 500;


    while (xMan<460)
    {
    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    DrawSand();
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    doska ();
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);



    txEnd();
    xLegs = xLegs + 35;
    xMan = xMan + 3;
     xMapa = xMapa + 3;
    xCloud = xCloud + 2;
    xSun = xSun + 1;
    txSleep(10);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    DrawSand();
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    doska ();
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);

    txEnd();
    xLegs = xLegs - 35;
    xMan = xMan + 3;
    xMapa = xMapa + 3;
    xCloud = xCloud + 2;
    xSun = xSun + 3;
    txSleep(10);
    }


    while (xMan<800)
    {
    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    DrawSand();
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    doska ();
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xLegs = xLegs + 35;
    xMan = xMan + 3;
    yMan = yMan - 2;
    xMapa = xMapa + 3;
    yMapa = yMapa - 2;
    xCloud = xCloud + 2;
    xSun = xSun + 1;

    txSleep(10);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    DrawSand();
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    doska ();
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xLegs = xLegs - 35;
    xMan = xMan + 3;
    yMan = yMan - 2;
    xMapa = xMapa + 3;
    yMapa = yMapa - 2;
    xCloud = xCloud + 2;
    xSun = xSun + 3;

    txSleep(10);
    }



     //море
     xMan = 90;
     yMan = 79;
     xSea = 0;
     xKarabl = 330;
     yKarabl = 80;



    while (xSun<1200)
    {
    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xCloud = xCloud + 1;
    xSun = xSun + 2;
    yMan = yMan + 1;
    yKarabl = yKarabl + 1;
    txSleep(30);
        txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xCloud = xCloud + 1;
    xSun = xSun + 2;
    yMan = yMan + 1;
    yKarabl = yKarabl + 1;
    txSleep(30);
     txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xCloud = xCloud + 1;
    xSun = xSun + 2;
    yMan = yMan + 1;
    yKarabl = yKarabl + 1;
    txSleep(30);
     txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xCloud = xCloud + 1;
    xSun = xSun + 2;
    yMan = yMan + 1;
    yKarabl = yKarabl + 1;
    txSleep(30);
        txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xCloud = xCloud + 1;
    xSun = xSun + 2;
    yMan = yMan + 1;
    yKarabl = yKarabl + 1;
    txSleep(30);

            txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xCloud = xCloud + 1;
    xSun = xSun + 2;
    yMan = yMan + 1;
    yKarabl = yKarabl + 1;
    txSleep(30);
            txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xCloud = xCloud + 1;
    xSun = xSun + 2;
    yMan = yMan + 1;
    yKarabl = yKarabl + 1;
    txSleep(30);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xCloud = xCloud + 1;
    xSun = xSun + 2;
    yMan = yMan -1;
    yKarabl = yKarabl - 1;
    txSleep(30);

        txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xCloud = xCloud + 1;
    xSun = xSun + 2;
    yMan = yMan -1;
    yKarabl = yKarabl - 1;
    txSleep(30);
        txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xCloud = xCloud + 1;
    xSun = xSun + 2;
    yMan = yMan -1;
    yKarabl = yKarabl - 1;
    txSleep(30);
        txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xCloud = xCloud + 1;
    xSun = xSun + 2;
    yMan = yMan -1;
    yKarabl = yKarabl - 1;
    txSleep(30);
        txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xCloud = xCloud + 1;
    xSun = xSun + 2;
    yMan = yMan -1;
    yKarabl = yKarabl - 1;
    txSleep(30);
        txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xCloud = xCloud + 1;
    xSun = xSun + 2;
    yMan = yMan -1;
    yKarabl = yKarabl - 1;
    txSleep(30);
           txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xCloud = xCloud + 1;
    xSun = xSun + 2;
    yMan = yMan -1;
    yKarabl = yKarabl - 1;
    txSleep(30);
    }


    xBar = 0;
    yBar = 450;
    xSea = -600;
    xKarabl = 130;
    yKarabl = 80;


    while(xBar>600)
    {
    txBegin();
    drawSky(RGB (31, 196, 224));
    drawKarabl(xKarabl,yKarabl);
    bar(xBar,yBar);
    Sea(xSea);
    txEnd();
    xBar = xBar - 3;
    txSleep(15);
    }














    txTextCursor (false);
    return 0;
    }

