ASD_6_2 - Odległości w grafie
Dany jest nieskierowany graf prosty, zawierający nie więcej niż 100 wierzchołków, zdefiniowany przez listę jego krawędzi: krawędź łącząca wierzchołki i-ty oraz j-ty będzie opisana rozdzieloną spacjami parą liczb i oraz j. Z kolei, o liczności zbioru wierzchołków grafu można wnioskować na podstawie największej z liczb i lub j we wszystkich parach definiujących krawędzie.

Należy napisać program, który znajdzie odległosci pomiędzy poszczególnymi wierzchołkami grafu.

Wejście
Na wejściu programu, w kolejności jak niżej powinny się znaleźć następujące elementy:

Całkowita dodatnia liczba n określająca liczbę zestawów danych;
W każdym z n zestawów znajdują się:
Liczba całkowita dodatnia m określająca liczbę krawędzi grafu;
m par liczb całkowitych i oraz j definiujących kolejne krawędzieie grafu.
Wyjście
Wyniki działania programu uzyskane dla kolejnych n zestawów danych zostaną na wyjściu programu oddzielone pustą linią.

Dla danego zestawu danych, wynikiem działania programu będzie kwadratowa macierz symetryczna o rozmiarze n × n, zawierająca odległości pomiędzy poszczególnymi węzłami grafu. Jeżeli pomiędzy dwoma węzłami grafu nie istnieje łącząca je ścieżka, wtedy w odpowiednim miejscu macierzy pojawi się napis NaN.

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

0 1 1 1 NaN 2
1 0 2 1 NaN 2
1 2 0 2 NaN 3
1 1 2 0 NaN 1
NaN NaN NaN NaN 0 NaN
2 2 3 1 NaN 0

0 1 NaN NaN NaN NaN NaN NaN NaN
1 0 NaN NaN NaN NaN NaN NaN NaN
NaN NaN 0 1 1 NaN 2 3 1
NaN NaN 1 0 1 NaN 1 2 2
NaN NaN 1 1 0 NaN 2 3 2
NaN NaN NaN NaN NaN 0 NaN NaN NaN
NaN NaN 2 1 2 NaN 0 1 3
NaN NaN 3 2 3 NaN 1 0 4
NaN NaN 1 2 2 NaN 3 4 0

0 NaN NaN NaN NaN NaN NaN NaN NaN
NaN 0 1 2 2 1 2 2 1
NaN 1 0 1 3 2 2 1 2
NaN 2 1 0 4 3 3 2 3
NaN 2 3 4 0 2 1 2 1
NaN 1 2 3 2 0 1 2 2
NaN 2 2 3 1 1 0 1 2
NaN 2 1 2 2 2 1 0 3
NaN 1 2 3 1 2 2 3 0