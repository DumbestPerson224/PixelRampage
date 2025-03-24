import EncryptionAlgorithm
class Authentication:
    def __init__(self):
  
        self.encryptionAlgorithm = EncryptionAlgorithm.EncryptionAlgorithm()
        self.encryptionAlgorithm.generate_key()

    def encode(self, username, password):
      username = self.encryptionAlgorithm.encrypt(username) 
      password = self.encryptionAlgorithm.encrypt(password)
   
    def decode(self, username, password):
        username = self.encryptionAlgorithm.decode(username)
        password = self.encryptionAlgorithm.decode(password)