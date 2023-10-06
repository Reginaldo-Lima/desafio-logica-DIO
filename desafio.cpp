#include <iostream>
using namespace std;

//Desafio do Felipão da DIO de logica de programação 
//Programa para determinar a classe do heroi de acordo com o nível de XP

int xp;
string nome;
string classe;

int main()
{
    cout << "\nDigite o seu nome de heroi: ";
    cin >> nome;
    cout << "\nEntre com a quantidade de experiência do seu heroi: ";
    cin >> xp;
    
    if (xp < 1000){
       classe = "Ferro";
    } else if (xp > 1000 && xp <= 2000){
       classe = "Bronze";
    } else if (xp > 2000 && xp <= 5000){
       classe = "Prata";
    } else if (xp > 5000 && xp <= 6000){
       classe = "Ouro";
    } else if (xp > 6000 && xp <= 7000){
       classe = "Platina";
    } else if (xp > 7000 && xp <= 8000){
       classe = "Diamante";
    } else if (xp > 8000 && xp <= 9000){
       classe = "Ascendente";
    } else if (xp > 9000 && xp <= 10000){
       classe = "Imortal";
    } else {
       classe = "Radiante";
    };
    /*criação da classe "Diamante", pois estava 
    faltando uma categoria para categorizar
    a faixa de xp entre 6001 e 7000
    */
    cout<<"\nO heroi " << nome << " tem " << xp << " e está na classe: " << classe << endl << endl;

    return 0;
}
