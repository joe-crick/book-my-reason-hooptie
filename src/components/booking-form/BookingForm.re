let component = ReasonReact.statelessComponent("BookingForm");

let str = Str.txt;

let translate = string => string;

let make =
    (
      ~pickup,
      ~dropoff,
      ~time,
      ~pickupDate,
      ~updatePickup,
      ~updateDate,
      ~updateDropoff,
      ~updateTime,
      ~bookingAction,
    ) => {
  ...component,
  render: _self =>
    <form className="form">
      <fieldset className="fieldset">
        <legend className="legend"> (str("booking.legend")) </legend>
        <input
          _type="text"
          label=(translate("pickup.label"))
          name="pickup"
          placeholder=(translate("pickup.placeholder"))
          onChange=updatePickup
          value=pickup
        />
        <input
          _type="text"
          label=(translate("dropoff.label"))
          name="dropoff"
          placeholder=(translate("dropoff.placeholder"))
          onChange=updateDropoff
          value=dropoff
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
          value=pickupDate
          onChange=updateDate
        />
        <label className="label" htmlFor="pickup-time">
          (str("booking.pickupTime"))
        </label>
        <input className="input" _type="time" onChange=updateTime value=time />
      </fieldset>
      <div className="buttonContainer">
        <button className="button" onClick=bookingAction>
          (str("booking.bookNow"))
        </button>
      </div>
    </form>,
};
