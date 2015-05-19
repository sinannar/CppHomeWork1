/**
    091044005HW01.cpp
    Sinan NAR

    Homework Info:Program creates random function that related with user input
    And show point wirh 'S' and exit with'D' character
    Algorithm creates squares that is included other squares like when the user put 20 for input
    Algorith creates 20*20 full wall and creates 18*18 whole squares and again creates 16*16 wall square inside and inside
    And while it creating this,it will add space character to the outer lines of square if square created by wall and add wall if square created by whole
**/


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void)
{

    int x,y;    //variables for x and y coordinate
    cout<<"enter the mazesize\n";
    cin>>x;
    y=x;

    char maze[x][y];
    int a,b,c;  //variablesfor mathematical expression

    srand(time(NULL));


    int rndm1,rndm2;//variables for random numbers

    for(c=0;c<x/2.0;c=c+1)
    {
        rndm1=rand()%4;//random for choosing left or right or up or down

        do{
        rndm2=c+rand()%(x-2*c);//choosing the wall to delete or speace to make wall
        }while( ( (c%2)==0 && (rndm2%2)==1)||( (c%2)==1 && (rndm2%2)==0) );

        rndm2=rndm2-1;//mathematical neccessary in algorithm
        for(a=c;a<x-c;++a)
        {
            for(b=c;b<y-c;++b)
            {
                if(c%2==0)
                    maze[a][b]='X';
                else
                    maze[a][b]=' ';

            }
        }

        switch(rndm1)
        {
            int i1,i2;
            case 0:     //side zero for up
            {
                for(a=c;a<x-c-1;++a)
                {
                    if(c%2==1)
                    maze[rndm2][a]='X';//wall to add space
                    else if(c==0)
                    maze[rndm2][a]='S';
                    else
                    maze[rndm2][a]=' ';//space to add wall and whole will be exist there
                }
            }
            break;
            case 1:
            {
                for(a=c+1;a<x-c;++a)
                {
                    if(c%2==1)
                    maze[rndm2][a]='X';
                    else if(c==0)
                    maze[rndm2][a]='S';
                    else
                    maze[rndm2][a]=' ';
                }
            }
            break;
            case 2:
            {
                for(a=c;a<x-c-1;++a)
                {
                    if(c%2==1)
                    maze[a][rndm2]='X';
                    else if(c==0)
                    maze[a][rndm2]='S';
                    else
                    maze[a][rndm2]=' ';
                }
            }
            break;
            case 3:
            {
                for(a=c+1;a<x-c;++a)
                {
                    if(c%2==1)
                    maze[a][rndm2]='X';
                    else if(c==0)
                    maze[a][rndm2]='S';
                    else
                    maze[a][rndm2]=' ';
                }
            }
            break;
        }
    }
        maze[(x-1)/2][(y-1)/2]='D';





    for(a=0;a<x;++a)        //printing maze
    {
        for(b=0;b<y;++b)
        {
            cout<<maze[a][b];
        }
        cout<<"\n";
    }



    return 0;
}
