import decimal

input_data = ""
text = input()
while (text != ""):
    input_data += text + "\n"
    text = input()

lines = input_data.split('\n')
output_data = []

for line in lines:
    columns = line.split()
    if len(columns) >= 4:
        value = decimal.Decimal(columns[3]) + decimal.Decimal('1.0')
        columns[3] = str(value)
    output_data.append(' '.join(columns))

output = '\n'.join(output_data)
print(output)
