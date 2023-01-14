class Solution:
    def numRescueBoats(self, people: List[int], limit: int) -> int:

        sort = sorted(people)
        i=0
        j=len(sort)-1
        counter=0

        while i<=j:
            if i==j:
                counter+=1
                j-=1
             
            elif sort[i]+sort[j] <=limit:
                counter+=1
                i+=1
                j-=1
                 

            else:
                counter+=1
                j-=1
            
        return counter