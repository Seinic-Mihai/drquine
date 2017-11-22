#C
def f():return '#C%cdef f():return %c%s%c%cif __name__=="__main__":#C%c    print (f() %c (10,39,f(),39,10,10,37))'
if __name__=="__main__":#C
    print (f() % (10,39,f(),39,10,10,37))
