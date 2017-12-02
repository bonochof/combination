class Combination:
  def calc( self, n, r ):
    return 1 if n == r or r == 0 else self.calc( n - 1, r - 1 ) + self.calc( n - 1, r )

c = Combination()
print( c.calc(4, 1) )
print( c.calc(4, 2) )
print( c.calc(4, 3) )
print( c.calc(4, 4) )

