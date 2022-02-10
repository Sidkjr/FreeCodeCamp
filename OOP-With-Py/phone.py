from item import Item

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