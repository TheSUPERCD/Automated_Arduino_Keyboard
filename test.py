file = open("usb_hid_keys.h", "r")

lookup_dict = {}

class Key:
    def __init__(self, lookup):
        self.win = lookup['KEY_LGUI']
        self.shift = lookup['KEY_MOD_LSHIFT']
        self.ctrl = lookup['KEY_MOD_LCTRL']
        self.alt = lookup['KEY_MOD_LALT']
        self.enter = lookup['KEY_ENTER']
        self.lookup = lookup

    # def sendString(self):
    #     self.

for line in file:
    goodline = line[8:].split(" ")
    if line.startswith("#define ") and len(goodline)>1:
        key = goodline[0]
        value = ""
        for i in range(1, len(goodline)):
            if goodline[i] == "":
                continue
            else:
                value = goodline[i].rsplit()[0]
                break
        lookup_dict[key] = value

print(lookup_dict)