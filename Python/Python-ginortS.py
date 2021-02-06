###################################################################################################

array="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1357902468"

print(*sorted(input(),key=array.index),sep='')
#sep='' :this parameter is used for replacing all spaces in string with specified operator 

###################################################################################################
