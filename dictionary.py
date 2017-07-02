# what is a dictionary?
# is some sort of list with the difference that: the values are not selectable via an index but with a key. 
# they are unordered key-value-pairs.

dictionary_quantity={"banane":2, "mele":4, "ciliegie":30}
print "quantita di banane" , dictionary_quantity["banane"]
print "quantita di mele" , dictionary_quantity["mele"]
print "quantita di ciliegie" , dictionary_quantity["ciliegie"]

#The only restriction is that only immutable object can be used as keys

dic = { (1,2,3): "abc", 3.1415:"abc"}
print dic