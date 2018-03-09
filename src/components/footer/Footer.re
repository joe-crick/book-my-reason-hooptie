let component = ReasonReact.statelessComponent("Header");

let make = (_) => {
  ...component,
  render: (self) =>
        <footer style=(FooterStyles.footer)>
          <h1 style=(FooterStyles.text)>(ReasonReact.stringToElement("Copyright 2018, Book my Hooptie"))</h1>
        </footer>
};
