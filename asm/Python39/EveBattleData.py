class BattleSim:

  class T:
    Health = 3000000
    HealPS = 3250
    Damage = 9000
    Amount = 1
  
  class D:
    Health = 1000000
    HealPS = 2000
    Damage = 10500
    Amount = 1


  win = 1
  RATIO = 0
  Dread = D()
  Titan = T()

  def damage(s):
    if s == True:
      temp = Titan.Damage - (Dread.Amount * Dread.HealPS) 
      temp2 = Dread.Damage - (Titan.Amount * Titan.HealPS)   
      return temp, temp2

  def Reset(): 
    Titan.Amount = 1
    Dread.Amount = 1

  def OpenBattle():
    Dread.Amount += 1
    DamageToDread, DamageToTitan = damage(True)
    print(str(DamageToDread) + str(DamageToTitan))
      

  def DreadDefenseBattle():
    return 0
  #def TitanDefenseBattle():

Controller = BattleSim()
Controller.OpenBattle
