"""Demostration of creating a class method to instantiate the instances from a .csv file using a python program"""
import csv

class Item:

    # Creating an empty list to store all the 5 instances
    all = []    
    
    # Initializing Class Attribute
    pay_rate = 0.8 # Pay rate after discount

    # A constructor for class Item where we have to implement the instance attributes inside the constructor
    def __init__(self, name: str, price: float, quantity = 0):
        
        # Assign to self object the Instance attribute
        self.name = name
        self.price = price
        self.quantity = quantity

        # Actions to execute
        Item.all.append(self)

    # Creating a magic method repr to represent all the instances in a list named all
    def __repr__(self):
        return f"Item('{self.name}', {self.price}, {self.quantity})"

    # Creating a method to calculate the total price of an instance item1 or item2
    def calculate_total_price(self):
        return self.price * self.quantity
         
    # Creating another method to apply Discount to the total price of the object
    def apply_discount(self):
        
        # Using  self.pay_rate enables us to retrieve the class attribute pay_rate 
        self.price = self.price * self.pay_rate
    
    @classmethod
    def instantiate_from_csv(cls):
        with open('items.csv', 'r') as f:
            reader = csv.DictReader(f)
            items = list(reader)
        
        for item in items:
            Item(
                name = item.get('name'),
                price = item.get('price'),
                quantity = item.get('quantity'),
            )

print(Item.instantiate_from_csv())
print(Item.all)
