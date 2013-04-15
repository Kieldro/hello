"""
hello python

examples of python features

no curly braces for function bodies
no semicolons
no datatypes
implicit main
"""

#import otherPy

# Main Function
if __name__ == '__main__':		# doesn't not execute when imported
	2
	4
	x = 4	# variable declarations don't need data types
	
	s = 'concat ' + "\ndouble and single quotes are interchangable" + str(2)
	print s
	print len('hello there')
	
	# lists
	print '\npython lists:'
	g = ['delta', 'epsilon', 'zeta']
	h = [0]*5
	greek = ['alpha', 'beta', 'gamma'] + g	# concat lists as well as strings
	greek.pop()
	greek.append('eta')
	listlist = [greek, g, [1, 2, 3] ]	# list of lists
	print greek
	print greek[-3]		# negaitve indexing
	print greek[1:4]		# slice operator [x, y)
	print greek[:4]
	print greek[1:]

	# tuples are like immutable lists
	print '\ntuples:'
	x, y = (3, 5)		# new x and y vars are assigned values
	x, y = y, x		# swap
	assert True and y == y		# no parenthesis
	assert not False, 'assert message '	+ str(x)	# no parenthesis
	print type ([])
	assert type([]) is list
	assert type({}) is dict		
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
	
	nums = range(10)
	print [x+1 for x in nums if x % 2 == 1]		# list comprehension
	#return None		# null in c++
	map(lambda x: x * x, [1,2,3])
	filter(lambda x: x > 3, [1,2,3,4,5,4,3,2,1])

	print [x+1 for x in nums if x % 2 == 1]		# list comprehension

	print dir([1,2])
	#print help([1,2])
	
	# classes
	class FruitShop:
		def __init__(self, name, fruitPrices):
		    """
		        name: Name of the fruit shop
		        
		        fruitPrices: Dictionary with keys as fruit 
		        strings and prices for values e.g. 
		        {'apples':2.00, 'oranges': 1.50, 'pears': 1.75} 
		    """
		    # class variables
		    self.fruitPrices = fruitPrices
		    self.name = name
		    # static class variable
		    FruitShop.constant = 3.14159
		    print 'Welcome to the %s fruit shop' % (name)
		    
		def getCostPerPound(self, fruit):
		    """
		        fruit: Fruit string
		    	Returns cost of 'fruit', assuming 'fruit'
				is in our inventory or None otherwise
		    """
		    if fruit not in self.fruitPrices:
		        print "Sorry we don't have %s" % (fruit)
		        return None
		    return self.fruitPrices[fruit]
	
	for index in range(3):
		2
	
	
	print 'Everything is syntactically correct.'
	# end of main
