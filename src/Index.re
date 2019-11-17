let hash = CryptoJs.sha1("This is my string");
Js.log(hash->CryptoJs.toString);
// 37fb219bf98bee51d2fdc3ba6d866c97f06c8223
Js.log(CryptoJs.(stringify(latin1, hash)));
// 7û!îQÒýÃºmlðl#

let hmacHash = CryptoJs.sha3("whoa dude");
Js.log(hmacHash->CryptoJs.toString);