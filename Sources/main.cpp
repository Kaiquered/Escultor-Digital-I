/****************************************************************

Universidade Federal do Rio Grande do Norte

Projeto desenvolvido na disciplina DCA1202: Programação Avançada

Desenvolvido por: Kaíque Gomes Machado , Marlucy Barbosa Costa

Orientação: Prof. Dr. Agostinho De Medeiros Brito Junior

2019
*****************************************************************
*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cutbox.h>
#include <cutellipsoid.h>
#include <cutsphere.h>
#include <cutvoxel.h>
#include <figurageometrica.h>
#include <putbox.h>
#include <putellipsoid.h>
#include <putsphere.h>
#include <putvoxel.h>
#include <sculptor.h>
#include <vector>
using namespace std;

int main(){

    vector <FiguraGeometrica*> v;

    int dx = 0, dy = 0, dz = 0;
    char select =0;

    cout << "Projeto Escultor Digital Parte 2" << endl << endl;
    cout << "Digite o valor da Opcao desejada:" << endl << endl;
    cout << "1-Exemplo da Bandeira de Pernambuco" << endl;
    cout << "2-Interpretador de Arquivos" << endl;
    cout << "3-Exemplo com outras funcionalidades implementadas" << endl  << endl;

    cin >> select;

    if(select == '1'){

         Sculptor desenho(200,200,200);

         v.push_back(new Putbox(9,46,10,27,11,12,0.1,0.1,0.5020,1.0)); //parte azul
         v.push_back(new Putbox(9,46,1,10,11,12,0.99,0.99,0.99,1.0)); // parte branca

         v.push_back(new Putbox(27,28,2,9,11,12,0.99,0.0,0.0,1.0)); // cruz
         v.push_back(new Putbox(25,30,6,7,11,12,0.99,0.0,0.0,1.0)); // cruz

         v.push_back(new Putbox(18,37,21,22,11,12,0.99,0.0,0.0,1.0)); //topoarco
         v.push_back(new Putbox(18,37,20,21,11,12,0.99,0.7843137255,0.0,1.0)); //topoarco
         v.push_back(new Putbox(18,37,19,20,11,12,0.1,0.5019,0.1,1)); //topoarco

         v.push_back(new Putbox(14,15,10,16,11,12,0.1,0.5019,0.1,1)); // verde base

         v.push_back(new Putbox(13,14,10,16,11,12,0.99,0.7843137255,0.0,1.0)); //amarelo base

         v.push_back(new Putbox(12,13,10,16,11,12,0.99,0.0,0.0,1.0)); //vermelho base

         v.push_back(new Putbox(40,41,10,16,11,12,0.1,0.5019,0.1,1)); // verde espelho

         v.push_back(new Putbox(41,42,10,16,11,12,0.99,0.7843137255,0.0,1.0)); //amarelo espelho

         v.push_back(new Putbox(42,43,10,16,11,12,0.99,0.0,0.0,1.0)); //vermelho espelho

         int xg=15,yg=16; //inclinação+ verde
         for(int i=0;i<4;i++){
         v.push_back(new Putvoxel(xg,yg,11,0.1,0.5019,0.1,1));
           xg++;
           yg++;
         }

         int xy=14,yy=16;  //inclinação+ amarela
         for(int i=0;i<5;i++){
         v.push_back(new Putvoxel(xy,yy,11,0.99,0.7843137255,0.0,1.0));
           xy++;
           yy++;
         }

         int xr=13,yr=16; //inclinação+ vermelha
         for(int i=0;i<6;i++){
         v.push_back(new Putvoxel(xr,yr,11,0.99,0.0,0.0,1.0));
           xr++;
           yr++;
         }

         int xr_=41,yr_=16; //inclinação- vermelha
         for(int i=0;i<6;i++){
         v.push_back(new Putvoxel(xr_,yr_,11,0.99,0.0,0.0,1.0));
           xr_--;
           yr_++;
         }

         int xy_=40,yy_=16; //inclinação- amarelo
         for(int i=0;i<5;i++){
         v.push_back(new Putvoxel(xy_,yy_,11,0.99,0.7843137255,0.0,1.0));
           xy_--;
           yy_++;
         }

         int xg_=39,yg_=16; //inclinação- verde
         for(int i=0;i<4;i++){
         v.push_back(new Putvoxel(xg_,yg_,11,0.1,0.5019,0.1,1));
           xg_--;
           yg_++;
         }

         v.push_back(new Putbox(27,28,23,26,11,12,0.999,0.7843137255,0.0,1.0)); //estrela
         v.push_back(new Putbox(26,29,24,25,11,12,0.999,0.7843137255,0.0,1.0)); // estrela

         v.push_back(new Putbox(26,29,15,16,11,12,0.999,0.7843137255,0.0,1.0)); // sol
         v.push_back(new Putbox(26,29,14,15,11,12,0.999,0.7843137255,0.0,1.0)); // sol
         v.push_back(new Putbox(26,29,13,14,11,12,0.999,0.7843137255,0.0,1.0)); // sol
         v.push_back(new Putvoxel(25,14,11,0.999,0.7843137255,0.0,1.0));  // sol
         v.push_back(new Putvoxel(29,14,11,0.999,0.7843137255,0.0,1.0));  // sol

         int xyS=25; //sol
         for(int i=0;i<3;i++){
         v.push_back(new Putvoxel(xyS,16,11,0.999,0.7843137255,0.0,1.0));
           xyS=xyS+2;
         }

         int xySe=25; //sol
         for(int i=0;i<3;i++){
         v.push_back(new Putvoxel(xySe,12,11,0.999,0.7843137255,0.0,1.0));
           xySe=xySe+2;

         }

         for(int i=0;i<v.size();i++){
             v[i]->draw(desenho);
         }
         desenho.writeOFF("Pernambuco.OFF");
    }

    else if(select == '2'){

        ifstream arquivo;
        arquivo.open("fig.txt");
        if(!arquivo.is_open()){
            cout<<"Falha na abertura do arquivo.txt!" <<endl;
            exit(1);
        }

        string s="0", comando;
        while(s!=""){
             getline(arquivo,s);
             stringstream ss(s);
            if(arquivo.good()){
                ss>>comando;
                    if(comando.compare("dim")==0){
                    ss>>dx>>dy>>dz;
                    Sculptor(dx,dy,dz);
                }else if(comando.compare("putvoxel")==0){
                    int x_,y_,z_;
                    float r_,g_,b_,a_;
                    ss >> x_ >> y_ >> z_;
                    ss >> r_ >> g_ >> b_ >> a_;
                    v.push_back(new Putvoxel(x_,y_,z_,r_,g_,b_,a_) );
                }else if(comando.compare("cutvoxel")==0){
                    int x_, y_, z_;
                    ss>>x_>>y_>>z_;
                    v.push_back(new Cutvoxel(x_,y_,z_));
                }else if(comando.compare("putbox")==0){
                    int x_0,x_1,y_0,y_1,z_0,z_1;
                    float r_,g_,b_,a_;
                    ss>>x_0>>x_1>>y_0>>y_1>>z_0>>z_1;
                    ss>>r_>>g_>>b_>>a_;
                    v.push_back(new Putbox(x_0,x_1,y_0,y_1,z_0,z_1,r_,g_,b_,a_));
                }else if(comando.compare("cutbox")==0){
                    int x_0,x_1,y_0,y_1,z_0,z_1;
                   ss>>x_0>>x_1>>y_0>>y_1>>z_0>>z_1;
                    v.push_back(new Cutbox(x_0,x_1,y_0,y_1,z_0,z_1));
                }else if(comando.compare("putsphere")==0){
                    int xcenter_,ycenter_,zcenter_,radius_;
                    float r_,g_,b_,a_;
                    ss>>xcenter_>>ycenter_>>zcenter_>>radius_;
                    ss>>r_>>g_>>b_>>a_;
                    v.push_back(new Putsphere(xcenter_,ycenter_,zcenter_,radius_,r_,g_,b_,a_));
                }else if(comando.compare("cutsphere")==0){
                    int xcenter_,ycenter_,zcenter_,radius_;
                     ss>>xcenter_>>ycenter_>>zcenter_>>radius_;
                    v.push_back(new Cutsphere(xcenter_,ycenter_,zcenter_,radius_));
                }else if(comando.compare("putellipsoid")==0){
                   int xcenter_,ycenter_,zcenter_,rx_,ry_,rz_;
                    float r_,g_,b_,a_;
                    ss>>xcenter_>>ycenter_>>zcenter_>>rx_>>ry_>>rz_;
                    ss>>r_>>g_>>b_>>a_;
                    v.push_back(new Putellipsoid(xcenter_,ycenter_,zcenter_,rx_,ry_,rz_,r_,g_,b_,a_));
                }else if(comando.compare("cutellipsoid")==0){
                    int xcenter_,ycenter_,zcenter_,rx_,ry_,rz_;
                    ss>>xcenter_>>ycenter_>>zcenter_>>rx_>>ry_>>rz_;;
                    v.push_back(new Cutellipsoid(xcenter_,ycenter_,zcenter_,rx_,ry_,rz_));
                }else{
                    cout<<"comando nao encontrado"<<endl;
                    break;
                }
            }
        }
         Sculptor desenho(dx,dy,dz);
         for(int i=0;i<v.size();i++){
             v[i]->draw(desenho);
         }

         cout << "\nArquivo.txt Interpretado!" << endl;
         desenho.writeOFF("Arquivointerpretado.OFF");
    }

    else if(select == '3'){

       Sculptor desenho(200,200,200);

       v.push_back(new Cutbox(40,41,16,17,11,13));
       v.push_back(new Cutvoxel(55,51,31));
       v.push_back(new Putsphere(40,36,16,15,0.99,0,0,1.000));
       v.push_back(new Cutsphere(45,33,16,10));
       v.push_back(new Putellipsoid(40,36,25,15,20,10,0.798, 0.259, 0.506, 1.000));
       v.push_back(new Cutellipsoid(50,34,25,5,20,10));

       for(int i=0;i<v.size();i++){
           v[i]->draw(desenho);
       }

      desenho.writeOFF("OutrasFuncoes.OFF");
    }

   else {

        cout << "Digite uma opcao valida!" << endl;
    }

  return 0;
}
