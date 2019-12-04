// Generated by BUCKLESCRIPT VERSION 4.0.18, PLEASE EDIT WITH CARE
'use strict';

var Fs = require("fs");
var Jest = require("@glennsl/bs-jest/src/jest.js");
var Caml_format = require("bs-platform/lib/js/caml_format.js");
var Caml_option = require("bs-platform/lib/js/caml_option.js");
var Utils$AdventOfCode2019 = require("../../src/Utils.bs.js");
var TwoOne$AdventOfCode2019 = require("../../src/2/TwoOne.bs.js");

var dirname = typeof __dirname === "undefined" ? undefined : __dirname;

var dirname$1 = dirname === undefined ? undefined : Caml_option.some(dirname);

var input = Fs.readFileSync("" + (String(dirname$1) + "/../../src/2/TwoOneInput.txt"), "utf8").split(",").map(Caml_format.caml_int_of_string);

Jest.describe("TwoOne.intcode", (function (param) {
        Jest.test("Example [|1, 9, 10, 3, 2, 3, 11, 0, 99, 30, 40, 50|]", (function (param) {
                return Jest.Expect[/* toEqual */12](/* array */[
                            3500,
                            9,
                            10,
                            70,
                            2,
                            3,
                            11,
                            0,
                            99,
                            30,
                            40,
                            50
                          ], Jest.Expect[/* expect */0](TwoOne$AdventOfCode2019.intcode(/* array */[
                                    1,
                                    9,
                                    10,
                                    3,
                                    2,
                                    3,
                                    11,
                                    0,
                                    99,
                                    30,
                                    40,
                                    50
                                  ], undefined, /* () */0)));
              }));
        Jest.test("Example [|1, 0, 0, 0, 99|]", (function (param) {
                return Jest.Expect[/* toEqual */12](/* array */[
                            2,
                            0,
                            0,
                            0,
                            99
                          ], Jest.Expect[/* expect */0](TwoOne$AdventOfCode2019.intcode(/* array */[
                                    1,
                                    0,
                                    0,
                                    0,
                                    99
                                  ], undefined, /* () */0)));
              }));
        Jest.test("Example [|2, 3, 0, 3, 99|]", (function (param) {
                return Jest.Expect[/* toEqual */12](/* array */[
                            2,
                            3,
                            0,
                            6,
                            99
                          ], Jest.Expect[/* expect */0](TwoOne$AdventOfCode2019.intcode(/* array */[
                                    2,
                                    3,
                                    0,
                                    3,
                                    99
                                  ], undefined, /* () */0)));
              }));
        Jest.test("Example [|2, 4, 4, 5, 99, 0|]", (function (param) {
                return Jest.Expect[/* toEqual */12](/* array */[
                            2,
                            4,
                            4,
                            5,
                            99,
                            9801
                          ], Jest.Expect[/* expect */0](TwoOne$AdventOfCode2019.intcode(/* array */[
                                    2,
                                    4,
                                    4,
                                    5,
                                    99,
                                    0
                                  ], undefined, /* () */0)));
              }));
        Jest.test("Example [|1, 1, 1, 4, 99, 5, 6, 0, 99|]", (function (param) {
                return Jest.Expect[/* toEqual */12](/* array */[
                            30,
                            1,
                            1,
                            4,
                            2,
                            5,
                            6,
                            0,
                            99
                          ], Jest.Expect[/* expect */0](TwoOne$AdventOfCode2019.intcode(/* array */[
                                    1,
                                    1,
                                    1,
                                    4,
                                    99,
                                    5,
                                    6,
                                    0,
                                    99
                                  ], undefined, /* () */0)));
              }));
        return Jest.test("Problem Input", (function (param) {
                      var __x = Utils$AdventOfCode2019.update(2, 2, Utils$AdventOfCode2019.update(1, 12, input));
                      return Jest.Expect[/* toEqual */12](3716250, Jest.Expect[/* expect */0](Utils$AdventOfCode2019.nth(0, TwoOne$AdventOfCode2019.intcode(__x, undefined, /* () */0))));
                    }));
      }));

exports.dirname = dirname$1;
exports.input = input;
/* dirname Not a pure module */
