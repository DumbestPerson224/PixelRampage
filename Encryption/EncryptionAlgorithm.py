import random
class EncryptionAlgorithm:
    def __init__(self):
        self.key = None

    def encrypt(self, enc):
        return str(enc).encode("utf-8").hex()
    
    def decode(self, enc, key):
        if key is self.key:
            return str(enc).encode().decode("utf-8")
        else:
            print("Incorrect key")

    def generate_key(self):
        self.key = random.randbytes(1000)
        return self.key
