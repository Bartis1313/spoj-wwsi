ASD_4_1 - Mnożenie transpozycji macierzy przez wektor
Dana jest tabela zawierająca liczby rzeczywiste. Tabela składa się z m wierszy oraz n+1 kolumn. Kolejne n kolumn tabeli stanowi reprezentację pewnej macierzy X , zaś kolumna n n+1 -sza jest reprezentacją wektora y .

Napisać program, który znajdzie iloczyn XTy.

Wejście
Na wejściu programu znajdują się następujące elementy:

n - liczba naturalna 1 ≤ n ≤ 25 , określająca ilość kolumn macierzy X,
m - liczba naturalna 5 ≤ m ≤ 1000 , określająca liczbę wierszy z danymi,
tabela o rozmiarze m × (n+1) zawierająca oddzielone spacjami liczby rzeczywiste:
x11 x12 … x1n y1
x11 x12 … x1n y2
… … … … …
xm1 xm2 … xmn ym
Wyjście
Na wyjściu programu powinien się znaleźć wynik mnożenia transpozycji danej macierzy X przez dany wektor y.

Przykład 1
Wejście:

1
15
4.46 36.01
5.36 46.08
4.27 36.61
5.33 43.62
3.80 29.17
5.32 47.97
3.98 32.74
5.24 45.00
3.37 27.55
5.21 46.63
4.50 36.91
4.89 42.10
4.72 40.06
4.62 37.30
4.57 40.50
Wyjście:

2782.8083
Przykład 2
Wejście:

3
9
1 1.5 0.5 -0.55
1.5 1 1 2.7
2 -0.5 1.5 7.45
2.5 0 0 3.2
-3 0.5 -0.5 -10.05
3.5 -1 -1 3.7
4 1.5 -1.5 -0.55
4.5 2 0 4.2
5 -2.5 0.5 13.45
Wyjście:

153.45 -36.625 22.475
Uwaga

Wyniki sprawdzane są z dokładnością do 6 miejsc po przecinku.