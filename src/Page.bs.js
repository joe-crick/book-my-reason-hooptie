// Generated by BUCKLESCRIPT VERSION 2.2.2, PLEASE EDIT WITH CARE
'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var React = require("react");
var ReasonReact = require("reason-react/src/ReasonReact.js");
var Footer$ReactTemplate = require("./components/footer/Footer.bs.js");
var Header$ReactTemplate = require("./components/header/Header.bs.js");

var component = ReasonReact.statelessComponent("Page");

function handleClick(_, _$1) {
  console.log("clicked!");
  return /* () */0;
}

function make(message, _) {
  var newrecord = component.slice();
  newrecord[/* render */9] = (function (self) {
      return React.createElement("div", undefined, ReasonReact.element(/* None */0, /* None */0, Header$ReactTemplate.make(/* array */[])), React.createElement("div", {
                      onClick: Curry._1(self[/* handle */0], handleClick)
                    }, message), ReasonReact.element(/* None */0, /* None */0, Footer$ReactTemplate.make(/* array */[])));
    });
  return newrecord;
}

exports.component = component;
exports.handleClick = handleClick;
exports.make = make;
/* component Not a pure module */
