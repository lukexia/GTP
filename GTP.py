def getGTP(total, feet, tails):
    try:
        total = int(total)
        feet = int(feet)
        tails = int(tails)
    except ValueError:
        print('enter non-negtive integers of total feet tails')
    
    if total < 0: print('enter non-negative total')
    if feet < 0: print('enter non-negative feet')
    if tails < 0: print('enter non-negative tails')
    _ = feet - 2 * tails - 2 * total
    if _ < 0 or _ % 6:  # residue not zero
        P = 0
        T = 0
        G = 0
    else:
        P = int(_ / 6)
        T = tails
        G = total - T - P
    
    return G, T, P
