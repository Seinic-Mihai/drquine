i = 5
import os
S='i = %d%cimport os%cS=%c%s%c%cif "Sully.py" in __file__:i+=1%cif i>0:%c    with open("Sully_"+str(i-1)+".py","w") as fd:%c        fd.write(S %c (i-1,10,10,39,S,39,10,10,10,10,37,10,10))%c    os.system("python3 Sully_"+str(i-1)+".py")%c'
if "Sully.py" in __file__:i+=1
if i>0:
    with open("Sully_"+str(i-1)+".py","w") as fd:
        fd.write(S % (i-1,10,10,39,S,39,10,10,10,10,37,10,10))
    os.system("python3 Sully_"+str(i-1)+".py")
