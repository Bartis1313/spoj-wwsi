ASD_2_2 - Wycieczka
Mały Jasio żyje w przyszłości w wielkiej metropolii, gdzie można się poruszać od przystanku do przystanku pojazdami komunikacji miejskiej, zwanymi polibusami. Ze względu na różne zagrożenia cywilizacyjne (np. terroryzm, ptasia lub świńska grypa, choroba szalonych krów), komunikacja ta funkcjonuje w ten sposób, że po dojechaniu do dowolnego przystanku zawsze trzeba wysiadać z polibusu, który w tym czasie zostanie sprawdzony i zdezynfekowany przez odpowiednie służby miejskie. Jeżeli podróż powinna trwać dalej, to trzeba się przesiadać – nawet wtedy, gdy będziemy kontynuować dalszą drogę tym polibusem, z którego właśnie wysiedliśmy.

Mama Jasia wybiera się na zakupy, zabierając syna ze sobą. Ponieważ galerie handlowe znajdują się obok przystanków komunikacji miejskiej, dlatego przed wyruszeniem w trasę, mama robi listę przystanków, do których może się udać na zakupy, numerując je kolejnymi liczbami naturalnymi.

Ponieważ Jasio jest dużym chłopcem, dlatego mama będąc w sklepie czasami pozwala mu w tym czasie robić wycieczki po mieście do tych przystanków, które znajdują się na jej liście. Oczywiście Jasio mówi mamie, dokąd zamierza dotrzeć. Po zakupach mama Jasia jedzie po niego w umówione miejsce.

Jasio jest oryginałem, dlatego w trakcie każdej z wycieczek dokładnie jeden raz się przesiada. Tymczasem mama nie znosi się przesiadać, dlatego zgodę na wycieczkę daje tylko wtedy, gdy ma pewność, że w drodze po syna nie będzie się przesiadać. Jeszcze przed wyruszeniem w drogę, nie wiedząc, dokąd uda się na zakupy, mama Jasia musi podjąć decyzję, czy ewentualnie może zgodzić się na wycieczkę syna. Dopiero po tej decyzji następuje wybór miejsca zakupów.

Ponieważ nie jest łatwo zdecydować, czy Jasio będzie mógł udać się na wycieczkę, jego mama liczy na Twoją pomoc. W tym celu musisz napisać odpowiedni program, który pomoże tę decyzję podjąć.

Potraktuj listę przystanków wybranych przez mamę Jasia, jako węzły grafu. Z kolei, możliwe połączenia pomiędzy nimi potraktuj, jako łuki tego grafu. Powyższy graf będziemy dalej nazywać grafem MJ (graf Mamy Jasia).

Napisz program, który dla każdego zestawu danych będzie sprawdzał czy w grafie MJ, każdej marszrucie zawierającej jedną przesiadką (potencjalnej marszrucie Jasia) odpowiada marszruta nie zawierająca żadnej przesiadki (potencjalna marszruta Mamy Jasia).

Wejście
Potencjalne marszruty Mamy po to, aby Jasia odebrać z wycieczki są zdefiniowane w postaci pary dwóch liczb i oraz j (1 ≤ i, j ≤ 100). Jeżeli z i-tego przystanku jest bezpośrednie połączenie z przystankiem j-tym, to na wejściu w osobnym wierszu pojawi się rozdzielona spacjami para liczb i oraz j. Liczba wierszy w zestawie danych jest równa liczbie par (i,j), dla których istnieje połączenie bezpośrednie (bez konieczności przesiadki), czyli marszruta o długości jednego łuku.

O wielkości zbioru możliwych do odwiedzenia przystanków można wnioskować na podstawie największej z liczb i lub j w parach.

Wyjście
Na wyjściu programu należy podać odpowiedź TAK albo NIE. Będzie to odpowiedź na pytanie, czy Mama może wyrazić zgodę na wycieczkę Jasia.

W języku teorii grafów będzie to odpowiedź na pytanie, czy w grafie MJ, każdej marszrucie zawierającej jedną przesiadką odpowiada marszruta nie zawierająca żadnej przesiadki.

Przykład 1
Wejście:

2 3
2 9
3 4
5 7
5 9
6 7
7 8
8 3
Wyjście:

NIE
Przykład 2
Wejście:

1 1
2 1
2 2
2 4
3 1
4 1
4 2
4 4
Wyjście:

TAK