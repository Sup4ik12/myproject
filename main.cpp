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
        //������ ������
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
        //��������� ������
        POINT dvigat1[3] = {{x+610-610,y+0},{x+565-610,y+0},{x+610-610,y+280-460}};
        txPolygon (dvigat1,3);
        POINT dvigat2[3] = {{x+20,y+0},{x+60,y+0},{x+40,y+280-460}};
        txPolygon (dvigat2,3);
        POINT dvigat3[3] = {{x+80,y+0},{x+120,y+0},{x+80,y+280-460}};
        txPolygon (dvigat3,3);
    }
void drawWindow(int x,int y)
    {
        //�����������
        txSetColor(TX_BLACK,3);
        txSetFillColor(RGB(107, 199, 172));
        txCircle(x+650-610,y+225-460,30);
    }
void drawAstronaft(int x,int y,int color,float r,float a, int yHand,int udi)
    {
        //���������
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

        x7=x1+(x+45-500)*r*cos(a)-(y+25-400)*r*sin(a);
        y7=y1+(x+45-500)*r*sin(a)+(y+25-400)*r*cos(a);

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
        txCircle(x2,y2,20*r); //������
        txSetColor(color,8*r);
        txSetFillColor(color);
        txEllipse(x-udi,y-udi,x+50*r-udi,y+102*r-udi); //����
        txLine(x3,y3,x4,y4); //� ����
        txLine(x5,y5,x6,y6); //� ����
        txLine(x7,y7,x8,y8); //� ����

        //����
        txSetColor(TX_BLACK,3*r);
        txSetFillColor(TX_BLACK);
        txCircle(x9,y9,1*r);
        txCircle(x10,y10,1*r);
        txArc (x11, y11, x12, y12, 180, 180); //���

        txSetColor(color,8*r);
        txSetFillColor(color);
        txLine(x13,y13,x14,y14); //� ����
    }
void drawSuit(int x,int y,int color,float r,double a,int udis)
    {
    int x0=500;
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
        //����
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
void drawText(int x1,int y1,const char* text,int razm)
    {
        txSetColor(TX_WHITE);
        txSetFillColor(TX_WHITE);
        txSelectFont("Georgia",razm);
        txDrawText(x1,y1,x1+566,y1+300,text);
    }
void drawCapsula(int x,int y,float r)
    {
        txSetColor(RGB(84, 31, 31));
        txSetFillColor(RGB(84, 31, 31));
        txRectangle(x,y,x+100*r,y+50*r);
        txCircle(x+50*r,y,50*r);
    }
void drawKabum(int x,int y,float razm,HDC cabum)
    {
        Win32::TransparentBlt (txDC(), x, y, 415*razm, 295*razm, cabum,0,0, 400, 280, TX_WHITE);
    }
void drawDialog(int x,int y,float r)
    {
        txSetColor(RGB(109,85,191),5*r);
        txSetFillColor(RGB(102,94,183));
        txEllipse(x,y,x+152*r,y+101*r);
        POINT nuchotam[3] = {{x+96*r,y+97*r},{x+119*r,y+110*r},{x+122*r,y+89*r}};
        txPolygon(nuchotam,3);
    }
void drawistorka(int x,int y,float r)
    {
        txSetColor(RGB(235, 206, 134),5*r);
        txSetFillColor(RGB(235, 206, 134));
        txCircle(x,y,114*r); //385,292
        txSetColor(RGB(45,198,106),5*r);
        txSetFillColor(RGB(45,198,106));
        txEllipse(x-113*r,y+118,x+95*r,y+478*r);
        txSetColor(TX_BLACK,5);
        txSetFillColor(TX_BLACK);
        txCircle(x+36*r,y-32*r,8*r);
        txCircle(x-49*r,y-32*r,8*r);
        txArc (x-63,y+44,x+41,y+81,180,180);


    }
void drawMedal(int x,int y, float r)
    {
        txSetColor(RGB(205,216,71));
        txSetFillColor(RGB(205,216,71));
        txCircle(x,y,10*r);
         txSetColor(RGB(123,4,4));
        txSetFillColor(RGB(123,4,4));
        txRectangle(x-5*r,y-29*r,x+4*r,y-11*r);
        txRectangle(x-16*r,y-22*r,x+11*r,y-12*r);


    }
void vce(int x,int y,HDC babax)
{
    Win32::TransparentBlt (txDC(),x,y,134,219,babax,0,0,134,219,TX_WHITE);
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
    int xCapsul = 200;
    int yCapsul = 150;
    float rCapsul = 1;
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
    int ytext = 600;
    int razmtext = 70;
    float rKabum = 1;
    int xKabum = 640;
    int yKabum = 300;
    const char* pismo = "����� 2\n""������ ������� � �������";
    int xcloud = 0;
    int ycloud = 0;
    int xkapets = 333;
    int ykapets = -100;
    HDC phone = txLoadImage ("�������.bmp");
    HDC Earth = txLoadImage ("������.bmp");
    HDC Vishe = txLoadImage ("�������������.bmp");
    HDC chik = txLoadImage ("��������.bmp");
    HDC hello = txLoadImage ("��������.bmp");
    HDC change = txLoadImage ("������������.bmp");
    HDC mks = txLoadImage ("���.bmp");
    HDC goodbye = txLoadImage ("������.bmp");
    HDC pochtiprivet = txLoadImage ("������.bmp");
    HDC chutprivet = txLoadImage ("���������.bmp");
    HDC cabum = txLoadImage ("�����.bmp");
    HDC PRIVET = txLoadImage ("���������2.bmp");
    HDC kucok = txLoadImage ("�����.bmp");
    HDC intervu = txLoadImage("������������.bmp");
    HDC nytipsudo = txLoadImage("�������.bmp");
    HDC babax = txLoadImage ("�����.bmp");
    //1 �����
    //p��� �����
    while (ytext>0)
        {
            txBegin();
            drawSpace();
            drawText(xtext,ytext,pismo,razmtext);
            ytext -= 2;
            txEnd();
            txSleep(15);

        }
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

    //���� ����
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

    //���� �����
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

      //�������� �������rgb(84, 31, 31)
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

    //�������
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
    //2 �����
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
    //3 �����

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

    //4 �����
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
    //5 �����
    rChel = 1;
    xchel=635;
    ychel=375;
    cChel=RGB(74,97,251);

    txBitBlt (txDC(), 0, 0, 800, 600, hello);
    drawAstronaft(xchel,ychel,cChel,rChel,kChel,yarm,udiChel);
    txSleep(3555);

    //6 �����
    rChel = 1;
    xchel = 450;
    ychel = 400;
    while(rChel>0.00000000000000000001)
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
    rChel=0.85;
   //7 �����
    while(kChel>-300)
        {
            txBegin();
            drawSky();
            txBitBlt (txDC(), 0, 0, 800, 600, mks);
            drawAstronaft(xchel,ychel,cChel,rChel,kChel,yarm,udiChel);
            drawSuit(xchel,ychel,cChel,rChel,kChel,udiSuit);
            kChel -= 1;
            txEnd();
            txSleep(15);
        }
    while(rChel>0.000000000001)
        {
            txBegin();
            txBitBlt (txDC(), 0, 0, 800, 600, mks);
            drawAstronaft(xchel,ychel,cChel,rChel,kChel,yarm,udiChel);
            drawSuit(xchel,ychel,cChel,rChel,kChel,udiSuit);
            rChel -= 0.07;
            txEnd();
            txSleep(15);
        }
    xchel=247;
    ychel=260;
    rChel=1;
    kChel=0;
    //8 �����
    drawSpace();
xtext = 100;
ytext = 210;
razmtext = 70;
 pismo = "������ 5 ����";
    drawText(xtext,ytext,pismo,razmtext);
    txSleep(3999);

    txBitBlt (txDC(), 0, 0, 800, 600, goodbye);
    drawAstronaft(xchel,ychel,cChel,rChel,kChel,yarm,udiChel);
    drawSuit(xchel,ychel,cChel,rChel,kChel,udiSuit);
    txSleep(2999);
    //9 �����
    while(xCapsul<640)
        {
            txBegin();
            drawSpace();
            txBitBlt (txDC(), 0, 0, 800, 600, pochtiprivet);
            drawCapsula(xCapsul,yCapsul,rCapsul);
            xCapsul += 3;
            yCapsul +=1;
            rCapsul -= 0.007;
            txEnd();
            txSleep(15);
        }
xCapsul=800;
yCapsul=150;
//10 �����
    while(rCapsul<0.5)
        {
                txBegin();
                drawSpace();
                txBitBlt (txDC(), 0, 0, 800, 600, chutprivet);
                drawCapsula(xCapsul,yCapsul,rCapsul);
                xCapsul -= 4;
                yCapsul +=1;
                rCapsul += 0.0045;
                txEnd();
                txSleep(15);
        }

    rKabum=0.000001;
    xKabum=360;
    yKabum=300;
    while(rKabum<=0.4)
    {
        txBegin();
        txBitBlt (txDC(), 0, 0, 800, 600, chutprivet);
        drawCapsula(xCapsul,yCapsul,rCapsul);
        drawKabum(xKabum,yKabum,rKabum,cabum);
        rKabum += 0.01;
        xKabum -= 1.5;
        yKabum -= 1.5;
        txEnd();
        txSleep(15);
    }
    txSleep(1222);
    xchel=370;
    ychel=200;
    cChel = RGB(149,149,149);
    //11 �����
    while(ychel>110)
    {
        txBegin();
        txBitBlt (txDC(), 0, 0, 800, 600, PRIVET);
        drawAstronaft(xchel,ychel,cChel,rChel,kChel,yarm,udiChel);
        drawSuit(xchel,ychel,cChel,rChel,kChel,udiSuit);
        txTransparentBlt(txDC(),249,176,285,207,kucok,0,0,TX_WHITE);
        ychel -= 0.8;
        txEnd();
        txSleep(15);
    }
txSleep(1000);
udiChel = 0;
rChel = 1;
txBitBlt(txDC(),0,0,800,600,intervu);
drawistorka(485,292,1);
drawDialog(580,357,1.3);
drawText(400,400,"��� �������� ����, ��� �� \n"" ����� ������ �������� � ��������?",15);
txSleep(2000);
txBitBlt(txDC(),0,0,800,600,intervu);
drawistorka(485,292,1);
drawDialog(200,142,1.4);
drawText(30,185,"��� ���� ����������, ����� \n""� ������� �������� ������������� \n""��� ����� �������, ��� � ���� \n""������ � ���� �����",20);
txSleep(3459);
txBitBlt(txDC(),0,0,800,600,intervu);
drawistorka(485,292,1);
drawDialog(580,357,1.3);
drawText(400,400,"��������� �� \n""����",35);
txSleep(2888);
txBitBlt(txDC(),0,0,800,600,nytipsudo);
drawistorka(670,292,1);
drawMedal(710,500,0.9);
txSleep(2888);
while (ykapets <300)
    {
        txBegin();
        txBitBlt (txDC(), 0, 0, 800, 600, nytipsudo);
        drawistorka(670,292,1);
        drawMedal(710,500,0.9);
        vce(xkapets,ykapets,babax);
        ykapets += 5.99;
        txEnd();
        txSleep(15);
    }
yKabum=290;
xKabum=300;
rKabum=0.00000000000000000000000000000001;
while (rKabum<=3.5)
    {
        txBegin();
        txBitBlt (txDC(), 0, 0, 800, 600, nytipsudo);
        drawistorka(670,292,1);
        drawMedal(710,500,0.9);
        drawKabum(xKabum,yKabum,rKabum,cabum);
        rKabum += 0.1;
        xKabum -= 15;
        yKabum -= 15;
        txEnd();
        txSleep(15);
    }
ytext=600;
while(ytext>= 0)
{
        txBegin();
        drawSpace();
        drawText(200,ytext,"��� ��� ����� - ������ ������", 50);
        ytext-=3;
        txEnd();
        txSleep(15);
}
txDeleteDC (phone);
txDeleteDC (Earth);
txDeleteDC (Vishe);
txDeleteDC (chik);
txDeleteDC (hello);
txDeleteDC (change);
txDeleteDC (mks);
txDeleteDC (goodbye);
txDeleteDC (pochtiprivet);
txDeleteDC (chutprivet);
txDeleteDC (cabum);
txDeleteDC (PRIVET);
txDeleteDC (kucok);
txDeleteDC (nytipsudo);
txTextCursor (false);
return 0;
}
