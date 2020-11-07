class Combat
{
    int enemyhp = 10 + (rand() % 5) - 2;
    int enemyStr = 10 + (rand() % 5) - 2;
    int enemyDex = 10 + (rand() % 5) - 2;
    int enemyWis = 10 + (rand() % 5) - 2;

    string input = "";

    int damage;

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
        cout << "1. Punch" << endl << "2. Kick" << "3. Grab" << "4. Taunt";
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
            enemyTurn();
        }

        else if (input == "2")
        {
            damage = 2 + ((str-10)/2);
            
            if (damage < 1)
            {
                damage = 1;
            }

            enemyhp -= damage;
            cout << "Your punch deals " << damage << " leaving the enemy at " << enemyhp << " hp.";
            enemyTurn();
        }

        else if (input == "3")
        {
            
        }

        else if (input == "4")
        {
            damage = 2 + ((str-10)/2);
            
            if (damage < 1)
            {
                damage = 1;
            }

            enemyhp -= damage;
            cout << "Your punch deals " << damage << " leaving the enemy at " << enemyhp << " hp.";
            enemyTurn();
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