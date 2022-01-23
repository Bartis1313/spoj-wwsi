ASD_5_2 - Symulacje
W swoim życiu zawodowym robiłeś już różne rzeczy. Teraz nic nie robisz, tylko symulujesz. Dysponujesz programem, który dla różnych wymuszeń potrafi policzyć metodą elementu skończonego rozkłady różnych pól w złożonych mikrosystemach. Tymczasem, wielkimi krokami zbliża się bardzo ważna konferencja, na której chciałbyś przedstawić wyniki swoich obliczeń. W tym celu będziesz chciał narysować stosowne wykresy.

Po wykonaniu symulacji dysponujesz danymi, zawierającymi zbiór współrzędnych punktów oraz odpowiadające tym punktom wielkości fizyczne. Twoje zbiory z wynikami obliczeń zawierają nie więcej niż 50000 wierszy. Z kolei liczba kolumn w zbiorze mieści się w zakresie od trzech do dziewięciu. W pierwszych kilku kolumnach - ich liczba zależy od rozmiaru przestrzeni w której jest rozwiązywane zadanie - zawarte są kolejne współrzędne punktów. Pozostałe kolumny zawierają odpowiadające tym punktom, policzone przez Twój program wartości pól.

Aby narysować wykresy musisz uporządkować punkty w przestrzeni oraz odpowiadające im wielkości fizyczne. W tym celu powinieneś w odpowiedniej kolejności, niemalejąco posortować kolumny zawierające współrzędne punktów. Następnie, z tak uporządkowanego zbioru zechcesz wyłuskać tylko te fragmenty badanej struktury, dla których będziesz tworzył wykres.

Niestety, nie masz szczęścia do współpracowników. Jeden z nich ma specyficzne poczucie humoru. W ramach żartu, poprzestawiał między sobą kolumny w twoim zbiorze danych. Obiecał jednak, że jeszcze przed konferencją poda Ci właściwą interpretację zawartości kolumn.

Ponieważ nigdy się nie poddajesz, powinieneś jak najlepiej wykorzystać dany Ci czas, przygotowując się na moment, gdy będziesz wiedział, co zawierają poszczególne kolumny z danymi. Napisz program, który będzie odpowiednio porządkował dane potrzebne do tworzenia wykresów, niemalejąco sortując w podanej przez Ciebie kolejności wybrane kolumny w zbiorze.

Wejście
Na wejściu programu w kolejności jak niżej powinny się znaleźć następujące elementy:

n - liczba naturalna 3 ≤ n ≤ 9 , określająca ilość kolumn z danymi;
m - liczba naturalna 1 ≤ m ≤ 3 , określająca liczbę kolumn, które będą sortowane;
m liczb będących numerami sortowanych kolumn - kolumny będą sortowane w kolejności wczytywanych numerów;
tabela z danymi - każdy wiersz tabeli zawiera n liczb rzeczywistych, zaś liczba wierszy nie jest znana:
x11 x12 … x1n
x21 x22 … x2n
x31 x32 … x3n
… … … … …
… … … … …
Wyjście
Na wyjściu znajdzie się tabela z danymi, w której odpowiednie kolumny zostały posortowane.

Przykład
Wejście:

5
3
1 3 4
2.5 3.58 0 2 0.5
2 -0.53 2.33 3.5 0.83
0 -3.44 2.33 2 0.33
2 -3.7 2.67 2 2.67
1 3.89 0.33 3 -1.67
2 -3.53 2.33 0.5 3.83
2 1.64 1.67 3 0.67
1.5 3.22 1 3 -0.5
2.5 3.47 0.33 2 0.83
1.5 -2.28 2 0.5 3
2.5 1.97 0.33 0.5 2.33
1.5 -2.72 2.33 1.5 2.33
1 -3.94 2.33 0.5 2.83
0 1.06 0.67 1.5 -0.83
2.5 2.58 1 2 1.5
2 1.41 1 1 2
0 1 1 2 -1
0.5 4.1 0.33 3.5 -2.67
1 0.89 0.33 0 1.33
0 -3.44 2.33 2 0.33
Wyjście:

1 0.89 0.33 0 1.33
2.5 1.97 0.33 0.5 2.33
1.5 -2.28 2 0.5 3
1 -3.94 2.33 0.5 2.83
2 -3.53 2.33 0.5 3.83
2 1.41 1 1 2
0 1.06 0.67 1.5 -0.83
1.5 -2.72 2.33 1.5 2.33
2.5 3.58 0 2 0.5
2.5 3.47 0.33 2 0.83
0 1 1 2 -1
2.5 2.58 1 2 1.5
0 -3.44 2.33 2 0.33
0 -3.44 2.33 2 0.33
2 -3.7 2.67 2 2.67
1 3.89 0.33 3 -1.67
1.5 3.22 1 3 -0.5
2 1.64 1.67 3 0.67
0.5 4.1 0.33 3.5 -2.67
2 -0.53 2.33 3.5 0.83