#include <iostream>
#include <windows.h>
using namespace std;

int inc;
void scoreP(int score);
void printMaze();
void gotoxy(int x, int y);
void erase(int x, int y, char previous);
void eraseP(int x, int y);
void printPacman(int x, int y);
void printG1(int x, int y);
void printG2(int x, int y);
char getCharAtxy(short int x, short int y);

main()
{
    int score = 0;
    int fscore = 0;
    int pacmanX = 4;
    int pacmanY = 5;
    int ghostX1 = 4;
    int ghostY1 = 1;
    int ghostX2 = 1;
    int ghostY2 = 6;
    string directionY = "right";
    string directionX = "up";
    char previousChar = ' ';

    bool gameRunning = true;

    system("cls");
    printMaze();
    printPacman(pacmanX, pacmanY);

    while (gameRunning)
    {
        
        if (directionX == "up")
        {
            char nextLocation = getCharAtxy(ghostX1 + 1, ghostY1);
             if(nextLocation=='#')
             {
                   directionX="down";
             }
            
             if (nextLocation == ' ' || nextLocation == '.')
            {
                previousChar = nextLocation;
                erase(ghostX1, ghostY1, previousChar);
                ghostX1 = ghostX1 + 1;
                printG1(ghostX1, ghostY1);
            }
        }

        if (directionX == "down")
        {
            char nextLocation = getCharAtxy(ghostX1 - 1, ghostY1);
            
                if(nextLocation=='#')
                {
                    directionX="up";
                }
            
                 else if(nextLocation == ' ' || nextLocation == '.')
            {
                previousChar = nextLocation;
                erase(ghostX1, ghostY1, previousChar);
                ghostX1 = ghostX1 - 1;
                printG1(ghostX1, ghostY1);
            }
        }
        if (directionY == "right")
        {
            char nextLocation = getCharAtxy(ghostX2, ghostY2 + 1);
            if(nextLocation=='#')
            {
                directionY="left";
            }
               
              else if (nextLocation == ' ' || nextLocation == '.')
            {
                previousChar = nextLocation;
                erase(ghostX2, ghostY2, previousChar);
                ghostY2 = ghostY2 + 1;
                printG2(ghostX2, ghostY2);
            }
        }
        if (directionY == "left")
        {
            char nextLocation = getCharAtxy(ghostX2, ghostY2 - 1);
            if (nextLocation == '#')
            {
                directionY = "right";
            }
            else if (nextLocation == ' ' || nextLocation == '.')
            {
                previousChar = nextLocation;
                erase(ghostX2, ghostY2, previousChar);
                ghostY2 = ghostY2 - 1;
                printG2(ghostX2, ghostY2);
            }
        }
        

        if (GetAsyncKeyState(VK_LEFT))
        {
            char nextLocation = getCharAtxy(pacmanX - 1, pacmanY);
            if (nextLocation == ' ')
            {
                eraseP(pacmanX, pacmanY);
                pacmanX = pacmanX - 1;
                printPacman(pacmanX, pacmanY);
            }
            else if (nextLocation == '.')
            {
                eraseP(pacmanX, pacmanY);
                pacmanX = pacmanX - 1;
                printPacman(pacmanX, pacmanY);
                 scoreP(score);
        
            }
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            char nextLocation = getCharAtxy(pacmanX + 1, pacmanY);
            if (nextLocation == ' ')
            {
                eraseP(pacmanX, pacmanY);
                pacmanX = pacmanX + 1;
                printPacman(pacmanX, pacmanY);

                
                
            }
            else if (nextLocation == '.')
            {
                eraseP(pacmanX, pacmanY);
                pacmanX = pacmanX + 1;
                printPacman(pacmanX, pacmanY);
                scoreP(score);
            
        
            }
        }
        if (GetAsyncKeyState(VK_UP))
        {
            char nextLocation = getCharAtxy(pacmanX, pacmanY - 1);
            if (nextLocation == ' ')
            {
                eraseP(pacmanX, pacmanY);
                pacmanY = pacmanY - 1;
                printPacman(pacmanX, pacmanY);

            }
            else if (nextLocation == '.')
            {
                eraseP(pacmanX, pacmanY);
                pacmanY = pacmanY - 1;
                printPacman(pacmanX, pacmanY);
             scoreP(score);
            
            }
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            char nextLocation = getCharAtxy(pacmanX, pacmanY + 1);
            if (nextLocation == ' ')
            {
                eraseP(pacmanX, pacmanY);
                pacmanY = pacmanY + 1;
                printPacman(pacmanX, pacmanY);

            
            
            }
            else if (nextLocation == '.')
            {
                eraseP(pacmanX, pacmanY);
                pacmanY = pacmanY + 1;
                printPacman(pacmanX, pacmanY);
                
        
                
            }
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            gameRunning = false;
        }
        Sleep(200);
    }
}

void printMaze()
{
    cout << "############" << endl;
    cout << "#   . ..     #" << endl;
    cout << "#     ..     #" << endl;
    cout << "#       ..   #" << endl;
    cout << "#         .  #" << endl;
    cout << "#     ..     #" <<endl;
    cout << "#            #" << endl;
    cout << "#  ..        #" << endl;
    cout << "#            #" << endl;
    cout << "############";
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}

void erase(int x, int y, char previous)
{
    gotoxy(x, y);
    cout << previous;
}

void printPacman(int x, int y)
{
    gotoxy(x, y);
    cout << "P";
}

void printG1(int x, int y)
{
    gotoxy(x, y);
    cout << "G";
}

void printG2(int x, int y)
{
    gotoxy(x, y);
    cout << "G";
}
void eraseP(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}
void scoreP(int score)
{

    inc = inc + 5;
    int scorei = score + inc;
    gotoxy(20,5);
    cout<<"score is " <<scorei;
}