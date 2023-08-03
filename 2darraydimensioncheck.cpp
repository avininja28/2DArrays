#include <iostream>
using namespace std;
main()
{
    int i,j,a,b,c,d;
    cout<<"Enter number of rows in Mat A: ";
    cin>>a;
    cout<<"Enter number of columns in Mat A: ";
    cin>>b;
    cout<<"Enter number of rows in Mat B: ";
    cin>>c;
    cout<<"Enter number of columns in Mat B: ";
    cin>>d;
    int matA[a][b]={};
    int matB[c][d]={};
    int matsum[a][b]={};

    switch(a!=c || b!=d)
    {
        case 1:
        cout<<"Inalid marix dimensions. Please try again."<<endl;
        break;

        default:
        for (i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                cout<<"Enter matrix element A: ";
                cin>>matA[i][j];
            }
        }
        for (i=0;i<c;i++)
        {
            for(j=0;j<d;j++)
            {
                cout<<"Enter matrix element B: ";
                cin>>matB[i][j];
            }
        }
        cout<<"Matrix A: "<<endl;
        for (i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                cout<<" "<<matA[i][j];
            }
            cout<<endl;
        }
        cout<<"Matrix B: "<<endl;
        for (i=0;i<c;i++)
        {
            for(j=0;j<d;j++)
            {
                cout<<" "<<matB[i][j];
            }
            cout<<endl;
        }
        cout<<"Matrix Sum: "<<endl;
        for (i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                matsum[i][j]=matA[i][j]+matB[i][j];
                cout<<" "<<matsum[i][j];
            }
            cout<<endl;
        }
    }
}