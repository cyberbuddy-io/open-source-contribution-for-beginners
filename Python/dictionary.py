intro={"First Name: ":"Sukhmeet","Last Name: ":"Singh","Date Of Birht: ":"01-09-2001"}
intro["Marital Status"]="Single"
print(type(intro))
print(intro)
print(intro.get("age","Not present"))
intro.clear()
print(intro)