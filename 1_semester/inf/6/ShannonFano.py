# coding: utf-8
import math
'''
Функция реализует алгоритм Шеннона-Фано.
На вход подают вероятности в виде конечных десятичных дробей.
'''
class Unit:
    '''
    Класс, представляет собой объект содержаний поля name, value, code
    :param name: имя объекта
    :param value: значение вероятности
    :param code: код объекта
    '''
    def __init__(self, name, value, code):
        self.name = name
        self.value = value
        self.code = code

#алгоритм Шеннона-Фано
def make_ShannonFano(probability):
    '''
    Функция, реализаующая алгоритм Шеннона-Фано
    :param probability: список объектов
    :param return: возвращает тот же список, но с присвоенными кодами
    '''
    summ = 0
    for i in probability:
        summ += probability.get(i) # получили сумму вероятностей

    group= summ/2
    index = 0
    # да простит меня святой КотЭ за нерациональное использование памяти
    group1 = []
    group2 = []

    for i in probability:
        if index < group: # с избытком, с недостатком <=
            i.code += '0'
            group1.append(i)
            index += i.value
        else:
            i.code += '1'
            group2.append(i)

    # рекурсия. УууууУУУуИИииИИ
    if len(group1) != 1:
        make_ShannonFano(group1)
    if len(group2) != 1:
        make_ShannonFano(group2)

    return probability

def entropyShannon(probability):
    '''
    Функция вычисления энтропии по Шеннону
    :param probability: список вероятностей
    :param return: энтропия
    '''
    entropy = 0
    for i in probability:
        entropy += i*math.log(1/i, 2)
    return entropy

def cost(probability):
    '''
    Функция для определения стоимости кодирования
    :param probability: список объектов
    :param return: стоимость
    '''
    val = 0
    for i in probability:
        val += len(i.code)*i.value
    return val


if __name__ == '__main__':
    input_data = raw_input()
    input_data = [float(x) for x in input_data.split(' ')]

    # примеры
    p = [0.2, 0.15, 0.15, 0.15, 0.1, 0.1, 0.05, 0.05, 0.05]
    p1 = [0.1, 0.2, 0.15, 0.15, 0.15, 0.1, 0.05, 0.05, 0.05]
    p3 = [0.2, 0.2, 0.2, 0.1, 0.1, 0.05, 0.05, 0.05, 0.025, 0.025]

    #для каждого элемента создаем соответствующий объект класса
    index = 1
    data = []
    for i in input_data:
        name = 'a'
        name += str(index)
        name = Unit(name, i, '')
        data.append(name)
        index += 1

    # сортируем по полю value в порядке убывания
    data = sorted(data, key=lambda x: x.value, reverse=True)

    print( 'энтропия по Шеннону:', entropyShannon(input_data))

    #применяем алгоритм
    data = make_ShannonFano(data)

    print('стоимость кодирования:', cost(data))

    # выводим коды букв
    for i in data:
        print(i.name, i.value, i.code)
else:
    print('Модуль для алгоритма Шеннона-Фано')


