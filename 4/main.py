def triangular_pdf(x):
    if x<0:
        return 0
    elif x>0 and x<1:
        return x
    elif x>=1 and x<2:
        return (2-x)
    else:
     return 0
print(triangular_pdf(-0.5))