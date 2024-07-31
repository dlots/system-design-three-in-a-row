Основные классы анализа (АТД) в проекте

1. Board - сетка игрового поля
1. Tile - элемент сетки (может включать в себя гем композицией, либо служить родителем для реализации "гема" и "пустого места")
1. Gem - элемент, образующий комбинации с другими такими же элементами
1. EmptyTile - нужен в случае если выбрано наследование
1. Combination - комбинация одинаковых элементов, которую можно собрать (линия, крест, и т.д.)
1. Score - обертка для примитивного типа int, используется везде, где нужны "очки" (очки за комбинацию, очки накопленные за всю партию, и т.д.)
1. Bonus - базовый класс для различных бонусов
1. Turn - элемент истории ходов в партии
1. History - вся история ходов в партии (обертка над стандартным контейнером?)
1. Stats - будет вычислять метрики партии из ее истории
1. Record - элемент таблицы рекордов
1. Leaderboard - таблица рекордов (реализации могут использовать локальную БД, или отправлять данные на сервер)
1. Input - контроллер ввода
1. Output - контроллер вывода
1. Settings - настройки игры (на данный момент одна - пропускать комбо, или показывать всю последовательность этих автоматических событий на экране)