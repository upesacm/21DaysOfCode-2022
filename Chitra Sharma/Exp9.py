def check_baggage(baggage_weight):
    if(baggage_weight>=0)and(baggage_weight<=40):
        return True
    else:
        return  False
def check_immigiration(expiry_year):
    if(expiry_year>=2030)and(expiry_year<=2050):
        return  True
    else:
        return False
def check_security(noc_status):
    if(noc_status=='valid')or(noc_status=='VALID'):
        return  True
    else:
        return  False
def traveler():
    traveler_id=int(input("Enter the id: "))
    traveler_name=input("Enter the traveler name: ")
    baggage_weight=int(input("Enter the baggage weight:"))
    expiry_year=int(input("Enter the expiry year: "))
    noc_status=input("Enter the noc_status: ")
    check_baggage(baggage_weight)
    check_immigiration(expiry_year)
    check_security(noc_status)
    if(check_baggage(baggage_weight)==True  and check_immigiration(expiry_year)==True   and check_security(noc_status)==True):
        print(traveler_id,traveler_name)
        print("Allow traveler to fly")
    else:
        print(traveler_id,traveler_name)
        print("Detain traveler for Re-checking")

traveler()
