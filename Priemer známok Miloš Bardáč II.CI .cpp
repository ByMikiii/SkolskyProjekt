//Miloš Bardáč 2.CI Priemer známok

#include <iostream>
using namespace std;

int main()
{
    char repeat;
    
    cout << "----------------------------" << '\n';
    cout << "|      Priemer znamok      |" << '\n';
    cout << "----------------------------" << '\n';
    
    do {
        string predmet;
        int n, i;
        float num[100], sum = 0.0, priemer;
        cout.precision(3);


        cout << "Zadajte predmet: " ;
        cin >> predmet;


        cout << "Zadajte pocet znamok: " ;
        cin >> n;

        while (n > 100 || n <= 0)
        {
            cout << "Chyba! pocet znamok by mal byt od 1 do 100" << '\n';
            cout << "Znovu zadajte pocet znamok: ";
            cin >> n;
        }
        for (i = 0; i < n; ++i)
        {
            cout << "Zadajte " << i + 1 << ". znamku: ";
            cin >> num[i];
            sum += num[i];
        }

        cout << '\n';

        priemer = sum / n;
        cout << "Tvoj priemer znamok z predmetu " << predmet << " je " << priemer;


            if (priemer <= 1 && priemer <= 1.49) {
                cout << " (vyborny)." << '\n';
            }
            else if (priemer >= 1.5 && priemer <= 2.49) {
                cout << " (chvalitebny)." << '\n';
            }
            else if (priemer >= 2.5 && priemer <= 3.49) {
                cout << " (dobry)." << '\n';
            }
            else if (priemer >= 3.5 && priemer <= 4.49) {
                cout << " (dostatocny)." << '\n';
            }
            else if (priemer >= 4.5 && priemer <= 5) {
                cout << " (nedostatocny)." << '\n';
            }
            else if (priemer < 1) {
                cout << '\n' << '\n' << "Nieco si zadal zle kedze je tvoj priemer mensi ako 1" << '\n';
            }
            else if (priemer > 5) {
                cout << '\n' << '\n' << "Nieco si zadal zle kedze je tvoj priemer vacsi ako 5" << '\n';
            }
            cout << '\n';

        cout << "Chcete znova vypocitat priemer znamok ? (ano = 1, nie = 2)" << '\n';
        cin >> repeat;
    } 
        while (repeat == '1');

    return 0;
}
