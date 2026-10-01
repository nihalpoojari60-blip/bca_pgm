def get_price(item):
    if item == "idli":
        return 30
    elif item == "dosa":
        return 50
    elif item=="puri":
        return 40
    elif item=="chattambade":
        return 60
    elif item=="sajige":
        return 35
    elif item=="tea":
        return 10
    elif item=="coffee":
        return 15

        # TODO
    # TODO: complete the remaining items
    else:
        return 0


def item_cost(item, qty):
    # TODO: call get_price() and return the cost
    price=get_price(item)
    return price*qty


def calculate_gst(amount, rate=0.05):
    # TODO: return the GST rounded to 2 decimals
    gst=amount * 0.05
    return round(gst,2)   


def generate_bill(subtotal, discount_percent=0):
    discount=subtotal * discount_percent
    discount = # TODO
    amount_after_discount =subtotal-discount # TODO
    gst = calculate_gst(amount_after_discount)# TODO: call calculate_gst()
    total =amount_after_discount+gst # TODO
    return discount,gst,total # TODO: return discount, gst and total


def split_bill(total, people):
    each_pays = total/3# TODO   
    left_over =  total%3# TODO
    return each_pays,left_over # TODO


# ---------------- %Main program ----------------
# A group of 3 friends orders 2 dosa and 3 coffee, with a 10% coupon.

subtotal1 =item_cost("dosa",2)# TODO: call item_cost() for dosa and coffee and add them
discount1, gst1, total1 =generate_bill(subtotal,0.02)  # TODO: call generate_bill() using a KEYWORD argument
subtotal2 =item_cost("coffee",2) # TODO: call item_cost() for dosa and coffee and add them
discount2, gst2, total2 =generate_bill(subtotal,0.02)  # TODO: call generate_bill() using a KEYWORD argument
each, extra =split_bill(total1+toatal2) # TODO: call split_bill() with the total (as a whole number) and 3 people

print("Subtotal :", subtotal1)
print("Discount :", discount1)
print("GST      :", gst1)
print("Total    :", total1)
print("Each pays:", each, "| Left over:", extra)
print("Subtotal :", subtotal2)
print("Discount :", discount2)
print("GST      :", gst2)
print("Total    :", total2)
print("Each pays:", each, "| Left over:", extra)