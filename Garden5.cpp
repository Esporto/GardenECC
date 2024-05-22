#include <iostream>
using namespace std;
int main()
{
    string emoji[7] = {"\U0001F345", "\U0001F344", "\U0001F353", "\U0001F96C", "\U0001FAA8", "\U0001F468", "\U0001F41B"};
    string plant[4];
    int crops[4];
    cout
        << "After winter ❄️, sadly a garden has wither 💔😭 so it's time for us to replant the garden again. It's a new season so the farmer 🧔‍♂️ want to spice up the way they plant the garden. However, they have forgotten what they planted initially so they have asked for us the resident garden bug 🐛 for help" << endl;
    cout << "\n\t   ===================================================\n"
         << endl;
    cout << "We only have a limited number of seeds of each plant so there are some condition on many we can plant of each plant." << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << emoji[6] << ": What are going to plant in the " << i + 2 << "nd row?" << endl;
        cout << emoji[5] << ": ";
        cin >> plant[i];
        if (plant[i] == emoji[i])
        {
            cout << emoji[6] << ": How many do you want to plant?" << endl;
            cout << emoji[5] << ": ";
            cin >> crops[i];
            if (crops[1] % 2 == 0)
            {
                crops[1] += 1;
            }
            if (crops[2] % 3 != 0)
            {
                crops[2] /= 3;
                crops[2] += 1;
                crops[2] *= 3;
            }
        }
    }
    cout << "/------------------\\" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "|";
        if (plant[i] == emoji[i])
        {
            for (int j = 0; j < 9; j++)
            {
                if (j < crops[i])
                {
                    cout << emoji[i];
                }
                else if (i == 3 && crops[i] == j)
                {
                    cout << emoji[6];
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        else
        {
            for (int j = 0; j < 9; j++)
            {
                cout << emoji[4] << " ";
            }
        }
        cout << "|" << endl;
    }
    cout << "\\------------------/" << endl;
    return 0;
}
