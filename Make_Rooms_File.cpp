#include <iostream>
#include<fstream>
using namespace std;

class room
{
public:
    int AC1, NAC1, AC2, NAC2, AC3, NAC3, AC4, NAC4, AC6, NAC6;
};
room A, B, C, D, E, F, G, H, J, K, L, Q;

int main()
{
    A.AC1=1; A.NAC1=1; A.AC2=0; A.NAC2=4; A.AC3=0; A.NAC3=0; A.AC4=6; A.NAC4=4; A.AC6=0; A.NAC6=3;
    B.AC1=1; B.NAC1=0; B.AC2=1; B.NAC2=0; B.AC3=6; B.NAC3=7; B.AC4=0; B.NAC4=1; B.AC6=0; B.NAC6=18;
    C.AC1=0; C.NAC1=0; C.AC2=0; C.NAC2=8; C.AC3=0; C.NAC3=0; C.AC4=0; C.NAC4=6; C.AC6=0; C.NAC6=0;
    D.AC1=64; D.NAC1=94; D.AC2=0; D.NAC2=0; D.AC3=0; D.NAC3=0; D.AC4=0; D.NAC4=0; D.AC6=0; D.NAC6=0;
    E.AC1=0; E.NAC1=0; E.AC2=0; E.NAC2=4; E.AC3=0; E.NAC3=0; E.AC4=0; E.NAC4=0; E.AC6=0; E.NAC6=0;
    F.AC1=0; F.NAC1=0; F.AC2=6; F.NAC2=3; F.AC3=0; F.NAC3=0; F.AC4=0; F.NAC4=6; F.AC6=0; F.NAC6=0;
    G.AC1=8; G.NAC1=233; G.AC2=0; G.NAC2=0; G.AC3=0; G.NAC3=0; G.AC4=7; G.NAC4=2; G.AC6=0; G.NAC6=0;
    H.AC1=9; H.NAC1=1; H.AC2=0; H.NAC2=0; H.AC3=0; H.NAC3=7; H.AC4=0; H.NAC4=0; H.AC6=0; H.NAC6=2;
    J.AC1=2; J.NAC1=8; J.AC2=0; J.NAC2=0; J.AC3=0; J.NAC3=785; J.AC4=0; J.NAC4=0; J.AC6=0; J.NAC6=6;
    K.AC1=0; K.NAC1=0; K.AC2=0; K.NAC2=0; K.AC3=0; K.NAC3=0; K.AC4=6; K.NAC4=0; K.AC6=5; K.NAC6=0;
    L.AC1=1; L.NAC1=0; L.AC2=4; L.NAC2=2; L.AC3=6; L.NAC3=0; L.AC4=3; L.NAC4=0; L.AC6=6; L.NAC6=0;
    Q.AC1=0; Q.NAC1=0; Q.AC2=7; Q.NAC2=0; Q.AC3=4; Q.NAC3=0; Q.AC4=8; Q.NAC4=0; Q.AC6=9; Q.NAC6=0;

    ofstream fout("Rooms");
    fout.write((char*)&A,sizeof(A));
    fout.write((char*)&B,sizeof(B));
    fout.write((char*)&C,sizeof(C));
    fout.write((char*)&D,sizeof(D));
    fout.write((char*)&E,sizeof(E));
    fout.write((char*)&F,sizeof(F));
    fout.write((char*)&G,sizeof(G));
    fout.write((char*)&H,sizeof(H));
    fout.write((char*)&J,sizeof(J));
    fout.write((char*)&K,sizeof(K));
    fout.write((char*)&L,sizeof(L));
    fout.write((char*)&Q,sizeof(Q));
    fout.close();
}
