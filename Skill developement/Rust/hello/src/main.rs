use std::io;

fn main() {
    let mut size = String::new();
    io::stdin().read_line(&mut size).expect("error");
    let size: u32 = size.trim().parse().expect("error");
    println!("{}" ,size);
    let array = [3;size];
    for element in array.iter() {
        println!("{}", element);
    }
}
