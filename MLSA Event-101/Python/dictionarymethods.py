# In this we will learn the dictionary methods.
# let us first create our dictionary 
hindidictionary={
    "pankha":"fan",
    "kittab":"copy",
    "palang":"bed",
    "basta":"bag"

}
# in our dictionary to the extreme left we KEYS
# to our extreme right we have values
# now lets start with our dictionary commands

#  1. a.keys()
# used to get all the keys in the dictionary

print(hindidictionary.keys())  

# 2. a.values()
# used to get all the values in the dictionary

print(hindidictionary.values())

# 3. a.items
# used to get a pair of keys and values in tupple form

print(hindidictionary.items())

# 4. a.update
# updates the dictionary with keys-values pairs
# lets we have to update our dictionary with palang =sofa instead of bed
updateddict={
    "palang":"sofa"


}

hindidictionary.update(updateddict)
print(hindidictionary)

# a.update is also used to add more pairs to the dictionary

# 5. a.get
# used to get the value of specific key

print(hindidictionary.get("pankha"))


# THANKYOU




