`templ/` - Jak ma wyglądać każdy projekt na początku żeby było bajla

Zignorujcie `#define CP_UTF8 65001` w plikach bo coś mi kompilator nie łapał i musiałem dodać

Korzystajcie jak najwięcej z podpowiedzi clion ;)

## Biblioteki do zapamiętania:
- math.h
    - `sqrt(int)` - pierwiastek kwadratowy
- time.h
    - `time(time_t*)` - bierze aktualny czas
    - `ctime(time_t*)` - przerabia czas do formatu czytelnego
    
    przykład:
    ```c
    time_t czas = 0;
    time(&czas);
    printf("Obecna data: %s\n", ctime(&czas));```
- string.h
    - `strlen(char*)` - zwraca długość tekstu
- inne funkcje
    - `itoa(int, char*, int)` - zmienia liczbe na tekst
    - `srand(int)` - ustawia ziarno (seed) dla generatora liczb losowych
    - `rand()` - losuje liczbe

#### Po przykłady patrzcie do zadań