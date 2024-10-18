import logging 
from datetime import datetime 

logger = logging.getLogger(__name__)

class VerboseLoggingMiddleware:
    def __init__(self, get_response):
        self.get_response = get_response
    
    def __call__(self, request):
        
        self.log_request(request)

        response = self.get_response(request)



        return response
    def log_request(request):
        logger.info(
            "Request information, time: %s , client_ip: %s , path: %s",
            str(datetime.now()),
            self.get_client_ip(request),
            request.get_full_path()
        )
    def get_client_ip(request):
        client_ip = request.META["HTTP_X_FORWARDED_FOR"]
        if not client_ip:
            return request.META["REMOTE_ADDR"]
        client_ip_split = client_ip.split(",")
        return client_ip_split[0]



