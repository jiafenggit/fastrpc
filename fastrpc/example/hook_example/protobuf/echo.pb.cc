// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "echo.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace echo {

namespace {

const ::google::protobuf::Descriptor* EchoRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  EchoRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* EchoResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  EchoResponse_reflection_ = NULL;
const ::google::protobuf::Descriptor* DummyRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DummyRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* DummyResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DummyResponse_reflection_ = NULL;
const ::google::protobuf::ServiceDescriptor* EchoService_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_echo_2eproto() {
  protobuf_AddDesc_echo_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "echo.proto");
  GOOGLE_CHECK(file != NULL);
  EchoRequest_descriptor_ = file->message_type(0);
  static const int EchoRequest_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EchoRequest, message_),
  };
  EchoRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      EchoRequest_descriptor_,
      EchoRequest::default_instance_,
      EchoRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EchoRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EchoRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(EchoRequest));
  EchoResponse_descriptor_ = file->message_type(1);
  static const int EchoResponse_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EchoResponse, response_),
  };
  EchoResponse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      EchoResponse_descriptor_,
      EchoResponse::default_instance_,
      EchoResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EchoResponse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EchoResponse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(EchoResponse));
  DummyRequest_descriptor_ = file->message_type(2);
  static const int DummyRequest_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DummyRequest, message_),
  };
  DummyRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      DummyRequest_descriptor_,
      DummyRequest::default_instance_,
      DummyRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DummyRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DummyRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(DummyRequest));
  DummyResponse_descriptor_ = file->message_type(3);
  static const int DummyResponse_offsets_[1] = {
  };
  DummyResponse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      DummyResponse_descriptor_,
      DummyResponse::default_instance_,
      DummyResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DummyResponse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DummyResponse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(DummyResponse));
  EchoService_descriptor_ = file->service(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_echo_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    EchoRequest_descriptor_, &EchoRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    EchoResponse_descriptor_, &EchoResponse::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    DummyRequest_descriptor_, &DummyRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    DummyResponse_descriptor_, &DummyResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_echo_2eproto() {
  delete EchoRequest::default_instance_;
  delete EchoRequest_reflection_;
  delete EchoResponse::default_instance_;
  delete EchoResponse_reflection_;
  delete DummyRequest::default_instance_;
  delete DummyRequest_reflection_;
  delete DummyResponse::default_instance_;
  delete DummyResponse_reflection_;
}

void protobuf_AddDesc_echo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\necho.proto\022\004echo\"\036\n\013EchoRequest\022\017\n\007mes"
    "sage\030\001 \002(\t\" \n\014EchoResponse\022\020\n\010response\030\001"
    " \002(\t\"\037\n\014DummyRequest\022\017\n\007message\030\001 \002(\t\"\017\n"
    "\rDummyResponse2n\n\013EchoService\022-\n\004Echo\022\021."
    "echo.EchoRequest\032\022.echo.EchoResponse\0220\n\005"
    "Dummy\022\022.echo.DummyRequest\032\023.echo.DummyRe"
    "sponseB\003\200\001\001", 251);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "echo.proto", &protobuf_RegisterTypes);
  EchoRequest::default_instance_ = new EchoRequest();
  EchoResponse::default_instance_ = new EchoResponse();
  DummyRequest::default_instance_ = new DummyRequest();
  DummyResponse::default_instance_ = new DummyResponse();
  EchoRequest::default_instance_->InitAsDefaultInstance();
  EchoResponse::default_instance_->InitAsDefaultInstance();
  DummyRequest::default_instance_->InitAsDefaultInstance();
  DummyResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_echo_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_echo_2eproto {
  StaticDescriptorInitializer_echo_2eproto() {
    protobuf_AddDesc_echo_2eproto();
  }
} static_descriptor_initializer_echo_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int EchoRequest::kMessageFieldNumber;
#endif  // !_MSC_VER

EchoRequest::EchoRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void EchoRequest::InitAsDefaultInstance() {
}

EchoRequest::EchoRequest(const EchoRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void EchoRequest::SharedCtor() {
  _cached_size_ = 0;
  message_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

EchoRequest::~EchoRequest() {
  SharedDtor();
}

void EchoRequest::SharedDtor() {
  if (message_ != &::google::protobuf::internal::kEmptyString) {
    delete message_;
  }
  if (this != default_instance_) {
  }
}

void EchoRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* EchoRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EchoRequest_descriptor_;
}

const EchoRequest& EchoRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_echo_2eproto();  return *default_instance_;
}

EchoRequest* EchoRequest::default_instance_ = NULL;

EchoRequest* EchoRequest::New() const {
  return new EchoRequest;
}

void EchoRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_message()) {
      if (message_ != &::google::protobuf::internal::kEmptyString) {
        message_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool EchoRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string message = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_message()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->message().data(), this->message().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void EchoRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string message = 1;
  if (has_message()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->message().data(), this->message().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->message(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* EchoRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string message = 1;
  if (has_message()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->message().data(), this->message().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->message(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int EchoRequest::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string message = 1;
    if (has_message()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->message());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void EchoRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const EchoRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const EchoRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void EchoRequest::MergeFrom(const EchoRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_message()) {
      set_message(from.message());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void EchoRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EchoRequest::CopyFrom(const EchoRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EchoRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  return true;
}

void EchoRequest::Swap(EchoRequest* other) {
  if (other != this) {
    std::swap(message_, other->message_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata EchoRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = EchoRequest_descriptor_;
  metadata.reflection = EchoRequest_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int EchoResponse::kResponseFieldNumber;
#endif  // !_MSC_VER

EchoResponse::EchoResponse()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void EchoResponse::InitAsDefaultInstance() {
}

EchoResponse::EchoResponse(const EchoResponse& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void EchoResponse::SharedCtor() {
  _cached_size_ = 0;
  response_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

EchoResponse::~EchoResponse() {
  SharedDtor();
}

void EchoResponse::SharedDtor() {
  if (response_ != &::google::protobuf::internal::kEmptyString) {
    delete response_;
  }
  if (this != default_instance_) {
  }
}

void EchoResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* EchoResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EchoResponse_descriptor_;
}

const EchoResponse& EchoResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_echo_2eproto();  return *default_instance_;
}

EchoResponse* EchoResponse::default_instance_ = NULL;

EchoResponse* EchoResponse::New() const {
  return new EchoResponse;
}

void EchoResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_response()) {
      if (response_ != &::google::protobuf::internal::kEmptyString) {
        response_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool EchoResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string response = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_response()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->response().data(), this->response().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void EchoResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string response = 1;
  if (has_response()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->response().data(), this->response().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->response(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* EchoResponse::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string response = 1;
  if (has_response()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->response().data(), this->response().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->response(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int EchoResponse::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string response = 1;
    if (has_response()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->response());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void EchoResponse::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const EchoResponse* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const EchoResponse*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void EchoResponse::MergeFrom(const EchoResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_response()) {
      set_response(from.response());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void EchoResponse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EchoResponse::CopyFrom(const EchoResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EchoResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  return true;
}

void EchoResponse::Swap(EchoResponse* other) {
  if (other != this) {
    std::swap(response_, other->response_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata EchoResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = EchoResponse_descriptor_;
  metadata.reflection = EchoResponse_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int DummyRequest::kMessageFieldNumber;
#endif  // !_MSC_VER

DummyRequest::DummyRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void DummyRequest::InitAsDefaultInstance() {
}

DummyRequest::DummyRequest(const DummyRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void DummyRequest::SharedCtor() {
  _cached_size_ = 0;
  message_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DummyRequest::~DummyRequest() {
  SharedDtor();
}

void DummyRequest::SharedDtor() {
  if (message_ != &::google::protobuf::internal::kEmptyString) {
    delete message_;
  }
  if (this != default_instance_) {
  }
}

void DummyRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DummyRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DummyRequest_descriptor_;
}

const DummyRequest& DummyRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_echo_2eproto();  return *default_instance_;
}

DummyRequest* DummyRequest::default_instance_ = NULL;

DummyRequest* DummyRequest::New() const {
  return new DummyRequest;
}

void DummyRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_message()) {
      if (message_ != &::google::protobuf::internal::kEmptyString) {
        message_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool DummyRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string message = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_message()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->message().data(), this->message().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void DummyRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string message = 1;
  if (has_message()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->message().data(), this->message().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->message(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* DummyRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string message = 1;
  if (has_message()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->message().data(), this->message().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->message(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int DummyRequest::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string message = 1;
    if (has_message()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->message());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DummyRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const DummyRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const DummyRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void DummyRequest::MergeFrom(const DummyRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_message()) {
      set_message(from.message());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void DummyRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DummyRequest::CopyFrom(const DummyRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DummyRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  return true;
}

void DummyRequest::Swap(DummyRequest* other) {
  if (other != this) {
    std::swap(message_, other->message_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata DummyRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DummyRequest_descriptor_;
  metadata.reflection = DummyRequest_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

DummyResponse::DummyResponse()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void DummyResponse::InitAsDefaultInstance() {
}

DummyResponse::DummyResponse(const DummyResponse& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void DummyResponse::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DummyResponse::~DummyResponse() {
  SharedDtor();
}

void DummyResponse::SharedDtor() {
  if (this != default_instance_) {
  }
}

void DummyResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DummyResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DummyResponse_descriptor_;
}

const DummyResponse& DummyResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_echo_2eproto();  return *default_instance_;
}

DummyResponse* DummyResponse::default_instance_ = NULL;

DummyResponse* DummyResponse::New() const {
  return new DummyResponse;
}

void DummyResponse::Clear() {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool DummyResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      return true;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, mutable_unknown_fields()));
  }
  return true;
#undef DO_
}

void DummyResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* DummyResponse::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int DummyResponse::ByteSize() const {
  int total_size = 0;
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DummyResponse::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const DummyResponse* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const DummyResponse*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void DummyResponse::MergeFrom(const DummyResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void DummyResponse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DummyResponse::CopyFrom(const DummyResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DummyResponse::IsInitialized() const {
  
  return true;
}

void DummyResponse::Swap(DummyResponse* other) {
  if (other != this) {
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata DummyResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DummyResponse_descriptor_;
  metadata.reflection = DummyResponse_reflection_;
  return metadata;
}


// ===================================================================

EchoService::~EchoService() {}

const ::google::protobuf::ServiceDescriptor* EchoService::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EchoService_descriptor_;
}

const ::google::protobuf::ServiceDescriptor* EchoService::GetDescriptor() {
  protobuf_AssignDescriptorsOnce();
  return EchoService_descriptor_;
}

void EchoService::Echo(::google::protobuf::RpcController* controller,
                         const ::echo::EchoRequest*,
                         ::echo::EchoResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method Echo() not implemented.");
  done->Run();
}

void EchoService::Dummy(::google::protobuf::RpcController* controller,
                         const ::echo::DummyRequest*,
                         ::echo::DummyResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method Dummy() not implemented.");
  done->Run();
}

void EchoService::CallMethod(const ::google::protobuf::MethodDescriptor* method,
                             ::google::protobuf::RpcController* controller,
                             const ::google::protobuf::Message* request,
                             ::google::protobuf::Message* response,
                             ::google::protobuf::Closure* done) {
  GOOGLE_DCHECK_EQ(method->service(), EchoService_descriptor_);
  switch(method->index()) {
    case 0:
      Echo(controller,
             ::google::protobuf::down_cast<const ::echo::EchoRequest*>(request),
             ::google::protobuf::down_cast< ::echo::EchoResponse*>(response),
             done);
      break;
    case 1:
      Dummy(controller,
             ::google::protobuf::down_cast<const ::echo::DummyRequest*>(request),
             ::google::protobuf::down_cast< ::echo::DummyResponse*>(response),
             done);
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::google::protobuf::Message& EchoService::GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::echo::EchoRequest::default_instance();
    case 1:
      return ::echo::DummyRequest::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *reinterpret_cast< ::google::protobuf::Message*>(NULL);
  }
}

const ::google::protobuf::Message& EchoService::GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::echo::EchoResponse::default_instance();
    case 1:
      return ::echo::DummyResponse::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *reinterpret_cast< ::google::protobuf::Message*>(NULL);
  }
}

EchoService_Stub::EchoService_Stub(::google::protobuf::RpcChannel* channel)
  : channel_(channel), owns_channel_(false) {}
EchoService_Stub::EchoService_Stub(
    ::google::protobuf::RpcChannel* channel,
    ::google::protobuf::Service::ChannelOwnership ownership)
  : channel_(channel),
    owns_channel_(ownership == ::google::protobuf::Service::STUB_OWNS_CHANNEL) {}
EchoService_Stub::~EchoService_Stub() {
  if (owns_channel_) delete channel_;
}

void EchoService_Stub::Echo(::google::protobuf::RpcController* controller,
                              const ::echo::EchoRequest* request,
                              ::echo::EchoResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(0),
                       controller, request, response, done);
}
void EchoService_Stub::Dummy(::google::protobuf::RpcController* controller,
                              const ::echo::DummyRequest* request,
                              ::echo::DummyResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(1),
                       controller, request, response, done);
}

// @@protoc_insertion_point(namespace_scope)

}  // namespace echo

// @@protoc_insertion_point(global_scope)
