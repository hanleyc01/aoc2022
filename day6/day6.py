# Parse the input data
datastream = open("data.txt").read()
# Initialize the last 14 characters received to an empty list
last_fourteen = []

# Process each character in the datastream
for i, c in enumerate(datastream):
  # Add the current character to the last 14 characters
  last_fourteen.append(c)

  # If the last 14 characters have more than 14 elements, remove the oldest one
  if len(last_fourteen) > 14:
    last_fourteen.pop(0)

  # If the last 14 characters are all different, a start-of-message marker has been detected
  if len(set(last_fourteen)) == 14:
    # Report the number of characters processed so far
    print(i + 1)
    break

