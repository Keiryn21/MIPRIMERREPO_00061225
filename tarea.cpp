#include <iostream>
using namespace std;

int main()
{
    int activity, activity2, activity3;

    cout << "what do you want to do today? " << endl;
    cout << "1 stay at home" << endl;
    cout << "2 go outside" << endl;
    cin >> activity;

    if (activity == 1)
    {
        cout << "you chose to be at home" << endl;

        cout << "what do you want to do?" << endl;
        cout << "1 watch a movie" << endl;
        cout << "2 sleep all day" << endl;
        cout << "3 study" << endl;
        cin >> activity3;

        switch (activity3)
        {
        case 1:
            cout << "you chose to watch a movie i hope you enjoy it" << endl;
            break;

        case 2:
            cout << "i hope you enjoy this sleeping day" << endl;
            break;

        case 3:
            cout << "enjoy studying" << endl;
            break;
        default:

            cout << "you chose the wrong option" << endl;
            break;
        }
    }
    else if (activity == 2)
    {
        cout << "you chose to go outside,where do you whant to go?" << endl;
        cout << "1 go to the park and drink something with your sister" << endl;
        cout << "2 go camping to cerro verde with your family" << endl;
        cout << "3 go to the cinema with your friends" << endl;
        cin >> activity2;

        switch (activity2)
        {
        case 1:
            cout << "you chose to go to the park with your sister i hope that both enjoy thta time together" << endl;
            break;

        case 2:
            cout << "you chose to go camping with your family enjoy it" << endl;
            break;

        case 3:
            cout << "you chose to go to the cinema wuth your friends,have fun" << endl;
            break;

        default:
            cout << "you chose the wrong option" << endl;
            break;
        }
    }

    return 0;
}
