def defangIPaddress(address: str) -> str:
    new_address = address.replace(".","[.]")
    return new_address

# Test case 1: Standard IP address
ip1 = "192.168.1.1"
print(defangIPaddress(ip1))
# Expected output: 192[.]168[.]1[.]1

# Test case 1: Standard IP address
ip1 = "192.168.1.1"
print(defangIPaddress(ip1))
# Expected output: 192[.]168[.]1[.]1