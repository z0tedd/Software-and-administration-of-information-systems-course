#include <QList>
#include <QHash>
#include <QString>
#include <QVector>
#include <QDebug>

class Computer {
public:
    Computer(){};
    Computer(const QStringList &dictionary) : wordDictionary(dictionary) {

    }

    void setWordPattern(const QString &pattern) {
        this->wordPattern = pattern.toUpper();
    }


    wchar_t guessNextLetter() {
        // 1. Сканирование возможных слов на основе шаблона
        QStringList possibleWords = filterWordsByPattern(wordPattern);
        qDebug()<< possibleWords;
        QHash<wchar_t,int> letterFrequencies = isRussian(wordPattern)?initLetterRussianFrequencies():initLetterEnglishFrequencies();
        if (possibleWords.length()){
        // 2. Частотный анализ оставшихся слов
        letterFrequencies = countLetterFrequencies(possibleWords);
        qDebug()<< letterFrequencies;
        }


        // 3. Вычисление количества отгаданных гласных в текущем шаблоне
        int guessedVowelCount = countGuessedVowels(wordPattern);
        int totalLength = wordPattern.length();

        // 4. Определяем стратегию выбора букв (гласные или согласные)
        wchar_t mostFrequentLetter;
        if (guessedVowelCount >= totalLength / 2) {
            mostFrequentLetter = findMostFrequentConsonant(letterFrequencies);
        } else {
            mostFrequentLetter = findMostFrequentLetter(letterFrequencies);
        }

        // Убираем эту букву из возможных угаданных
        guessedLetters.append(mostFrequentLetter);
        usedLetters.insert(mostFrequentLetter);
        // qDebug() << "Log for letter: "<< mostFrequentLetter<< '\n';
        return mostFrequentLetter;
    }

private:

    QString wordPattern;                // Текущий шаблон слова (например, "_ A _ _ A")
    QVector<wchar_t> guessedLetters;      // Угаданные буквы
    QSet<wchar_t> usedLetters;
    bool isRussian(QString pattern){

        QString vowels ="ЙЦУКЕНГШЩЗХЪФЫВАПРОЛДЖЭЯЧСМИТЬБЮЁ";
        bool flag = false;

        for (auto c : pattern) {
            if (vowels.contains(c)) {
                flag = true;
                break;
            }
        }
        return flag;

    }

    QHash<wchar_t, int> initLetterEnglishFrequencies() {
        QHash<wchar_t, int> globalFrequencies;
        // Частотный анализ букв английского языка
        globalFrequencies['A'] = 8; globalFrequencies['B'] = 1; globalFrequencies['C'] = 3;
        globalFrequencies['D'] = 4; globalFrequencies['E'] = 13; globalFrequencies['F'] = 2;
        globalFrequencies['G'] = 2; globalFrequencies['H'] = 6; globalFrequencies['I'] = 7;
        globalFrequencies['J'] = 0; globalFrequencies['K'] = 1; globalFrequencies['L'] = 4;
        globalFrequencies['M'] = 2; globalFrequencies['N'] = 6; globalFrequencies['O'] = 7;
        globalFrequencies['P'] = 1; globalFrequencies['Q'] = 0; globalFrequencies['R'] = 5;
        globalFrequencies['S'] = 6; globalFrequencies['T'] = 9; globalFrequencies['U'] = 3;
        globalFrequencies['V'] = 1; globalFrequencies['W'] = 2; globalFrequencies['X'] = 0;
        globalFrequencies['Y'] = 2; globalFrequencies['Z'] = 0;
        return globalFrequencies;
    }

    QHash<wchar_t, int> initLetterRussianFrequencies() {
        QHash<wchar_t, int> globalFrequencies;
        globalFrequencies[L'А'] = 8; globalFrequencies[L'Б'] = 2; globalFrequencies[L'В'] = 15;
        globalFrequencies[L'Г'] = 7; globalFrequencies[L'Д'] = 10; globalFrequencies[L'Е'] = 8;
        globalFrequencies[L'Ж'] = 1; globalFrequencies[L'З'] = 2; globalFrequencies[L'И'] = 7;
        globalFrequencies[L'Й'] = 1; globalFrequencies[L'К'] = 4; globalFrequencies[L'Л'] = 3;
        globalFrequencies[L'М'] = 10; globalFrequencies[L'Н'] = 6; globalFrequencies[L'О'] = 11;
        globalFrequencies[L'П'] = 2; globalFrequencies[L'Р'] = 4; globalFrequencies[L'С'] = 5;
        globalFrequencies[L'Т'] = 6; globalFrequencies[L'У'] = 2; globalFrequencies[L'Ф'] = 1;
        globalFrequencies[L'Х'] = 1; globalFrequencies[L'Ц'] = 0; globalFrequencies[L'Ч'] = 1;
        globalFrequencies[L'Ш'] = 1; globalFrequencies[L'Щ'] = 0; globalFrequencies[L'Ъ'] = 0;
        globalFrequencies[L'Ы'] = 2; globalFrequencies[L'Ь'] = 2; globalFrequencies[L'Э'] = 8;
        globalFrequencies[L'Ю'] = 1; globalFrequencies[L'Я'] = 2;
        return globalFrequencies;
    }
    QStringList filterWordsByPattern(const QString &pattern) {
        QStringList possibleWords;
        for (const QString &word : wordDictionary) {
            if (word.length() == pattern.length()) {
                bool match = true;
                for (int i = 0; i < pattern.length(); ++i) {
                    if (pattern[i] != '~' && pattern[i] != word[i]) {
                        match = false;
                        break;
                    }
                }
                if (match) possibleWords.append(word);
            }
        }
        return possibleWords;
    }

    QHash<wchar_t, int> countLetterFrequencies(const QStringList &possibleWords) {
        QHash<wchar_t, int> letterCount;
        for (const QString &word : possibleWords) {
            for (wchar_t c : word.toStdWString()) {
                if (!guessedLetters.contains(c)) {
                    letterCount[c] += 1;
                }
            }
        }
        return letterCount;
    }

    int countGuessedVowels(const QString &pattern) {
        QString vowels ="AEIOUУЕОАЫЯИЮ";
        // QSet<wchar_t> vowels = {'A', 'E', 'I', 'O', 'U', L'У', }; // Список гласных букв (для английского)
        int count = 0;
        for (auto c : pattern.toStdString()) {
            if (vowels.contains(c)) {
                count++;
            }
        }
        return count;
    }

    wchar_t findMostFrequentLetter(const QHash<wchar_t, int> &frequencies) {
        wchar_t bestLetter;
        int maxFrequency = 0;
        for (auto it = frequencies.begin(); it != frequencies.end(); ++it) {
            if (it.value() > maxFrequency && !usedLetters.contains(it.key())) {
                maxFrequency = it.value();
                bestLetter = it.key();
            }
        }
        return bestLetter;
    }

    wchar_t findMostFrequentConsonant(const QHash<wchar_t, int> &frequencies) {
        QString vowels ="AEIOUУЕОАЫЯИЮ";
        wchar_t bestLetter;
        int maxFrequency = 0;
        for (auto it = frequencies.begin(); it != frequencies.end(); ++it) {
            if (!vowels.contains(QChar(it.key())) && it.value() > maxFrequency && !usedLetters.contains(it.key())) {
                maxFrequency = it.value();
                bestLetter = it.key();
            }
        }
        return bestLetter;
    }
    QStringList wordDictionary = {
        "человек ",
        "время ",
        "год ",
        "дело ",
        "день ",
        "жизнь ",
        "рука ",
        "работа ",
        "слово ",
        "место ",
        "лицо ",
        "друг ",
        "глаз ",
        "вопрос ",
        "дом ",
        "страна ",
        "мир ",
        "случай ",
        "голова ",
        "ребёнок ",
        "сила ",
        "конец ",
        "вид ",
        "система ",
        "часть ",
        "город ",
        "отношение ",
        "женщина ",
        "деньги ",
        "земля ",
        "машина ",
        "вода ",
        "отец ",
        "проблема ",
        "право ",
        "нога ",
        "решение ",
        "дверь ",
        "образ ",
        "история ",
        "власть ",
        "закон ",
        "война ",
        "бог ",
        "голос ",
        "тысяча ",
        "книга ",
        "ночь ",
        "стол ",
        "имя ",
        "область ",
        "статья ",
        "число ",
        "компания ",
        "народ ",
        "жена ",
        "группа ",
        "развитие ",
        "процесс ",
        "условие ",
        "средство ",
        "начало ",
        "свет ",
        "путь ",
        "уровень ",
        "форма ",
        "связь ",
        "минута ",
        "улица ",
        "вечер ",
        "качество ",
        "мысль ",
        "дорога ",
        "мать ",
        "действие ",
        "месяц ",
        "государство ",
        "язык ",
        "любовь ",
        "взгляд ",
        "мама ",
        "век ",
        "школа ",
        "цель ",
        "общество ",
        "деятельность ",
        "организация ",
        "президент ",
        "комната ",
        "порядок ",
        "момент ",
        "театр ",
        "письмо ",
        "утро ",
        "помощь ",
        "рынок ",
        "значение ",
        "задача ",
        "предприятие ",
        "разговор ",
        "правительство ",
        "производство ",
        "информация ",
        "положение ",
        "time",
        "year",
        "people",
        "way",
        "day",
        "man",
        "thing",
        "woman",
        "life",
        "child",
        "world",
        "school",
        "state",
        "family",
        "student",
        "group",
        "country",
        "problem",
        "hand",
        "part",
        "place",
        "case",
        "week",
        "company",
        "system",
        "program",
        "question",
        "work",
        "government",
        "number",
        "night",
        "point",
        "home",
        "water",
        "room",
        "mother",
        "area",
        "money",
        "story",
        "fact",
        "month",
        "lot",
        "right",
        "study",
        "book",
        "eye",
        "job",
        "word",
        "business",
        "issue",
        "side",
        "kind",
        "head",
        "house",
        "service",
        "friend",
        "father",
        "power",
        "hour",
        "game",
        "line",
        "end",
        "member",
        "law",
        "car",
        "city",
        "community",
        "name",
        "president",
        "team",
        "minute",
        "idea",
        "kid",
        "body",
        "information",
        "back",
        "parent",
        "face",
        "others",
        "level",
        "office",
        "door",
        "health",
        "person",
        "art",
        "war",
        "history",
        "party",
        "result",
        "change",
        "morning",
        "reason",
        "research",
        "girl",
        "guy",
        "moment",
        "air",
        "teacher",
        "force",
        "education",
        "foot",
        "boy",
        "age",
        "policy",
        "process",
        "music",
        "market",
        "sense",
        "nation",
        "plan",
        "college",
        "interest",
        "death",
        "experience",
        "effect",
        "use"
    };
};


// Computer::ComputerPlayer(const QStringList &dictionary) : wordDictionary(dictionary) {

// }

// void Computer::setWordPattern(const QString &pattern) {
//     this->wordPattern = pattern.toUpper();
// }

// wchar_t Computer::guessNextLetter() {
//     // 1. Сканирование возможных слов на основе шаблона
//     QStringList possibleWords = filterWordsByPattern(wordPattern);

//     // 2. Частотный анализ оставшихся слов
//     QHash<wchar_t, int> letterFrequencies = countLetterFrequencies(possibleWords);

//     // 3. Вычисление количества отгаданных гласных в текущем шаблоне
//     int guessedVowelCount = countGuessedVowels(wordPattern);
//     int totalLength = wordPattern.length();

//     // 4. Определяем стратегию выбора букв (гласные или согласные)
//     wchar_t mostFrequentLetter;
//     if (guessedVowelCount >= totalLength / 2) {
//         mostFrequentLetter = findMostFrequentConsonant(letterFrequencies);
//     } else {
//         mostFrequentLetter = findMostFrequentLetter(letterFrequencies);
//     }

//     // Убираем эту букву из возможных угаданных
//     guessedLetters.append(mostFrequentLetter);
//     return mostFrequentLetter;
// }

// QStringList Computer::filterWordsByPattern(const QString &pattern) {
//     QStringList possibleWords;
//     for (const QString &word : wordDictionary) {
//         if (word.length() == pattern.length()) {
//             bool match = true;
//             for (int i = 0; i < pattern.length(); ++i) {
//                 if (pattern[i] != '_' && pattern[i] != word[i]) {
//                     match = false;
//                     break;
//                 }
//             }
//             if (match) possibleWords.append(word);
//         }
//     }
//     return possibleWords;
// }

// QHash<wchar_t, int> Computer::countLetterFrequencies(const QStringList &possibleWords) {
//     QHash<wchar_t, int> letterCount;
//     for (const QString &word : possibleWords) {
//         for (wchar_t c : word) {
//             if (!guessedLetters.contains(c)) {
//                 letterCount[c] += 1;
//             }
//         }
//     }
//     return letterCount;
// }

// int Computer::countGuessedVowels(const QString &pattern) {
//     QSet<wchar_t> vowels = {'A', 'E', 'I', 'O', 'U'}; // Список гласных букв (для английского)
//     int count = 0;
//     for (wchar_t c : pattern) {
//         if (vowels.contains(c)) {
//             count++;
//         }
//     }
//     return count;
// }

// wchar_t Computer::findMostFrequentLetter(const QHash<wchar_t, int> &frequencies) {
//     wchar_t bestLetter;
//     int maxFrequency = 0;
//     for (auto it = frequencies.begin(); it != frequencies.end(); ++it) {
//         if (it.value() > maxFrequency) {
//             maxFrequency = it.value();
//             bestLetter = it.key();
//         }
//     }
//     return bestLetter;
// }

// wchar_t Computer::findMostFrequentConsonant(const QHash<wchar_t, int> &frequencies) {
//     QSet<wchar_t> vowels = {'A', 'E', 'I', 'O', 'U'}; // Список гласных букв (для английского)
//     wchar_t bestLetter;
//     int maxFrequency = 0;
//     for (auto it = frequencies.begin(); it != frequencies.end(); ++it) {
//         if (!vowels.contains(it.key()) && it.value() > maxFrequency) {
//             maxFrequency = it.value();
//             bestLetter = it.key();
//         }
//     }
//     return bestLetter;
// }
