ASD_6_1 - Składowe spójne grafu
Dany jest nieskierowany graf prosty, zawierający nie więcej niż 100 wierzchołków, zdefiniowany przez listę jego krawędzi: krawędź łącząca wierzchołki i-ty oraz j-ty będzie opisana rozdzieloną spacjami parą liczb i oraz j. Z kolei, o liczności zbioru wierzchołków grafu można wnioskować na podstawie największej z liczb i lub j we wszystkich parach definiujących krawędzie.

Należy napisać program, który zidentyfikuje składowe spójne tego grafu.

Wejście
Na wejściu programu, w kolejności jak niżej powinny się znaleźć następujące elementy:

Całkowita dodatnia liczba n określająca liczbę zestawów danych;
W każdym z n zestawów znajdują się:
Liczba całkowita dodatnia m określająca liczbę krawędzi grafu;
m par liczb całkowitych i oraz j definiujących kolejne krawędzieie grafu.
Wyjście
Wyniki działania programu uzyskane dla kolejnych n zestawów danych zostaną na wyjściu programu oddzielone pustą linią.

Dla danego zestawu danych, jego składowe spójne zostaną podane w kolejnych liniach: najpierw pojawi się numer kolejnej składowej spójnej, a po dwukropku pojawią się odzielone spacjami kolejne wierzchołki grafu należące do tej składowej.

Przykład
Wejście:

3
5
1 2
1 3
1 4
2 4
4 6
7
1 2
3 4
3 5
3 9
4 5
4 7
7 8
10
6 2
2 3
2 9
3 4
3 8
5 7
5 9
6 2
6 7
7 8
Wyjście:

1: 1 2 3 4 6
2: 5

1: 1 2
2: 3 4 5 7 8 9
3: 6

1: 1
2: 2 3 4 5 6 7 8 9