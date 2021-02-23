#solution
def age(n):
    return int(n[2])
def person_lister(f):
    def inner(people):
        return map(f,sorted(people, key=age))
    return inner
