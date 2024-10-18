# myapp/middLeware.py
import logging
from datetime import datetime

logging.basicConfig(
    level=logging.INFO,
    filename="py_log.log",
    filemode="w+",
)
logger = logging.getLogger(__name__)
logger.setLevel(logging.INFO)
py_formatter = logging.FileHandler(f"{__name__}.log", mode="w+")
logger.addHandler(py_formatter)


class VerboseLoggingMiddleware:
    def __init__(self, get_response):
        self.get_response = get_response

    def __call__(self, request):

        self.log_request(request)

        response = self.get_response(request)

        return response

    def log_request(self, request):
        logger.info(
            "Request information, time: %s , client_ip: %s , path: %s",
            str(datetime.now()),
            self.get_client_ip(request),
            request.get_full_path(),
        )

    def get_client_ip(self, request):
        client_ip = request.META.get("HTTP_X_FORWARDED_FOR")
        if not client_ip:
            return request.META["REMOTE_ADDR"]
        client_ip_split = client_ip.split(",")
        return client_ip_split[0]
