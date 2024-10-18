from django.apps import AppConfig


from django.core.management.base import BaseCommand
from django.db import connections
from sales_shop import settings


class Command(BaseCommand):
    def handle(self, *args, **options):
        # Get the default database connection
        connection = connections["default"]
        # Create a cursor object
        cursor = connection.cursor()
        raw_sql = "SELECT 1;"
        cursor.execute(raw_sql)
        # Fetch all the results
        results = cursor.fetchall()
        # Process the results
        for row in results:
            print(row)
        # Close the cursor
        cursor.close()


class ShopAppConfig(AppConfig):
    default_auto_field = "django.db.models.BigAutoField"
    name = "shop_app"
