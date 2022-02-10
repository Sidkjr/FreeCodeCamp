"""Demostration of Inheritance in OOP with Python"""
import csv

class Item:

    # Creating an empty list to store all the 5 instances
    all = []    
    
    # Initializing Class Attribute
    pay_rate = 0.8 # Pay rate after discount

    # A constructor for class Item where we have to implement the instance attributes inside the constructor
    def __init__(self, name: str, price: float, quantity = 0):

        # Run validations or conditions for the recieved arguments
        assert price >= 0, f"Price {price} is not greater than zero!"
        assert quantity >= 0, f"Quantity {quantity} is not greater than or equal to 0!"
        
        # Assign to self object the Instance attribute
        self.name = name
        self.price = price
        self.quantity = quantity

        # Actions to execute
        Item.all.append(self)

    # Creating a magic method repr to represent all the instances in a list named all
    def __repr__(self):
        return f"{self.__class__.__name__}('{self.name}', {self.price}, {self.quantity})"

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
            print(item)
            Item(
                name = item.get('name'),
                price = float(item.get('price')),
                quantity = float(item.get('quantity')),
            )
    @staticmethod
    def is_integer(num):
        # Now we will count out the floats that are point zero
        #For g i.e 5.0 10.0

        if isinstance(num, float):
            #count out the floats that are point zero
            return num.is_integer()
        elif isinstance(num, int):
            return True
        else:
            return False

class Phone(Item):
    def __init__(self, name: str, price: float, quantity = 0, broken_phones = 0):

        #Call to super function to have accesss to all attributes
        super().__init__(
            name, price, quantity
        )
        # Run validations or conditions for the recieved arguments
        assert broken_phones >= 0, f"Broken Phones {broken_phones} is not greater than or equal to 0!"
        
        # Assign to self object the Instance attribute
        self.broken_phones = broken_phones



phone1 = Phone("jscPhonev10", 500, 5, 1)

print(Item.all)
print(Phone.all)
