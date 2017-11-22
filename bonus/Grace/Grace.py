#C
S='#C%cS=%c%s%c%cwith open("Grace_kid.py", "w") as fd:%c    fd.write(S %c (10,39,S,39,10,10,37,10))%c'
with open("Grace_kid.py", "w") as fd:
    fd.write(S % (10,39,S,39,10,10,37,10))
