try:
    import thread
except:
    print("this program runs on python 2.7")
def start0():
    number=0
    while True:
        print(" "+str(number))
        print(" -"+str(number))
        number=number+2
    #213117

def start1():
    number=1
    while True:
        print(number)
        print("-"+str(number))
        number=number+2

try:
   thread.start_new_thread( start0, () )
   thread.start_new_thread( start1, () )
except:
   print("Error: unable to start thread")

while 1:
   pass
