#include <iostream>

    using namespace std;

    void re(int t,char c){
        for(int i=0;i<t;i++)
            cout<<c;
    }

    int main(){
        int l = 0;
        int suma = 0;
        char a;
        std::string Line="";
        while(getline(std::cin,Line)){
            for (int i = 0; i < Line.size(); i++){
                a = Line[i];
                l = a - 48;
                if((a > '0') and ( a <= '9'))
                    suma += l;
                else if(a == 'b'){
                    re(suma,' ');
                    suma = 0;
                }
                else if(((a>='A') and (a<='Z')) or (a == '*')){
                    re(suma,a);
                    suma = 0;
                }
                else if(a== '!')
                    cout<<endl;

            }
                cout<<endl;
        }
        return 0;
    }
