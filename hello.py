"""
hello python
no curly braces for function bodies
no semicolons
no datatypes
implicit main
"""

# main
x = 4	# variable declarations don't need data types
s = 'a string ' + 'concat ' + "\ndouble and single quotes are interchangable"
print s
2 + 2
print len('hello there')
print len(s)
# concat lists as well as strings
g = ['delta', 'epsilon', 'zeta']
greek = ['alpha', 'beta', 'gamma'] + g
greek.pop()
greek.append('eta')
listlist = [greek, g, [1, 2, 3] ]	# list of lists
print greek
print greek[-3]		# negaitve indexing
print greek[1:4]		# slice operator [x, y)
print greek[:4]
print greek[1:]

# tuples are like immutable lists
x, y = (3, 5)		# new x and y vars are assigned values
assert x == 3 and y == 5		# no parenthesis
s1 = set(greek)
print s1
s1.add('alpha')
s1.add('theta')
print s1
print 'theta' in s1		# contains
s2 = set(['alpha', 'beta', 'iota', 'kappa'])		# arg is list
print s1 - s2		# set difference
print s1 & s2		# set intersection
print s1 | s2		# set union

# dictionaries
d = {'foo': 3, 'bar':6, 'baz':'qux'}		# sets and dicts are unordered
assert d["foo"] == 3 and d['baz'] == 'qux'
d.keys()
d.values()
d.items()		# a list with each element as a tuple
del d['bar']		# deletes element

map(lambda x: x * x, [1,2,3])
filter(lambda x: x > 3, [1,2,3,4,5,4,3,2,1])

print [x+1 for x in nums if x % 2 == 1]		# list comprehension

