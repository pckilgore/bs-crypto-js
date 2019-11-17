# bs-crypto-js

Bucklescript bindings for (crypto-js)[https://github.com/brix/crypto-js]@(3.1.9-1)[https://www.npmjs.com/package/crypto-js/v/3.1.9-1]

## Current State

Minimal bindings over hasing function APIs I needed for another project (SHA / HMAC). **There are no cipher (encrypt/decrypt) bindings**.

Moreover, the typing could probably be better. According to these bindings, all `wordArray`s are the same, when they should probably be algo-specific. So if you call a SHA1 decoder on a SHA3 encoded hash, don't expect the type system to be much help.

I am more than happy to guide someone through the process of adding additional bindings or reorganizing this repo to be better typed (probably submodule-per-algo will be best but I'm open to all ideas).

This library may rapidly iterate until version 1.x.x. If you would like to use it now, I suggest pinning to a specific version in your package json.

## Installation

```console
$ npm install @pckilgore/bs-crypto-js
```

or

```console
$ yarn add @pckilgore/bs-crypto-js
```

## Examples

```reasonml
let hash = CryptoJs.sha1("This is my string");
Js.log(hash->CryptoJs.toString);
// 37fb219bf98bee51d2fdc3ba6d866c97f06c8223

Js.log(CryptoJs.(stringify(latin1, hash)));
// 7û!îQÒýÃºmlðl#

let hmacHash = CryptoJs.hmacSha3("whoa dude", "SuperSecretKey");
Js.log(hmacHash->toString)
// bc1b2108c3860e1c85683b74cbec9d4824b1fd1b27b0779de7b8582ecaa6d8af6cb26233dd690263fcdbec3adb6e5112c0054e0ad0c0b7a65fa4b18a424159bf
```
