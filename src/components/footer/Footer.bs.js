// Generated by BUCKLESCRIPT VERSION 2.2.2, PLEASE EDIT WITH CARE
'use strict';

var React = require("react");
var ReasonReact = require("reason-react/src/ReasonReact.js");
var Str$ReactTemplate = require("../../utils/Str.bs.js");
var FooterStyles$ReactTemplate = require("./FooterStyles.bs.js");

var component = ReasonReact.statelessComponent("Header");

function make() {
  var newrecord = component.slice();
  newrecord[/* render */9] = (function () {
      return React.createElement("footer", {
                  style: FooterStyles$ReactTemplate.footer
                }, React.createElement("h1", {
                      style: FooterStyles$ReactTemplate.text
                    }, Str$ReactTemplate.txt("Copyright 2018, Book my Hooptie")));
    });
  return newrecord;
}

var str = Str$ReactTemplate.txt;

exports.component = component;
exports.str = str;
exports.make = make;
/* component Not a pure module */
