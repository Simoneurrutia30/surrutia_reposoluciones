
def romano_a_arabigo(num_romano):

    resultado = 0

    dic = {
        'M' : 1000,
        'D' : 500,
        'C' : 100,
        'L' : 50,
        'X' : 10,
        'V' : 5,
        'I' : 1
    }

    if len(num_romano) > 0:
       
        anterior = num_romano[0]

  
    for letra in num_romano:

 
        if letra in dic:
           
            actual = dic[letra]
        else:
           
            print 'Valor invalido:', letra
            return  
    
        if anterior >= actual:
            resultado += actual

        else:
         
            resultado += actual - (2 * anterior)

        anterior = actual

    return resultado


num_romano = raw_input("Ingrese un numero romano: ").upper()
print "El numero arabigo es:", romano_a_arabigo(num_romano)

   
