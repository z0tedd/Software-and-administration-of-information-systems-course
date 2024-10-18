def optimize_search(array1, array2):
    matches = []
    for element in array1:
        if element in array2:
            matches.append(element)
    return matches
