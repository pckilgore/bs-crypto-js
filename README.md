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

let hmacHash = CryptoJs.sha3("whoa dude");
Js.log(hmacHash->toString)
// 0a5fd70911434cc1fcfaad238dcc55d51125a5ea09789aa5ec2af4b91eeb8f091b738a24c4819451efdc0b3e5164ef9da0d571ff5252ea963121865a39cd0781
```
