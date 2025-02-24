# oop_labka1

### Настройка CMake
Создала в корне репозитория директорию (папку) src

В директории src создала два файла: main.cpp и utils.cpp

main.cpp содержит функцию main, которая использует функции из utils.cpp

utils.cpp содержит функции сложения и вычитания

Создала файл CMakeLists.txt в корне репозитория, который включает main.cpp и utils.cpp

Убедилась, что проект успешно собирается с помощью CMake (mkdir build && cd build && cmake .. && debug\oop_labka1.exe)

### Работа с Git
git init

git add .

Первый коммит: git commit -m "Initial commit: CMake project setup"

Создала ветку: git checkout -b feature-utils

Добавила в utils.cpp функцию умножения и обновила main.cpp

git add .

git commit -m "feat: Add multiplication function to utils"

Переключилась обратно на главную ветку: git checkout main

Изменила вывод в main.cpp (добавила слова rezultat)

git add .

git commit -m "fix: Update main output message in main branch"

Попробовала сделать слияние доп. ветки с основной (git merge feature-utils) - вывелась ошибка про конфликт

В Visual Studio разрешила конфликт (оставила нужный вывод и функцию умножения)

git add .

git commit -m "Initial commit: Razreshenie conflictov sliyaniya" ("fx: Update main output message in main branch")

Отправила все ветки и коммиты в удаленный репозиторий: git push
