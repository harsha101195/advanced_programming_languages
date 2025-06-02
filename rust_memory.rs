
fn create_vector() -> Vec<i32> {
    let mut data = Vec::new();
    for i in 0..1_000_000 {
        data.push(i);
    }
    data
}

fn main() {
    let numbers = create_vector();
    let sum: i64 = numbers.iter().map(|&x| x as i64).sum();
    println!("Sum: {}", sum);
}
