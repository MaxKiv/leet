import importlib.util

spec = importlib.util.spec_from_file_location("leet", "code/1.two-sum.py")
leet = importlib.util.module_from_spec(spec)
spec.loader.exec_module(leet)

if __name__ == "__main__":
    sol = leet.Solution()

    # [2,7,11,15]↩ 9↩ [3,2,4]↩ 6↩ [3,3]↩ 6

    input = [1, 3, 4, 2]
    target = 6
    output = sol.twoSum(input, target)
    answer = [2, 3]

    print(f"input: {input}")
    print(f"output: {output}")
    print(f"answer: {answer}")

    assert output == answer
    # f"input: {input} should produce {answer} but produces {output}",
