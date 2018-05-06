let str = Str.txt;

let translate = string => string;

type action =
  | UpdatePickup(string)
  | UpdateDropoff(string)
  | UpdateTime(string)
  | UpdatePickupDate(string);

type state = {
  pickup: string,
  dropoff: string,
  time: string,
  pickupDate: string,
};

let component = ReasonReact.reducerComponent("BookingForm");

let make = (_) => {
  let navigateToCarList = _event => ReasonReact.Router.push("/en/hoopties");
  {
    ...component,
    initialState: () => {pickup: "", dropoff: "", time: "", pickupDate: ""},
    /* State transitions */
    reducer: (action, state) =>
      switch (action) {
      | UpdatePickup(text) => ReasonReact.Update({...state, pickup: text})
      | UpdateDropoff(text) => ReasonReact.Update({...state, dropoff: text})
      | UpdateTime(text) => ReasonReact.Update({...state, time: text})
      | UpdatePickupDate(text) =>
        ReasonReact.Update({...state, pickupDate: text})
      },
    render: ({state, send}) =>
      <form className="form">
        <fieldset className="fieldset">
          <legend className="legend"> (str("booking.legend")) </legend>
          <input
            _type="text"
            label=(translate("pickup.label"))
            name="pickup"
            placeholder=(translate("pickup.placeholder"))
            onChange=(
              event =>
                send(
                  UpdatePickup(
                    ReactDOMRe.domElementToObj(
                      ReactEventRe.Form.target(event),
                    )##value,
                  ),
                )
            )
            value=state.pickup
          />
          <input
            _type="text"
            label=(translate("dropoff.label"))
            name="dropoff"
            placeholder=(translate("dropoff.placeholder"))
            onChange=(
              event =>
                send(
                  UpdateDropoff(
                    ReactDOMRe.domElementToObj(
                      ReactEventRe.Form.target(event),
                    )##value,
                  ),
                )
            )
            value=state.dropoff
          />
        </fieldset>
        <fieldset className="fieldset">
          <label className="label" htmlFor="pickup-date">
            (str("booking.pickupDate"))
          </label>
          <input
            _type="date"
            className="input"
            id="pickup-date"
            value=state.pickupDate
            onChange=(
              event =>
                send(
                  UpdatePickupDate(
                    ReactDOMRe.domElementToObj(
                      ReactEventRe.Form.target(event),
                    )##value,
                  ),
                )
            )
          />
          <label className="label" htmlFor="pickup-time">
            (str("booking.pickupTime"))
          </label>
          <input
            className="input"
            _type="time"
            onChange=(
              event =>
                send(
                  UpdateTime(
                    ReactDOMRe.domElementToObj(
                      ReactEventRe.Form.target(event),
                    )##value,
                  ),
                )
            )
            value=state.time
          />
        </fieldset>
        <div className="buttonContainer">
          <button className="button" onClick=navigateToCarList>
            (str("booking.bookNow"))
          </button>
        </div>
      </form>,
  };
};
