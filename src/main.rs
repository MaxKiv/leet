// Hacking around the janky directory setup, its like c!
include!("../code/53.maximum-subarray.rs");

pub struct Solution;

fn main() {
    let nums: Vec<i32> = vec![-2, 1, -3, 4, -1, 2, 1, -5, 4];
    let output = Solution::max_sub_array(nums.clone());
    let answer = 6;

    println!("testing {:?}", nums);
    assert_eq!(
        output, answer,
        "{:?} yields {output} but should return {answer}",
        nums
    );
}
