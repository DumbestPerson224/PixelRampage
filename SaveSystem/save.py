import os, json
class SaveSystem:
    def __init__(self):
        self.__current_dir = os.getcwd()

    def write(self, file, content):
        try:
            with open(self.__current_dir + "/".join(file), "w") as wf:
                wf.write(json.encoder.JSONEncoder.encode(content))
            wf.close()
        except Exception as e:
            print(e)

    def read(self, file):
        try:
            with open(self.current_dir + "/".join(file), "r") as rf:
                content = json.decoder.JSONDecoder.decode(rf.read())
            rf.close()
            return content 
        except Exception as e:
            print(e)

    def delete(self, file):
        try:
            os.remove(self.current_dir + "/".join(file))
        except Exception as e:
              print(e)    

    def rename(self, file):
        try:
            os.rename(self.current_dir + "/".join(file))
        except Exception as e:
            print(e)

    def append(self, file, content):
        try:
            with open(self.current_dir + "/".join(file), "a") as af:
                af.write(content)
            af.close()
        except Exception as e:
            print(e)
    
