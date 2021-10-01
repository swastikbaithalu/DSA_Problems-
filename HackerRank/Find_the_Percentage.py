from decimal import Decimal

def Finding_the_percentage(name,scores,student_marks,query_name):
    # Extract the values into a list: query_scores
    student_query = student_marks[query_name]
    # Sum the scores in the list: total_scores
    total_mark = sum(student_query)
    # Convert the floats to decimals and average the scores: avg
    Avg = Decimal(total_mark/3)
    # Print the mean of the scores, correct to two decimals
    return round(Avg,2)

if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()    
    print(Finding_the_percentage(name,scores,student_marks,query_name))