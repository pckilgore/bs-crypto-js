/**
 * Object of type CryptoJS.lib.CipherParams;
 */
type cipherParams;

exception CryptoJsException;

// Abstract type representing a crypto-js encoder.
type encoder;
// Encodings
[@bs.module] external latin1: encoder = "crypto-js/enc-latin1";
[@bs.module] external utf8: encoder = "crypto-js/enc-utf8";
[@bs.module] external hex: encoder = "crypto-js/enc-hex";
[@bs.module] external utf16: encoder = "crypto-js/enc-utf16";
[@bs.module] external base64: encoder = "crypto-js/enc-base64";

module WordArray = {
  type t;
  // Make a new WordArray
  [@bs.scope "lib"] [@bs.module "crypto-js/core"]
  external make: t = "WordArray";

  [@bs.send] external random: (t, int) => t = "random";
  [@bs.send] external toString: t => string = "toString";
  [@bs.send] external create: (t, string) => t = "create";
  [@bs.send] external toEncodedString: (t, encoder) => string = "toString";
  [@bs.send] external concat: (t, t) => t = "concat";
};

// Encoding Methods
[@bs.send] external parse: (encoder, string) => WordArray.t = "parse";
[@bs.send] external stringify: (encoder, WordArray.t) => string = "stringify";

// Hashing functions
[@bs.module]
external sha1:
  ([@bs.unwrap] [ | `String(string) | `WordArr(WordArray.t)]) => WordArray.t =
  "crypto-js/sha1";
[@bs.module]
external sha256:
  ([@bs.unwrap] [ | `String(string) | `WordArr(WordArray.t)]) => WordArray.t =
  "crypto-js/sha256";
[@bs.module]
external sha512:
  ([@bs.unwrap] [ | `String(string) | `WordArr(WordArray.t)]) => WordArray.t =
  "crypto-js/sha512";
[@bs.module]
external sha3:
  ([@bs.unwrap] [ | `String(string) | `WordArr(WordArray.t)]) => WordArray.t =
  "crypto-js/sha3";

// HMAC
[@bs.module]
external hmacSha1:
  (
    [@bs.unwrap] [ | `String(string) | `WordArr(WordArray.t)],
    [@bs.unwrap] [ | `String(string) | `WordArr(WordArray.t)]
  ) =>
  WordArray.t =
  "crypto-js/hmac-sha1";
[@bs.module]
external hmacSha256:
  (
    [@bs.unwrap] [ | `String(string) | `WordArr(WordArray.t)],
    [@bs.unwrap] [ | `String(string) | `WordArr(WordArray.t)]
  ) =>
  WordArray.t =
  "crypto-js/hmac-sha256";
[@bs.module]
external hmacSha512:
  (
    [@bs.unwrap] [ | `String(string) | `WordArr(WordArray.t)],
    [@bs.unwrap] [ | `String(string) | `WordArr(WordArray.t)]
  ) =>
  WordArray.t =
  "crypto-js/hmac-sha512";
[@bs.module]
external hmacSha3:
  (
    [@bs.unwrap] [ | `String(string) | `WordArr(WordArray.t)],
    [@bs.unwrap] [ | `String(string) | `WordArr(WordArray.t)]
  ) =>
  WordArray.t =
  "crypto-js/hmac-sha3";