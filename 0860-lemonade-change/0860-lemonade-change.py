class Solution:
    def lemonadeChange(self, bills: List[int]) -> bool:
        fives = 0
        tens = 0
        twenties = 0

        for i, n in enumerate(bills):
            if n == 5:
                fives += 1

            elif n == 10:
                tens += 1

                if fives > 0:
                    fives -= 1
                else:
                    return False

            elif n == 20:
                twenties += 1
                
                change = 15
                while tens > 0 and change >= 10:
                    tens -= 1
                    change -= 10
                
                while fives > 0 and change >= 5:
                    fives -= 1
                    change -= 5

                if change > 0:
                    return False

            else:
                return False

        return True

        