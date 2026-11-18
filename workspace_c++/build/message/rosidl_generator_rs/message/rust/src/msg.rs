#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to message__msg__BoxType

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BoxType {

    // This member is not documented.
    #[allow(missing_docs)]
    pub color: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub w: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub h: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub d: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub area: f32,

}



impl Default for BoxType {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BoxType::default())
  }
}

impl rosidl_runtime_rs::Message for BoxType {
  type RmwMsg = super::msg::rmw::BoxType;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        color: msg.color.as_str().into(),
        x: msg.x,
        y: msg.y,
        w: msg.w,
        h: msg.h,
        d: msg.d,
        area: msg.area,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        color: msg.color.as_str().into(),
      x: msg.x,
      y: msg.y,
      w: msg.w,
      h: msg.h,
      d: msg.d,
      area: msg.area,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      color: msg.color.to_string(),
      x: msg.x,
      y: msg.y,
      w: msg.w,
      h: msg.h,
      d: msg.d,
      area: msg.area,
    }
  }
}


