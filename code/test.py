import importlib.util

spec = importlib.util.spec_from_file_location(
    "maximum_subarray", "53.maximum-subarray.py"
)
maximum_subarray = importlib.util.module_from_spec(spec)
spec.loader.exec_module(maximum_subarray)

if __name__ == "__main__":
    sol = maximum_subarray.Solution()
    input = [-1]
    output = sol.maxSubArray(input)
    answer = -1

    print(f"input: {input}")
    print(f"output: {output}")
    print(f"answer: {answer}")

    assert output == answer
    # f"input: {input} should produce {answer} but produces {output}",
