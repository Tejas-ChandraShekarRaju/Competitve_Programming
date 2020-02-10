
class limping_dog():
    def count_steps(self,time):
        res = 0
        while time>0:
            time-=1
            if res%4 == 2:
                time-=1
            if time >=0:
                res+=1
                if res%47 == 0:
                    time-=42
        return res                
