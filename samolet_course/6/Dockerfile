#Dockerfile
FROM python:3.11

ENV PYTHONUNBUFFERED=1 
WORKDIR /var/app

RUN pip install --upgrade pip 
COPY requirements.txt ./ 
RUN pip install -r requirements.txt 
COPY sales_shop ./ 
