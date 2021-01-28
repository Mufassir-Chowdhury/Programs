import csv
txid = []
with open('Book1.csv', 'r') as f:
    for i in f: 
        txid.append(i)

with open('Registration.csv', 'r') as f:
    for i in f:
        listing = i.split(',')
        print(listing[14])