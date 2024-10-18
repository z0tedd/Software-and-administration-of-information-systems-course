from django.shortcuts import HttpResponse, render
import logging

logger = logging.getLogger(__name__)


def calculate(request):
    expression = request.GET.get("expression")
    try:
        result = eval(expression)
        logger.info("info for dummies %s - %s", expression, result)
    except Exception as e:
        logger.error("Error - %s", repr(e))
        return HttpResponse(e, status=400)
    return HttpResponse(result)


# Create your views here.
