let component = ReasonReact.statelessComponent("Header");

let make = (_) => {
  ...component,
  render: (self) =>
      <header style=(HeaderStyles.header)>
        <h1 style=(HeaderStyles.title)>(ReasonReact.stringToElement("Book My Hooptie!"))</h1>
      </header>
};
