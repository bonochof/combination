# coding utf-8

class Combination
  def calc( n, r )
    return 1 if n == r or r == 0
    return self.calc( n - 1, r - 1 ) + self.calc( n - 1, r )
  end
end

hoge = Combination.new
p hoge.calc(4, 1)
p hoge.calc(4, 2)
p hoge.calc(4, 3)
p hoge.calc(4, 4)

