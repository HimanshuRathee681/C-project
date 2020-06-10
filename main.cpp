//   ******* STONE,PAPER,SCISSOR GAME **********

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int a,b;

  while(1)
  {

    cout << "\n";
    cout << "********** LET'S PLAY STONE,PAPER,SCISSOR **********\n";
    cout <<"\n";
    cout << "Please press one of the key of which discription is given below\n";
    cout << "Press '0' if you want to choose paper\n";
    cout << "Press '1' if you want to choose rock\n";
    cout << "Press '2' if you want to choose scissors\n";
    cout << "Press '3' if you want to exit \n";
    cin >> a;

    cout << "\n";
    cout << "rock ! paper ! scissors !.......\n";



    b = rand()%3;

    cout << "Computer's choice is :\n";

    switch (b)
    {

        case 0:
        {
           cout << "##### PAPER #####\n";
           break;
        }

        case 1:
        {
            cout << "##### ROCK #####\n";
            break;
        }

        case 2:
        {
            cout << "##### SCISSORS #####\n";
            break;
        }



    }

    cout << "User's choice is :\n";

    switch (a)
    {

        case 0:
        {
            cout << "###### PAPER #####\n";
            break;
        }

        case 1:
        {
            cout << "##### ROCK #####\n";
            break;
        }

        case 2:
        {
            cout << "##### SCISSORS #####\n";
            break;
        }

        case 3:
        {
            cout << "##### USER WANT TO EXIT #####\n";
            goto end;
            break;
        }

    }

       cout << "\n";

    if (a == 0 && b == 1)
    {
        cout << "*******USER WINS********\n";
    }

    else if(a == 0 && b == 0)
    {
        cout << "*******DRAWS*******\n";
    }

    else if(a == 0 && b ==2)
    {
        cout << "*******COMPUTER WINS*******\n";
    }

    else if(a ==1 && b == 0)
    {
        cout << "*******COMPUTER WINS********\n";
    }

    else if (a == 1 && b == 1)
    {
        cout << "******DRAWS*******\n";
    }

    else if (a == 1 && b == 2)
    {
        cout << "******USER WINS******\n";
    }

    else if (a == 2 && b == 0)
    {
        cout << "******USER WINS*******\n";
    }

    else if(a == 2 && b == 1)
    {
        cout << "******COMPUTER WINS******\n";
    }

    else if(a == 2 && b == 2)
    {
        cout << "******DRAWS*******\n";
    }

    cout << "\n";
    cout << "######################################### NEXT TURN ######################################\n";

  }
    end:

return 0;
}
