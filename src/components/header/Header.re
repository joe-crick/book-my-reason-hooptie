let component = ReasonReact.statelessComponent("Header");

let str = Str.txt;

let make = (_) => {
  ...component,
  render: _self =>
    <header style=HeaderStyles.header>
      <h1 style=HeaderStyles.title> (str("Book My Hooptie!")) </h1>
    </header>,
};
