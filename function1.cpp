#include<iostream>
#include<stdio.h>
#include<graphics.h>
using namespace std;

void menu();
void myinfo();
void ShaheedMinar();
void NationalMartyrs();
void Emoji();
void Home();
void Star();
void Flag();
int main()

{
    printf("\t\t\t\t\t\t Kanis Akter\n\t\t\t\t\t\tCSE_2001019263\n\t\t\t\t\t\t19A\n\n\n");


    int gd=DETECT,gm;
    //initgraph(&gd,&gm,"");


    //myinfo();
    //ShaheedMinar();
    //NationalMartyrs();
    //Emoji();
    //menu();
    int choose;
    menu();
    {
        cout<<"\tEnter your choice :";
        cin>> choose;
         initwindow (1280,1024,"test");
        //cout<<"you entered :"<< choose;

        switch(choose)
        {

        case 1:
            myinfo();
            break;


        case 2:
            ShaheedMinar();
            break;


        case 3:
            NationalMartyrs();
            break;


        case 4:
            Emoji();
            break;


         case 5:
             Home();
             break;

        case 6:
            Star();
             break;


         case 7:
             Flag();
             break;


         //case 8:
            // break;


         //case 9:
             //break;

        default:
            cout<<"Invalid choice";
            break;


        }
    }




}
void myinfo()


{

 cout <<"Kanis Akter\nID: CSE2001019263\nSECTION: 19A\n";
 }
void ShaheedMinar()
{
    setcolor(WHITE);
    outtextxy(50,20,"CSE-2001019263");
    outtextxy(50,40,"KANIS AKTER");

    line(300,500,1000,500);
    line(300,500,300,510);
    line(1000,500,1000,510);

    line(290,510,1010,510);
    line(290,510,290,520);
    line(1010,510,1010,520);

    line(290,520,1010,520);

    line(280,520,1020,520);
    line(280,520,280,530);
    line(1020,520,1020,530);
    line(280,530,1020,530);


    line(647,250,647,500);
    line(653,250,653,500);

    line(647,250,687,150);
    line(653,250,693,150);

    line(687,150,647,150);
    line(693,150,733,150);

    line(647,250,647,500);

    line(607,250,607,500);
    line(607,250,647,150);

    line(601,250,601,500);
    line(601,250,649,130);


    line(693,250,693,500);
    line(693,250,733,150);

    line(699,250,699,500);
    line(699,250,749,130);


    line(649,130,749,130);



    rectangle(739,280,799,500);
    rectangle(749,300,789,500);

    rectangle(839,330,899,500);
    rectangle(849,350,889,500);


    //left


    rectangle(501,280,561,500);
    rectangle(511,300,551,500);

    rectangle(401,330,461,500);
    rectangle(411,350,451,500);

    //color

    setfillstyle(1,7);
    floodfill(301,501,WHITE);


    setfillstyle(1,7);
    floodfill(291,511,WHITE);

    setfillstyle(1,7);
    floodfill(281,521,WHITE);

    setfillstyle(1,15);
    floodfill(402,331,WHITE);

    setfillstyle(1,15);
    floodfill(502,281,WHITE);

    setfillstyle(1,15);
    floodfill(650,131,WHITE);


    setfillstyle(1,15);
    floodfill(740,281,WHITE);

    setfillstyle(1,15);
    floodfill(840,331,WHITE);



    setcolor(RED);
    circle(650,375,80);
    setfillstyle(SOLID_FILL,RED);
    floodfill(654,379,RED);




    getch();
    closegraph();



}
void NationalMartyrs()
{
    setcolor(WHITE);
    outtextxy(50,20,"CSE-2001019263");
    outtextxy(50,40,"KANIS AKTER");

    line(300,500,1000,500);
    line(300,500,300,505);
    line(1000,500,1000,505);
    line(300,505,1000,505);


    line(650,250,650,500);
    line(650,250,660,500);

    line(700,200,700,500);
    line(700,200,710,500);

    line(650,250,700,300);
    line(650,250,704,300);

    line(750,150,750,500);
    line(750,150,760,500);
    line(700,200,750,250);
    line(700,200,754,250);


    line(800,100,800,500);
    line(800,100,810,500);

    line(750,150,800,200);
    line(750,150,804,200);


    line(600,300,600,500);
    line(600,300,610,500);

    line(600,300,650,350);
    line(600,300,654,350);

    line(550,350,550,500);
    line(550,350,560,500);

    line(550,350,600,400);
    line(550,350,604,400);

    line(470,400,450,500);
    line(470,400,470,500);

    line(470,400,550,450);
    line(470,400,554,460);

    setcolor(RED);
    circle(700,370,90);
    setfillstyle(SOLID_FILL,RED);
    floodfill(654,379,RED);



    //c0l0r



    /* setfillstyle(1,2);
     floodfill(480,499,WHITE);

      setfillstyle(1,2);
     floodfill(553,461,WHITE);

      setfillstyle(1,2);
     floodfill(801,350,WHITE);

      setfillstyle(1,2);
     floodfill(653,351,WHITE);

      setfillstyle(1,2);
     floodfill(751,499,WHITE);

      setfillstyle(1,2);
     floodfill(701,499,WHITE);

      setfillstyle(1,2);
     floodfill(601,499,WHITE);
    */
    setfillstyle(1,8);
    floodfill(301,501,WHITE);

    getch();
    closegraph();

}

void Emoji()
{

    setcolor(WHITE);
    outtextxy(50,20,"CSE-2001019263");
    outtextxy(50,40,"KANIS AKTER");

    setcolor(YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    circle(300,200,90);
    floodfill(301,201,YELLOW);
    setcolor(BLACK);
    ellipse(270,180,180,0,15,15);
    ellipse(271,181,180,0,15,15);
    ellipse(272,182,180,0,15,15);

    ellipse(330,180,180,0,15,15);
    ellipse(331,181,180,0,15,15);
    ellipse(332,182,180,0,15,15);

    ellipse(300,200,180,0,60,55);
    ellipse(301,201,180,0,60,55);
    ellipse(302,202,180,0,60,55);

    getch();
    closegraph();


}

void Home(){
line(200,100,140,200);
     line(200,100,350,100);
     line(210,100,150,200);
     line(140,200,150,200);
     line(210,100,300,200);
     line(350,100,450,200);
     line(300,200,450,200);
     line(148,200,148,300);
     line(305,200,305,300);
     line(445,200,445,300);
     line(148,300,305,300);
     line(305,300,445,300);
     line(148,300,140,310);
     line(305,300,305,310);
     line(445,300,455,310);
     line(140,310,305,310);
     line(305,310,455,310);


     rectangle(200,230,250,270);
     rectangle(350,220,400,300);

     line(350,220,360,230);
     line(400,220,390,230);
     line(360,230,360,300);
     line(390,230,390,300);

     setfillstyle(1,12);
     floodfill(210,110,WHITE);
     setfillstyle(6,12);
     floodfill(201,101,WHITE);
        setfillstyle(2,3);
     floodfill(201,231,WHITE);
          setfillstyle(4,3);
     floodfill(320,201,WHITE);
          setfillstyle(1,12);
     floodfill(351,225,WHITE);
          setfillstyle(1,12);
     floodfill(399,225,WHITE);
          setfillstyle(1,8);
     floodfill(149,301,WHITE);
          setfillstyle(1,8);
     floodfill(310,301,WHITE);


     getch();
     closegraph();


}

void Star(){

 setcolor(WHITE);
     setfillstyle(SOLID_FILL,WHITE);
     line(100,100,50,300);
     line(100,100,150,300);

     line(10,180,190,180);
     line(10,180,150,300);
     line(190,180,50,300);
     floodfill(75,190,WHITE);

     floodfill(55,290,WHITE);

     floodfill(130,200,WHITE);

     floodfill(110,250,WHITE);


     floodfill(101,170,WHITE);

     floodfill(80,200,WHITE);

     getch();
     closegraph();


}
void Flag(){

 setcolor(GREEN);
    rectangle(50,50,300,200);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(51,51,GREEN);

    setcolor(WHITE);
    rectangle(40,40,50,400);
    rectangle(30,400,60,410);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(41,41,WHITE);

    setcolor(RED);
    circle(175,125,50);
    setfillstyle(SOLID_FILL,RED);
    floodfill(181,126,RED);


    setcolor(WHITE);
    rectangle(30,400,60,410);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(31,401,WHITE);


     getch();
     closegraph();


}
void menu()
{

    cout<<"\t1. myinfo \n";
    cout<<"\t2. Shaheed Minar\n";
    cout<<"\t3. National Martyrs\n";
    cout<<"\t4. Emoji\n";
    cout<<"\t5. Home\n";
    cout<<"\t6. star\n";
    cout<<"\t7. Flag\n";

}










