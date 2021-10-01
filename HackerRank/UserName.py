def CodelandUsernameValidation(strParam):

    # code goes here
    if len(strParam) <= 3:
        return "false"
    for i in strParam:
        if i != "_" and len(strParam) < 26:
            if strParam[0].isalpha() and strParam[-1] != "_":
                return "true"
            elif strParam[0].isdigit():
                return "false"
        return "false"


# keep this function call here
print(CodelandUsernameValidation(input()))
