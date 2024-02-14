import decimal
input_data = ""
inp = input()
while (inp != ""):
    input_data += inp + "\n"
    inp = input()

lines = input_data.split('\n')
output_data = []

count = 1
previous = 0
for line in lines:
    columns = line.split()
    if len(columns) >= 4 and previous != columns[3]:
        count += 1
    if len(columns) >= 4:
        previous = columns[3]
        value = decimal.Decimal(columns[3]) + decimal.Decimal('0.7') * count
        columns[3] = str(value)
    output_data.append(' '.join(columns))

output = '\n'.join(output_data)
print(output)