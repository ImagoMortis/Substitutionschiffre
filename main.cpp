#include <iostream>
using namespace std;
int main() {




string chiffre = "urzifzllmdiqokszuzxuxyispbzbmtqqud\n"
                 "momgzfqatqyyzudmybrqqbd\n"
                 "mtmffxduzftfqpnruuqmffmynzurzxfbxdkpuzd\n"
                 "mybmtfqgzfuqvmspzurzxfnqqbd";



string alt = chiffre;
/*
    for (int i = 0; i < chiffre.length(); ++i)
    {
        if (chiffre[i] == 'z'){
            chiffre[i] = 'E';
        }else if(chiffre[i] == 'u'){
            chiffre[i] = 'T';
        }else if(chiffre[i] == 'm'){
            chiffre[i] = 'A';
        }else if(chiffre[i] == 'r'){
            chiffre[i] = 'O';
        }else if(chiffre[i] == 'y'){
            chiffre[i] = 'N';
        }else if(chiffre[i] == 'x'){
            chiffre[i] = 'I';
        }else if(chiffre[i] == 'q') {
            chiffre[i] = 'H';
        }else if(chiffre[i] == 'd') {
            chiffre[i] = 'S';
        }else if(chiffre[i] == 'f') {
            chiffre[i] = 'R';
        }else if(chiffre[i] == 'b') {
            chiffre[i] = 'L';
        }else if(chiffre[i] == 's') {
            chiffre[i] = 'D';
        }else if(chiffre[i] == 'p') {
            chiffre[i] = 'U';
        }else if(chiffre[i] == 'l') {
            chiffre[i] = 'C';
        }else if(chiffre[i] == 'i') {
            chiffre[i] = 'M';
        }else if(chiffre[i] == 'o') {
            chiffre[i] = 'W';
        }else if(chiffre[i] == 't') {
            chiffre[i] = 'Y';
        }else if(chiffre[i] == 'a') {
            chiffre[i] = 'F';
        }else if(chiffre[i] == 'h') {
            chiffre[i] = 'G';
        }else if(chiffre[i] == 'n') {
            chiffre[i] = 'P';
        }else if(chiffre[i] == 'k') {
            chiffre[i] = 'B';
        }else if(chiffre[i] == 'g') {
            chiffre[i] = 'V';
        }else if(chiffre[i] == 'v') {
            chiffre[i] = 'K';
        }else if(chiffre[i] == 'j') {
            chiffre[i] = 'J';
        }else if(chiffre[i] == 'e') {
            chiffre[i] = 'x';
        }else if(chiffre[i] == 'c') {
            chiffre[i] = 'Q';
        }else if(chiffre[i] == 'w') {
            chiffre[i] = 'z';
        }
        cout << chiffre << endl;
    }
    */


  /*  for (int i = 0; i < chiffre.length(); ++i)
    {
        if (chiffre[i] == 'z'){
            chiffre[i] = 'E';
        }else if(chiffre[i] == 'u'){
            chiffre[i] = 'T';
        }else if(chiffre[i] == 'm'){
            chiffre[i] = 'A';
        }else if(chiffre[i] == 'r'){
            chiffre[i] = 'H'; //ehemals O
        }else if(chiffre[i] == 'y'){
            chiffre[i] = 'H'; // ehemals N
        }else if(chiffre[i] == 'x'){
            chiffre[i] = 'I';
        }else if(chiffre[i] == 'q') {
            chiffre[i] = 'H'; //ehemals H
        }else if(chiffre[i] == 'd') {
            chiffre[i] = 'S';
        }else if(chiffre[i] == 'f') {
            chiffre[i] = 'R';
        }else if(chiffre[i] == 'b') {
            chiffre[i] = 'L';
        }else if(chiffre[i] == 's') {
            chiffre[i] = 'L';
        }else if(chiffre[i] == 'p') {
            chiffre[i] = 'U';
        }else if(chiffre[i] == 'l') {
            chiffre[i] = 'C';
        }else if(chiffre[i] == 'i') {
            chiffre[i] = 'M';
        }else if(chiffre[i] == 'o') {
            chiffre[i] = 'W';
        }else if(chiffre[i] == 't') {
            chiffre[i] = 'Y';
        }else if(chiffre[i] == 'a') {
            chiffre[i] = 'F';
        }else if(chiffre[i] == 'h') {
            chiffre[i] = 'G';
        }else if(chiffre[i] == 'n') {
            chiffre[i] = 'P';
        }else if(chiffre[i] == 'k') {
            chiffre[i] = 'P'; // ehemals B
        }else if(chiffre[i] == 'g') {
            chiffre[i] = 'V';
        }else if(chiffre[i] == 'v') {
            chiffre[i] = 'K';
        }else if(chiffre[i] == 'j') {
            chiffre[i] = 'J';
        }else if(chiffre[i] == 'e') {
            chiffre[i] = 'x';
        }else if(chiffre[i] == 'c') {
            chiffre[i] = 'Q';
        }else if(chiffre[i] == 'w') {
            chiffre[i] = 'z';
        }
        cout << chiffre << endl;
    }
*/


    for (int i = 0; i < chiffre.length(); ++i)
    {
        if (chiffre[i] == 'z'){
            chiffre[i] = 'E';
        }else if(chiffre[i] == 'u'){
            chiffre[i] = 'T';
        }else if(chiffre[i] == 'a') {
            chiffre[i] = 'F';
        }else if(chiffre[i] == 'm'){
            chiffre[i] = 'A';
        }else if(chiffre[i] == 'r'){
            chiffre[i] = 'H'; //ehemals O
        }else if(chiffre[i] == 'y'){
            chiffre[i] = 'N'; // ehemals N
        }else if(chiffre[i] == 'x'){
            chiffre[i] = 'I';
        }else if(chiffre[i] == 'q') {
            chiffre[i] = 'O'; //ehemals H
        }else if(chiffre[i] == 'd') {
            chiffre[i] = 'S';
        }else if(chiffre[i] == 'f') {
            chiffre[i] = 'R';
        }else if(chiffre[i] == 'b') {
            chiffre[i] = 'D';
        }else if(chiffre[i] == 's') {
            chiffre[i] = 'L';
        }else if(chiffre[i] == 'p') {
            chiffre[i] = 'U';
        }else if(chiffre[i] == 'l') {
            chiffre[i] = 'W';
        }else if(chiffre[i] == 'i') {
            chiffre[i] = 'C';
        }else if(chiffre[i] == 'o') {
            chiffre[i] = 'M'; //ehemals w
        }else if(chiffre[i] == 't') {
            chiffre[i] = 'B';
        }else if(chiffre[i] == '?') {
            chiffre[i] = 'f';
        }else if(chiffre[i] == 'h') {
            chiffre[i] = 'Y';
        }else if(chiffre[i] == 'n') {
            chiffre[i] = 'G';
        }else if(chiffre[i] == 'k') {
            chiffre[i] = 'P'; // ehemals B
        }else if(chiffre[i] == 'g') {
            chiffre[i] = 'K';
        }else if(chiffre[i] == 'v') {
            chiffre[i] = 'V';
        }else if(chiffre[i] == 'j') {
            chiffre[i] = 'J';
        }else if(chiffre[i] == 'e') {
            chiffre[i] = 'X';
        }else if(chiffre[i] == 'c') {
            chiffre[i] = 'X';
        }else if(chiffre[i] == 'w') {
            chiffre[i] = 'z';
        }
        cout << chiffre << endl;
    }


cout << alt << endl;
cout << chiffre << endl;
    return 0;
}