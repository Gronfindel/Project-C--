#include "Person.cpp"
int main()
{
    using std::cout;
    using std::cin;
    const int SIZE = 3;
    Person * Pers[SIZE];
    int ct=0;
    for (ct; ct < SIZE; ct++)
    {
        char choice;
        cout << "Enter class person:\n"
            << "g: Gunslinger  p: Poker player  "
            << "b: Bad Dude  q: quit\n";
        cin >> choice;
        while (strchr("gpbq", choice) == nullptr)
        {
            cout << "Please enter a G, P, B, or q: ";
            cin >> choice;
        }
        if (choice == 'q')
            break;
        switch(choice)
        {
			case 'g':	Pers[ct] = new Gunslinger;
				        break;
            case 'p':   Pers[ct] = new PokerPlayer;
                        break;
            case 'b':   Pers[ct] = new BadDude;
                        break;
        }
		cin.get();
        Pers[ct]->Set();
    }
    cout << "\nHere is your people:\n";
    int i;
    for (i = 0; i < ct; i++)
    {
        cout << endl;
        Pers[i]->Show();
    }
    for (i = 0; i < ct; i++)
        delete Pers[i];
    cout << "Bye.\n";
	return 0; 
}
