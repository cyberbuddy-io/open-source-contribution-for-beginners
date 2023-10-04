'''
countdown timer in python
-------------------------------------------------------------
'''
import time

def countdown_timer(target_time):
   while target_time >= 0:
       mins, secs = divmod(target_time, 60) #dividing time in seconds and minutes
       timer = '{:02d}:{:02d}'.format(mins, secs)
       print(timer, end='\r')
       time.sleep(1) # waiting for one second
       target_time -= 1 # decreasing timer value by 1
   print('Times Up!')


if __name__ == '__main__':
   target_time = int(input("Enter a time in seconds: "))
   countdown_timer(target_time)