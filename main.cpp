#include "TXLib.h"

void drawSky()
    {
        txSetColor(RGB(81,183,232));
        txSetFillColor(RGB(81,183,232));
        txRectangle(0,0,800,600);
        txSetColor(RGB(238,217,117));
        txSetFillColor(RGB(238,217,117));
        txRectangle(0,420,800,600);
    }

void drawSpace()
        {
        txSetColor(RGB(19,3,112));
        txSetFillColor(RGB(19,3,112));
        txRectangle(0,0,800,600);
        }

void drawRocket(int x,int y)
    {
        //корпус ракеты
        txSetColor(TX_BLACK,3);
        txSetFillColor(RGB(114, 158, 145));
        POINT raketa[5] = {{x+610-610,y},{x+610-610,y+165-460},{x+40,y+100-460},{x+80,y+165-460},{x+80,y+460-460}};
        txPolygon (raketa,5);
    }

void drawRocket2()
    {
        txSetColor(TX_BLACK,3);
        txSetFillColor(RGB(114, 158, 145));
        POINT raketa2[5] = {{х,y},{x+50,y-35},{x+170,y-35},{x+170,y+40},{x+50,y+40}};
        txPolygon (raketa2,5);
        txSetFillColor(RGB(107, 199, 172));
        txCircle(x+100,y,30);
        txSetFillColor(RGB(114, 158, 145));

    }

void draw ogrizok()
    {
        txSetColor(TX_BLACK,3);
        txSetFillColor(RGB(114, 158, 145));
        txRectangle(x+170,y-35,x+170,y+40);
    }

void drawDvigatel(int x,int y)
    {
        //двигатели ракеты
        POINT dvigat1[3] = {{x+610-610,y+0},{x+565-610,y+0},{x+610-610,y+280-460}};
        txPolygon (dvigat1,3);
        POINT dvigat2[3] = {{x+20,y+0},{x+60,y+0},{x+40,y+280-460}};
        txPolygon (dvigat2,3);
        POINT dvigat3[3] = {{x+80,y+0},{x+120,y+0},{x+80,y+280-460}};
        txPolygon (dvigat3,3);
    }

void drawWindow(int x,int y)
    {
        //иллюминатор
        txSetColor(TX_BLACK,3);
        txSetFillColor(RGB(107, 199, 172));
        txCircle(x+650-610,y+225-460,30);
    }

void drawAstronaft(int aa)
    {
        //человечек
        txSetColor(TX_WHITE,13);
        txSetFillColor(RGB(235, 206, 134));
        txCircle(495,aa-28,20); //голова
        txSetColor(TX_WHITE,8);
        txSetFillColor(TX_WHITE);
        txEllipse(470,aa,520,aa+102); //тело
        txLine(505,aa+100,517,aa+158); //п нога
        txLine(487,aa+94,466,aa+164); //л нога
        txLine(515,aa+25,536,aa+74); //п рука

        //лицо
        txSetColor(TX_BLACK,3);
        txSetFillColor(TX_BLACK);
        txCircle(490,aa-31,1);
        txCircle(501,aa+-31,1);
        txArc (488, aa-31, 504, aa-19, 180, 180); //рот
    }

void mahat(int a,int aa)
    {
        txSetColor(TX_WHITE,8);
        txSetFillColor(TX_WHITE);
        txLine(470,aa+360-350,452,a); //л рука
    }

void drawElevator(int aa)
    {
        //лифт
        txSetColor(TX_BLACK,3);
        txSetFillColor(RGB(52, 105, 24));
        txLine(448,aa+515-350,553,aa+515-350);
        POINT liftik[6] = {{544,591},{547,286},{620,243},{639,260},{570,301},{571,591}};
        txPolygon (liftik,6);
    }

void drawBox(int color,int b)
    {
        txSetColor(color);
        txSetFillColor(color);
        txRectangle(b,190,b+545-475,260);
    }

void drawfire(int d,int r)
    {
        txSetColor(RGB(222, 108, 27));
        txSetFillColor(RGB(222, 108, 27));
        POINT fire[11] = {{r,d},{r+570-585,d+515-465},{r+590-585,d+540-465},{r+610-585,d+515-465},{r+630-585,d+555-465},{r+650-585,d+530-465},{r+670-585,d+550-465},{r+700-585,d+530-465},{r+725-585,d+540-465},{r+740-585,d+505-465},{r+715-585,d+465-465}};
        txPolygon (fire,11);
    }
void drawfire2(int y,int x)
    {
        txSetColor(RGB(222, 108, 27));
        txSetFillColor(RGB(222, 108, 27));
        POINT fire2[9] = {{x,y},{x+610-620,y+530-465},{x+5,y+515-465},{x+20,y+100},{x+30,y+530-465},{x+666-620,y+560-465},{x+60,y+530-465},{x+80,y+555-465},{x+70,y}};
        txPolygon (fire2,9);
    }



int main()
{

txCreateWindow(800,600);

    int yarm = 426;
    int yarm1 = 375;
    int ychel = 350;
    int Box = RGB(125,125,125);
    int xBox = 475;
    int yFire = 380;
    int xFire = 585;
    int drozh = 610;
    int vzlet = 460;
    int xdvigatel = 610;
    int toplivo = vzlet+5;
    float rChel = 1;
    int xr = 415;
    int yr = 280;
    HDC phone = txLoadImage ("самолет.bmp");
    HDC Earth = txLoadImage ("космос.bmp");
    HDC Vishe = txLoadImage ("земл€чутьвыше.bmp");


    //1 сцена

    //pука вверх
    while(yarm>330)
    {
        drawSky();
        txBitBlt (txDC(), 0, 0, 800, 600, phone);
        drawRocket(drozh,vzlet);
        drawWindow(drozh,vzlet);
        drawDvigatel(drozh,toplivo);
        drawAstronaft(ychel);
        drawElevator(ychel);
        mahat(yarm,yarm1);
        yarm = yarm - 5;
        txSleep(15);
    }
    //рука вниз
    while(yarm<426)
    {
        txBegin();
        drawSky();\
        txBitBlt (txDC(), 0, 0, 800, 600, phone);
        drawRocket(drozh,vzlet);
        drawDvigatel(drozh,toplivo);
        drawWindow(drozh,vzlet);
        drawAstronaft(ychel);
        drawElevator(ychel);
        mahat(yarm,yarm1);
        yarm = yarm + 5;
        txEnd();
        txSleep(15);
    }

    txSleep(150);
           //лифт вверх
    while(ychel>120)
    {
        txBegin();
        drawSky();
        txBitBlt (txDC(), 0, 0, 800, 600, phone);
        drawRocket(drozh,vzlet);
        drawDvigatel(drozh,toplivo);
        drawWindow(drozh,vzlet);
        drawAstronaft(ychel);
        mahat(yarm,yarm1);
        drawElevator(ychel);
        ychel = ychel -2;
        yarm = yarm -2;
        yarm1 = yarm1 -2;
        rChel -= 0.01;
        txEnd();
        txSleep(15);
    }
      txSleep(150);

      //упаковка чебурка
      while(xBox<600)
          {
            txBegin();
            drawSky();
            txBitBlt (txDC(), 0, 0, 800, 600, phone);
            drawRocket(drozh,vzlet);
            drawDvigatel(drozh,toplivo);
            drawWindow(drozh,vzlet);
            drawElevator(ychel);
            drawBox(Box,xBox);
            xBox = xBox + 2;
            txEnd();
            txSleep(15);
          }
          txSleep(250);

       //полетел
       while(yFire<455)
           {
                txBegin();
                drawSky();
                txBitBlt (txDC(), 0, 0, 800, 600, phone);
                drawfire(yFire,xFire);
                drawRocket(drozh,vzlet);
                drawDvigatel(drozh,toplivo);
                drawWindow(drozh,vzlet);
                yFire = yFire + 2;
                txEnd();
                txSleep(15);
           }
        while(vzlet>-250)
            {
                txBegin();
                drawSky();
                txBitBlt (txDC(), 0, 0, 800, 600, phone);
                drawfire(yFire,xFire);
                drawRocket(drozh,vzlet);
                drawDvigatel(drozh,toplivo);
                drawWindow(drozh,vzlet);
                yFire = yFire -5;
                vzlet = vzlet -5;
                toplivo = toplivo -5;
                txEnd();
                txSleep(15);
            }
    //2 сцена
    drozh = 400;
    vzlet = 1000;
    toplivo = 1010;
    xFire = 375;
    yFire = 1000;
    xdvigatel = 400;
     while(toplivo>500)
        {
            txBegin();
            drawSpace();
            txBitBlt (txDC(), 0, 0, 800, 600, Earth);
            drawfire(yFire,xFire);
            drawRocket(drozh,vzlet);
            drawDvigatel(xdvigatel,toplivo);
            drawWindow(drozh,vzlet);
            vzlet = vzlet -7;
            toplivo = toplivo -7;
            yFire = yFire - 7;
            toplivo = vzlet;
            txEnd();
            txSleep(15);
        }
        xFire = xFire + 30;
    while(vzlet>-200)
        {
            txBegin();
            drawSpace();
            txBitBlt (txDC(), 0, 0, 800, 600, Earth);
            drawfire2(yFire,xFire);
            drawRocket(drozh,vzlet);
            drawDvigatel(xdvigatel,toplivo);
            drawWindow(drozh,vzlet);
            vzlet = vzlet -9,5;
            yFire = yFire - 9,5;
            toplivo = toplivo + 5;
            xdvigatel = xdvigatel -2;
            txEnd();
            txSleep(15);

        }

    //2 сцена

    while(xr>-170)
    {
    drawSpace();
    txBitBlt (txDC(), 0, 0, 800, 600, Vishe);
    drawRocket2(xr,yr);
    ogrizok(xr,yr);
    }

txDeleteDC (phone);
txDeleteDC (Earth);
txDeleteDC (Vishe);
txTextCursor (false);
return 0;
}
