#include <iostream>

using namespace std;

bool IsReflexive(bool** tab, int m)
{
    for(int i=1;i<m;++i)
    {
        if(tab[i][i]!=1)
            return false;
    }
    return true;
}
bool IsNotReflexive(bool** tab, int m)
{
    for(int i=1;i<m;++i)
    {
        if(tab[i][i])
            return false;
    }
    return true;
}
bool IsSymetric(bool** tab, int m)
{
    for(int i=1; i<m; ++i)
    {
        for(int j=i+1; j<m; ++j)
            if(tab[i][j]!=tab[j][i])
                return false;
    }
    return true;
}
bool IsNotSymetric(bool** tab, int m)
{
    for(int i=1; i<m; ++i)
    {
        for(int j=i+1; j<m; ++j)
            if(tab[i][j] && tab[j][i])
                return false;
    }
    return true;
}
bool IsTransitive(bool** tab, int m)
{
    bool** tabSquared = new bool*[m];
    for(int i=0;i<m;++i)
        tabSquared[i] = new bool[m];
    for(int i=0;i<m;++i)
        for(int j=0;j<m;++j)
    {
        tabSquared[i][j]=0;
    }
    for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			for (int k = 0; k < m; ++k)
			{
				tabSquared[i][j] += tab[i][k] * tab[k][j];
			}
		}
    }
    for (int i = 1; i < m; ++i)
	{
		for (int j = 1; j < m; ++j)
		{
			if (tabSquared[i][j] == 1 && tab[i][j] != 1)
				return false;
		}
    }
    return true;
}
bool IsSerial(bool** tab, int m)
{
    for(int i=1; i<m-1;++i)
        for(int j=i+1; j<m; ++j)
            if(!tab[i][j] || tab[j][i])
                return false;
    return true;
}


int main()
{
    bool** tab = new bool*[101];
    for(int i=0;i<101;++i)
        tab[i] = new bool[101];
    for(int i=0;i<101;++i)
        for(int j=0;j<101;++j)
    {
        tab[i][j]=0;
    }
    int a,b,maximum=0;
    while(cin>>a>>b)
    {
        if(maximum<a)
            maximum=a;
        if(maximum<b)
            maximum=b;
        tab[a][b]=true;
    }
    if(maximum ==0)
    {
        cout<<"X\n";
        return 0;
    }
    bool Z = IsReflexive(tab, maximum);
    bool PZ = IsNotReflexive(tab, maximum);
    bool S = IsSymetric(tab, maximum);
    bool AS = IsNotSymetric(tab, maximum);
    bool P = IsTransitive(tab, maximum);
    bool SP = IsSerial(tab, maximum);
    bool RR = Z && S && P;
    bool RPL = Z && AS && P && SP;
    bool RPCz = Z && AS && P;

    if(Z)
        cout<<"Z ";
    if(PZ)
        cout<<"PZ ";
    if(S)
        cout<<"S ";
    if(AS)
        cout<<"AS ";
    if(P)
        cout<<"P ";
    if(SP)
        cout<<"SP ";
    if(Z + PZ + AS + S + P + SP == 0)
    {
        cout<<"X";
        return 0;
    }
    else
        cout<<endl;
    if(RR)
        cout<<"RR ";
    if(RPL)
        cout<<"RPL";
    else if(RPCz)
        cout<<"RPCz";
    if(RR + RPL + RPCz == 0)
        cout<<"X";
    return 0;
}
