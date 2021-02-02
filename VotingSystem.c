#include<stdio.h>
#include<conio.h>
static int k;
int c[4][5];

  void vote(char[4][10],char[4][20]);
  void result(int[4][5],char[4][10],char[4][10],char[4][10],char[4][10]);
  void count(int);
  int decl(int);


    void main()
     {
	 char p[4][10],vp[4][10],sc[4][10],js[4][10];
	 char vf[4][20]={"President","Vice President","Secretary","Joint Secretary"};
	 int i,x,P=0,VP=1,S=2,JS=3;
	 int wop,wov,wos,woj;
	 clrscr();

	 printf("Enter names for president\n\n");
	  for(i=0;i<4;i++)
	    gets(p[i]);

	 printf("\nEnter names for vice president\n\n");
	  for(i=0;i<4;i++)
	   gets(vp[i]);

	 printf("\nEnter names for secretary\n\n");
	  for(i=0;i<4;i++)
	    gets(sc[i]);

	 printf("\nEnter names for joint secretary\n\n");
	  for(i=0;i<4;i++)
	    gets(js[i]);

  while(1)
   {
	 clrscr();
	 vote(p,vf);
	 count(P);

	 vote(vp,vf);
	 count(VP);

	 vote(sc,vf);
	 count(S);

	 vote(js,vf);
	 count(JS);

	 printf("Press 1 for continue and 2 for result ");
	 scanf("%d",&x);

	 switch(x)
	 {
	 case 1: continue;
	 case 2: result(c,p,vp,sc,js);
		 wop=decl(P);
		 wov=decl(VP);
		 wos=decl(S);
		 woj=decl(JS);
	 }       break;
	}

     printf("\n\n\nWinner of president is %s",p[wop]);
     printf("\n\nWinner of vice president is %s",vp[wov]);
     printf("\n\nWinner of secretary is %s",sc[wos]);
     printf("\n\nWinner of joint secretary is %s",js[woj]);
     getch();
 }
  void vote(char a[4][10],char vf[4][20])
  {
	int i;
	printf("\t\t  Maulana Azad National Urdu University\n");
	printf("\t\t_________________________________________\n\n");
	printf("\t\t\tstudent election\n\t\t      ~~~~~~~~~~~~~~~~~~~~\n");

	printf("Vote for %s",vf[k]);
	k++;
	if(k>3)
	k=0;

	printf("\n _________________________________________\n");
	for(i=0;i<4;i++)
	   {
	     printf("|\t\t\t|\t\t  |  \n|");
	     printf("%d. %s\n",i+1,a[i]);
	     printf("|_______________________|_________________|\n");
	   }

	printf("|\t\t\t|\t\t  |\n|");
	printf("5. NOTA\n");
	printf("|_______________________|_________________|\n");
     }
 //  end of fun

     void count(int l)
      {
	int ch,i;
	printf("\nEnter the no for vote: ");
	scanf("%d",&ch);

	switch(ch)
	 {
	    case 1:gotoxy(30,9);
		   break;
	    case 2:gotoxy(30,12);
		   break;
	    case 3:gotoxy(30,15);
		   break;
	    case 4:gotoxy(30,18);
		   break;
	    case 5:gotoxy(30,21);
		   break;
	 }

	 printf("((0))");
	 getch();
	 clrscr();

	   if(l==0)
	    {
	      if(ch==1)
	      c[0][0]++;

	      else if(ch==2)
	      c[0][1]++;

	      else if(ch==3)
	      c[0][2]++;

	      else if(ch==4)
	      c[0][3]++;

	      else if(ch==5)
	      c[0][4]++;

	    }

	   else if(l==1)
	    {
	      if(ch==1)
	      c[1][0]++;

	      else if(ch==2)
	      c[1][1]++;

	      else if(ch==3)
	      c[1][2]++;

	      else if(ch==4)
	      c[1][3]++;

	      else if(ch==5)
	      c[1][4]++;

	    }


	   else if(l==2)
	    {
	      if(ch==1)
	      c[2][0]++;

	      else if(ch==2)
	      c[2][1]++;

	      else if(ch==3)
	      c[2][2]++;

	      else if(ch==4)
	      c[2][3]++;

	      else if(ch==5)
	      c[2][4]++;

	  }


	   else if(l==3)
	    {
	      if(ch==1)
	      c[3][0]++;

	      else if(ch==2)
	      c[3][1]++;

	      else if(ch==3)
	      c[3][2]++;

	      else if(ch==4)
	      c[3][3]++;

	      else if(ch==5)
	      c[3][4]++;

	    }


	    l++;
	    if(l>3)
	    l=0;
   }

void result(int a[4][5], char p[4][10], char vp[4][10], char sc[4][10], char js[4][10])
   {
     int i,j;
     clrscr();

     for(i=0;i<4;i++)
      {
       if(i==0)
	{
	  printf("\nPresident\n____________________________________________________________________________\n");

	  for(j=0;j<5;j++)
	   {
	     if(j==4)
	       printf("NOTA=%d",a[i][4]);
	     else
	       printf("%s=%d\n",p[j],a[i][j]);
	   }
	     getch();
	}

     if(i==1)
      {
	gotoxy(20,2);
	printf("Vice President\n\n");

	for(j=0;j<5;j++)
	 {
	   if(j==4)
	    {
	      gotoxy(20,8);
	      printf("NOTA=%d",a[i][4]);
	    }
	   else
	    {
	      gotoxy(20,4+j);
	      printf("%s=%d\n",vp[j],a[i][j]);
	    }
       }
	getch();
     }

     if(i==2)
     {
       gotoxy(40,2);
       printf("Secretary\n");

     for(j=0;j<5;j++)
      {
       if(j==4)
	 {
	  gotoxy(40,8);
	  printf("NOTA=%d",a[i][4]);
	 }
       else
	{
	  gotoxy(40,4+j);
	  printf("%s=%d\n",sc[j],a[i][j]);
	}
       }
	getch();
       }

     if(i==3)
      {
	gotoxy(60,2);
	printf("Joint Secretary\n");

	for(j=0;j<5;j++)
	 {
	  if(j==4)
	   {
	     gotoxy(60,8);
	     printf("NOTA=%d",a[i][4]);
	   }
	  else
	    {
	     gotoxy(60,4+j);
	     printf("%s=%d\n",js[j],a[i][j]);
	    }
	   }
     getch();
     }
  }
}

 int decl(int v)
 {
   int  woc,p=0,i;

	    woc=c[v][0];
	    for(i=1;i<4;i++)
	     {
	       if(c[v][i]>woc)
		{
		 woc=c[v][i];
		 p=i;
		}

	    }
	    return(p);
   }
