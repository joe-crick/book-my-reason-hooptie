let component = ReasonReact.statelessComponent("Header");
let str = Str.txt;

let make = (_) => {
  ...component,
  render: (_self) =>
        <footer style=(FooterStyles.footer)>
          <h1 style=(FooterStyles.text)>(str("Copyright 2018, Book my Hooptie"))</h1>
        </footer>
};
