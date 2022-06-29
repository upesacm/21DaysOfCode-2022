
x = list(map(int, input().split()))
nu = x[0]
ns = x[1]
ws = x[2]

get_rating = nu - ns
higher_rating = get_rating - ws

print("{} {}".format(get_rating, higher_rating))