#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "message__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__message__msg__BoxType() -> *const std::ffi::c_void;
}

#[link(name = "message__rosidl_generator_c")]
extern "C" {
    fn message__msg__BoxType__init(msg: *mut BoxType) -> bool;
    fn message__msg__BoxType__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BoxType>, size: usize) -> bool;
    fn message__msg__BoxType__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BoxType>);
    fn message__msg__BoxType__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BoxType>, out_seq: *mut rosidl_runtime_rs::Sequence<BoxType>) -> bool;
}

// Corresponds to message__msg__BoxType
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BoxType {

    // This member is not documented.
    #[allow(missing_docs)]
    pub color: rosidl_runtime_rs::String,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !message__msg__BoxType__init(&mut msg as *mut _) {
        panic!("Call to message__msg__BoxType__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BoxType {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { message__msg__BoxType__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { message__msg__BoxType__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { message__msg__BoxType__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BoxType {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BoxType where Self: Sized {
  const TYPE_NAME: &'static str = "message/msg/BoxType";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__message__msg__BoxType() }
  }
}


