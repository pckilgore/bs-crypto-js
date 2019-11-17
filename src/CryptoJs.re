/**
 *  Object of type CryptoJS.lib.WordArray
 */
type wordArray;

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

// Encoding Methods
[@bs.send] external parse: (encoder, string) => wordArray = "parse";
[@bs.send] external stringify: (encoder, wordArray) => string = "strinfigy";

[@bs.send] external toString: wordArray => string = "toString";

// Hashing functions
[@bs.module] external sha1: string => wordArray = "crypto-js/sha1";
[@bs.module] external sha256: string => wordArray = "crypto-js/sha256";
[@bs.module] external sha512: string => wordArray = "crypto-js/sha512";
[@bs.module] external sha3: string => wordArray = "crypto-js/sha3";

// HMAC
[@bs.module]
external hmacSha1: (string, string) => wordArray = "crypto-js/hmac-sha1";
[@bs.module]
external hmacSha256: (string, string) => wordArray = "crypto-js/hmac-sha256";
[@bs.module]
external hmacSha512: (string, string) => wordArray = "crypto-js/hmac-sha512";
[@bs.module]
external hmacSha3: (string, string) => wordArray = "crypto-js/hmac-sha3";