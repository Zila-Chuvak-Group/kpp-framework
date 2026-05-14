<div align="center">

# 🚀 K++ Framework

### Упрощённый C для Арифметики

![Version](https://img.shields.io/badge/version-1.0-orange)
![Language](https://img.shields.io/badge/language-C-blue)
![License](https://img.shields.io/badge/license-MIT-green)

**Простой C для Школ, Универов, и изучения базы и теории программирования**

</div>

---

## 👁️‍🗨️ Пример

```c
#include "kpp.h"

int main() {
    // Лучше очистить лог перед началом
    clog();

    po("=== K++ Program Started ===");
    po("Calculating 7 * 7:");
    calc(7, 7, "*");

    po("\nLogging results:");
    wlog("Calculation completed");
    wlog("All systems operational");

    po("\n=== Program Finished ===");
    pas();
    return 0;  // хороший тон - возвращать 0 при успехе
}
```
---

## 📦 Установка

```text
Достаньте из архива kpp.h и поместите в папку с проектом на C/C++ важно в место где находится исполняймый файл формата .c/.cpp
дальше зайдите в исполняймый файл и напишите в начале #include "kpp.h" и приятного пользования
```
---

## 📚 Функции

```text
Функция	Что делает	Пример
p(text)	Печатает текст	p("Привет")
po(text)	Печатает + перенос	po("Мир")
calc(a, b, op)	Калькулятор	calc(2, 2, "*")
ubc(a, b)	Кто больше	ubc(100, 50)
clog()	Очистить лог	clog()
wlog(text)	Записать в лог	wlog("Done")
pas()	Пауза	pas()
