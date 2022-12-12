
def findAbsolute(N):
    if (N < 0):
        N = (-1) * N;
    print(N);
if __name__ == '__main__':
    N = -100;
    findAbsolute(N);

    def deciToBinary(decinumb):
    if(decinumb == 0):
return 0
return (decinumb % 2 + 10 * deciToBinary(decinumb // 2))
gvndecimalnumb = 222
resbinarynumbr = deciToBinary(gvndecimalnumb)
print('The decimal Equivalent of the given binary number {', gvndecimalnumb, '} is :',resbinarynumbr)
resbinarynumbr)
