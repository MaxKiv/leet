// Hacking around the janky directory setup, its like c!
include!("../code/1.two-sum.rs");

pub struct Solution;

// [2,7,11,15]
// 9
// [3,2,4]
// 6
// [3,3]
// 6

fn main() {
    let nums: Vec<i32> = vec![2, 7, 11, 15];
    let target = 9;
    let output = Solution::two_sum(nums.clone(), target);
    let answer: Vec<i32> = vec![0, 1];

    println!("testing {:?}", nums);
    assert_eq!(
        output, answer,
        "{:?} yields {:?} but should return {:?}",
        output, answer, nums
    );
}
