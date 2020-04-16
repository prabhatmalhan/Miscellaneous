# # Finding Length of Largest Palindrome


def longest(str=" "):
    s=set(list(str))
    flag=False
    len=0
    for ch in s:
        count=0
        for c in str:
            if  c==ch:
                count+=1
        if count%2!=0:
            flag=True
            count-=1
        len+=count
    if flag :
        len+=1
    return len


word=input('Enter the word : ')
print(f'length of longest palindrome = {longest(word.lower())}')

