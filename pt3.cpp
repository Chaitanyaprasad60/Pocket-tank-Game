#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int calc1(int,int);
int calc2(int,int);
void dynamic2(int,int,int);
void dynamic1(int,int,int);
void print(int);
void end(int);

void main()
{
		clrscr();
int i,j,k,p1=2,p2=13,p1c,p2c,a,b,c,s1=0,s2=0,l1=2,l2=2;
																						  //player 1 start
cout<<endl<<endl<<"                         WELCOME TO POCKET TANK GAME"<<endl<<endl<<endl;
cout<<" RULES"<<endl<<" 1.You have to shoot the opponent by entering the selecting a perfect trajectory"<<endl;
cout<<" 2.Score more than your opponent to win"<<endl<<endl<<endl;

cout<<" CONTROLS"<<endl<<"4 to move left"<<endl<<"6 to right"<<endl<<"0 to stay at position"<<endl;
cout<<"8 to increase the angle of trajectory"<<endl<<"2 to decrease the angle of trajectory"<<endl<<"5 to lock the target"<<endl;
getch();
clrscr();




for(k=0;k<3;k++)
{
	for(i=20;i>=0;i--)                                                   //1st loop for taking choice of moving
	{

		for(j=0;j<=15;j++)
		{
			if(i==0&&j!=p1&&j!=p2)
			cout<<"___";
			else if((j==p1||j==p2)&&(i==0))
			cout<<"Y__";
			else
			cout<<"   ";
		}
	cout<<endl;
	}

  cout<<endl<<"player 1 enter choice  ";
	cin>>p1c;
	if(p1c==4)
	p1--;
	else if(p1c==6)
	p1++;

	 clrscr();


		for(i=20;i>=0;i--)                                                  //2nd loop for quadratic equation enter
	{

		for(j=0;j<=15;j++)
		{
			if(i==0&&j!=p1&&j!=p2)
			cout<<"___";
			else if((j==p1||j==p2)&&(i==0))
			cout<<"Y__";
			else
			cout<<"   ";
		}
	cout<<endl;
	}

clrscr();

  a=-1;
  c=0;
  b=calc1(p1,p2);                                                 //calc function call
	getch();
	clrscr();



	 dynamic1(p1,p2,b);																								 //3rd loop for score and life



   if(((a*(p2-p1)*(p2-p1))+(b*(p2-p1))+c)==0)
	{
	s1=s1+10;
	l2--;
	cout<<"excellent hit"<<endl;
	}
	else
	cout<<"just miss"<<endl;
	cout<<"    score:"<<s1<<"                               score:"<<s2<<endl;
	cout<<"    life:"; 	print(l1); cout<<"                               life:"; print(l2);



if(l2==0)
end(1);

getch();
clrscr();                                                                   //player 1 ends


																									// player 2 start
	for(i=20;i>=0;i--)                                                   //1st loop for taking choice of moving
	{

		for(j=0;j<=15;j++)
		{
			if(i==0&&j!=p1&&j!=p2)
			cout<<"___";
			else if((j==p1||j==p2)&&(i==0))
			cout<<"__Y";
			else
			cout<<"   ";
		}
	cout<<endl;
	}

  cout<<endl<<"player 2 enter choice  ";
	cin>>p2c;
	if(p2c==4)
	p2--;
	else if(p2c==6)
	p2++;

	 clrscr();


		for(i=20;i>=0;i--)                                                  //2nd loop for quadratic equation enter
	{

		for(j=0;j<=15;j++)
		{
			if(i==0&&j!=p1&&j!=p2)
			cout<<"___";
			else if((j==p1||j==p2)&&(i==0))
			cout<<"__Y";
			else
			cout<<"   ";
		}
	cout<<endl;
	}

	clrscr();
a=-1;
b=calc2(p1,p2);
c=0;
	 getch();
	 clrscr();



																									 //3rd loop for score and life
	dynamic2(p1,p2,b);


  if(((a*(p1-p2)*(p1-p2))+(b*(p1-p2))+c)==0)
	{
	s2=s2+10;
	l1--;
	cout<<"excellent hit"<<endl;
	}
	else
	cout<<"It was a close shave"<<endl;
	cout<<"    score:"<<s1<<"                               score:"<<s2<<endl;
	cout<<"    life:"; print(l1); cout<<"                          life:"; print(l2);

if(l1==0)
end(2);

getch();
clrscr();                                                                   //player 2 ends

}



 if(s2>s1)
 cout<<endl<<endl<<"                                player 2 wins"<<endl;
 else if(s1>s2)
 cout<<endl<<endl<<"                                player 1 wins"<<endl;
 else
 cout<<endl<<endl<<"                                its a tie"<<endl;




getch();
}



int calc1(int p1,int p2)                                                                     //calc palyer 1 function
{
	  int i,j,a=-1,b=5,c=0,k,d;
																									 //3rd loop for score and life

  for(k=0;k<10;k++)
  {
		for(i=20;i>=0;i--)
	{

		for(j=0;j<=15;j++)
		{
			if(i==0&&j!=p1&&j!=p2)
			cout<<"___";
			else if((j==p1||j==p2)&&(i==0))
			cout<<"Y__";
			else if(((a*(j-p1)*(j-p1))+(b*(j-p1))+c)==i)
			cout<<".  ";
			else
			cout<<"   ";
		}
	cout<<endl;
	}

	cin>>d;
	clrscr();
	if(d==8)
	b++;
	else if(d==2)
	b--;
	else
	{cout<<endl<<endl<<"                                  target locked"<<endl;
	return b;
	}
	}

	}


	int calc2(int p1,int p2)                                                                     //calc palyer 2 function
{
	  int i,j,a=-1,b=-5,c=0,k,d;
																									 //3rd loop for score and life

  for(k=0;k<10;k++)
  {
		for(i=20;i>=0;i--)
	{

		for(j=0;j<=15;j++)
		{
			if(i==0&&j!=p1&&j!=p2)
			cout<<"___";
			else if((j==p1||j==p2)&&(i==0))
			cout<<"Y__";
			else if(((a*(j-p2)*(j-p2))+(b*(j-p2))+c)==i)
			cout<<".  ";
			else
			cout<<"   ";
		}
	cout<<endl;
	}

	cin>>d;
	clrscr();
	if(d==8)
	b--;
	else if(d==2)
	b++;
	else
	{ cout<<endl<<endl<<"                            target locked"<<endl;
	return b;
	 }
	}

	}

void dynamic2(int p1,int p2,int b)
{                                                   //dynamic function for 2
  int i,j,a=-1,q=0,d[20][20],z;
	for(i=20;i>=0;i--)
	{

		for(j=0;j<=15;j++)
		{
			if(((a*(j-p2)*(j-p2))+(b*(j-p2))==i))
			{
			d[q][0]=j;
			d[q][1]=i;
			q++;
			}
		}
	}

	for(i=0;i<q;i++)
	{
		for(j=i;j>=0;j--)
		{
			if(d[j][0]<d[j-1][0])
		  {	int temp=d[j-1][0];
				d[j-1][0]=d[j][0];
				d[j][0]=temp;

				temp=d[j-1][1];
				d[j-1][1]=d[j][1];
				d[j][1]=temp;
		  }
		}
	}


  for(z=q-1;z>=0;z--)
    {
		for(i=20;i>=0;i--)
		{

			for(j=0;j<=15;j++)
			{
			if(i==0&&j!=p1&&j!=p2)
			cout<<"___";
			else if((j==p1||j==p2)&&(i==0))
			cout<<"__Y";
			else if(j==d[z][0]&&i==d[z][1])
			cout<<".  ";
			else
			cout<<"   ";
			}
	cout<<endl;
	}

	for(int t=0;t<1000;t++)
	{
	for(int d=0;d<1000;d++)
	{
	for(int f=0;f<1000;f++)
	{			
	}}}
	clrscr();
	}


   for(i=20;i>=0;i--)
		{

			for(j=0;j<=15;j++)
			{
			if(i==0&&j!=p1&&j!=p2)
			cout<<"___";
			else if((j==p1||j==p2)&&(i==0))
			cout<<"__Y";
			else
			cout<<"   ";
			}
	cout<<endl;
	}




	}



	void dynamic1(int p1,int p2,int b)
{                                                          //player 1 dynamic function
  int i,j,a=-1,q=0,d[20][20],z;
	for(i=20;i>=0;i--)
	{

		for(j=0;j<=15;j++)
		{
			if(((a*(j-p1)*(j-p1))+(b*(j-p1))==i))
			{
			d[q][0]=j;
			d[q][1]=i;
			q++;
			}
		}
	}

	for(i=0;i<q;i++)
	{
		for(j=i;j>=0;j--)
		{
			if(d[j][0]<d[j-1][0])
		  {	int temp=d[j-1][0];
				d[j-1][0]=d[j][0];
				d[j][0]=temp;

				temp=d[j-1][1];
				d[j-1][1]=d[j][1];
				d[j][1]=temp;
		  }
		}
	}


  for(z=0;z<q;z++)
    {
		for(i=20;i>=0;i--)
		{

			for(j=0;j<=15;j++)
			{
			if(i==0&&j!=p1&&j!=p2)
			cout<<"___";
			else if((j==p1||j==p2)&&(i==0))
			cout<<"__Y";
			else if(j==d[z][0]&&i==d[z][1])
			cout<<".  ";
			else
			cout<<"   ";
			}
	cout<<endl;
	}

	for(int t=0;t<1000;t++)
	{
	for(int d=0;d<1000;d++)
	{
	for(int f=0;f<1000;f++)
	{			
	}}}
	clrscr();
	}


   for(i=20;i>=0;i--)
		{

			for(j=0;j<=15;j++)
			{
			if(i==0&&j!=p1&&j!=p2)
			cout<<"___";
			else if((j==p1||j==p2)&&(i==0))
			cout<<"__Y";
			else
			cout<<"   ";
			}
	cout<<endl;
	}
}


void print(int a)                                       //life print function
{
if(a==2)
cout<<"**";
else if(a==1)
cout<<"*";
}


void end(int a)                                                 //end function
{
getch();
clrscr();


if(a==1)
cout<<endl<<endl<<"                                   player 1 wins";
else if(a==2)
cout<<endl<<endl<<"                                   player 2 wins";

getch();
exit(0);
}
