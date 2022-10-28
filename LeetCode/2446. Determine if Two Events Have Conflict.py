class Solution:
    def haveConflict(self, event1: List[str], event2: List[str]) -> bool:
        st1=int(''.join(list(event1[0].split(":"))))
        et1=int(''.join(list(event1[1].split(":"))))
        st2=int(''.join(list(event2[0].split(":"))))
        et2=int(''.join(list(event2[1].split(":"))))
        
        if(st1>=st2 and et2>=st1):
            return True
        elif st2>=st1 and et1>=st2:
            return True
        return False
            
