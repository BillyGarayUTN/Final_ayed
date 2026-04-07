/*
una dimension- estatica

*/

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

struct tProd{
    int CodP;
    char Desc[30];
    float PU;
};tProd RP;   // registro prodcuto

struct tVta{
    int CodP;
    int Cant;
};tVta RV;    // registro venta

struct tVP{
    int CodP;
    char Desc[30];
    float PU;
    float TotF;
}; tVP VP [500];   // vector de ventas por producto

void cargarProdsAVect(FILE *Prods, tVP VP[], int &tope){
    int i = 0;
    fread(&RP, sizeof(RP),1,Prods);
    while (!feof(Prods)){
        VP[i].CodP = RP.CodP;
        strcpy(VP[i].Desc, RP.Desc);
        VP[i].PU = RP.PU;
        VP[i].TotF = 0;
        i++;
        fread(&RP, sizeof(RP),1,Prods);
    }    
    tope = i-1;
}

int buscarProEnVec( int codP , tVP VP[], int tope){
    int i = 0;
    while (i <= tope && VP[i].CodP != codP){
        i++;
    }
    if (i <= tope){
        return i;
    }else{
        return -1;
    }
}

void mostrarVec(tVP VP[], int tope){

    cout <<"Ventas por producto: "<< endl;
    for (int i = 0; i <= tope; i++){
        cout <<"Codigo: "<< VP[i].CodP <<" Descripcion: "<< VP[i].Desc 
            <<" Precio Unitario: "<< VP[i].PU <<" Total Facturado: "<< VP[i].TotF << endl;
    }
}

void cargarInfoAArchivosBinarios() {
    // --- util para copiar a char[30] con terminador y truncado seguro ---
    auto copiarDesc = [](char destino[30], const char* fuente) {
        // limpia y copia hasta 29 chars, dejando '\0' al final
        memset(destino, 0, 30);
        strncpy(destino, fuente, 29);
        destino[29] = '\0';
    };

    // ===== productos =====
    FILE* Prods = fopen("PROD.txt", "wb");   // binario: crea/trunca
    if (!Prods) {
        cout << "Error: no pude abrir PROD.txt para escritura binaria.\n";
        return;
    }

    tProd p;

    p.CodP = 101; copiarDesc(p.Desc, "Shampoo");      p.PU = 1200.50f;
    if (fwrite(&p, sizeof(p), 1, Prods) != 1) cout << "Aviso: no pude escribir p101\n";

    p.CodP = 102; copiarDesc(p.Desc, "Perfume");      p.PU = 4500.00f;
    if (fwrite(&p, sizeof(p), 1, Prods) != 1) cout << "Aviso: no pude escribir p102\n";

    p.CodP = 103; copiarDesc(p.Desc, "Crema facial"); p.PU = 2300.75f;
    if (fwrite(&p, sizeof(p), 1, Prods) != 1) cout << "Aviso: no pude escribir p103\n";

    p.CodP = 104; copiarDesc(p.Desc, "Esmalte");      p.PU = 950.00f;
    if (fwrite(&p, sizeof(p), 1, Prods) != 1) cout << "Aviso: no pude escribir p104\n";

    fclose(Prods);

    // ===== ventas =====
    FILE* Vtas = fopen("VENTAS.txt", "wb");  // binario: crea/trunca
    if (!Vtas) {
        cout << "Error: no pude abrir VENTAS.txt para escritura binaria.\n";
        return;
    }

    tVta v;
    v.CodP = 101; v.Cant = 5; if (fwrite(&v, sizeof(v), 1, Vtas) != 1) cout << "Aviso: no pude escribir v1\n";
    v.CodP = 103; v.Cant = 2; if (fwrite(&v, sizeof(v), 1, Vtas) != 1) cout << "Aviso: no pude escribir v2\n";
    v.CodP = 102; v.Cant = 1; if (fwrite(&v, sizeof(v), 1, Vtas) != 1) cout << "Aviso: no pude escribir v3\n";
    v.CodP = 101; v.Cant = 3; if (fwrite(&v, sizeof(v), 1, Vtas) != 1) cout << "Aviso: no pude escribir v4\n";
    v.CodP = 104; v.Cant = 7; if (fwrite(&v, sizeof(v), 1, Vtas) != 1) cout << "Aviso: no pude escribir v5\n";

    fclose(Vtas);

    cout << "OK: se generaron PROD.txt y VENTAS.txt (binarios) con datos de ejemplo.\n";
}

int main(){
    int tope = 0;
    FILE *Prods;
    FILE *Vtas;

    cargarInfoAArchivosBinarios(); // funcion para crear los archivos binarios

    Prods = fopen("PROD.txt", "rb");    // binario
    Vtas = fopen("VENTAS.txt", "rb");  // binario

    cargarProdsAVect(Prods, VP,tope);

    fread(&RV, sizeof(RV),1,Vtas);

    while (!feof(Vtas)){

        int pos = buscarProEnVec(RV.CodP,VP,tope); 

        int fact = VP[pos].PU * RV.Cant;

        VP[pos].TotF += fact;

        fread(&RV, sizeof(RV),1,Vtas);
    }

    // mostrar el vector de ventas por producto
    mostrarVec(VP,tope);

    fclose (Prods);
    fclose (Vtas);

    return 0;
}


