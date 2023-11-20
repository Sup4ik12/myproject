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
        txSetColor(TX_BLACK);
        txSetFillColor(TX_BLACK);
        txRectangle(0,0,800,600);
        }

void drawRocket(int x,int y)
    {
        //корпус ракеты
        txSetColor(TX_BLACK,3);
        txSetFillColor(RGB(114, 158, 145));
        POINT raketa[5] = {{x+610-610,y},{x+610-610,y+165-460},{x+40,y+100-460},{x+80,y+165-460},{x+80,y}};
        txPolygon (raketa,5);
    }

void drawRocket2(int x,int y)
    {
        txSetColor(TX_BLACK,3);
        txSetFillColor(RGB(114, 158, 145));
        POINT raketa2[5] = {{x,y},{x+50,y-35},{x+170,y-35},{x+170,y+40},{x+50,y+40}};
        txPolygon (raketa2,5);
        txSetFillColor(RGB(107, 199, 172));
        txCircle(x+100,y,30);

    }

void ogrizok(int x,int y)
    {
        txSetColor(TX_BLACK,3);
        txSetFillColor(RGB(114, 158, 145));
        txRectangle(x+170,y-35,x+235,y+40);
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

void drawAstronaft(int x,int y,int color,float r,float a, int yHand,int udi)
    {
        //человечек
        int x1=500;      //470
        int y1=400;      //350
        int x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,y2,y3,y4,y5,y6,y7,y8,y9,y10,y11,y12,y13,y14,y15;

        a=a*3.14/180;

        x2=x1+(x+25-500)*r*cos(a)-(y-28-400)*r*sin(a);
        y2=y1+(x+25-500)*r*sin(a)+(y-28-400)*r*cos(a);

        x3=x1+(x+35-500)*r*cos(a)-(y+100-400)*r*sin(a);
        y3=y1+(x+35-500)*r*sin(a)+(y+100-400)*r*cos(a);

        x4=x1+(x+45-500)*r*cos(a)-(y+158-400)*r*sin(a);
        y4=y1+(x+45-500)*r*sin(a)+(y+158-400)*r*cos(a);

        x5=x1+(x+15-500)*r*cos(a)-(y+94-400)*r*sin(a);
        y5=y1+(x+15-500)*r*sin(a)+(y+94-400)*r*cos(a);

        x6=x1+(x-5-500)*r*cos(a)-(y+164-400)*r*sin(a);
        y6=y1+(x-5-500)*r*sin(a)+(y+164-400)*r*cos(a);

        x7=x1+(x+45-500)*r*cos(a)-(x+25-400)*r*sin(a);
        y7=y1+(x+45-500)*r*sin(a)+(x+25-400)*r*cos(a);

        x8=x1+(x+66-500)*r*cos(a)-(y+74-400)*r*sin(a);
        y8=y1+(x+66-500)*r*sin(a)+(y+74-400)*r*cos(a);

        x9=x1+(x+20-500)*r*cos(a)-(y-31-400)*r*sin(a);
        y9=y1+(x+20-500)*r*sin(a)+(y-31-400)*r*cos(a);

        x10=x1+(x+31-500)*r*cos(a)-(y-31-400)*r*sin(a);
        y10=y1+(x+31-500)*r*sin(a)+(y-31-400)*r*cos(a);

        x11=x1+(x+17-500)*r*cos(a)-(y-31-400)*r*sin(a);
        y11=y1+(x+17-500)*r*sin(a)+(y-31-400)*r*cos(a);

        x12=x1+(x+35-500)*r*cos(a)-(y-19-400)*r*sin(a);
        y12=y1+(x+35-500)*r*sin(a)+(y-19-400)*r*cos(a);

        x13=x1+(x+10-500)*r*cos(a)-(y+10-400)*sin(a);
        y13=y1+(x+10-500)*r*sin(a)+(y+10-400)*cos(a);

        x14=x1+(x-18-500)*r*cos(a)-(y+80-yHand-400)*r*sin(a);
        y14=y1+(x-18-500)*r*sin(a)+(y+80-yHand-400)*r*cos(a);



        txSetColor(color,13*r);
        txSetFillColor(RGB(235, 206, 134));
        txCircle(x2,y2,20*r); //голова
        txSetColor(color,8*r);
        txSetFillColor(color);
        txEllipse(x-udi,y-udi,x+50*r-udi,y+102*r-udi); //тело
        txLine(x3,y3,x4,y4); //п нога
        txLine(x5,y5,x6,y6); //л нога
        txLine(x7,y7,x8,y8); //п рука


        //лицо
        txSetColor(TX_BLACK,3*r);
        txSetFillColor(TX_BLACK);
        txCircle(x9,y9,1*r);
        txCircle(x10,y10,1*r);
        txArc (x11, y11, x12, y12, 180, 180); //рот

        txSetColor(color,8*r);
        txSetFillColor(color);
        txLine(x13,y13,x14,y14); //л рука

    }

void drawSuit(int x,int y,int color,float r,double a,int udis)
    {   int x0=500;
        int y0=400;

        int x1,x2,x3,x4,y1,y2,y3,y4;
        a=a*3.14/180;

         x1=x0+(x-500)*r*cos(a)-(y-400)*r*sin(a);
        y1=y0+(x-500)*r*sin(a)+(y-400)*r*cos(a);

        x2=x0+(x+50-500)*r*cos(a)-(y+102-400)*r*sin(a);
        y2=y0+(x+50-500)*r*sin(a)+(y+102-400)*r*cos(a);

        x3=x0+(x+50-500)*r*cos(a)-(y-400)*r*sin(a);
        y3=y0+(x+50-500)*r*sin(a)+(y-400)*r*cos(a);

        x4=x0+(x-500)*r*cos(a)-(y+102-400)*r*sin(a);
        y4=y0+(x-500)*r*sin(a)+(y+102-400)*r*cos(a);

        txSetColor(color,13*r);
        txSetFillColor(color);
        POINT suit[4]={{x1-udis,y1-udis},{x3-udis,y3-udis},{x2-udis,y2-udis},{x4-udis,y4-udis}};
        txPolygon(suit,4);
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

void drawBox(int b)
    {
        txSetColor(RGB(125,125,125));
        txSetFillColor(RGB(125,125,125));
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

void drawfire3(int x,int y)
    {
        txSetColor(RGB(222, 108, 27));
        txSetFillColor(RGB(222, 108, 27));
        POINT fire3[10] = {{x,y},{x+50,y-20},{x+100,y-5},{x+50,y+5},{x+100,y+20},{x+45,y+30},{x+90,y+40},{x+50,y+50},{x+80,y+90},{x,y+55}};
        txPolygon (fire3,10);
    }
void drawText(int x,int y,const char* text,int razm)
    {
     txSetColor(TX_WHITE);
     txSetFillColor(TX_WHITE);
     txSelectFont("Georgia",razm);
     txDrawText(x,y,x+566,y+145,text);
    }



int main()
{
txCreateWindow(800,600);
    int yarm = 0;
    int ychel = 400;
    int xchel = 470;
    int cChel = TX_WHITE;
    float rChel = 1;
    int kChel=0;
    int udiChel = 0;
    int udiSuit = 0;
    int xBox = 475;
    int yFire = 380;
    int xFire = 585;
    int drozh = 610;
    int vzlet = 460;
    int xdvigatel = 610;
    int toplivo = vzlet+5;
    int xr = 1000;
    int yr = 280;
    int xoguz = 1000;
    int yoguz = 280;
    int xfire3 = 1236;
    int yfire3 = 254;
    int xtext = 100;
    int ytext = 210;
    int razmtext = 70;
    const char* pismo = "ПРОШЛО 5 ДНЕЙ";
    HDC phone = txLoadImage ("самолет.bmp");
    HDC Earth = txLoadImage ("космос.bmp");
    HDC Vishe = txLoadImage ("землячутьвыше.bmp");
    HDC chik = txLoadImage ("стыковка.bmp");
    HDC hello = txLoadImage ("прилетел.bmp");
    HDC change = txLoadImage ("переодевалка.bmp");
    HDC mks = txLoadImage ("мкс.bmp");
    HDC goodbye = txLoadImage ("улетел.bmp");


    //1 сцена
    //pука вверх
    while(yarm<100)
    {
        txBegin();
        drawSky();
        txBitBlt (txDC(), 0, 0, 800, 600, phone);
        drawRocket(drozh,vzlet);
        drawWindow(drozh,vzlet);
        drawDvigatel(drozh,toplivo);
        drawAstronaft(xchel,ychel,cChel,rChel,kChel,yarm,udiChel);
        drawElevator(ychel);
        yarm = yarm + 3;

        txEnd();
        txSleep(15);
    }

   /* //рука вниз
    while(yarm>0)
    {
        txBegin();
        drawSky();
        txBitBlt (txDC(), 0, 0, 800, 600, phone);
        drawRocket(drozh,vzlet);
        drawDvigatel(drozh,toplivo);
        drawWindow(drozh,vzlet);
        drawAstronaft(xchel,ychel,cChel,rChel,kChel,yarm,udiChel);
        drawElevator(ychel);
        yarm = yarm - 3;

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
        drawAstronaft(xchel,ychel,cChel,rChel,kChel,yarm,udiChel);
        drawElevator(ychel);
        ychel = ychel -2;
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
        drawBox(xBox);
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
    //3 сцена

    while(xoguz>400)
    {
        txBegin();
        drawSpace();
        txBitBlt (txDC(), 0, 0, 800, 600, Vishe);
        ogrizok(xoguz,yoguz);
        drawRocket2(xr,yr);
        drawfire3(xfire3,yfire3);
        xr -= 5;
        xoguz -= 5;
        xfire3 -= 5;
        txEnd;
        txSleep(15);
    }
    xfire3=xfire3-65;
    while(xr>-280)
    {
        txBegin();
        drawSpace();
        txBitBlt (txDC(), 0, 0, 800, 600, Vishe);
        ogrizok(xoguz,yoguz);
        drawRocket2(xr,yr);
        drawfire3(xfire3,yfire3);
        xr -= 8;
        yoguz += 1,5;
        xoguz += 3;
        xfire3 -=8;
        txEnd;
        txSleep(15);
    }

    //4 сцена
    xr=1000;
    while (xr>150)
    {
        txBegin();
        drawSpace();
        txBitBlt (txDC(), 0, 0, 800, 600, chik);
        drawRocket2(xr,yr);
        xr -= 7,5;
        txEnd;
        txSleep(15);
    }
    //5 сцена
    rChel = 1.75;
    xchel=635-30;
    ychel=375+150;
    cChel=RGB(74,97,251);

    txBitBlt (txDC(), 0, 0, 800, 600, hello);
    drawAstronaft(xchel,ychel,cChel,rChel,kChel,yarm,udiChel);
    txSleep(3555);
*/
    //6 сцена
    rChel = 1.3;
    xchel = 400-30;
    ychel = 250+150;
    while(rChel>0.00001)
    {
        txBegin();
        txBitBlt (txDC(), 0, 0, 800, 600, change);
        drawAstronaft(xchel,ychel,cChel,rChel,kChel,yarm,udiChel);
        rChel -= 0.07;
        txEnd();
        txSleep(15);
    }
    txSleep(1500);
    cChel = TX_WHITE;
    udiChel = 10000;
    udiSuit = 0;
    while(rChel<1.35)
    {
        txBegin();
        drawSky();
        txBitBlt (txDC(), 0, 0, 800, 600, change);
        drawAstronaft(xchel,ychel,cChel,rChel,kChel,yarm,udiChel);
        drawSuit(xchel,ychel,cChel,rChel,kChel,udiSuit);
        rChel += 0.07;
        txSleep(15);
        txEnd();
    }
    rChel=0.65;

    while(kChel<400)
        {
            txBegin();
            drawSky();
            txBitBlt (txDC(), 0, 0, 800, 600, mks);
            drawAstronaft(xchel,ychel,cChel,rChel,kChel,yarm,udiChel);
            drawSuit(xchel,ychel,cChel,rChel,kChel,udiSuit);         //сделать чтоб крутился
            kChel += 1;
            txEnd();
            txSleep(15);
        }
    while(rChel>0.00001)
        {
            txBegin();
            txBitBlt (txDC(), 0, 0, 800, 600, mks);
            drawAstronaft(xchel,ychel,cChel,rChel,kChel,yarm,udiChel);
            drawSuit(xchel,ychel,cChel,rChel,kChel,udiSuit);
            rChel -= 0.07;
            txEnd();
            txSleep(15);
        }
    xchel=268;
    ychel=310;
    rChel=1;
    kChel=0;

    drawSpace();
    drawText(xtext,ytext,pismo,razmtext);
    txSleep(2999);

    txBitBlt (txDC(), 0, 0, 800, 600, goodbye);
    drawAstronaft(xchel,ychel,cChel,rChel,kChel,yarm,udiChel);
    drawSuit(xchel,ychel,cChel,rChel,kChel,udiSuit);
    txSleep(2999);





txDeleteDC (phone);
txDeleteDC (Earth);
txDeleteDC (Vishe);
txDeleteDC (chik);
txDeleteDC (hello);
txDeleteDC (change);
txDeleteDC (mks);
txDeleteDC (goodbye);
txTextCursor (false);
return 0;
}
