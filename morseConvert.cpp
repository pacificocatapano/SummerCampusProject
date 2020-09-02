/*
 * morseConvert.cpp
 *
 *  Created on: 2 set 2020
 *      Author: Pacifico
 */
#include <iostream>
#include <string.h>
#include <stdio.h>
#include "morseConvert.h"
using namespace std;

string charToMorse(char letter)
{
    switch(letter)
    {
        case 'a': case 'A':
        return ".-"; break;
        case 'b': case 'B':
        return "-..."; break;
        case 'c': case 'C':
        return "-.-."; break;
        case 'd': case 'D':
        return "-.."; break;
        case 'e': case 'E':
        return "."; break;
        case 'f': case 'F':
        return "..-."; break;
        case 'g': case 'G':
        return "--."; break;
        case 'h': case 'H':
        return "...."; break;
        case 'i': case 'I':
        return ".."; break;
        case 'j': case 'J':
        return ".---"; break;
        case 'k': case 'K':
        return "-.-"; break;
        case 'l': case 'L':
        return ".-.."; break;
        case 'm': case 'M':
        return "--"; break;
        case 'n': case 'N':
        return "-."; break;
        case 'o': case 'O':
        return "---"; break;
        case 'p': case 'P':
        return ".--."; break;
        case 'q': case 'Q':
        return "--.-"; break;
        case 'r': case 'R':
        return ".-."; break;
        case 's': case 'S':
        return "..."; break;
        case 't': case 'T':
        return "-"; break;
        case 'u': case 'U':
        return "..-"; break;
        case 'v': case 'V':
        return "...-"; break;
        case 'w': case 'W':
        return ".--"; break;
        case 'x': case 'X':
        return "-..-"; break;
        case 'y': case 'Y':
        return "-.--"; break;
        case 'z': case 'Z':
        return "--.."; break;
        default:
        return " "; break;
    }
}

string morseToChar(string morse)
{

        if(morse == ".-")
        {return "a";}
        else if(morse == "-...")
        {return "b";}
        else if(morse == "-.-.")
        {return "c";}
        else if(morse == "-..")
        {return "d";}
        else if(morse == ".")
        {return "e";}
        else if(morse == "..-.")
        {return "f";}
        else if(morse == "--.")
        {return "g";}
        else if(morse == "....")
        {return "h";}
        else if(morse == "..")
        {return "i";}
        else if(morse == ".---")
        {return "j";}
        else if(morse == "-.-")
        {return "k";}
        else if(morse == ".-..")
        {return "l";}
        else if(morse == "--")
        {return "m";}
        else if(morse == "-.")
        {return "n";}
        else if(morse == "---")
        {return "o";}
        else if(morse == ".--.")
        {return "p";}
        else if(morse == "--.-")
        {return "q";}
        else if(morse == ".-.")
        {return "r";}
        else if(morse == "...")
        {return "s";}
        else if(morse == "-")
        {return "t";}
        else if(morse == "..-")
        {return "u";}
        else if(morse == "...-")
        {return "v";}
        else if(morse == ".--")
        {return "w";}
        else if(morse == "-..-")
        {return "x";}
        else if(morse == "-.--")
        {return "y";}
        else if(morse == "--..")
        {return "z";}
        else{return " ";}
}


