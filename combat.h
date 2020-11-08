class Combat
{
    public:
    int enemyhp;
    int enemyStr;
    int enemyDex;
    int enemyWis;

    string input;

    int damage;
    int enemyAction;
    int passthrough;
    
    Combat()
    {
        enemyhp = 10 + ((rand() % 5) - 2) + (numencounters / 2);
        enemyStr = 10 + (rand() % 5) - 2 + (numencounters / 2);
        enemyDex = 10 + (rand() % 5) - 2 + (numencounters / 2);
        enemyWis = 10 + (rand() % 5) - 2 + (numencounters / 2);

        input = "";
    }

    /*
    Initializa Combat return meanings
    false- Player has died in combat
    bool- Player has won
    */
    int initializeCombat()
    {
        if (dex >= enemyDex)
        {
            playerTurn();
        }

        else
        {
            enemyTurn();
        }
        
        return passthrough;
    }

    void playerTurn()
    {
        cout << "How do you want to attack?" << endl;
        cout << "1. Punch" << endl << "2. Kick" << endl << "3. Taunt" << endl;
        cin >> input;
        cout << endl;

        if (input == "1")
        {
            damage = 2 + ((str-10)/2);
            
            if (damage < 1)
            {
                damage = 1;
            }

            enemyhp -= damage;
            cout << "Your punch deals " << damage << " damage, leaving the enemy at " << enemyhp << " hp." << endl;
            
            if (enemyhp > 0)
            {
                enemyTurn();
            }

            else
            {
                passthrough = 1;
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
            cout << "Your kick deals " << damage << " damage, leaving the enemy at " << enemyhp << " hp." << endl;
            
            if (enemyhp > 0)
            {
                enemyTurn();
            }

            else
            {
                passthrough = 1;
            }
        }

        else if (input == "3")
        {
            damage = 2 + ((wis-10)/2);
            
            if (damage < 1)
            {
                damage = 1;
            }

            enemyhp -= damage;
            cout << "Your taunt deals " << damage << " damage, leaving the enemy at " << enemyhp << " hp." << endl;
            
            if (enemyhp > 0)
            {
                enemyTurn();
            }

            else
            {
                passthrough = 1;
            }
        }

        if (input != "1" && input != "2" && input != "3")
        {
            cout << "Not an attack, input 1, 2, 3, or 4 in order to select attack" << endl;
            playerTurn();
        }
    }

    void enemyTurn()
    {
        enemyAction = ((rand() % 3) + 1);

        if (enemyAction == 1)
        {
            damage = 2 + ((enemyStr-10)/2);
            
            if (damage < 1)
            {
                damage = 1;
            }

            hp -= damage;

            cout << "The enemy punches you, dealing " << damage << " damage, leaving you at " << hp << " hp." << endl;
        }

        else if (enemyAction == 2)
        {
            damage = 2 + ((enemyDex-10)/2);
            
            if (damage < 1)
            {
                damage = 1;
            }

            hp -= damage;

            cout << "The enemy kicks you, dealing " << damage << " damage, leaving you at " << hp << " hp." << endl;
        }

        else
        {
            damage = 2 + ((enemyWis-10)/2);
            
            if (damage < 1)
            {
                damage = 1;
            }

            hp -= damage;

            cout << "The enemy taunts you, dealing " << damage << " damage, leaving you at " << hp << " hp." << endl;
        }

        if (hp > 0)
        {
            playerTurn();
        }

        else
        {
            passthrough = 0;
        }
        
    }
    
};