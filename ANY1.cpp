#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<math.h>
#include<fstream.h>
#include<process.h>
#include<stdio.h>
#include<string.h>
#include<iomanip.h>
char square[13] = {'0','1','2','3','4','5','6','7','8','9','10','11','12'};
char pass[]="2000";
int duck=0;
void password()
{
  clrscr();
  char c[4];
  int i;
  int flag=1;
  cout<<"Enter the passward"<<endl;
  for(i=0;i<4;i++)
  {
     c[i]=getch();
     cout<<"*";
  }
  cout<<endl;
  for(i=0;i<4;i++)
    if(c[i]!=pass[i])
    {
       flag=0;
       break;
    }
  if(flag==1)
  duck=1;
  else
  duck=0;
}
struct contact
{
  long r;
  char name[10];
};
class main_menu
{
      public:
void board()
{
	clrscr();
	setbkcolor(0);
	cout << "\n\n\tKEYPAD\n\n";
	cout << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << " " << "  |  " << square[0] << "  |  " << " "<< endl;
	cout << "     |     |     " << endl << endl;
}
void addcontact()
{
    fstream f1;
    char name[20];
    int contact;
    f1.open("Contact.txt",ios::out|ios::app);
    cout<<"Enter the name "<<endl;
    gets(name);
    f1<<"Name : "<<name<<'\t';
    cout<<"Enter the contact"<<endl;
    cin>>contact;
    f1<<"Phone no. :"<<contact<<'\n';
}
void displayallcontact()
{
    fstream f2;
    char ak[20];
    f2.open("Contact.txt",ios::in);
    while(!f2.eof())
    {
	 f2.getline(ak,20);
	 cout<<ak<<endl;
    }
}
      void calculator()
      {
	cleardevice();
	int oper,opt;
	float res,rt,n,m;
	cout<<"CALCULATOR"<<endl;
	cout<<"Enter the first number"<<endl;
	cin>>n;
	cout<<"Select the operator that you wish to use..."<<endl;
	cout<<"1.ADD\n2.SUBTRACT\n3.MULTIPLY\n4.DIVIDE\n5.SQUARE ROOT\n6.CUBE ROOT\n7.SQUARE\n8.CUBE"<<endl;
	cin>>oper;
	switch(oper)
	{
	case 1:cout<<"Enter the second number"<<endl;
       	cin>>m;
       	res=n+m;
       	cout<<"The sum is "<<res<<endl;
       	break;
	case 2:cout<<"Enter the second number"<<endl;
       	cin>>m;
       	res=n-m;
       	cout<<"The difference is "<<res<<endl;
       	break;
	case 3:cout<<"Enter the second number"<<endl;
       	cin>>m;
       	res=n*m;
       	cout<<"The product is "<<res<<endl;
       	break;
	case 4:cout<<"Enter the second number"<<endl;
       	cin>>m;
       	res=n/m;
       	cout<<"The quotient is "<<res<<endl;
       	break;
	case 5:res=sqrt(n);
       	cout<<"The square root is "<<res<<endl;
       	break;
	case 6:rt=pow(n,0.335);
       	cout<<"The cube root is "<<rt<<endl;
       	break;
	case 7:res=pow(n,2);
       	cout<<"The square is "<<res<<endl;
       	break;
	case 8:res=pow(n,3);
       	cout<<"The cube is "<<res<<endl;
       	break;
	case 9:cout<<"Please enter a valid option"<<endl;
       	break;
	}
	getch();
      }
};
class initialize: public main_menu
{
         public:
            void start()
	{
	clrscr();
	int gd=DETECT,gm;
	 initgraph(&gd,&gm,"c:\\turboc3\\bgi");

	 int i,j,z=176;
	 int x,y;
	 randomize();
	 for(i=0;i<600;i++)
	 {
	    x=random(640);
	    y=random(360);
	    putpixel(x,y,i);
	 }
	 setcolor(WHITE);
	 for(i=0;i<40;i++)
	 {
	   setcolor(WHITE);
	   circle(540,90,i);
	 }
	    line(0,360,640,360);
	    line(320,330,332,360);
	    line(320,330,308,360);
	    line(320,299,320,330);
	    line(320,312,300,316);
	    line(320,312,340,316);
	    circle(320,290,9);
	    settextstyle(0,0,5);
	    outtextxy(228,z+10,"MAN");
	    setcolor(GREEN);
	    settextstyle(0,0,5);
	    outtextxy(348,z+10,"GO");
	  setcolor(BLUE);
	    settextstyle(8,0,3);
	    outtextxy(30,390,"A MOBILE SOFTWARE");
	    setcolor(YELLOW);
	    settextstyle(1,0,4);
	    outtextxy(350,400,"--> BY Sanjeev");

	    getch();
	}
void decorate()
{
int gd=DETECT,gm;
	 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	 int x,y,i;
	 randomize();
	 for(i=0;i<700;i++)
	 {
	    x=random(640);
	    y=random(480);
	    putpixel(x,y,i);
	 }
}
void outline()
{
		  cleardevice();
		  setbkcolor(0);
		  decorate();
		  int maxx=getmaxx();
		  int maxy=getmaxy();
		  setfillstyle(HATCH_FILL, 5);
		  bar(80,100,maxx-100,maxy-120);

		  setfillstyle(HATCH_FILL, 0);
		  bar(82,102,maxx-102,maxy-122);

		  setcolor(12);
		  settextstyle(5,0,4);
		  outtextxy(110,100,"What would you like to do?");
}
}obj1;
//------------------------------------------------main programme----------------------------------------------
void main()
{
we:
password();
if(duck==1)
{
contact z[100];
int p,v,a,b,c,d,e,g;
char y,w,mess[40],name[20];
obj1.start();
int gd=DETECT,gm;
	 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	 cleardevice();
	char choice_m;
	getch();
	cout<<endl;
		do
		 {
		 cleardevice();
		 setbkcolor(0);
		  obj1.decorate();
		  int maxx=getmaxx();
		  int maxy=getmaxy();

		  setcolor(12);
		  settextstyle(3,0,5);
		  outtextxy(170,20,"MANGO SOFTWARE");

		  setfillstyle(SLASH_FILL, 5);
		  bar(80,100,maxx-60,maxy-80);

		  setfillstyle(SLASH_FILL, 0);
		  bar(84,104,maxx-64,maxy-84);

		  setcolor(12);
		  settextstyle(6,0,4);
		  outtextxy(110,100,"What would you like to do?");

		  setcolor(4);
		  settextstyle(8,0,3);
		  outtextxy(110,150,"PRESS 'a' TO ACCESS MESSAGES");
		  outtextxy(110,180,"PRESS 'b' TO ACCESS APPS");
		  outtextxy(110,210,"PRESS 'c' TO ACCESS CALCULATOR");
		  outtextxy(110,240,"PRESS 'd' TO ACCESS PHONE");
		  outtextxy(110,270,"PRESS 'f' TO ACCESS SETTINGS");
		  settextstyle(6,0,4);
		  outtextxy(110,340,"     PRESS 'e' TO EXIT");


		  setcolor(13);
		  settextstyle(1,0,3);
		  outtextxy(160,405,"Please Enter Your Option?");
w=getch();
switch(w)
{
//-----------------------------------Message-------------------
case 'a':
c:
		 obj1.outline();

		  setcolor(12);
		  settextstyle(3,0,5);
		  outtextxy(100,20,"WELCOME TO YOUR MESSAGES");

		  setcolor(4);
		  settextstyle(6,0,3);
		  outtextxy(150,150,"ENTER 'a' TO INBOX ");
		  outtextxy(150,180,"ENTER 'b' TO OUTBOX");
		  outtextxy(150,210,"ENTER 'c' TO NEW MESSAGES");
		  outtextxy(150,240,"PRESS 'e' TO EXIT");
		  setcolor(13);
		  settextstyle(1,0,3);
		  outtextxy(160,375,"Please Enter Your Option?");
y=getch();
switch(y)
{
case 'a':
		  obj1.outline();

		  setcolor(12);
		  settextstyle(3,0,5);
		  outtextxy(100,20,"WELCOME TO YOUR INBOX");
		  setcolor(4);
		  settextstyle(6,0,3);
		  outtextxy(110,150,"ENTER '1' Mom:I am not at ho.... ");
		  outtextxy(110,180,"ENTER '2' Daddy:Call me when t....");
		  outtextxy(110,210,"ENTER '3' Sanjeev:Dude can you co...");
		  outtextxy(110,240,"PRESS '4' Du:Fantastic deal...");
		  outtextxy(110,270,"PRESS '5' EXIT");
		  setcolor(13);
		  settextstyle(1,0,3);
		  outtextxy(160,375,"Please Enter Your Option?");
	  p=getch();
	  switch(p)
	  {
	      case '1':
		  obj1.outline();
		  setcolor(4);
		  settextstyle(6,0,3);
		  outtextxy(110,150,"Mom:I am not at home so please");
		  outtextxy(110,180,"get the keys from the neighbour.");
		  outtextxy(110,210,"Enter your reply?");
		  gets(mess);
		  outtextxy(110,240,"Your message will be sent");
		  getch();
		  break;
	      case '2':
		  obj1.outline();
		  setcolor(4);
		  settextstyle(6,0,3);
		  outtextxy(110,150,"Daddy:Call me when the tution gets");
		  outtextxy(110,180,"over!!!");
		  outtextxy(110,210,"Enter your reply?");
		  gets(mess);
		  outtextxy(110,240,"Your message will be sent");
		  getch();
		  break;
	      case '3':
		   obj1.outline();
		  setcolor(4);
		  settextstyle(6,0,3);
		  outtextxy(110,150,"Sanjeev:Dude can you come to play");
		  outtextxy(110,180,"basketball??_/\_");
		  outtextxy(110,210,"Enter your reply?");
		  gets(mess);
		  outtextxy(110,240,"Your message will be sent");
		  getch();
		  break;
	      case '4':
		   obj1.outline();
		  setcolor(4);
		  settextstyle(6,0,3);
		  outtextxy(110,150,"Du:Fantastic deal on international calls. Call");
		  outtextxy(110,180,"india and Pakistan at a rate of 50");
		  outtextxy(110,210,"fils/minuteSend.Send INTCALLS to subscribe");
		  outtextxy(110,240,"Enter your reply?");
		  gets(mess);
		  outtextxy(110,270,"Your message will be sent");
		  getch();
		  break;
	      case '5':
		  break;

	    }
goto c;
case 'b':
		  obj1.outline();
		  setcolor(12);
		  settextstyle(3,0,4);
		  outtextxy(100,20,"WELCOME TO YOUR OUTBOX");
		  setcolor(4);
		  settextstyle(6,0,3);
		  outtextxy(110,150,"Sahil:What are you doing for");
		  outtextxy(110,180,"      the winter holidays?? =)");
		  outtextxy(110,210,"Teju :Sanjeev wants to play");
		  outtextxy(110,240," basketball!!Coming?? P:");
		  outtextxy(110,270,"Daddy:Please credit my phone number.");
		  getch();
goto c;
case 'c': clrscr();
	  setcolor(12);
		  settextstyle(3,0,5);
		  outtextxy(190,20,"COMPOSE MESSAGE");
	  cout<<"Enter recipent(s)"<<endl;
	  gets(name);
	  cout<<"Enter your text"<<endl;
	  gets(mess);
	  cout<<"Your message will be sent"<<endl;
	  getch();
	  goto c;
case 'e':
break;
}
break;
//-----------------------------------arithmetic challenge---------------------
case 'b':
cleardevice();
int oper;
cout<<"ARITHMETIC CHALLENGE"<<endl;
cout<<"Select the operator that you wish to use..."<<endl;
   cout<<"1.PLAY\n2.HELP\n3.EXIT"<<endl;
   cin>>oper;
   switch(oper)
   {
     case 1:int flag=0;
	    float n;
	    cout<<"1. 5 x 9 ="<<endl;
	    cin>>n;
	    if(n==45)
	    flag++;
	    else
	    {
	     cout<<"YOUR FINAL SCORE IS "<<flag;
	     getch();
	     break;
	    }
	    cout<<"2. Square root of 289 ="<<endl;
	    cin>>n;
	    if(n==17)
	    flag++;
	    else
	    {
	     cout<<"YOUR FINAL SCORE IS "<<flag;
	     getch();
	     break;
	    }
	    cout<<"3. Cube of 7 ="<<endl;
	    cin>>n;
	    if(n==343)
	    flag++;
	    else
	    {
	      cout<<"YOUR FINAL SCORE IS "<<flag;
	      getch();
	      break;
	    }
	    cout<<"4. Cube root of  2197 ="<<endl;
	    cin>>n;
	    if(n==13)
	    flag++;
	    else
	    {
	     cout<<"YOUR FINAL SCORE IS "<<flag;
	     getch();
	     break;
	    }
	    cout<<"5. (5+6) x (7+8) ="<<endl;
	    cin>>n;
	    if(n==165)
	    flag++;
	    else
	    {
	     cout<<"YOUR FINAL SCORE IS "<<flag;
	     getch();
	     break;
	    }
	    cout<<"6. sin(1110) ="<<endl;
	    cin>>n;
	    if(n==0.5)
	    flag++;
	    else
	    {
	     cout<<"YOUR FINAL SCORE IS "<<flag;
	     getch();
	     break;
	    }
	    cout<<"7. cosec 30 ="<<endl;
	    cin>>n;
	    if(n==2)
	    flag++;
	    else
	    {
	     cout<<"YOUR FINAL SCORE IS "<<flag;
	     getch();
	     break;
	    }
	    cout<<"8. tan 45 ="<<endl;
	    cin>>n;
	    if(n==1)
	    flag++;
	    else
	    {
	     cout<<"YOUR FINAL SCORE IS "<<flag;
	     getch();
	     break;
	    }
	    cout<<"9. cos 60 + sin 30 + tan 45 ="<<endl;
	    cin>>n;
	    if(n==2)
	    flag++;
	    else
	    {
	     cout<<"YOUR FINAL SCORE IS "<<flag;
	     getch();
	     break;
	    }
	    cout<<"10. (9 x 8 x 7) + (2 x 3 x 4) ="<<endl;
	    cin>>n;
	    if(n==528)
	    {
	     cout<<"Congratulaions ! You Have Completed the game ! You will get into IIT xD"<<endl;
	     getch();
	     break;
	    }
	    else
	    {
	      cout<<"YOUR FINAL SCORE IS "<<flag;
	      getch();
	      break;
	    }
     case 2:clrscr();
	    cout<<"Help for arithmetic challenge"<<endl;
	    cout<<"-It is a single player game."<<endl;
	    cout<<"-The computer will ask you a question."<<endl;
	    cout<<"-If u get it right u get 10 point else u lose."<<endl;
	    cout<<"-There is total of 100 points."<<endl;
	    cout<<"-If u get all 100 points you win."<<endl;
	    cout<<"-Get your math skills to work. ;)"<<endl;
	    cout<<"Good luck!"<<endl;
	    break;
     case 3:break;
   }
break;
//-----------------------------------calculator---------------------
case 'c':
b:
clrscr();
obj1.calculator();
cout<<"Enter y to calculate again and n to exit"<<endl;
y=getch();
if(y=='y')
goto b;
else
break;
//-----------------------------------phone---------------------------
case 'd':
	 v:
 cleardevice();
 int s;
 cout<<"1.KEYPAD\n2.CONTACTS\n3.EXIT"<<endl;
 cin>>s;
 switch(s)
{
 case 1:long a;
	int choice;
	obj1.board();
	cout<<"Please enter if u want to call landline (1),mobile (2)or exit(3)"<<endl;
	cin>>choice;
	if(choice==1)
	{
	 cin>>a;
	 cout<<"02"<<a<<endl;
	 if(a>999999 && a<10000000)
	 cout<<"DIALING...."<<endl;
	 else
	 cout<<"THIS NUMBER YOU ARE TRYING TO REACH IS NOT POSSIBLE.PLEASE TRY ANOTHER NUMBER"<<endl;
	 getch();
	}
	else if(choice==2)
	{
	 cin>>a;
	 cout<<"050"<<a<<endl;
	 if(a>999999 && a<10000000)
	 cout<<"DIALING...."<<endl;
	 else
	 cout<<"THIS NUMBER YOU ARE TRYING TO REACH IS NOT POSSIBLE.PLEASE TRY ANOTHER NUMBER"<<endl;
	getch();
	}
	else
	getch();
	break;
 case 2:clrscr();
       int x;
  cout<<"Enter 1 to add contacts"<<endl;
  cout<<"Enter 2 to display all contacts"<<endl;
  cout<<"Enter 3 to exit"<<endl;
  cin>>x;
  switch(x)
  {
      case 1:
      obj1.addcontact();
      break;
      case 2:
      obj1.displayallcontact();
      getch();
      break;
      case 3:
      break;
  }
 case 3:break;
 }
break;
//----------------------------------------settings-------------------------
case 'f':
int ty=-1;
g:

		 obj1.outline();
		  setcolor(12);
		  settextstyle(3,0,5);
		  outtextxy(183,20,"SETTINGS");
		  setcolor(4);
		  settextstyle(6,0,3);
		  outtextxy(150,150,"PRESS 'a' TO CHANGE PROFILE");
		  outtextxy(150,180,"PRESS 'b' TO KNOW SIM CARD");
		  outtextxy(150,210,"PRESS 'c' TO EXIT");
		  setcolor(13);
		  settextstyle(1,0,3);
		  outtextxy(160,375,"Please Enter Your Option?");
y=getch();
switch(y)
{
case 'a':
obj1.outline();
 setcolor(12);
		  settextstyle(3,0,5);
		  outtextxy(183,20,"PROFILE");
ty=ty*-1;
if(ty>0)
{
setcolor(RED);
		  settextstyle(6,0,3);
outtextxy(130,150,"YOUR PROFILE CHANGED FROM");
		  outtextxy(130,180,"GENERAL -------TO-----> SILENT");
		  outtextxy(130,210,"PROFILE  :   SILENT");
}
if(ty<0)
{
setcolor(GREEN);
		  settextstyle(6,0,3);
outtextxy(130,150,"YOUR PROFILE CHANGED FROM");
		  outtextxy(130,180,"SILENT -------TO-----> GENERAL");
		  outtextxy(130,210,"PROFILE  :   GENERAL");
}
getch();
goto g;
case 'b':
obj1.outline();
setcolor(12);
		  settextstyle(3,0,5);
		  outtextxy(183,20,"SIM CARD");
outtextxy(150,180,"Your SIM Card is:");
		  outtextxy(150,210,"Etisalat - 056 2026595");
		  getch();
goto g;
case 'c':
break;
}
break;
//----------------------------------------to exit--------------------------
case 'e':
exit(0);
default:
cout<<"ENTER THE CORRECT OPTION"<<endl;
}
}while(w!=8);
}
else
{
     clrscr();
     int weak;
     cout<<"The password you entered is wrong."<<endl;
     cout<<"press 1 to reenter password"<<endl;
     cout<<"press 2 to exit"<<endl;
     cin>>weak;
     switch(weak)
     {
      case 1:
      goto we;
      case 2:
      exit(0);
     }
}
     getch();
}
//------------------------------THE END----------------------------------
//---------------------*-----------------------*-------------------------