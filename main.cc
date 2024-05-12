#include <iostream>
#include <cstdlib>
#include <ctime>
#include "baralho.h"
#include <string>
using namespace std;

int main()
{
    srand(time(nullptr));
    
    cartas* baralho, *odio;
    inicializaLista(baralho);

    string naipe;
    int n,ourosC = 0, pausC = 0, espadasC = 0, copasC = 0 ;
    
    odio = baralho;
    for (int i = 1; i <= 52; i++)
    {   
        int existe = 0;
        int rand_naipe = rand() % 4 ;
        

        
        if (rand_naipe == 0 && ourosC <= 13)
        {   
            naipe = "ouros";
            cout << "entrou1" << endl;
            
            if (ourosC == 0)
            {
                n = rand() % 13 + 1 ;
                baralho = PUSH(baralho, n, naipe);
            }
            
            
            while (odio != NULL )
            {
                cout << "ent" << endl;
                n = rand() % 13 + 1 ;
                /*
                if (ourosC == 0 || (n != odio->valor && odio->naipes != naipe)){
                    baralho = PUSH(baralho, n, naipe);
                    cout << "entrou3" << endl;
                    break;
                }*/
                odio = odio->link;
                

            }
            cout << "entrou4" << endl;
            ourosC++;
            cout <<ourosC << endl;
        }
        cout << "entrou5" << endl;
        
    }
    puts(baralho);
    
}
    /*
    for (int i = 0; i < 52; i++)
    {
        int n = rand() % 10 + 1 ;
        baralho = PUSH(baralho, n);
        //cout << n << " " ;
    }*/
    
    
    
        /*
    for (int i = 0; i <= 52; i++)
    {   
        int existe = 0;
        int rand_naipe = rand() % 4 ;
        cout << "entrou" <<endl;

        
        if (rand_naipe == 0 && ourosC <= 13)
        {   
            naipe = "ouros";
            ourosC++;
                        cout << "entrou" <<endl;

            for (int j = 0; j <= i; j++)
            {   
                n = rand() % 13 + 1 ;
                
                if (n == baralho->valor && baralho->naipes == naipe)
                    existe = 1;
            }
            if (existe == 0)
                baralho = PUSH(baralho, n, naipe);
                
        }
        
        else if (rand_naipe == 1 && pausC <=13)
        {
            naipe = "paus";
            pausC++;
            
            for (int j = 0; j <= i; j++)
            {
                n = rand() % 13 + 1 ;
                if (n == baralho->valor && baralho->naipes == naipe)
                    existe = 1;
            }
            if (existe == 0)
                baralho = PUSH(baralho, n, naipe);
                
                
                
        }else if (rand_naipe ==2 && espadasC <=13)
        {
            naipe = "espadas";
            espadasC++;
            
            for (int j = 0; j <= i; j++)
            {
                n = rand() % 13 + 1 ;
                if (n == baralho->valor && baralho->naipes == naipe)
                    existe = 1;
            }
            if (existe == 0)
                baralho = PUSH(baralho, n, naipe);
                
                
                
        }else if (rand_naipe == 3 && copasC <=13)
        {
            naipe = "copas";
            copasC++;
            
            for (int j = 0; j <= i; j++)
            {
                n = rand() % 13 + 1 ;
                if (n == baralho->valor && baralho->naipes == naipe)
                    existe = 1;
            }
            if (existe == 0)
                baralho = PUSH(baralho, n, naipe);
        }      
    }*/