fn main() {
    println!("Hello, world!");
}
#[cfg(test)]
mod tests {
    #[test]
    fn test_gamma() {
        let mut parser = tree_sitter::Parser::new();
        parser.set_language(tree_sitter_cac::language()).unwrap();
    }
}
