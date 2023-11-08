#include <iostream>
using namespace std;

int main()
{
    int score = 0;  
    setlocale (0,"");

    cout << "1. сколько будет 2+2?" << endl;
    cout << "a) не знаю" << endl;
    cout << "b) 4" << endl;
    cout << "c) 121221" << endl;

    char answer1;
    cin >> answer1;

    if (answer1 == 'b') {
        cout << "Правильно!" << endl;
        score++;
    }
    else {
        cout << "Неправильно. Правильный ответ: b) 4" << endl;
    }

    cout << "2. Как объявить целочисленную переменную в C++?" << endl;
    cout << "a) int x;" << endl;
    cout << "b) float y;" << endl;
    cout << "c) string z;" << endl;

    char answer2;
    cin >> answer2;

    if (answer2 == 'a') {
        cout << "Правильно!" << endl;
        score++;
    }
    else
    {
        cout << "Неправильно. Правильный ответ: a) int x;" << endl;
    }

    cout << "3. сколько будет 9+2?" << endl;
    cout << "a)11" << endl;
    cout << "b) 55" << endl;
    cout << "c)граm" << endl;

    char answer3;
    cin >> answer3;

    if (answer3 == 'a')
    {
        cout << "Правильно!" << endl;
        score++;
    }
    else 
    {
        cout << "Неправильно. Правильный ответ: a)11 " << endl;
    }
    
    cout << "4. как дела?" << endl;
    cout << "a)плохо" << endl;
    cout << "b)хорошо" << endl;
    cout << "c)мне надо сделать ещё 26 вопросов(" << endl;

    char answer4;
    cin >> answer4;

    if (answer4 == 'c')
    {
        cout << "Правильно!" << endl;
        score++;
    }
    else
    {
        cout << "Неправильно. Правильный ответ: c)мне надо сделать ещё 26 вопросов " << endl;
    }

    cout << "5. сколько будет 9+11?" << endl;
    cout << "a)20" << endl;
    cout << "b)35" << endl;
    cout << "c)momo" << endl;

    char answer5;
    cin >> answer5;

    if (answer5 == 'a')
    {
        cout << "Правильно!" << endl;
        score++;
    }
    else
    {
        cout << "Неправильно. Правильный ответ: a)20 " << endl;
    }

    cout << "6. можно 5?" << endl;
    cout << "a)можно без можно" << endl;
    cout << "b)хорошо 5" << endl;
    cout << "c)нет" << endl;

    char answer6;
    cin >> answer6;

    if (answer6 == 'a')
    {
        cout << "Правильно!" << endl;
        score++;
    }
    else
    {
        cout << "Неправильно. Правильный ответ: a)можно без можно" << endl;
    }

    cout << "7. хочу домой?" << endl;
    cout << "a)неочень" << endl;
    cout << "b)да" << endl;
    cout << "c)нет" << endl;

    char answer7;
    cin >> answer7;

    if (answer7 == 'b')
    {
        cout << "Правильно!" << endl;
        score++;
    }
    else
    {
        cout << "Неправильно. Правильный ответ: b)да" << endl;
    }

    cout << "8. сколько лет илону маску?" << endl;
    cout << "a)не знаю" << endl;
    cout << "b)ответ а" << endl;
    cout << "c)ответ а" << endl;

    char answer8;
    cin >> answer8;

    if (answer8 == 'a')
    {
        cout << "Правильно!" << endl;
        score++;
    }
    else
    {
        cout << "Неправильно. Правильный ответ: a)не знаю" << endl;
    }

    cout << "9.2+2=5?" << endl;
    cout << "a)не знаю" << endl;
    cout << "b)да" << endl;
    cout << "c)нет" << endl;

    char answer9;
    cin >> answer9;

    if (answer9 == 'с')
    {
        cout << "Правильно!" << endl;
        score++;
    }
    else
    {
        cout << "Неправильно. Правильный ответ: c)нет" << endl;
    }

    cout << "10.?" << endl;
    cout << "a)не знаю" << endl;
    cout << "b)да" << endl;
    cout << "c)нет не 10" << endl;

    char answer10;
    cin >> answer10;

    if (answer10 == 'с')
    {
        cout << "Правильно!" << endl;
        score++;
    }
    else
    {
        cout << "Неправильно. Правильный ответ: c)нет не 10" << endl;
    }

    cout << "11.отпустите пораньше?" << endl;
    cout << "a)пиши объяснительную" << endl;
    cout << "b)да" << endl;
    cout << "c)нет" << endl;

    char answer11;
    cin >> answer11;

    if (answer11 == 'b')
    {
        cout << "Правильно!" << endl;
        score++;
    }
    else
    {
        cout << "Неправильно. Правильный ответ: b)да" << endl;
    }

    cout << "12.Сколько мне должен Андрей из группы 2ИП2?" << endl;
    cout << "a)100" << endl;
    cout << "b)1000" << endl;
    cout << "c)200" << endl;

    char answer12;
    cin >> answer12;

    if (answer12 == 'c')
    {
        cout << "Правильно!" << endl;
        score++;
    }
    else
    {
        cout << "Неправильно. Правильный ответ: c)200" << endl;
    }

    cout << "13.как меня зовут?" << endl;
    cout << "a)не знаю" << endl;
    cout << "b)Юра" << endl;
    cout << "c)Рома" << endl;

    char answer13;
    cin >> answer13;

    if (answer13 == 'с')
    {
        cout << "Правильно!" << endl;
        score++;
    }
    else
    {
        cout << "Неправильно. Правильный ответ: c)Рома" << endl;
    }

    cout << "14.когда у меня день рождения?" << endl;
    cout << "a)завтра" << endl;
    cout << "b)вчера" << endl;
    cout << "c)26 января" << endl;

    char answer14;
    cin >> answer14;

    if (answer14 == 'с')
    {
        cout << "Правильно!" << endl;
        score++;
    }
    else
    {
        cout << "Неправильно. Правильный ответ: c)26 января" << endl;
    }

    cout << "15.Сколько мне ехать до дома?" << endl;
    cout << "a)час" << endl;
    cout << "b)два часа" << endl;
    cout << "c)20 лет" << endl;

    char answer15;
    cin >> answer15;

    if (answer15 == 'a')
    {
        cout << "Правильно!" << endl;
        score++;
    }
    else
    {
        cout << "Неправильно. Правильный ответ: a)час" << endl;
    }
    cout << "Вы набрали " << score << " из 15 баллов." << endl;

    return 0;
}
