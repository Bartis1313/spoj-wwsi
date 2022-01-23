MWP3_1F1 - Relacja
Gimnazjalni koledzy Jasia postanowili zagrać w grę planszową, która składa się z wielu etapów. W każdym z etapów odbywa się rozgrywka, po zakończeniu której, aby przejść na wyższy poziom trzeba rozwiązać pewne dziwne zadanie matematyczne. Jaś chętnie by wziął udział w grze, ale nie bardzo potrafi rozwiązać to zadanie, gdyż nie uważał na lekcjach matematyki. Potrzebuje pomocy. Pomóż mu, pisząc odpowiedni program.

Treścią zadania jest odpowiedź na pytanie, jakie własności i jaki typ ma pewna relacja dwuargumentowa określona w zbiorze kolejnych liczb całkowitych dodatnich, składającym się z nie więcej niż stu elementów. O wielkości zbioru, w którym określona jest ta relacja można wnioskować na podstawie największej z liczb i lub j w parach. Za każdym razem relacja jest zdefiniowana w następujący sposób: jeżeli i-ty element jest w relacji z elementem j-tym, to na wejściu w osobnym wierszu pojawi się rozdzielona spacjami para liczb i oraz j. Liczba wierszy w zestawie danych jest równa liczbie par (i,j) dla których zachodzi relacja.

Wynikiem działania programu będą, co najwyżej dwa wiersze. W pierwszym wierszu będą opisane własności relacji oddzielone spacją. Do oznaczenia własności relacji należy używać skrótów, w następującej kolejności:

Z - zwrotność
PZ - przeciwzwrotność
S - symetria
AS - antysymetria
P - przechodniość
SP - spójność
X - żaden z powyższych
Jeżeli w pierwszym wierszu pojawiła się litera X, program kończy działanie. W przeciwnym przypadku, w wierszu drugim będzie opisany typ relacji. Do oznaczenia własności relacji należy używać oddzielonych spacjami skrótów, w następującej kolejności:

RR - relacja równoważności
RPL - relacja porządku liniowego
RPCz - relacja porządku częściowego – można użyć tylko wtedy, gdy nie było RPL
X - żaden z powyższych
Przykład:
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

PZ AS
X
