# myapp/middLeware2.py
# Импорт модуля Logging для работы с логированием
import logging

# Импорт функции perf_counter из модуля time для измерения прошедшего времени
from time import perf_counter

# Получение экземпляра логгера для данного модуля
logger = logging.getLogger(__name__)


class RequestTimerMiddleware:
    def __init__(self, get_response):
        self.get_response = get_response

    def __call__(self, request):
        # Запуск таймера перед обработкой запроса
        start_time = perf_counter()
        # Обработка запроса
        response = self.get_response(request)
        #
        # Вычисление прошедшего бремени обработки запроса
        elapsed_time = perf_counter() - start_time
        # Логирование времени выполнения запроса
        logger.info(
            "Endpoint: %s, Request processed in %s seconds", request.path, elapsed_time
        )
        # Добавление заголовка с временем выполнения запроса 6 HTTP-ответ
        response["X-Elapsed-Time"] = str(elapsed_time)
        # Возвращение HTTP-ответа с добавленным заголовком
        return response
