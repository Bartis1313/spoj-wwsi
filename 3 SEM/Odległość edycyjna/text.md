ASD_7_1 - Odległość edycyjna
Dana jest pewna nieznana liczba słów. Wiadomo jedynie, że liczba słów jest nie większa niż 70. Nieznane są także długości słów. W tym przypadku wiadomo tylko, że każde słowo nie może zawierać więcej niż 1500 znaków. Napisać program, który dla każdej pary słów obliczy ich wzajemną odległość edycyjną, zwaną odległością Levenshteina dL, a także podobieństwo słów SL, zwane podobieństwem Levenshteina

Do szacowania podobieństwa Levenshteina można skorzystać z następującego wzoru:

S L = 1 − d L m a x ( m , n )
We wzorze przyjęto następujące oznaczenia:

SL – podobieństwo Levenshteina,
dL – odległość Levenshteina,
m,n – długości obydwu słów.
Wejście
Na wejściu znajdzie się pewna, nieznana liczba słów.

Wyjście
Na wyjściu najpierw znajdzie się podana w kolejnych wierszach lista wczytanych słów. W każdym wierszu należy podać:

numer słowa, po którym pojawi się dwukropek,
poprzedzone spacją dane słowo,
poprzedzony spacją myślnik,
poprzedzona spacją długość (liczba znaków) danego słowa.
Następnie zostanie podana pusta linia.

Po pustej linii zostanie wyprowadzona tabelka, której wiersze i kolumny opisane są numerami słów. Tabelka będzie zawierała oddzielone spacjami wzajemne odległości edycyjne pomiędzy poszczególnymi słowami: na przecięciu i-tego wiersza oraz j-tej kolumny znajdzie się odległość edycyjna, pomiędzy słowem i-tym, a j-tym. Ponieważ tabelka powinna zawierać odseparowane od jej zawartości opisy kolumn i wierszy, dlatego o jej kształcie należy wnioskować na podstawie podanych niżej przykładów.

Następnie zostanie podana pusta linia.

Po tej pustej linii należy wyprowadzić kwadratową symetryczną macierz podobieństwa dla wczytanych słów: na przecięciu i-tego wiersza oraz j-tej kolumny znajdzie się podobieństwo Levenshteina, podane z dokładnością do trzech cyfr po kropce dziesiętnej.

Przykład 1
Wejście:

abc
xyz
xyzl
zlrab
Wyjście:

1: abc - 3
2: xyz - 3
3: xyzl - 4
4: zlrab - 5

x | 1 2 3 4
- + - - - -
1 | 0 3 4 4
2 | 3 0 1 5
3 | 4 1 0 5
4 | 4 5 5 0

1.000 0.000 0.000 0.200
0.000 1.000 0.750 0.000
0.000 0.750 1.000 0.000
0.200 0.000 0.000 1.000
Przykład 2
Wejście:

exponent
polynomial
sunny
snowy
cat
Wyjście:

1: exponent - 8
2: polynomial - 10
3: sunny - 5
4: snowy - 5
5: cat - 3

x | 1 2 3 4 5
- + - - - - -
1 | 0 9 6 7 7
2 | 9 0 9 8 9
3 | 6 9 0 3 5
4 | 7 8 3 0 5
5 | 7 9 5 5 0

1.000 0.100 0.250 0.125 0.125
0.100 1.000 0.100 0.200 0.100
0.250 0.100 1.000 0.400 0.000
0.125 0.200 0.400 1.000 0.000
0.125 0.100 0.000 0.000 1.000
