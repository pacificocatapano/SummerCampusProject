/*
 * main.cpp
 *
 *  Created on: 2 set 2020
 *      Author: Pacifico
 */

#include <iostream>
#include <string.h>
#include <stdio.h>
#include "morseConvert.h"
using namespace std;

int main()
{    char key;
    bool loop = true;
    while(loop)
    {
        bool toMorse=true;
        string input;
        string output = "";
        int node = 0;
        string sub;
        cout << "Inserisci una parola in codice morse " << endl;
        getline(cin, input);
        if(input[1]=='.' || input[1]=='-')
        {
            toMorse=false;
        }
        else
        {
            toMorse=true;
        }
        if(toMorse)
        {
            for(int i=0;i<input.length();i++)
            {
                if(i!=0)
                {
                    output+=" ";
                }
                output = output + charToMorse(input[i]);
            }
        }
        else{
            for(int i = 0;i<=input.length();i++)
            {
                if(input[i]==' ')
                {
                    sub = input.substr(node,i-node);
                    output+=morseToChar(sub);
                    node = i+1;
                }
                if(i==input.length()-1)
                {
                    sub = input.substr(node,i+1-node);
                    output+=morseToChar(sub);
                    node = i+1;
                }
            }
        }
        cout << output << endl;
        cout << "Premi r per ricaricare oppure un altro tasto per uscire" << endl;
        cin >> key;
        if(key!='r')
        {
            loop=false;
        }
        cin.clear();
        cin.ignore();
        cout << endl << endl;
    }

}


