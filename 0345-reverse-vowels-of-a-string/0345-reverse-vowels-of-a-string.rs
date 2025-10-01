#[inline]
fn is_vowel(c: &char) -> bool {
    matches!(c, 'a' | 'e' | 'i' | 'o' | 'u'
                | 'A' | 'E' | 'I' | 'O' | 'U')
}

impl Solution {
    pub fn reverse_vowels(s: String) -> String {
        let mut vowels: Vec<char> = s.chars().filter(is_vowel).collect();
        vowels.reverse();
        let mut rev = vowels.into_iter();
        s.chars()
            .map(|c| if is_vowel(&c) { rev.next().unwrap() } else { c })
            .collect()
    }
}
