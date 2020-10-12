#include <iostream>                          /* biblioteca para entrada e saida               */
#include <windows.h>                         /* bibliteca para usar o windows                 */
#include <conio.h>
#include <ctime>
#include <fstream>
using namespace std;

#include <iostream>

int main()
{
    int col, lin;                             /* coluna e linha da tela                        */
    POINT pt;                                /* para usar as coordenadas do mouse             */
    HDC hdc = GetDC(0);                      /* HDC é o buffer da tela Toda                   */
    COLORREF clrf;                           /* para trabalhar com cores                      */
    cout << "Ponha o mouse em cima do evento desejado. Atualiza a cada 15 segundos" <<endl;                       
    for (int i = 0; i < 10; i++) {
        GetCursorPos(&pt);/* pega a posição do cursor                      */
        col = pt.x;                        /* col recebe a posição x onde o cursor está     */
        lin = pt.y;                        /* lin recebe a posição y onde o cursor está     */
        hdc = GetDC(0);/* reseta o hdc                                  */
        clrf = GetPixel(hdc, col, lin);/* o valor int da cor nessa posção               */
        int r = GetRValue(clrf);/* r recebe a quantidade de vermelho dessa pixel */
        int g = GetGValue(clrf);/* g recebe a quantidade de verde    dessa pixel */
        int b = GetBValue(clrf);/* b recebe a quantidade de azul     dessa pixel */
        cout << "                    " << endl;
        cout << "Cor ========> " << clrf << endl;/* o valor total da cor                          */
        cout << "valor de R => " << r << endl;/* R vai de zero até 255                         */
        cout << "valor de G => " << g << endl;/* G vai de zero até 255                         */
        cout << "valor de B => " << b << endl;/* B vai de zero até 255                         */
        cout << "valor da coluna => " << col << endl;/* B vai de zero até 255                         */
        cout << "valor da linha => " << lin << endl;/* B vai de zero até 255                         */
        Sleep(15000);
    };
}

