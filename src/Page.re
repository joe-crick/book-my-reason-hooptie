let component = ReasonReact.statelessComponent("Page");

let make = _children => {
  ...component,
  render: (_) => <div> <Header /> <BookingForm /> <Footer /> </div>,
};
