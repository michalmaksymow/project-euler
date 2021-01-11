import time

class Timer(object):

    def __init__(self):
        self.startTime = time.time()

    def __del__(self):
        print("Elapsed time: " + str((time.time() - self.startTime)*1000) + "ms")
    