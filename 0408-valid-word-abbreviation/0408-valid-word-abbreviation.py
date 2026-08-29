class Solution:
    def validWordAbbreviation(self, word: str, abbr: str) -> bool:
        word_pointer = 0
        abbr_pointer = 0

        while word_pointer < len(word) and abbr_pointer < len(abbr):
            if(word[word_pointer] == abbr[abbr_pointer]):
                word_pointer += 1
                abbr_pointer += 1
            elif(abbr[abbr_pointer].isdigit()):
                if abbr[abbr_pointer] == '0':
                    return False

                length = 0

                while abbr_pointer < len(abbr) and (abbr[abbr_pointer].isdigit()):
                    length = length * 10 + int(abbr[abbr_pointer])
                    abbr_pointer += 1
                
                word_pointer += length
            
            else:
                return False
        
        return word_pointer == len(word) and abbr_pointer == len(abbr)

                    

        