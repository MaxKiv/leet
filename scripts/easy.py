# ~/.leetcode/scripts/plan1.py
import json;

def easy(sps, stags):
    ##
    # `print` in python is supported,
    # if you want to know the data structures of these two args,
    # just print them
    ##
    problems = json.loads(sps)
    tags = json.loads(stags)

    print(problems)
    print(tags)

    ret = []
    tm = {}
    for tag in tags:
        tm[tag["tag"]] = tag["refs"];

    for i in problems:
        if i["id"] == 1:
            ret.append(str(i["id"]))

    # return is `List[string]`
    return ret
