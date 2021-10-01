def Nested_list(name,score):
    l = []
    l.append([name,score])
    scores  = set()
    scores.add(score)
    second_lowest = sorted(scores)[1]

    for name, score in l :
        if score == second_lowest:
            second_lowest.append(name)
    
    for name in sorted(second_lowest):
        return name 

        
if __name__ == '__main__':
    for _ in range(int(input())):
        name = input()
        score = float(input())
    print(Nested_list(name,score))