class Combat
{
    public:
    int enemyhp;
    int enemyStr;
    int enemyDex;
    int enemyWis;

    string input;

    int damage;
    
    Combat()
    {
        enemyhp = 10 + (rand() % 5) - 2;
        enemyStr = 10 + (rand() % 5) - 2;
        enemyDex = 10 + (rand() % 5) - 2;
        enemyWis = 10 + (rand() % 5) - 2;

        input = "";
    }

    void initializeCombat()
    {
        if (dex >= enemyDex)
        {
            playerTurn();
        }

        else
        {
            enemyTurn();
        }
        
    }

    void playerTurn()
    {
        cout << "How do you want to attack?" << endl;
        cout << "1. Punch" << endl << "2. Kick" << endl << "3. Taunt" << endl;
        cin >> input;

        if (input == "1")
        {
            damage = 2 + ((str-10)/2);
            
            if (damage < 1)
            {
                damage = 1;
            }

            enemyhp -= damage;
            cout << "Your punch deals " << damage << " leaving the enemy at " << enemyhp << " hp.";
            
            if (enemyhp > 0)
            {
                enemyTurn();
            }

            else
            {
                endCombat();
            }
            
        }

        else if (input == "2")
        {
            damage = 2 + ((dex-10)/2);
            
            if (damage < 1)
            {
                damage = 1;
            }

            enemyhp -= damage;
            cout << "Your kick deals " << damage << " leaving the enemy at " << enemyhp << " hp.";
            
            if (enemyhp > 0)
            {
                enemyTurn();
            }

            else
            {
                endCombat();
            }
        }

        else if (input == "3")
        {
            
        }

        else
        {
            cout << "Not an attack, input 1, 2, 3, or 4 in order to select attack" << endl;
            playerTurn();
        }
    }

    void enemyTurn()
    {

    }

    void endCombat()
    {

    }
    
};