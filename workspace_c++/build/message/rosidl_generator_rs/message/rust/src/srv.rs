#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to message__srv__DetectColor_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DetectColor_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub color: std::string::String,

}



impl Default for DetectColor_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::DetectColor_Request::default())
  }
}

impl rosidl_runtime_rs::Message for DetectColor_Request {
  type RmwMsg = super::srv::rmw::DetectColor_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        color: msg.color.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        color: msg.color.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      color: msg.color.to_string(),
    }
  }
}


// Corresponds to message__srv__DetectColor_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DetectColor_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: Vec<super::msg::BoxType>,

}



impl Default for DetectColor_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::DetectColor_Response::default())
  }
}

impl rosidl_runtime_rs::Message for DetectColor_Response {
  type RmwMsg = super::srv::rmw::DetectColor_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        type_: msg.type_
          .into_iter()
          .map(|elem| super::msg::BoxType::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
        type_: msg.type_
          .iter()
          .map(|elem| super::msg::BoxType::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      type_: msg.type_
          .into_iter()
          .map(super::msg::BoxType::from_rmw_message)
          .collect(),
    }
  }
}






#[link(name = "message__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__message__srv__DetectColor() -> *const std::ffi::c_void;
}

// Corresponds to message__srv__DetectColor
#[allow(missing_docs, non_camel_case_types)]
pub struct DetectColor;

impl rosidl_runtime_rs::Service for DetectColor {
    type Request = DetectColor_Request;
    type Response = DetectColor_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__message__srv__DetectColor() }
    }
}


