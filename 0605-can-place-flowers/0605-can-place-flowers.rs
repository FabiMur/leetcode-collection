use std::iter;

impl Solution {
    pub fn can_place_flowers(flowerbed: Vec<i32>, n: i32) -> bool {
        if n == 0 { return true; }

        iter::once(0)                       // Iterador que devuelve un 0
            .chain(flowerbed.into_iter())   // concatenado a iterador del vector
            .chain(iter::once(0))           // concatenado a iterador que devuelve un 0
            .collect::<Vec<_>>()             // Recogemos vector con padding (Un 0 al principio y otro al final)
            .windows(3)                     // Iterador sobre ventanas de 3 elmentos
            .enumerate()
            .scan((0, None), |(planted, last_center), (i, win)| {
                let center = i + 1;

                // Comprobamos que ventanas validas no se solapen
                if win == [0, 0, 0] && last_center.map_or(true, |j| center >= j + 2) {
                    *planted += 1;
                    *last_center = Some(center);
                }
                Some(*planted)
            }) // El estado se puede leer/escribir dentro del closure de scan directamente. Devolvemos un valor solamente para que lo procese any.
            .any(|planted| planted >= n)
    }
}