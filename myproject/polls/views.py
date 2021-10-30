from django.shortcuts import render
from django.http import HttpResponse
from django.template import loader


def index(request):
    template = loader.get_template("hello.html")
    return HttpResponse(template.render(request))#
# Create your views here.

#def index(request):
    #return render(request,'hello.html', {})