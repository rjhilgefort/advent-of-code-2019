// Generated by BUCKLESCRIPT VERSION 4.0.18, PLEASE EDIT WITH CARE
'use strict';

var Jest = require("@glennsl/bs-jest/src/jest.js");
var OneTwo$AdventOfCode2019 = require("../../src/1/OneTwo.bs.js");

Jest.describe("OneTwo.fuel_from_mass_compounded", (function (param) {
        Jest.test("12", (function (param) {
                return Jest.Expect[/* toBe */2](2, Jest.Expect[/* expect */0](OneTwo$AdventOfCode2019.fuel_from_mass_compounded(12, undefined, /* () */0)));
              }));
        Jest.test("14", (function (param) {
                return Jest.Expect[/* toBe */2](2, Jest.Expect[/* expect */0](OneTwo$AdventOfCode2019.fuel_from_mass_compounded(14, undefined, /* () */0)));
              }));
        Jest.test("1969", (function (param) {
                return Jest.Expect[/* toBe */2](966, Jest.Expect[/* expect */0](OneTwo$AdventOfCode2019.fuel_from_mass_compounded(1969, undefined, /* () */0)));
              }));
        return Jest.test("100756", (function (param) {
                      return Jest.Expect[/* toBe */2](50346, Jest.Expect[/* expect */0](OneTwo$AdventOfCode2019.fuel_from_mass_compounded(100756, undefined, /* () */0)));
                    }));
      }));

Jest.describe("OneTwo.fuelArray_from_massArray", (function (param) {
        return Jest.test("Real Deal", (function (param) {
                      return Jest.Expect[/* toBe */2](5193796, Jest.Expect[/* expect */0](OneTwo$AdventOfCode2019.fuelArray_from_massArray(/* array */[
                                          63455,
                                          147371,
                                          83071,
                                          57460,
                                          74392,
                                          145303,
                                          130181,
                                          53102,
                                          120073,
                                          93111,
                                          144471,
                                          105327,
                                          116466,
                                          67222,
                                          122845,
                                          146097,
                                          92014,
                                          114428,
                                          96796,
                                          131140,
                                          101481,
                                          87953,
                                          101415,
                                          75739,
                                          64263,
                                          94257,
                                          140426,
                                          62387,
                                          84464,
                                          104547,
                                          103581,
                                          89121,
                                          123301,
                                          64993,
                                          143555,
                                          55246,
                                          120986,
                                          67596,
                                          146173,
                                          149707,
                                          60285,
                                          83517,
                                          73782,
                                          103464,
                                          140506,
                                          78400,
                                          140672,
                                          141638,
                                          84470,
                                          116879,
                                          100701,
                                          63976,
                                          135748,
                                          65021,
                                          120086,
                                          147249,
                                          55441,
                                          135315,
                                          147426,
                                          93676,
                                          91384,
                                          110918,
                                          123368,
                                          102430,
                                          144807,
                                          82761,
                                          134357,
                                          62990,
                                          85171,
                                          134886,
                                          69166,
                                          119744,
                                          80648,
                                          96752,
                                          89379,
                                          136178,
                                          95175,
                                          124306,
                                          51990,
                                          57564,
                                          111347,
                                          79317,
                                          95357,
                                          85765,
                                          137827,
                                          105014,
                                          110742,
                                          105014,
                                          149330,
                                          78437,
                                          107908,
                                          139044,
                                          143304,
                                          90614,
                                          52119,
                                          147113,
                                          119815,
                                          125634,
                                          104335,
                                          138295
                                        ])));
                    }));
      }));

/*  Not a pure module */
