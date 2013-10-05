#include <iostream>
#include <stdio.h>
#include <vector> //crear delimitador
    using namespace std;

    vector<string> split(string str, string delimitador){
        vector<string> cadena;
        size_t lastPos = 0, pos;

        pos = str.find(delimitador);
        str += delimitador;
        while( pos != string::npos){
            cadena.push_back(str.substr(lastPos,pos-lastPos));
            lastPos = pos + delimitador.length();
            pos = str.find(delimitador, lastPos);
        }
        return cadena;
    }
    int proceso(string a){
        return isalpha(a[0]) > 0;
    }


    int main(){
        string palabra="";
        int acum  = 0;
        fflush(stdin);
        while(getline(cin,palabra)){
            acum = 0;
            vector<string> cadena = split(palabra," ");
            vector<string>::iterator it;
            for(it = cadena.begin(); it!= cadena.end(); it++)
                acum += proceso(*it);
            cout<<acum<<endl;
            palabra = "";
            fflush(stdin);
        }
        return 0;

    }
