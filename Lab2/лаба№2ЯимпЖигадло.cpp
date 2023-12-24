//Жигадло Екатерина Дмитриевна РИ-221055
//Cделано в VS
#include <iostream>

using namespace std;


int main(){
    setlocale (LC_ALL, "ru");
    //1.
    int size = 10;
    short mas1[size];
    for (int i = 0; i < size; i++){
    cout << mas1[i] << ", ";
    }
    cout << endl;
    //2.
    short size1 = 10;
    short mas2[size1];
    srand(time(0)); //команда для обновления случ. чисел
    for (int i = 0; i < size1; i++) {
        mas2[i] = rand()% 21 - 10; // диапазон от -10 до 10
        cout << mas2[i] << ", "; // выводит все эл-ты массива
    }
    cout << endl;
    //3.
    short size2 = 5;
    short mas3[size2]; // размер массива через переменнную
    cout << "Введите элементы массива: "<< endl;
    for (int i = 0; i < size2; i++){ // введеныйв дальнейшем i не должен превышать размер массива
        cin >> mas3[i]; // вводим значение
        cout << "Ваш элемент массива =  " << mas3[i]<< endl;
    }

    //4.
    short size3 = 6;
    short mas4[size3];
    srand(time(0));
    for (int i = 0; i < size3; i++) {
        mas4[i] = rand() % 51; // чтобы числа не превышали 50
        cout << "Исходный эл-нт массива = " << mas4[i] <<endl;
        if (mas4[i] % 2 == 0){
            mas4[i] *= 3;
            }
        else {
            mas4[i] *= 5;
            }
    cout << "Измененный массив = "<< mas4[i] <<endl;
    }

    //2.1 Двумерные массивы
    int ROW = 5;
    int COL = 5;
    int arr1[ROW][COL];
    srand(time(0));
    cout << "Исходный двумерный массив:\n";
    for (int i = 0; i < ROW; i++) { // строки
        for (int j = 0; j < COL; j++){ // столбцы
        arr1[i][j]= rand()% 21 - 10;
        cout << arr1[i][j] << "\t"; 
        }
        cout << endl;
     }

     //2.2 Сумма
     for (int i = 0; i < ROW; i++) { //сумма строк
        int sumRow = 0;
        for (int j = 0; j < COL; j++){
        sumRow += arr1[i][j];
        }
    cout << "Сумма " << i+1 << " строки: " << sumRow << endl;
     }

     //2.3 Замена
     for (int i = 0; i < ROW; i++) { // строки
        for (int j = 0; j < COL; j++){ // столбцы
            if (arr1[i][j] < 0)
            {
                arr1[i][j] = 0;
            }
        cout << arr1[i][j] << "\t"; 
        }
    cout << endl;
    }
}