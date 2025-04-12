#include <stdio.h>
#include <unistd.h>
#include <math.h>

int main()
{
    
    int personagem, optMenu, optAct, hpP, hpPT, hpM, atkP, atkM, xpP, xpM, lvlP, medP;
    int ataque, menu, briga, treino = 0, i;
    
    printf("\t\t\t\t\t\t\tMenu Inicial\nQuem é você?\n1 - Prof. Alexandre\n2 - Prof. Ernesto\n3 - Bernardo\nOpção: ");
    scanf("%d", &personagem);
    
    switch(personagem)
    {
        case 1:
        {
            hpPT = 77; atkP = 75; lvlP = 5; medP = 0;
            
            for(menu = 0, i = 0; 1 == 1; i++) // começou o jogo como Alexandre
            {
                medP = lvlP / 3;
                printf("#####################################################\n#####################################################\n#####################################################\n#####################################################\n################+--......----+#######################\n############+-....................-##################\n##########-....--............-----..-+###############\n########-..--................-------...+#############\n######-...-.................----------..-############\n#####...-.....--......-----------------...+##########\n####...--..------------------------------..-#########\n###-..-------------------------------++---..-########\n##+..-------------------------------++++++-..+#######\n##..--------------------------------+++++++-.-#######\n##..-------------------+++++++++++-++++++++--.+######\n##..--------+++++++---++++#+++++++++++++++++-..+#####\n##..-----++++++++++---+++++++###+++++++++++++-.-#####\n##..---++++++++++++--.-+++++++#++++++++++++++-....+##\n##..--+++++###+++++--.---+++++++++++++++++++++---..##\n##..---++++++++++---------+++++++++++++++++++++++..##\n##..--+++++++++------------+--------+++++++++++++-.##\n##..-----------------+++++++++------+++++++++++++-.##\n#-..------------+++++++###+++++++-+++++++++++++++-.##\n#-..+++-------+++++++++++++++++++++++++++++++++++..##\n##..+++--+----++--+++++++++++++++++++++++++++++++..##\n##..-+----+++++++-++++++++++++++++++++++++++++++-.-##\n##-..-----+++++++++++########+++++++++++++++-....-###\n###+..----+++++++++++++++++++++++++++++++++-..++#####\n#####..---+++++++++++++++++++++++++++++++++..+#######\n#####+..--+++++++++++++++++++++++++++++++++..+#######\n######+....-+++++++++++++++++++++++++++++++-.+#######\n#########+..+++++++++++++++++++++++++++++++-.-#######\n#########+..--+++++++++++++++++++++++++++++-..+######\n#########+..--++++++++++++++++++++++++++++++-..-#####\n#########+..--+++++++++++++++++++++++++++++++-..-####\n#########+..--+++++++++++++++++++++++++++++++--...++#\n#######+....--++++++++++++++++++++++++++++++++-......\n###+.........--+++++++++++++++++++++++++++++++--.....\n#+............-++++++++++++++++++++++++++++++---.....\n...............-++++++++++++++++++++++++++++----.....\n.................-+++++++++++++++++++++++++-----.....\n..................--++++++++++++++++++++++--++--.....\n..................-....-----------------..------.....\n.....................................................\n......     .....     ....             .......        \n");               printf("\nProf. Alexandre:\nHP: %d\tATK: %d\nLvl: %d\tMedalhas: %d\n", hpPT, atkP, lvlP, medP);
                
                printf("\nSelecione uma opção\n1 - Treinar\n2 - Explorar\n3 - Sair\nOpção: ");
                scanf("%d", &optMenu);
                
                switch(optMenu)
                {
                    case 1:
                    
                    if(treino == 0)
                    {
                        printf("\nVocê está treinando...\n");
                        
                        printf("5\n");
                        sleep(1);
                        printf("4\n");
                        sleep(1);
                        printf("3\n");
                        sleep(1);
                        printf("2\n");
                        sleep(1);
                        printf("1...\n");
                        sleep(1);
                        
                        xpP += 500 + pow(lvlP, 1.5);
                        treino = 0;
                        
                        printf("\nVocê ganhou %.0f XP\n", 500 + pow(lvlP, 1.5));
                        sleep(5);
                        
                        if(xpP >= 500 * pow(1.135, lvlP - 1))
                        {
                            lvlP += 1;
                            xpP += - 500 * pow(1.135, lvlP - 1);
                            atkP += 5 + lvlP * 2;
                            hpPT += 5 + lvlP * 2;
                            printf("\nSubiu de nível!\nLvl %d\nATK = %d\nHP = %d\n\n", lvlP, atkP, hpPT);
                            sleep(5);
                        }
                    }
                    else
                    {
                        printf("\nVocê está cansado demais para treinar...\n");
                        i += 4;
                        sleep(5);
                    }
                    
                    break;
                    
                    case 2:
                    {
                        switch(i % 5)
                        {
                            case 0: // monstro 1
                            {
                                hpM = 25 + (lvlP * (10 + lvlP)); atkM = 5 * (pow(1.5, lvlP)); xpM = 400 * sqrt(lvlP);
                                
                                printf("Você achou um problema do computador, o que fazer?\n1 - Atacar\n2 - Fugir\nOpção: ");
                                scanf("%d", &optAct);
                                
                                switch(optAct)
                                {
                                    case 1: // Iniciou a briga com o monstro
                                    {
                                        hpP = hpPT;
                                        for(briga = 0; briga == 0; briga++)
                                        {
                                            hpM = hpM - atkP;
                                            
                                            if(hpM <= 0) // Você matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro sobreviveu levando %d de dano e tendo ainda %d de HP\n", atkP, hpM);
                                                sleep(2);
                                                
                                                printf("O monstro morreu!\n");
                                                sleep(2);
                                                
                                                printf("\n\t\t\t\t\t\t\tVitória!\n\n + %d XP\n", xpM);
                                                
                                                xpP += xpM;
                                                printf("\nVocê ganhou %d XP\n", xpM);
                                                sleep(5);
                                                
                                                if(xpP >= 500 * pow(1.135, lvlP - 1))
                                                {
                                                    lvlP += 1;
                                                    xpP += - 500 * pow(1.135, lvlP - 1);
                                                    atkP += 5 + lvlP * 2;
                                                    hpPT += 5 + lvlP * 2;
                                                    printf("\nSubiu de nível!\nLvl %d\nATK = %d\nHP = %d\n\n", lvlP, atkP, hpPT);
                                                    sleep(5);
                                                }
                                            }
                                            else // Você não matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro sobreviveu levando %d de dano e tendo ainda %d de HP\n", atkP, hpM);
                                                sleep(2);
                                                
                                                printf("\nO monstro ataca!\n");
                                                hpP = hpP - atkM;
                                                sleep(2);
                                                
                                                if(hpP <= 0) // Você morreu
                                                {
                                                    printf("\nVocê morreu...\n");
                                                    sleep(3);
                                                    
                                                    printf("\n\t\t\t\t\t\t\t\tFim de jogo\n");
                                                    sleep(3);
                                                    return 0;
                                                }
                                                else // Você sobreviveu e não matou o monstro
                                                {
                                                    printf("Você levou %d de dano!\n", atkM);
                                                    sleep(2);
                                                    briga = -1;
                                                }
                                            }
                                        }
                                        break;
                                    }
                                        
                                    case 2: // Você fugiu
                                    {
                                        printf("\nVocê fugiu\n");
                                        
                                        break;
                                    }
                                    break;
                                }
                                break;
                            }
                            
                            case 1: // monstro 2
                            {
                                hpM = 75 + (7.5 * lvlP); atkM = 15 + (7.5 * lvlP); xpM = 300 * (lvlP);
                                
                                printf("Você achou um adolescente vagabundo, o que fazer?\n1 - Atacar\n2 - Fugir\nOpção: ");
                                scanf("%d", &optAct);
                                
                                switch(optAct)
                                {
                                    case 1: // Iniciou a briga com o monstro
                                    {
                                        hpP = hpPT;
                                        for(briga = 0; briga == 0; briga++)
                                        {
                                            hpM = hpM - atkP;
                                            
                                            if(hpM <= 0) // Você matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro morreu!\n");
                                                sleep(2);
                                                
                                                printf("\n\t\t\t\t\t\t\tVitória!\n\n + %d XP\n", xpM);
                                                
                                                xpP += 1000 * pow(lvlP, 0.8);
                                                printf("\nVocê ganhou %.0f XP\n", 1000 * pow(lvlP, 0.8));
                                                sleep(5);
                                                
                                                if(xpP >= 1000 * pow(lvlP, 2))
                                                {
                                                    lvlP += 1;
                                                    xpP += - 1000 * (lvlP * (lvlP / 5));
                                                    atkP += 5 + lvlP * 2;
                                                    hpPT += 5 + lvlP * 2;
                                                    printf("\nSubiu de nível!\nLvl %d\nATK = %d\nHP = %d\n\n", lvlP, atkP, hpPT);
                                                    sleep(5);
                                                }
                                            }
                                            else // Você não matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro sobreviveu levando %d de dano e tendo ainda %d de HP\n", atkP, hpM);
                                                sleep(2);
                                                
                                                printf("\nO monstro ataca!\n");
                                                hpP = hpP - atkM;
                                                sleep(2);
                                                
                                                if(hpP <= 0) // Você morreu
                                                {
                                                    printf("\nVocê morreu...\n");
                                                    sleep(3);
                                                    
                                                    printf("\n\t\t\t\t\t\t\t\tFim de jogo\n");
                                                    sleep(3);
                                                    return 0;
                                                }
                                                else // Você sobreviveu e não matou o monstro
                                                {
                                                    printf("Você levou %d de dano!\n", atkM);
                                                    sleep(2);
                                                    briga = -1;
                                                }
                                            }
                                        }
                                        break;
                                    }
                                        
                                    case 2: // Você fugiu
                                    {
                                        printf("\nVocê fugiu\n");
                                        
                                        break;
                                    }
                                    break;
                                }
                                break;
                                
                            }
                            
                            case 2: // monstro 3
                            {
                                hpM = 80 + (7.5 * lvlP); atkM = 20 + (7.5 * lvlP); xpM = 500 * (lvlP);
                                
                                printf("Você achou um pobre que gosta de ser pobre, o que fazer?\n1 - Atacar\n2 - Fugir\nOpção: ");
                                scanf("%d", &optAct);
                                
                                switch(optAct)
                                {
                                    case 1: // Iniciou a briga com o monstro 
                                    {
                                        hpP = hpPT;
                                        for(briga = 0; briga == 0; briga++)
                                        {
                                            hpM = hpM - atkP;
                                            
                                            if(hpM <= 0) // Você matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro morreu!\n");
                                                sleep(2);
                                                
                                                printf("\n\t\t\t\t\t\t\tVitória!\n\n + %d XP\n", xpM);
                                                
                                                i += 3;
                                                xpP += 1000 * pow(lvlP, 0.8);
                                                printf("\nVocê ganhou %.0f XP\n", 1000 * pow(lvlP, 0.8));
                                                sleep(5);
                                                
                                                if(xpP >= 1000 * pow(lvlP, 2))
                                                {
                                                    lvlP += 1;
                                                    xpP += - 1000 * (lvlP * (lvlP / 5));
                                                    atkP += 5 + lvlP * 2;
                                                    hpPT += 5 + lvlP * 2;
                                                    printf("\nSubiu de nível!\nLvl %d\nATK = %d\nHP = %d\n\n", lvlP, atkP, hpPT);
                                                    sleep(5);
                                                }
                                            }
                                            else // Você não matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro sobreviveu levando %d de dano e tendo ainda %d de HP\n", atkP, hpM);
                                                sleep(2);
                                                
                                                printf("\nO monstro ataca!\n");
                                                hpP = hpP - atkM;
                                                sleep(2);
                                                
                                                if(hpP <= 0) // Você morreu
                                                {
                                                    printf("\nVocê morreu...\n");
                                                    sleep(3);
                                                    
                                                    printf("\n\t\t\t\t\t\t\t\tFim de jogo\n");
                                                    sleep(3);
                                                    return 0;
                                                }
                                                else // Você sobreviveu e não matou o monstro
                                                {
                                                    printf("Você levou %d de dano!\n", atkM);
                                                    sleep(2);
                                                    briga = -1;
                                                }
                                            }
                                        }
                                        break;
                                    }
                                        
                                    case 2: // Você fugiu
                                    {
                                        printf("\nVocê fugiu\n");
                                        
                                        break;
                                    }
                                    break;
                                }
                                break;
                            }
                            
                            case 3: // monstro 4
                            {
                                hpM = 50 + (7.5 * lvlP); atkM = 20 + (7.5 * lvlP); xpM = 750 * (lvlP);
                                
                                printf("Você achou um jogador de video game, o que fazer?\n1 - Atacar\n2 - Fugir\nOpção: ");
                                scanf("%d", &optAct);
                                
                                switch(optAct)
                                {
                                    case 1: // Iniciou a briga com o monstro
                                    {
                                        hpP = hpPT;
                                        for(briga = 0; briga == 0; briga++)
                                        {
                                            hpM = hpM - atkP;
                                            
                                            if(hpM <= 0) // Você matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro morreu!\n");
                                                sleep(2);
                                                
                                                printf("\n\t\t\t\t\t\t\tVitória!\n\n + %d XP\n", xpM);
                                                
                                                i += 2;
                                                xpP += 1000 * pow(lvlP, 0.8);
                                                printf("\nVocê ganhou %.0f XP\n", 1000 * pow(lvlP, 0.8));
                                                sleep(5);
                                                
                                                if(xpP >= 1000 * pow(lvlP, 2))
                                                {
                                                    lvlP += 1;
                                                    xpP += - 1000 * (lvlP * (lvlP / 5));
                                                    atkP += 5 + lvlP * 2;
                                                    hpPT += 5 + lvlP * 2;
                                                    printf("\nSubiu de nível!\nLvl %d\nATK = %d\nHP = %d\n\n", lvlP, atkP, hpPT);
                                                    sleep(5);
                                                }
                                            }
                                            else // Você não matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro sobreviveu levando %d de dano e tendo ainda %d de HP\n", atkP, hpM);
                                                sleep(2);
                                                
                                                printf("\nO monstro ataca!\n");
                                                hpP = hpP - atkM;
                                                sleep(2);
                                                
                                                if(hpP <= 0) // Você morreu
                                                {
                                                    printf("\nVocê morreu...\n");
                                                    sleep(3);
                                                    
                                                    printf("\n\t\t\t\t\t\t\t\tFim de jogo\n");
                                                    sleep(3);
                                                    return 0;
                                                }
                                                else // Você sobreviveu e não matou o monstro
                                                {
                                                    printf("Você levou %d de dano!\n", atkM);
                                                    sleep(2);
                                                    briga = -1;
                                                }
                                            }
                                        }
                                        break;
                                    }
                                        
                                    case 2: // Você fugiu
                                    {
                                        printf("\nVocê fugiu\n");
                                        
                                        break;
                                    }
                                    break;
                                }
                                break;
                            }
                            
                            case 4: // monstro 5
                            {
                                hpM = 100 + (7.5 * lvlP); atkM = 50 + (7.5 * lvlP); xpM = 900 * (lvlP);
                                hpM = 100; atkM = 80; xpM = 15000;
                                
                                printf("Você achou aluno que tirou 0, o que fazer?\n1 - Atacar\n2 - Fugir\nOpção: ");
                                scanf("%d", &optAct);
                                
                                switch(optAct)
                                {
                                    case 1: // Iniciou a briga com o monstro
                                    {
                                        hpP = hpPT;
                                        for(briga = 0; briga == 0; briga++)
                                        {
                                            hpM = hpM - atkP;
                                            
                                            if(hpM <= 0) // Você matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro morreu!\n");
                                                sleep(2);
                                                
                                                printf("\n\t\t\t\t\t\t\tVitória!\n\n + %d XP\n", xpM);
                                                
                                                treino = 0;
                                                xpP += 1000 * pow(lvlP, 0.8);
                                                printf("\nVocê ganhou %.0f XP\n", 1000 * pow(lvlP, 0.8));
                                                sleep(5);
                                                
                                                if(xpP >= 1000 * pow(lvlP, 2))
                                                {
                                                    lvlP += 1;
                                                    xpP += - 1000 * (lvlP * (lvlP / 5));
                                                    atkP += 5 + lvlP * 2;
                                                    hpPT += 5 + lvlP * 2;
                                                    printf("\nSubiu de nível!\nLvl %d\nATK = %d\nHP = %d\n\n", lvlP, atkP, hpPT);
                                                    sleep(5);
                                                }
                                            }
                                            else // Você não matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro sobreviveu levando %d de dano e tendo ainda %d de HP\n", atkP, hpM);
                                                sleep(2);
                                                
                                                printf("\nO monstro ataca!\n");
                                                hpP = hpP - atkM;
                                                sleep(2);
                                                
                                                if(hpP <= 0) // Você morreu
                                                {
                                                    printf("\nVocê morreu...\n");
                                                    sleep(3);
                                                    
                                                    printf("\n\t\t\t\t\t\t\t\tFim de jogo\n");
                                                    sleep(3);
                                                    return 0;
                                                }
                                                else // Você sobreviveu e não matou o monstro
                                                {
                                                    printf("Você levou %d de dano!\n", atkM);
                                                    sleep(2);
                                                    briga = -1;
                                                }
                                            }
                                        }
                                        break;
                                    }
                                        
                                    case 2: // Você fugiu
                                    {
                                        printf("\nVocê fugiu\n");
                                        
                                        break;
                                    }
                                    break;
                                }
                                break;
                            }
                        }
                        break;
                    }
                    case 3:
                    
                    printf("\nFim de Jogo\n");
                    sleep(3);
                    
                    return 0;
                }
            }
            break;
        }
        case 2:
        {
            hpPT = 50; atkP = 50; lvlP = 3; medP = 0;
            
            for(menu = 0, i = 0; 1 == 1; i++) // começou o jogo como Bernardo
            {
                medP = lvlP / 3;
                printf("--------------+######+-------------------------------\n------------+#########+------------------------------\n----------+#############+----------------------------\n----.----#########################++-----------------\n-------+##############################++-------------\n------+##################################+-----------\n-----#####################################+----------\n---+#######################################+---------\n---###########################################+------\n--#############################################+-----\n--+#############################################+----\n-++#############+++++++++#######################+----\n+############+++-----++++++++++++++##############+---\n############+-.--------++++++++++++++############+---\n########++++-...--------++++++++++++++###############\n-+#####++--....---------+++++++++++++++++############\n-+#####+-.....-----------+++++++++++++++++###########\n-#####+--........--------++++++++++++++++++##########\n-#####+-.........-------+++++++++++++++++++##########\n-+###+-.........---------++++++++++++++++++++########\n++###+.....--+++####+++--++++++##########++++######--\n+++##+....-++----+++++++--+++###++++++++##++++####+--\n+--+#+...-----+++###++----++++++########++++++###++--\n++--++-..--++-++######+---+++########+++##++++###+###\n++---+-.----------++++----++##+++++++++++++++###+####\n+++-------.----+++++---..-+++++++++++++++++++##+#####\n+++------....--------....--++++++++++++++++++##+#####\n+++-.---.....---------...-+++++++++++++++++++++######\n++++-.--....----++++--..---+++++++++++++++++++++#####\n++++-.--....----+++--+++---+#####++++++++++++#++----+\n+++++++-...----++---++++++++#######++++++++++++-+++++\n+++++++-...---+++--------+++++++++++++++++++#++++++++\n++++++++-..---+++##+------++++#+###++++++++++++++++++\n++++++++--.----+++++----.-----++#++++++++++####++++++\n+++++++++-------+---.---++++++++++++++++++###########\n+++++++++++-----+--------+++++++++++++#++############\n+++++++++++-------------++++++++++++#################\n+++++++++++--------------++++++++++##################\n+++++++++#+---------------+++++++########+++#########\n+++++####+--.-------------+++++++#######++++-+#######\n+++####+--.--------++--------++#######++++++--#######\n#######+-...---------+++++++++####+++++++++++++######\n########-...-------------++++++++++++++++++++++######\n########---.-.---------------+++++++++++++++--+######\n########--+-.-.--------------++++++++++++++---+######\n########+....--.------------++++++++++++###----+#####\n########+.....#++-------------++++++++####+---+######\n#########-....+#####++++-----++++#########-++++######\n");
                printf("\nProf. Ernesto:\nHP: %d\tATK: %d\nLvl: %d\tMedalhas: %d\n", hpPT, atkP, lvlP, medP);
                
                printf("\nSelecione uma opção\n1 - Treinar\n2 - Explorar\n3 - Sair\nOpção: ");
                scanf("%d", &optMenu);
                
                switch(optMenu)
                {
                    case 1:
                    
                    if(treino == 0)
                    {
                        printf("\nVocê está treinando...\n");
                        sleep(3);
                        
                        printf("5\n");
                        sleep(1);
                        printf("4\n");
                        sleep(1);
                        printf("3\n");
                        sleep(1);
                        printf("2\n");
                        sleep(1);
                        printf("1...\n");
                        sleep(1);
                        
                        xpP += 1000 * pow(lvlP, 0.8);
                        treino = 1;
                        
                        printf("\nVocê ganhou %.0f XP\n", 1000 * pow(lvlP, 0.8));
                        sleep(5);
                        
                        if(xpP >= 1000 * pow(lvlP, 2))
                        {
                            lvlP += 1;
                            xpP += - 1000 * (lvlP * (lvlP / 5));
                            atkP += 5 + lvlP * 2;
                            hpPT += 5 + lvlP * 2;
                            printf("\nSubiu de nível!\nLvl %d\nATK = %d\nHP = %d\n\n", lvlP, atkP, hpPT);
                            sleep(5);
                        }
                    }
                    else
                    {
                        printf("\nVocê está cansado demais para treinar...\n");
                        i += 4;
                        sleep(5);
                    }
                    
                    break;
                    
                    case 2:
                    {
                        switch(i % 5)
                        {
                            case 0: // monstro 1
                            {
                                hpM = 50 + (7.5 * lvlP); atkM = 10 + (7.5 * lvlP); xpM = 250 * (lvlP);
                                
                                printf("Você achou um problema do computador que se materializou, o que fazer?\n1 - Atacar\n2 - Fugir\nOpção: ");
                                scanf("%d", &optAct);
                                
                                switch(optAct)
                                {
                                    case 1: // Iniciou a briga com o monstro
                                    {
                                        hpP = hpPT;
                                        for(briga = 0; briga == 0; briga++)
                                        {
                                            hpM = hpM - atkP;
                                            
                                            if(hpM <= 0) // Você matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro morreu!\n");
                                                sleep(2);
                                                
                                                printf("\n\t\t\t\t\t\t\tVitória!\n\n + %d XP\n", xpM);
                                                
                                                xpP += 1000 * pow(lvlP, 0.8);
                                                printf("\nVocê ganhou %.0f XP\n", 1000 * pow(lvlP, 0.8));
                                                sleep(5);
                                                
                                                if(xpP >= 1000 * pow(lvlP, 2))
                                                {
                                                    lvlP += 1;
                                                    xpP += - 1000 * (lvlP * (lvlP / 5));
                                                    atkP += 5 + lvlP * 2;
                                                    hpPT += 5 + lvlP * 2;
                                                    printf("\nSubiu de nível!\nLvl %d\nATK = %d\nHP = %d\n\n", lvlP, atkP, hpPT);
                                                    sleep(5);
                                                }
                                            }
                                            else // Você não matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro sobreviveu levando %d de dano e tendo ainda %d de HP\n", atkP, hpM);
                                                sleep(2);
                                                
                                                printf("\nO monstro ataca!\n");
                                                hpP = hpP - atkM;
                                                sleep(2);
                                                
                                                if(hpP <= 0) // Você morreu
                                                {
                                                    printf("\nVocê morreu...\n");
                                                    sleep(3);
                                                    
                                                    printf("\n\t\t\t\t\t\t\t\tFim de jogo\n");
                                                    sleep(3);
                                                    return 0;
                                                }
                                                else // Você sobreviveu e não matou o monstro
                                                {
                                                    printf("Você levou %d de dano!\n", atkM);
                                                    sleep(2);
                                                    briga = -1;
                                                }
                                            }
                                        }
                                        break;
                                    }
                                        
                                    case 2: // Você fugiu
                                    {
                                        printf("\nVocê fugiu\n");
                                        
                                        break;
                                    }
                                    break;
                                }
                                break;
                            }
                            
                            case 1: // monstro 2
                            {
                                hpM = 75 + (7.5 * lvlP); atkM = 15 + (7.5 * lvlP); xpM = 300 * (lvlP);
                                
                                printf("Você achou um programador do mal, o que fazer?\n1 - Atacar\n2 - Fugir\nOpção: ");
                                scanf("%d", &optAct);
                                
                                switch(optAct)
                                {
                                    case 1: // Iniciou a briga com o monstro
                                    {
                                        hpP = hpPT;
                                        for(briga = 0; briga == 0; briga++)
                                        {
                                            hpM = hpM - atkP;
                                            
                                            if(hpM <= 0) // Você matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro morreu!\n");
                                                sleep(2);
                                                
                                                printf("\n\t\t\t\t\t\t\tVitória!\n\n + %d XP\n", xpM);
                                                
                                                i += 2;
                                                xpP += 1000 * pow(lvlP, 0.8);
                                                printf("\nVocê ganhou %.0f XP\n", 1000 * pow(lvlP, 0.8));
                                                sleep(5);
                                                
                                                if(xpP >= 1000 * pow(lvlP, 2))
                                                {
                                                    lvlP += 1;
                                                    xpP += - 1000 * (lvlP * (lvlP / 5));
                                                    atkP += 5 + lvlP * 2;
                                                    hpPT += 5 + lvlP * 2;
                                                    printf("\nSubiu de nível!\nLvl %d\nATK = %d\nHP = %d\n\n", lvlP, atkP, hpPT);
                                                    sleep(5);
                                                }
                                            }
                                            else // Você não matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro sobreviveu levando %d de dano e tendo ainda %d de HP\n", atkP, hpM);
                                                sleep(2);
                                                
                                                printf("\nO monstro ataca!\n");
                                                hpP = hpP - atkM;
                                                sleep(2);
                                                
                                                if(hpP <= 0) // Você morreu
                                                {
                                                    printf("\nVocê morreu...\n");
                                                    sleep(3);
                                                    
                                                    printf("\n\t\t\t\t\t\t\t\tFim de jogo\n");
                                                    sleep(3);
                                                    return 0;
                                                }
                                                else // Você sobreviveu e não matou o monstro
                                                {
                                                    printf("Você levou %d de dano!\n", atkM);
                                                    sleep(2);
                                                    briga = -1;
                                                }
                                            }
                                        }
                                        break;
                                    }
                                        
                                    case 2: // Você fugiu
                                    {
                                        printf("\nVocê fugiu\n");
                                        
                                        break;
                                    }
                                    break;
                                }
                                break;
                            }
                            
                            case 2: // monstro 3
                            {
                                hpM = 80 + (7.5 * lvlP); atkM = 20 + (7.5 * lvlP); xpM = 500 * (lvlP);
                                
                                printf("Você achou uma pistola com vida, o que fazer?\n1 - Atacar\n2 - Fugir\nOpção: ");
                                scanf("%d", &optAct);
                                
                                switch(optAct)
                                {
                                    case 1: // Iniciou a briga com o monstro 
                                    {
                                        hpP = hpPT;
                                        for(briga = 0; briga == 0; briga++)
                                        {
                                            hpM = hpM - atkP;
                                            
                                            if(hpM <= 0) // Você matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro morreu!\n");
                                                sleep(2);
                                                
                                                printf("\n\t\t\t\t\t\t\tVitória!\n\n + %d XP\n", xpM);
                                                
                                                i += 3;
                                                xpP += 1000 * pow(lvlP, 0.8);
                                                printf("\nVocê ganhou %.0f XP\n", 1000 * pow(lvlP, 0.8));
                                                sleep(5);
                                                
                                                if(xpP >= 1000 * pow(lvlP, 2))
                                                {
                                                    lvlP += 1;
                                                    xpP += - 1000 * (lvlP * (lvlP / 5));
                                                    atkP += 5 + lvlP * 2;
                                                    hpPT += 5 + lvlP * 2;
                                                    printf("\nSubiu de nível!\nLvl %d\nATK = %d\nHP = %d\n\n", lvlP, atkP, hpPT);
                                                    sleep(5);
                                                }
                                            }
                                            else // Você não matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro sobreviveu levando %d de dano e tendo ainda %d de HP\n", atkP, hpM);
                                                sleep(2);
                                                
                                                printf("\nO monstro ataca!\n");
                                                hpP = hpP - atkM;
                                                sleep(2);
                                                
                                                if(hpP <= 0) // Você morreu
                                                {
                                                    printf("\nVocê morreu...\n");
                                                    sleep(3);
                                                    
                                                    printf("\n\t\t\t\t\t\t\t\tFim de jogo\n");
                                                    sleep(3);
                                                    return 0;
                                                }
                                                else // Você sobreviveu e não matou o monstro
                                                {
                                                    printf("Você levou %d de dano!\n", atkM);
                                                    sleep(2);
                                                    briga = -1;
                                                }
                                            }
                                        }
                                        break;
                                    }
                                        
                                    case 2: // Você fugiu
                                    {
                                        printf("\nVocê fugiu\n");
                                        
                                        break;
                                    }
                                    break;
                                }
                                break;
                            }
                            
                            case 3: // monstro 4
                            {
                                hpM = 50 + (7.5 * lvlP); atkM = 20 + (7.5 * lvlP); xpM = 750 * (lvlP);
                                
                                printf("Você achou um assaltante feito de código binário, o que fazer?\n1 - Atacar\n2 - Fugir\nOpção: ");
                                scanf("%d", &optAct);
                                
                                switch(optAct)
                                {
                                    case 1: // Iniciou a briga com o monstro
                                    {
                                        hpP = hpPT;
                                        for(briga = 0; briga == 0; briga++)
                                        {
                                            hpM = hpM - atkP;
                                            
                                            if(hpM <= 0) // Você matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro morreu!\n");
                                                sleep(2);
                                                
                                                printf("\n\t\t\t\t\t\t\tVitória!\n\n + %d XP\n", xpM);
                                                
                                                i += 2;
                                                xpP += 1000 * pow(lvlP, 0.8);
                                                printf("\nVocê ganhou %.0f XP\n", 1000 * pow(lvlP, 0.8));
                                                sleep(5);
                                                
                                                if(xpP >= 1000 * pow(lvlP, 2))
                                                {
                                                    lvlP += 1;
                                                    xpP += - 1000 * (lvlP * (lvlP / 5));
                                                    atkP += 5 + lvlP * 2;
                                                    hpPT += 5 + lvlP * 2;
                                                    printf("\nSubiu de nível!\nLvl %d\nATK = %d\nHP = %d\n\n", lvlP, atkP, hpPT);
                                                    sleep(5);
                                                }
                                            }
                                            else // Você não matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro sobreviveu levando %d de dano e tendo ainda %d de HP\n", atkP, hpM);
                                                sleep(2);
                                                
                                                printf("\nO monstro ataca!\n");
                                                hpP = hpP - atkM;
                                                sleep(2);
                                                
                                                if(hpP <= 0) // Você morreu
                                                {
                                                    printf("\nVocê morreu...\n");
                                                    sleep(3);
                                                    
                                                    printf("\n\t\t\t\t\t\t\t\tFim de jogo\n");
                                                    sleep(3);
                                                    return 0;
                                                }
                                                else // Você sobreviveu e não matou o monstro
                                                {
                                                    printf("Você levou %d de dano!\n", atkM);
                                                    sleep(2);
                                                    briga = -1;
                                                }
                                            }
                                        }
                                        break;
                                    }
                                        
                                    case 2: // Você fugiu
                                    {
                                        printf("\nVocê fugiu\n");
                                        
                                        break;
                                    }
                                    break;
                                }
                                break;
                            }
                            
                            case 4: // monstro 5
                            {
                                hpM = 100 + (17.5 * lvlP); atkM = 50 + (17.5 * lvlP); xpM = 900 * (lvlP);
                                hpM = 100; atkM = 80; xpM = 15000;
                                
                                printf("Você achou um samurai bugado, o que fazer?\n1 - Atacar\n2 - Fugir\nOpção: ");
                                scanf("%d", &optAct);
                                
                                switch(optAct)
                                {
                                    case 1: // Iniciou a briga com o monstro
                                    {
                                        hpP = hpPT;
                                        for(briga = 0; briga == 0; briga++)
                                        {
                                            hpM = hpM - atkP;
                                            
                                            if(hpM <= 0) // Você matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro morreu!\n");
                                                sleep(2);
                                                
                                                printf("\n\t\t\t\t\t\t\tVitória!\n\n + %d XP\n", xpM);
                                                
                                                treino = 0;
                                                xpP += 1000 * pow(lvlP, 0.8);
                                                printf("\nVocê ganhou %.0f XP\n", 1000 * pow(lvlP, 0.8));
                                                sleep(5);
                                                
                                                if(xpP >= 1000 * pow(lvlP, 2))
                                                {
                                                    lvlP += 1;
                                                    xpP += - 1000 * (lvlP * (lvlP / 5));
                                                    atkP += 5 + lvlP * 2;
                                                    hpPT += 5 + lvlP * 2;
                                                    printf("\nSubiu de nível!\nLvl %d\nATK = %d\nHP = %d\n\n", lvlP, atkP, hpPT);
                                                    sleep(5);
                                                }
                                            }
                                            else // Você não matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro sobreviveu levando %d de dano e tendo ainda %d de HP\n", atkP, hpM);
                                                sleep(2);
                                                
                                                printf("\nO monstro ataca!\n");
                                                hpP = hpP - atkM;
                                                sleep(2);
                                                
                                                if(hpP <= 0) // Você morreu
                                                {
                                                    printf("\nVocê morreu...\n");
                                                    sleep(3);
                                                    
                                                    printf("\n\t\t\t\t\t\t\t\tFim de jogo\n");
                                                    sleep(3);
                                                    return 0;
                                                }
                                                else // Você sobreviveu e não matou o monstro
                                                {
                                                    printf("Você levou %d de dano!\n", atkM);
                                                    sleep(2);
                                                    briga = -1;
                                                }
                                            }
                                        }
                                        break;
                                    }
                                        
                                    case 2: // Você fugiu
                                    {
                                        printf("\nVocê fugiu\n");
                                        
                                        break;
                                    }
                                    break;
                                }
                                break;
                            }
                        }
                        break;
                    }
                    case 3:
                    
                    printf("\nFim de Jogo\n");
                    sleep(3);
                    
                    return 0;
                }
            }
            break;
        }
        case 3:
        {
            hpPT = 25; atkP = 30; lvlP = 1; medP = 0;
            
            for(menu = 0, i = 0; 1 == 1; i++) // começou o jogo como Bernardo
            {
                medP = lvlP / 3;
                printf("                                                     \n\n\n                    ################                 \n                #####+++++++----++++###              \n            ###+++++++++++++++----+#+###             \n          #+++##+++++---++#######+-+#####            \n        ##+#+++#++++###########+##+++#######         \n      #########++######################++-+##        \n      #######+++########++##+##########+++++##       \n      #############-...................#+++-+##      \n      ###########+-....................#+++-+##      \n       ########----.....................#++++##      \n       ######+-----.....................###++##      \n       #####+----####--..................######      \n        ####+--##########......+#######----###       \n       #####+----++###+----...######+--+-#####       \n       ##+##+--++++##.+#+--.--#+###-+##--######      \n      #++#-#+--.-.-+++-.----.-..-++#.--+-##-####     \n      #++###+--.+----...----.-.....+---.-##-#++#     \n      #####+++-.........--++-+..........--+#-##      \n      #+--##++-.---.....+--...-.....---.-++--##      \n        ##--#+--........###++##-........+--##        \n          ###+--.........+---..........-###          \n             ##--....#+........+#+.....+#            \n             ##+--....+##+++++++-....-+##            \n               ##+--......-++-.....-###              \n                ###+--...........-+##                \n             ########---.......-+#+##                \n           ####-########+++++-+#+--####              \n          ####+-+############++--..+.+###            \n      ########----+###+-------...--..+######         \n   ###########------++++-----..--....+#########      \n ####+##+##+#++-----....-++-..-......-+##########  # \n#++#####+#+####-.........-+++#-......-#########+#####\n#+########+####+........+##+###+-....++##############\n################-.....-+######+#++..++-##############\n");
                printf("\nBernardo:\nHP: %d\tATK: %d\nLvl: %d\tMedalhas: %d\n", hpPT, atkP, lvlP, medP);
                
                printf("\nSelecione uma opção\n1 - Treinar\n2 - Explorar\n3 - Sair\nOpção: ");
                scanf("%d", &optMenu);
                
                switch(optMenu)
                {
                    case 1:
                    
                    if(treino == 0)
                    {
                        printf("\nVocê está treinando...\n");
                        sleep(3);
                        
                        printf("5\n");
                        sleep(1);
                        printf("4\n");
                        sleep(1);
                        printf("3\n");
                        sleep(1);
                        printf("2\n");
                        sleep(1);
                        printf("1...\n");
                        sleep(1);
                        
                        xpP += 1000 * pow(lvlP, 0.8);
                        treino = 1;
                        
                        printf("\nVocê ganhou %.0f XP\n", 1000 * pow(lvlP, 0.8));
                        sleep(5);
                        
                        if(xpP >= 1000 * pow(lvlP, 2))
                        {
                            lvlP += 1;
                            xpP += - 1000 * (lvlP * (lvlP / 5));
                            atkP += 5 + lvlP * 2;
                            hpPT += 5 + lvlP * 2;
                            printf("\nSubiu de nível!\nLvl %d\nATK = %d\nHP = %d\n\n", lvlP, atkP, hpPT);
                            sleep(5);
                        }
                    }
                    else
                    {
                        printf("\nVocê está cansado demais para treinar...\n");
                        i += 4;
                        sleep(5);
                    }
                    
                    break;
                    
                    case 2:
                    {
                        switch(i % 5)
                        {
                            case 0: // monstro 1
                            {
                                hpM = 50 + (7.5 * lvlP); atkM = 10 + (7.5 * lvlP); xpM = 250 * (lvlP);
                                
                                printf("Você achou um vírus, o que fazer?\n1 - Atacar\n2 - Fugir\nOpção: ");
                                scanf("%d", &optAct);
                                
                                switch(optAct)
                                {
                                    case 1: // Iniciou a briga com o monstro
                                    {
                                        hpP = hpPT;
                                        for(briga = 0; briga == 0; briga++)
                                        {
                                            hpM = hpM - atkP;
                                            
                                            if(hpM <= 0) // Você matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro morreu!\n");
                                                sleep(2);
                                                
                                                printf("\n\t\t\t\t\t\t\tVitória!\n\n + %d XP\n", xpM);
                                                
                                                xpP += 1000 * pow(lvlP, 0.8);
                                                printf("\nVocê ganhou %.0f XP\n", 1000 * pow(lvlP, 0.8));
                                                sleep(5);
                                                
                                                if(xpP >= 1000 * pow(lvlP, 2))
                                                {
                                                    lvlP += 1;
                                                    xpP += - 1000 * (lvlP * (lvlP / 5));
                                                    atkP += 5 + lvlP * 2;
                                                    hpPT += 5 + lvlP * 2;
                                                    printf("\nSubiu de nível!\nLvl %d\nATK = %d\nHP = %d\n\n", lvlP, atkP, hpPT);
                                                    sleep(5);
                                                }
                                            }
                                            else // Você não matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro sobreviveu levando %d de dano e tendo ainda %d de HP\n", atkP, hpM);
                                                sleep(2);
                                                
                                                printf("\nO monstro ataca!\n");
                                                hpP = hpP - atkM;
                                                sleep(2);
                                                
                                                if(hpP <= 0) // Você morreu
                                                {
                                                    printf("\nVocê morreu...\n");
                                                    sleep(3);
                                                    
                                                    printf("\n\t\t\t\t\t\t\t\tFim de jogo\n");
                                                    sleep(3);
                                                    return 0;
                                                }
                                                else // Você sobreviveu e não matou o monstro
                                                {
                                                    printf("Você levou %d de dano!\n", atkM);
                                                    sleep(2);
                                                    briga = -1;
                                                }
                                            }
                                        }
                                        break;
                                    }
                                        
                                    case 2: // Você fugiu
                                    {
                                        printf("\nVocê fugiu\n");
                                        
                                        break;
                                    }
                                    break;
                                }
                                break;
                            }
                            
                            case 1: // monstro 2
                            {
                                hpM = 75 + (7.5 * lvlP); atkM = 15 + (7.5 * lvlP); xpM = 300 * (lvlP);
                                
                                printf("Você achou um programador, o que fazer?\n1 - Atacar\n2 - Fugir\nOpção: ");
                                scanf("%d", &optAct);
                                
                                switch(optAct)
                                {
                                    case 1: // Iniciou a briga com o monstro
                                    {
                                        hpP = hpPT;
                                        for(briga = 0; briga == 0; briga++)
                                        {
                                            hpM = hpM - atkP;
                                            
                                            if(hpM <= 0) // Você matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro morreu!\n");
                                                sleep(2);
                                                
                                                printf("\n\t\t\t\t\t\t\tVitória!\n\n + %d XP\n", xpM);
                                                
                                                i += 2;
                                                xpP += 1000 * pow(lvlP, 0.8);
                                                printf("\nVocê ganhou %.0f XP\n", 1000 * pow(lvlP, 0.8));
                                                sleep(5);
                                                
                                                if(xpP >= 1000 * pow(lvlP, 2))
                                                {
                                                    lvlP += 1;
                                                    xpP += - 1000 * (lvlP * (lvlP / 5));
                                                    atkP += 5 + lvlP * 2;
                                                    hpPT += 5 + lvlP * 2;
                                                    printf("\nSubiu de nível!\nLvl %d\nATK = %d\nHP = %d\n\n", lvlP, atkP, hpPT);
                                                    sleep(5);
                                                }
                                            }
                                            else // Você não matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro sobreviveu levando %d de dano e tendo ainda %d de HP\n", atkP, hpM);
                                                sleep(2);
                                                
                                                printf("\nO monstro ataca!\n");
                                                hpP = hpP - atkM;
                                                sleep(2);
                                                
                                                if(hpP <= 0) // Você morreu
                                                {
                                                    printf("\nVocê morreu...\n");
                                                    sleep(3);
                                                    
                                                    printf("\n\t\t\t\t\t\t\t\tFim de jogo\n");
                                                    sleep(3);
                                                    return 0;
                                                }
                                                else // Você sobreviveu e não matou o monstro
                                                {
                                                    printf("Você levou %d de dano!\n", atkM);
                                                    sleep(2);
                                                    briga = -1;
                                                }
                                            }
                                        }
                                        break;
                                    }
                                        
                                    case 2: // Você fugiu
                                    {
                                        printf("\nVocê fugiu\n");
                                        
                                        break;
                                    }
                                    break;
                                }
                                break;
                                
                            }
                            
                            case 2: // monstro 3
                            {
                                hpM = 80 + (7.5 * lvlP); atkM = 20 + (7.5 * lvlP); xpM = 500 * (lvlP);
                                
                                printf("Você achou um monstro com gravata, o que fazer?\n1 - Atacar\n2 - Fugir\nOpção: ");
                                scanf("%d", &optAct);
                                
                                switch(optAct)
                                {
                                    case 1: // Iniciou a briga com o monstro 
                                    {
                                        hpP = hpPT;
                                        for(briga = 0; briga == 0; briga++)
                                        {
                                            hpM = hpM - atkP;
                                            
                                            if(hpM <= 0) // Você matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro morreu!\n");
                                                sleep(2);
                                                
                                                printf("\n\t\t\t\t\t\t\tVitória!\n\n + %d XP\n", xpM);
                                                
                                                i += 3;
                                                xpP += 1000 * pow(lvlP, 0.8);
                                                printf("\nVocê ganhou %.0f XP\n", 1000 * pow(lvlP, 0.8));
                                                sleep(5);
                                                
                                                if(xpP >= 1000 * pow(lvlP, 2))
                                                {
                                                    lvlP += 1;
                                                    xpP += - 1000 * (lvlP * (lvlP / 5));
                                                    atkP += 5 + lvlP * 2;
                                                    hpPT += 5 + lvlP * 2;
                                                    printf("\nSubiu de nível!\nLvl %d\nATK = %d\nHP = %d\n\n", lvlP, atkP, hpPT);
                                                    sleep(5);
                                                }
                                            }
                                            else // Você não matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro sobreviveu levando %d de dano e tendo ainda %d de HP\n", atkP, hpM);
                                                sleep(2);
                                                
                                                printf("\nO monstro ataca!\n");
                                                hpP = hpP - atkM;
                                                sleep(2);
                                                
                                                if(hpP <= 0) // Você morreu
                                                {
                                                    printf("\nVocê morreu...\n");
                                                    sleep(3);
                                                    
                                                    printf("\n\t\t\t\t\t\t\t\tFim de jogo\n");
                                                    sleep(3);
                                                    return 0;
                                                }
                                                else // Você sobreviveu e não matou o monstro
                                                {
                                                    printf("Você levou %d de dano!\n", atkM);
                                                    sleep(2);
                                                    briga = -1;
                                                }
                                            }
                                        }
                                        break;
                                    }
                                        
                                    case 2: // Você fugiu
                                    {
                                        printf("\nVocê fugiu\n");
                                        
                                        break;
                                    }
                                    break;
                                }
                                break;
                            }
                            
                            case 3: // monstro 4
                            {
                                hpM = 50 + (7.5 * lvlP); atkM = 20 + (7.5 * lvlP); xpM = 750 * (lvlP);
                                
                                printf("Você achou um assaltante, o que fazer?\n1 - Atacar\n2 - Fugir\nOpção: ");
                                scanf("%d", &optAct);
                                
                                switch(optAct)
                                {
                                    case 1: // Iniciou a briga com o monstro
                                    {
                                        hpP = hpPT;
                                        for(briga = 0; briga == 0; briga++)
                                        {
                                            hpM = hpM - atkP;
                                            
                                            if(hpM <= 0) // Você matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro morreu!\n");
                                                sleep(2);
                                                
                                                printf("\n\t\t\t\t\t\t\tVitória!\n\n + %d XP\n", xpM);
                                                
                                                i += 2;
                                                xpP += 1000 * pow(lvlP, 0.8);
                                                printf("\nVocê ganhou %.0f XP\n", 1000 * pow(lvlP, 0.8));
                                                sleep(5);
                                                
                                                if(xpP >= 1000 * pow(lvlP, 2))
                                                {
                                                    lvlP += 1;
                                                    xpP += - 1000 * (lvlP * (lvlP / 5));
                                                    atkP += 5 + lvlP * 2;
                                                    hpPT += 5 + lvlP * 2;
                                                    printf("\nSubiu de nível!\nLvl %d\nATK = %d\nHP = %d\n\n", lvlP, atkP, hpPT);
                                                    sleep(5);
                                                }
                                            }
                                            else // Você não matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro sobreviveu levando %d de dano e tendo ainda %d de HP\n", atkP, hpM);
                                                sleep(2);
                                                
                                                printf("\nO monstro ataca!\n");
                                                hpP = hpP - atkM;
                                                sleep(2);
                                                
                                                if(hpP <= 0) // Você morreu
                                                {
                                                    printf("\nVocê morreu...\n");
                                                    sleep(3);
                                                    
                                                    printf("\n\t\t\t\t\t\t\t\tFim de jogo\n");
                                                    sleep(3);
                                                    return 0;
                                                }
                                                else // Você sobreviveu e não matou o monstro
                                                {
                                                    printf("Você levou %d de dano!\n", atkM);
                                                    sleep(2);
                                                    briga = -1;
                                                }
                                            }
                                        }
                                        break;
                                    }
                                        
                                    case 2: // Você fugiu
                                    {
                                        printf("\nVocê fugiu\n");
                                        
                                        break;
                                    }
                                    break;
                                }
                                break;
                            }
                            
                            case 4: // monstro 5
                            {
                                hpM = 100 + (7.5 * lvlP); atkM = 50 + (7.5 * lvlP); xpM = 900 * (lvlP);
                                hpM = 100; atkM = 80; xpM = 15000;
                                
                                printf("Você achou dois caras em uma moto (mas só um desceu dela), o que fazer?\n1 - Atacar\n2 - Fugir\nOpção: ");
                                scanf("%d", &optAct);
                                
                                switch(optAct)
                                {
                                    case 1: // Iniciou a briga com o monstro
                                    {
                                        hpP = hpPT;
                                        for(briga = 0; briga == 0; briga++)
                                        {
                                            hpM = hpM - atkP;
                                            
                                            if(hpM <= 0) // Você matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro morreu!\n");
                                                sleep(2);
                                                
                                                printf("\n\t\t\t\t\t\t\tVitória!\n\n + %d XP\n", xpM);
                                                
                                                treino = 0;
                                                xpP += 1000 * pow(lvlP, 0.8);
                                                printf("\nVocê ganhou %.0f XP\n", 1000 * pow(lvlP, 0.8));
                                                sleep(5);
                                                
                                                if(xpP >= 1000 * pow(lvlP, 2))
                                                {
                                                    lvlP += 1;
                                                    xpP += - 1000 * (lvlP * (lvlP / 5));
                                                    atkP += 5 + lvlP * 2;
                                                    hpPT += 5 + lvlP * 2;
                                                    printf("\nSubiu de nível!\nLvl %d\nATK = %d\nHP = %d\n\n", lvlP, atkP, hpPT);
                                                    sleep(5);
                                                }
                                            }
                                            else // Você não matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro sobreviveu levando %d de dano e tendo ainda %d de HP\n", atkP, hpM);
                                                sleep(2);
                                                
                                                printf("\nO monstro ataca!\n");
                                                hpP = hpP - atkM;
                                                sleep(2);
                                                
                                                if(hpP <= 0) // Você morreu
                                                {
                                                    printf("\nVocê morreu...\n");
                                                    sleep(3);
                                                    
                                                    printf("\n\t\t\t\t\t\t\t\tFim de jogo\n");
                                                    sleep(3);
                                                    return 0;
                                                }
                                                else // Você sobreviveu e não matou o monstro
                                                {
                                                    printf("Você levou %d de dano!\n", atkM);
                                                    sleep(2);
                                                    briga = -1;
                                                }
                                            }
                                        }
                                        break;
                                    }
                                        
                                    case 2: // Você fugiu
                                    {
                                        printf("\nVocê fugiu\n");
                                        
                                        break;
                                    }
                                    break;
                                }
                                break;
                            }
                        }
                        break;
                    }
                    case 3:
                    
                    printf("\nFim de Jogo\n");
                    sleep(3);
                    
                    return 0;
                }
            }
            break;
        }
        case 4:
        {
            printf("4? Porque 4? Você viu algum 4 por ai?\n");
            sleep(3);
            
            printf("Parando pra pensar...\n");
            sleep(2);
            
            printf("Porque não?\n");
            sleep(2);
            
            hpPT = 60; atkP = 85; lvlP = 5;
            
            for(menu = 0, i = 0; 1 == 1; i++) // começou o jogo como Mark
            {
                medP = lvlP / 3;
                printf("-----+++++++--++-++++++++++++-++++++++++++++++++++###\n++-----++++++++-+--++++++##+#+++++++++++++++++++++++#\n+++------+++++++--+##############++++++++++++++++++++\n+++++------++++++#++##+++##++####+##+++++++++++-+++++\n+++++++------+++####+-..----..--+###+++++++++++++--++\n-+++++++-----+##.                .-####++++-++++++---\n----++++-+++##-....               ...-##+-++--+++++--\n-------++++##-.....               .....##+---+--+++++\n--------++##--...                 ......##+--------++\n++-------##---..                  ......+##+---------\n++++--+--##---..                 ......---#+---------\n+++++++++#++--...                 .....--.##+--------\n-+++++++###+++--++#+++--...------......---##++-------\n--+++++-+##++-.....-+##+---+####-..-++-++###++-------\n----+++++##+++#########-  -####+---++-#+####++++++---\n------++.+#--+#+###-....  ...#########+-####++++++++-\n+------###+-..-++#+-....  ....++--+++++--##.-++++++++\n+++----+--+-.......  ... .... ..----...-+#+##---+++++\n++++-----#+-..      ...  .....   ......-##+#+----++++\n+-++++--.-+-..    .-...  .-.-..  ...---+##+--.-----+-\n-----++---+-.....----........-.......--+++---...-----\n----------+-----+-.-++#######-+-...--++#---...-..----\n...-------++++##+-----#####+---+++++++++........-.---\n.....-----++---+#--+#######+--++++++++#++. ......-...\n.......--##+--.-+###++-++######+--+++#+.   . .......-\n.--++######+-...-+#-+#########+-.-++#####+.    ......\n+++########++-.......      .+-..--+##########+-......\n++++#######-+-. .--  .... .++...-+#######+++++++++++-\n++++######+--+. ..+. .....##....+########++++++++++++\n++++#######--+- .--++--++##--..+########++###++++++++\n+++++######--++...-+######+-..+################++++++\n+++++######+---+-....+##+. ..+###########++++#####+++\n++++++######----++------..-+######+####++++++++#+++++\n+++++#+#####+--+++-+#############+###++++##++++++++++\n###++#########-++++-++##############+####++++++++++++\n++####+#########++++++#################+++++++++#####\n++++################################+++++#+##########\n####++++#############################################\n###########################################++++######\n");
                printf("\nMark Zuckerberg:\nHP: %d\tATK: %d\tLvl: %d\tMedalhas: %d\n", hpPT, atkP, lvlP, medP);
                
                printf("\nSelecione uma opção\n1 - Treinar\n2 - Explorar\n3 - Sair\nOpção: ");
                scanf("%d", &optMenu);
                
                switch(optMenu)
                {
                    case 1:
                    
                    if(treino == 0)
                    {
                        printf("\nVocê está treinando...\n");
                        sleep(3);
                        
                        printf("5\n");
                        sleep(1);
                        printf("4\n");
                        sleep(1);
                        printf("3\n");
                        sleep(1);
                        printf("2\n");
                        sleep(1);
                        printf("1...\n");
                        sleep(1);
                        
                        xpP += 1000 * pow(lvlP, 0.8);
                        treino = 1;
                        
                        printf("\nVocê ganhou %.0f XP\n", 1000 * pow(lvlP, 0.8));
                        sleep(5);
                        
                        if(xpP >= 1000 * pow(lvlP, 2))
                        {
                            lvlP += 1;
                            xpP += - 1000 * (lvlP * (lvlP / 5));
                            atkP += 5 + lvlP * 2;
                            hpPT += 5 + lvlP * 2;
                            printf("\nSubiu de nível!\nLvl %d\nATK = %d\nHP = %d\n\n", lvlP, atkP, hpPT);
                            sleep(5);
                        }
                    }
                    else
                    {
                        printf("\nVocê está cansado demais para treinar...\n");
                        i += 4;
                        sleep(5);
                    }
                    
                    break;
                    
                    case 2:
                    {
                        switch(i % 5)
                        {
                            case 0: // monstro 1
                            {
                                hpM = 50 + (7.5 * lvlP); atkM = 10 + (7.5 * lvlP); xpM = 250 * (lvlP);
                                
                                printf("Você achou um hater, o que fazer?\n1 - Atacar\n2 - Fugir\nOpção: ");
                                scanf("%d", &optAct);
                                
                                switch(optAct)
                                {
                                    case 1: // Iniciou a briga com o monstro
                                    {
                                        hpP = hpPT;
                                        for(briga = 0; briga == 0; briga++)
                                        {
                                            hpM = hpM - atkP;
                                            
                                            if(hpM <= 0) // Você matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro morreu!\n");
                                                sleep(2);
                                                
                                                printf("\n\t\t\t\t\t\t\tVitória!\n\n + %d XP\n", xpM);
                                                
                                                xpP += 1000 * pow(lvlP, 0.8);
                                                printf("\nVocê ganhou %.0f XP\n", 1000 * pow(lvlP, 0.8));
                                                sleep(5);
                                                
                                                if(xpP >= 1000 * pow(lvlP, 2))
                                                {
                                                    lvlP += 1;
                                                    xpP += - 1000 * (lvlP * (lvlP / 5));
                                                    atkP += 5 + lvlP * 2;
                                                    hpPT += 5 + lvlP * 2;
                                                    printf("\nSubiu de nível!\nLvl %d\nATK = %d\nHP = %d\n\n", lvlP, atkP, hpPT);
                                                    sleep(5);
                                                }
                                            }
                                            else // Você não matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro sobreviveu levando %d de dano e tendo ainda %d de HP\n", atkP, hpM);
                                                sleep(2);
                                                
                                                printf("\nO monstro ataca!\n");
                                                hpP = hpP - atkM;
                                                sleep(2);
                                                
                                                if(hpP <= 0) // Você morreu
                                                {
                                                    printf("\nVocê morreu...\n");
                                                    sleep(3);
                                                    
                                                    printf("\n\t\t\t\t\t\t\t\tFim de jogo\n");
                                                    sleep(3);
                                                    return 0;
                                                }
                                                else // Você sobreviveu e não matou o monstro
                                                {
                                                    printf("Você levou %d de dano!\n", atkM);
                                                    sleep(2);
                                                    briga = -1;
                                                }
                                            }
                                        }
                                        break;
                                    }
                                        
                                    case 2: // Você fugiu
                                    {
                                        printf("\nVocê fugiu\n");
                                        
                                        break;
                                    }
                                    break;
                                }
                                break;
                            }
                            
                            case 1: // monstro 2
                            {
                                hpM = 75 + (7.5 * lvlP); atkM = 15 + (7.5 * lvlP); xpM = 300 * (lvlP);
                                
                                printf("Você achou um programador, o que fazer?\n1 - Atacar\n2 - Fugir\nOpção: ");
                                scanf("%d", &optAct);
                                
                                switch(optAct)
                                {
                                    case 1: // Iniciou a briga com o monstro
                                    {
                                        hpP = hpPT;
                                        for(briga = 0; briga == 0; briga++)
                                        {
                                            hpM = hpM - atkP;
                                            
                                            if(hpM <= 0) // Você matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro morreu!\n");
                                                sleep(2);
                                                
                                                printf("\n\t\t\t\t\t\t\tVitória!\n\n + %d XP\n", xpM);
                                                
                                                i += 2;
                                                xpP += 1000 * pow(lvlP, 0.8);
                                                printf("\nVocê ganhou %.0f XP\n", 1000 * pow(lvlP, 0.8));
                                                sleep(5);
                                                
                                                if(xpP >= 1000 * pow(lvlP, 2))
                                                {
                                                    lvlP += 1;
                                                    xpP += - 1000 * (lvlP * (lvlP / 5));
                                                    atkP += 5 + lvlP * 2;
                                                    hpPT += 5 + lvlP * 2;
                                                    printf("\nSubiu de nível!\nLvl %d\nATK = %d\nHP = %d\n\n", lvlP, atkP, hpPT);
                                                    sleep(5);
                                                }
                                            }
                                            else // Você não matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro sobreviveu levando %d de dano e tendo ainda %d de HP\n", atkP, hpM);
                                                sleep(2);
                                                
                                                printf("\nO monstro ataca!\n");
                                                hpP = hpP - atkM;
                                                sleep(2);
                                                
                                                if(hpP <= 0) // Você morreu
                                                {
                                                    printf("\nVocê morreu...\n");
                                                    sleep(3);
                                                    
                                                    printf("\n\t\t\t\t\t\t\t\tFim de jogo\n");
                                                    sleep(3);
                                                    return 0;
                                                }
                                                else // Você sobreviveu e não matou o monstro
                                                {
                                                    printf("Você levou %d de dano!\n", atkM);
                                                    sleep(2);
                                                    briga = -1;
                                                }
                                            }
                                        }
                                        break;
                                    }
                                        
                                    case 2: // Você fugiu
                                    {
                                        printf("\nVocê fugiu\n");
                                        
                                        break;
                                    }
                                    break;
                                }
                                break;
                                
                            }
                            
                            case 2: // monstro 3
                            {
                                hpM = 80 + (7.5 * lvlP); atkM = 20 + (7.5 * lvlP); xpM = 500 * (lvlP);
                                
                                printf("Você achou um touro, o que fazer?\n1 - Atacar\n2 - Fugir\nOpção: ");
                                scanf("%d", &optAct);
                                
                                switch(optAct)
                                {
                                    case 1: // Iniciou a briga com o monstro 
                                    {
                                        hpP = hpPT;
                                        for(briga = 0; briga == 0; briga++)
                                        {
                                            hpM = hpM - atkP;
                                            
                                            if(hpM <= 0) // Você matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro morreu!\n");
                                                sleep(2);
                                                
                                                printf("\n\t\t\t\t\t\t\tVitória!\n\n + %d XP\n", xpM);
                                                
                                                i += 2;
                                                xpP += 1000 * pow(lvlP, 0.8);
                                                printf("\nVocê ganhou %.0f XP\n", 1000 * pow(lvlP, 0.8));
                                                sleep(5);
                                                
                                                if(xpP >= 1000 * pow(lvlP, 2))
                                                {
                                                    lvlP += 1;
                                                    xpP += - 1000 * (lvlP * (lvlP / 5));
                                                    atkP += 5 + lvlP * 2;
                                                    hpPT += 5 + lvlP * 2;
                                                    printf("\nSubiu de nível!\nLvl %d\nATK = %d\nHP = %d\n\n", lvlP, atkP, hpPT);
                                                    sleep(5);
                                                }
                                            }
                                            else // Você não matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro sobreviveu levando %d de dano e tendo ainda %d de HP\n", atkP, hpM);
                                                sleep(2);
                                                
                                                printf("\nO monstro ataca!\n");
                                                hpP = hpP - atkM;
                                                sleep(2);
                                                
                                                if(hpP <= 0) // Você morreu
                                                {
                                                    printf("\nVocê morreu...\n");
                                                    sleep(3);
                                                    
                                                    printf("\n\t\t\t\t\t\t\t\tFim de jogo\n");
                                                    sleep(3);
                                                    return 0;
                                                }
                                                else // Você sobreviveu e não matou o monstro
                                                {
                                                    printf("Você levou %d de dano!\n", atkM);
                                                    sleep(2);
                                                    briga = -1;
                                                }
                                            }
                                        }
                                        break;
                                    }
                                        
                                    case 2: // Você fugiu
                                    {
                                        printf("\nVocê fugiu\n");
                                        
                                        break;
                                    }
                                    break;
                                }
                                break;
                            }
                            
                            case 3: // monstro 4
                            {
                                hpM = 50 + (7.5 * lvlP); atkM = 20 + (7.5 * lvlP); xpM = 750 * (lvlP);
                                
                                printf("Você achou um body builder, o que fazer?\n1 - Atacar\n2 - Fugir\nOpção: ");
                                scanf("%d", &optAct);
                                
                                switch(optAct)
                                {
                                    case 1: // Iniciou a briga com o monstro
                                    {
                                        hpP = hpPT;
                                        for(briga = 0; briga == 0; briga++)
                                        {
                                            hpM = hpM - atkP;
                                            
                                            if(hpM <= 0) // Você matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro morreu!\n");
                                                sleep(2);
                                                
                                                printf("\n\t\t\t\t\t\t\tVitória!\n\n + %d XP\n", xpM);
                                                
                                                i += 2;
                                                xpP += 1000 * pow(lvlP, 0.8);
                                                printf("\nVocê ganhou %.0f XP\n", 1000 * pow(lvlP, 0.8));
                                                sleep(5);
                                                
                                                if(xpP >= 1000 * pow(lvlP, 2))
                                                {
                                                    lvlP += 1;
                                                    xpP += - 1000 * (lvlP * (lvlP / 5));
                                                    atkP += 5 + lvlP * 2;
                                                    hpPT += 5 + lvlP * 2;
                                                    printf("\nSubiu de nível!\nLvl %d\nATK = %d\nHP = %d\n\n", lvlP, atkP, hpPT);
                                                    sleep(5);
                                                }
                                            }
                                            else // Você não matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro sobreviveu levando %d de dano e tendo ainda %d de HP\n", atkP, hpM);
                                                sleep(2);
                                                
                                                printf("\nO monstro ataca!\n");
                                                hpP = hpP - atkM;
                                                sleep(2);
                                                
                                                if(hpP <= 0) // Você morreu
                                                {
                                                    printf("\nVocê morreu...\n");
                                                    sleep(3);
                                                    
                                                    printf("\n\t\t\t\t\t\t\t\tFim de jogo\n");
                                                    sleep(3);
                                                    return 0;
                                                }
                                                else // Você sobreviveu e não matou o monstro
                                                {
                                                    printf("Você levou %d de dano!\n", atkM);
                                                    sleep(2);
                                                    briga = -1;
                                                }
                                            }
                                        }
                                        break;
                                    }
                                        
                                    case 2: // Você fugiu
                                    {
                                        printf("\nVocê fugiu\n");
                                        
                                        break;
                                    }
                                    break;
                                }
                                break;
                            }
                            
                            case 4: // monstro 5
                            {
                                hpM = 100 + (7.5 * lvlP); atkM = 50 + (7.5 * lvlP); xpM = 900 * (lvlP);
                                hpM = 100; atkM = 80; xpM = 15000;
                                
                                printf("Você achou um \"cereal\" killer, o que fazer?\n1 - Atacar\n2 - Fugir\nOpção: ");
                                scanf("%d", &optAct);
                                
                                switch(optAct)
                                {
                                    case 1: // Iniciou a briga com o monstro
                                    {
                                        hpP = hpPT;
                                        for(briga = 0; briga == 0; briga++)
                                        {
                                            hpM = hpM - atkP;
                                            
                                            if(hpM <= 0) // Você matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro morreu!\n");
                                                sleep(2);
                                                
                                                printf("\n\t\t\t\t\t\t\tVitória!\n\n + %d XP\n", xpM);
                                                
                                                treino = 0;
                                                xpP += 1000 * pow(lvlP, 0.8);
                                                printf("\nVocê ganhou %.0f XP\n", 1000 * pow(lvlP, 0.8));
                                                sleep(5);
                                                
                                                if(xpP >= 1000 * pow(lvlP, 2))
                                                {
                                                    lvlP += 1;
                                                    xpP += - 1000 * (lvlP * (lvlP / 5));
                                                    atkP += 5 + lvlP * 2;
                                                    hpPT += 5 + lvlP * 2;
                                                    printf("\nSubiu de nível!\nLvl %d\nATK = %d\nHP = %d\n\n", lvlP, atkP, hpPT);
                                                    sleep(5);
                                                }
                                            }
                                            else // Você não matou o monstro
                                            {
                                                printf("\nVocê ataca!\n");
                                                sleep(2);
                                                
                                                printf("O monstro sobreviveu levando %d de dano e tendo ainda %d de HP\n", atkP, hpM);
                                                sleep(2);
                                                
                                                printf("\nO monstro ataca!\n");
                                                hpP = hpP - atkM;
                                                sleep(2);
                                                
                                                if(hpP <= 0) // Você morreu
                                                {
                                                    printf("\nVocê morreu...\n");
                                                    sleep(3);
                                                    
                                                    printf("\n\t\t\t\t\t\t\t\tFim de jogo\n");
                                                    sleep(3);
                                                    return 0;
                                                }
                                                else // Você sobreviveu e não matou o monstro
                                                {
                                                    printf("Você levou %d de dano!\n", atkM);
                                                    sleep(2);
                                                    briga = -1;
                                                }
                                            }
                                        }
                                        break;
                                    }
                                        
                                    case 2: // Você fugiu
                                    {
                                        printf("\nVocê fugiu\n");
                                        
                                        break;
                                    }
                                    break;
                                }
                                break;
                            }
                        }
                        break;
                    }
                    case 3:
                    
                    printf("\nFim de Jogo\n");
                    sleep(3);
                    
                    return 1;
                }
            }
            break;
        }
    }
    return 0;
}