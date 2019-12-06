let parseUtf = CryptoJs.parse(CryptoJs.utf8);
let parseB64 = CryptoJs.parse(CryptoJs.base64);
let toUtf = CryptoJs.stringify(CryptoJs.utf8);
let toB64 = CryptoJs.stringify(CryptoJs.base64);
let concat = List.fold_left(CryptoJs.WordArray.concat);

let one = parseUtf("Hello world");
let two = parseUtf("Hi back");
let three = parseB64("eVrXh3hgaLDmf7ZUz2ntxCdZ");

let both = concat(one, [two, three]);

Js.log(both->toB64);