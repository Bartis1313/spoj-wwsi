ASD_5_3 - Nieziemska szkoła
W pewnej nieziemskiej szkole zakończył się nabór uczniów do pierwszej klasy. Ponieważ nabór się przeciągnął, nie ma jeszcze dzienników, zaś nauczyciel w klasie ma do dyspozycji listę uczniów w takiej formie i w takiej kolejności, w jakiej uczniowi zostali wpisywani na listę w dniu naboru.

Szkoła jest nieziemska, to i problemy z listą są nieziemskie. Pierwszym problemem jest długość listy. Klasy nie mogą być zbyt liczne. Na liście, którą otrzymuje nauczyciel może być zapisanych nie więcej niż 50000 (słownie: pięćdziesiąt tysięcy) uczniów. Także zawartość listy jest dla nas nieco problematyczna. Na liście w kolejnych kolumnach znajdują się następujące elementy:

Numer wskazujący na kolejność zapisu do szkoły;
Numer ewidencyjny;
Imię;
Nazwisko.
Tutaj należy nadmienić, że rzeczywiste numery ewidencyjne w nieziemskiej rzeczywistości mogłyby zawierać dowolną ilość cyfr. Jednakże w obiegu urzędowym numery te są zaokrąglane, co najwyżej do sześciu cyfr po przecinku. Konsekwencją tego będzie fakt, iż w szkole mogą być uczniowie, którzy mimo różnego numeru ewidencyjnego, mogą mieć identyczne jego reprezentacje.

Ponieważ nauczyciele muszą uczniów oceniać i potem wpisywać im oceny, dlatego potrzebują mieć listę posortowaną w odpowiedniej kolejności. Twoim zadaniem będzie uporządkować listę, a następnie ją wydrukować.

Powinieneś napisać program, który niemalejąco posortuje dane w następującej kolejności:

Numer ewidencyjny;
Imię;
Nazwisko.
Wejście
Na wejściu znajduje się nieznana liczba wierszy, w każdym wierszu znajdą się następujące elementy:

Liczba całkowita dodatnia, określająca kolejność zapisu do szkoły;
Nieziemski numer ewidencyjny (odpowiednik znanego nam numeru PESEL), będący mniejszą niż 10 rzeczywistą liczbą dodatnią.
Zaczynające się dużą literą imię, zawierające nie więcej niż 5 znaków;
Zaczynające się dużą literą nazwisko, zawierające nie więcej niż 10 znaków;
Wyjście
Na wyjściu w każdym wierszu znajdą się oddzielone spacją następujące elementy:

Numer wiersza w posortowanej liście;
Nazwisko;
Imię;
Numer ewidencyjny;
Numer określająca kolejność zapisu do szkoły.
Przykład
Wejście:

1 0.455947 Bnqv Kwswmd
2 2.02185 Knzmv Ylxkuqv
3 1.26347 Qe Ysvroeqgpg
4 2.02185 I Ylxkuqv
5 0.73397 Wyo Tbhzkeopb
6 9.23338 E Sotp
7 2.02185 Knzmv Ylxkuqv
8 6.07776 Qpz Ujpqrzxmf
9 1.86132 Knzmv Ysegsjnnry
10 2.02185 Ocjg V
11 4.90555 Iaohb Ilqwsrfsaq
12 8.30897 Jp Ylxkuqv
13 2.02185 Knzmv Rxtevq
14 0.466933 M Ylxkuqv
15 4.32752 F Y
Wyjście:

1 Ilqwsrfsaq Iaohb 4.90555 11
2 Kwswmd Bnqv 0.455947 1
3 Rxtevq Knzmv 2.02185 13
4 Sotp E 9.23338 6
5 Tbhzkeopb Wyo 0.73397 5
6 Ujpqrzxmf Qpz 6.07776 8
7 V Ocjg 2.02185 10
8 Y F 4.32752 15
9 Ylxkuqv I 2.02185 4
10 Ylxkuqv Jp 8.30897 12
11 Ylxkuqv Knzmv 2.02185 2
12 Ylxkuqv Knzmv 2.02185 7
13 Ylxkuqv M 0.466933 14
14 Ysegsjnnry Knzmv 1.86132 9
15 Ysvroeqgpg Qe 1.26347 3