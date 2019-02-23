#include<bits/stdc++.h>
using namespace std;
void clearScr();
int checkWinner();
void RockPaperScissor();
map<int, pair<char><char> > m;

int main()
{
    string choice;
    int countwin[2];
    int i=0;
    int comp;
    char res;
    int turn=0;
    unsigned seed;
    int player;
    int comp;
    char select;
    do{
    system("cls");
    RockPaperScissor();
    cout<<"Your choice\n";
    cin>>choice;
    string ch=tolower(choice);
    if(ch=="rock"){
            choice=1;
            m[1]->first.first="R";
        cout<<"Rock"<<endl;
    }
    else if(ch=="paper")
    {
        choice=2;
        m[2]->first.first="P";
        cout<<"Paper"<<endl;
    }
    else if(ch=="scissor")
    {
        choice=3;
        m[1]->first.first="S";
        cout<<"Scissor"<<endl;
    }
    else{
        cout<<"Provide Valid Input\n";
        i--;
    }

    seed=time(0);
    srand(seed);
    comp=rand()%3+1;
    if (comp==1) //Computer rock
        {
        select = 1;
        m[1]->second.second="R";
        cout << "Rock\n";
        }

  else if (comp==2) //Computer paper
       {
        select = 2;
        m[2]->second.second="P";
       cout << "Paper\n";
        }
  else if (comp==3)
        {
        select = 3;
        m[3]->second.second="S";
        cout << "Scissors\n";
        }
    }while(i<3);
    for(int j=0;j<m.size();j++)
    {
        cout<<m->first.first<<" "<<m->first.second<<endl;
      }

    }

}
void RockPaperScissor()
{
    cout<<"1.>Rock"<<'\t'<<'\t'<<"2.>Paper"<<'\t'<<"3.>Scissor"<<endl;

}

