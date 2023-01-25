#include <iostream>

template<typename T>
bool in(T* array, T el, int count) //count = точное количество существующих элементов
{
    bool flag = true;
    for (int i = 0; i < count; i++ )
        if (array[i] == el)
            return false;
    return true;
}

template<typename T>
T* function(T* array, int count){
    T* mass = new T[count];
    int k = 0;

    //Найдём различные элементы
    for(int i = 0; i < count; i++){
        if ( in(mass, array[i], k) )
        {
            mass[k] = array[i];
            ++k;
        }
    }

    //Создадим хороший массив
    T* result = new T[k];
    for ( int i = 0; i < k; i++)
        result[i] = mass[i];
    return result;
}

int main(){
    int mass[] = {1,6,2,4,3,7,8,9,5,5,6,9,4};
    int* array = function(mass, 13);
    for (int i =0; i < 9; i++)
        std::cout<< array[i] << " ";
    std::cout<<std::endl;
    char mass2[] = "aaaabbbbbddddddbfffffbbbccccccccccceeeeec";
    char* array2 = function(mass2, 41);

    for (int i =0; i < 6; i++)
        std::cout<< array2[i] << " ";
    std::cout<<std::endl;


    system("pause");
    return 0;
}
