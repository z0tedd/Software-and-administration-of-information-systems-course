from django.http import HttpResponse


def calculate(request):
    expression = request.Get.get("expression")
    try:
        #result = (expression)
    except Exception as e:
        return HttpResponse(e, status=400)
    return HttpResponse(result)


# Create your views here.
