prices = [7,1,5,3,6,4]

prices_2 = prices.copy()
prices_2.sort()



while len(prices_2) > 1 : 
    
    buy = prices_2[0]
    sell = prices_2[len(prices_2)-1] 
    
    if prices.index(buy) < prices.index(sell) :
       
       print (sell-buy)
       
       break 
   
    else :
        prices_2.remove(prices_2[len(prices_2)-1])
        


   
