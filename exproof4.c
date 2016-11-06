#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int totx1=0; // Global variable that records total sets done

////////////////////////////////////////////////////////////////////////
// Write total sets to a file                                        // 
//////////////////////////////////////////////////////////////////////
int xfile1()
{
    ofstream setfile1;
    setfile1.open("noset.txt", ios::app);
    setfile1 << totx1 << "\n";
    cout << "Total sets written to file\n";
    setfile1.close();
}
////////////////////////////////////////////////////////////////////////
// Read set file                                                     //
//////////////////////////////////////////////////////////////////////
int xfile2()
{
    char  data[5];
    
    system("clear");
    ifstream setfile1;
    setfile1.open("noset.txt");
    cout << "Number of sets done\n";
    while(!setfile1.eof())
    {
        setfile1.getline(data, 5);
        cout << data << "\n";
    }
    setfile1.close();
}
    
///////////////////////////////////////////////////////////////////////
// Initial exercise function                                        // 
/////////////////////////////////////////////////////////////////////    
int extal1()
{    
    int xam1=0;
    string dundun;
    
    system("clear");
    cout << "How many excercises do you want to do?\n";
    cin >> xam1;
    totx1=xam1;
    while(xam1 != 0)
        {
            system("clear");
            cout << "Type \"done\" when you finish a set\n";
            cout << "Or \"wussout\" if you have had enough\n";
            cout << "\n";
            cout << xam1 << " sets to go" <<"\n";
            cin >> dundun;
            if(dundun=="done")
                {
                    xam1=xam1-1;
                }
            else if(dundun=="wussout")
                {
                    totx1=totx1-xam1;
                    return 0;
                }
            else continue;
        }
    cout << "You're done\n";
}
///////////////////////////////////////////////////////////////////
// Want to do more? function                                    //
/////////////////////////////////////////////////////////////////
int feeltheburn()
{
    int tburn1=0;
    string hardcase;
    string hardass;
    
    cout << "Would you like to do anymore sets?\n";
    cout << "please type \"y\" or \"n\" \n";
    cin >> hardass;
    if(hardass=="n")
    {
        cout << "You big wuss\n";
        return 0;
    }
    else if(hardass=="y");
    {
        while(hardcase !="wussout")
        {
            system("clear");
            cout << "That's the spirit\n";
            cout << "Type \"done\"for each extra set you do\n";
            cout << "Type \"wussout\" when you want to quit\n";
            cout <<"\n";
            cout << tburn1+1 << " set\n";
            cin >> hardcase;
            if(hardcase !="done" && "wussout")
            {
                continue;
            }
            else
            {
            tburn1=tburn1+1;
            }
        }
    }
    totx1=totx1+tburn1;
} 

/////////////////////////////////////////////////////////////////
// Menu Function                                              //      
///////////////////////////////////////////////////////////////
int menu1()
{
     int hardmen;
    
     while(hardmen !=3)
    {
        system("clear");
        cout << "Exercise Menu\n";
        cout << "\n";
        cout << "1 to start exercise\n";
        cout << "2 to read set file\n";
        cout << "3 to quit\n";
        cin >> hardmen;
    
    switch(hardmen)
    {
            case 1:    
            { 
                extal1();
                system("clear");
                feeltheburn();
                system("clear");
                cout << "You did " << totx1 << " sets\n";
                xfile1();
                cout << "Hit enter to continue";
                cin.ignore();
                cin.ignore();
                continue;
            }
            case 2:
            {
                xfile2();
                cout << "Hit enter to continue";
                cin.ignore();
                cin.ignore();
                continue;
            }
    } 
    }
}
////////////////////////////////////////////////////////////////
// The main program                                          //
//////////////////////////////////////////////////////////////
int main()
{
  menu1();
}

    
    
