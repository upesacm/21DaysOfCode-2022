# 21doc, day 18, Shiva 
import string
l=string.ascii_lowercase
def print_rangoli(size):
    # your code goes here
    r=[]
    for i in range(size):
        s=l[i:size][::-1]+l[i+1:size]
        s="-".join(s).center(4*n-3,'-')
        r.append(s)
    print("\n".join(r[::-1]+r[1:]))
if __name__ == '__main__':

# k this one was very very hard, had to take some help online