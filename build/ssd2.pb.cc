// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ssd2.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ssd2.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* vehicle_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  vehicle_reflection_ = NULL;
const ::google::protobuf::Descriptor* position_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  position_reflection_ = NULL;
const ::google::protobuf::Descriptor* firstSegment_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  firstSegment_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_ssd2_2eproto() {
  protobuf_AddDesc_ssd2_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "ssd2.proto");
  GOOGLE_CHECK(file != NULL);
  vehicle_descriptor_ = file->message_type(0);
  static const int vehicle_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(vehicle, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(vehicle, pos_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(vehicle, dist_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(vehicle, angle_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(vehicle, length_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(vehicle, fs_),
  };
  vehicle_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      vehicle_descriptor_,
      vehicle::default_instance_,
      vehicle_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(vehicle, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(vehicle, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(vehicle));
  position_descriptor_ = file->message_type(1);
  static const int position_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(position, x_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(position, y_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(position, z_),
  };
  position_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      position_descriptor_,
      position::default_instance_,
      position_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(position, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(position, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(position));
  firstSegment_descriptor_ = file->message_type(2);
  static const int firstSegment_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(firstSegment, lx_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(firstSegment, ly_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(firstSegment, rx_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(firstSegment, ry_),
  };
  firstSegment_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      firstSegment_descriptor_,
      firstSegment::default_instance_,
      firstSegment_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(firstSegment, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(firstSegment, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(firstSegment));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_ssd2_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    vehicle_descriptor_, &vehicle::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    position_descriptor_, &position::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    firstSegment_descriptor_, &firstSegment::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_ssd2_2eproto() {
  delete vehicle::default_instance_;
  delete vehicle_reflection_;
  delete position::default_instance_;
  delete position_reflection_;
  delete firstSegment::default_instance_;
  delete firstSegment_reflection_;
}

void protobuf_AddDesc_ssd2_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\nssd2.proto\"w\n\007vehicle\022\014\n\004name\030\001 \002(\t\022\026\n"
    "\003pos\030\002 \002(\0132\t.position\022\014\n\004dist\030\003 \002(\002\022\r\n\005a"
    "ngle\030\004 \002(\002\022\016\n\006length\030\005 \002(\002\022\031\n\002fs\030\006 \002(\0132\r"
    ".firstSegment\"+\n\010position\022\t\n\001x\030\001 \002(\002\022\t\n\001"
    "y\030\002 \002(\002\022\t\n\001z\030\003 \002(\002\">\n\014firstSegment\022\n\n\002lx"
    "\030\001 \002(\002\022\n\n\002ly\030\002 \002(\002\022\n\n\002rx\030\003 \002(\002\022\n\n\002ry\030\004 \002"
    "(\002", 242);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "ssd2.proto", &protobuf_RegisterTypes);
  vehicle::default_instance_ = new vehicle();
  position::default_instance_ = new position();
  firstSegment::default_instance_ = new firstSegment();
  vehicle::default_instance_->InitAsDefaultInstance();
  position::default_instance_->InitAsDefaultInstance();
  firstSegment::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ssd2_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ssd2_2eproto {
  StaticDescriptorInitializer_ssd2_2eproto() {
    protobuf_AddDesc_ssd2_2eproto();
  }
} static_descriptor_initializer_ssd2_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int vehicle::kNameFieldNumber;
const int vehicle::kPosFieldNumber;
const int vehicle::kDistFieldNumber;
const int vehicle::kAngleFieldNumber;
const int vehicle::kLengthFieldNumber;
const int vehicle::kFsFieldNumber;
#endif  // !_MSC_VER

vehicle::vehicle()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:vehicle)
}

void vehicle::InitAsDefaultInstance() {
  pos_ = const_cast< ::position*>(&::position::default_instance());
  fs_ = const_cast< ::firstSegment*>(&::firstSegment::default_instance());
}

vehicle::vehicle(const vehicle& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:vehicle)
}

void vehicle::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  pos_ = NULL;
  dist_ = 0;
  angle_ = 0;
  length_ = 0;
  fs_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

vehicle::~vehicle() {
  // @@protoc_insertion_point(destructor:vehicle)
  SharedDtor();
}

void vehicle::SharedDtor() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (this != default_instance_) {
    delete pos_;
    delete fs_;
  }
}

void vehicle::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* vehicle::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return vehicle_descriptor_;
}

const vehicle& vehicle::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ssd2_2eproto();
  return *default_instance_;
}

vehicle* vehicle::default_instance_ = NULL;

vehicle* vehicle::New() const {
  return new vehicle;
}

void vehicle::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<vehicle*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 63) {
    ZR_(dist_, angle_);
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        name_->clear();
      }
    }
    if (has_pos()) {
      if (pos_ != NULL) pos_->::position::Clear();
    }
    length_ = 0;
    if (has_fs()) {
      if (fs_ != NULL) fs_->::firstSegment::Clear();
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool vehicle::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:vehicle)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_pos;
        break;
      }

      // required .position pos = 2;
      case 2: {
        if (tag == 18) {
         parse_pos:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_pos()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(29)) goto parse_dist;
        break;
      }

      // required float dist = 3;
      case 3: {
        if (tag == 29) {
         parse_dist:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &dist_)));
          set_has_dist();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(37)) goto parse_angle;
        break;
      }

      // required float angle = 4;
      case 4: {
        if (tag == 37) {
         parse_angle:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &angle_)));
          set_has_angle();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(45)) goto parse_length;
        break;
      }

      // required float length = 5;
      case 5: {
        if (tag == 45) {
         parse_length:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &length_)));
          set_has_length();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_fs;
        break;
      }

      // required .firstSegment fs = 6;
      case 6: {
        if (tag == 50) {
         parse_fs:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_fs()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:vehicle)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:vehicle)
  return false;
#undef DO_
}

void vehicle::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:vehicle)
  // required string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // required .position pos = 2;
  if (has_pos()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->pos(), output);
  }

  // required float dist = 3;
  if (has_dist()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->dist(), output);
  }

  // required float angle = 4;
  if (has_angle()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(4, this->angle(), output);
  }

  // required float length = 5;
  if (has_length()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(5, this->length(), output);
  }

  // required .firstSegment fs = 6;
  if (has_fs()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->fs(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:vehicle)
}

::google::protobuf::uint8* vehicle::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:vehicle)
  // required string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // required .position pos = 2;
  if (has_pos()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->pos(), target);
  }

  // required float dist = 3;
  if (has_dist()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, this->dist(), target);
  }

  // required float angle = 4;
  if (has_angle()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(4, this->angle(), target);
  }

  // required float length = 5;
  if (has_length()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(5, this->length(), target);
  }

  // required .firstSegment fs = 6;
  if (has_fs()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        6, this->fs(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:vehicle)
  return target;
}

int vehicle::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string name = 1;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // required .position pos = 2;
    if (has_pos()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->pos());
    }

    // required float dist = 3;
    if (has_dist()) {
      total_size += 1 + 4;
    }

    // required float angle = 4;
    if (has_angle()) {
      total_size += 1 + 4;
    }

    // required float length = 5;
    if (has_length()) {
      total_size += 1 + 4;
    }

    // required .firstSegment fs = 6;
    if (has_fs()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->fs());
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

void vehicle::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const vehicle* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const vehicle*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void vehicle::MergeFrom(const vehicle& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_name()) {
      set_name(from.name());
    }
    if (from.has_pos()) {
      mutable_pos()->::position::MergeFrom(from.pos());
    }
    if (from.has_dist()) {
      set_dist(from.dist());
    }
    if (from.has_angle()) {
      set_angle(from.angle());
    }
    if (from.has_length()) {
      set_length(from.length());
    }
    if (from.has_fs()) {
      mutable_fs()->::firstSegment::MergeFrom(from.fs());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void vehicle::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void vehicle::CopyFrom(const vehicle& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool vehicle::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000003f) != 0x0000003f) return false;

  if (has_pos()) {
    if (!this->pos().IsInitialized()) return false;
  }
  if (has_fs()) {
    if (!this->fs().IsInitialized()) return false;
  }
  return true;
}

void vehicle::Swap(vehicle* other) {
  if (other != this) {
    std::swap(name_, other->name_);
    std::swap(pos_, other->pos_);
    std::swap(dist_, other->dist_);
    std::swap(angle_, other->angle_);
    std::swap(length_, other->length_);
    std::swap(fs_, other->fs_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata vehicle::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = vehicle_descriptor_;
  metadata.reflection = vehicle_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int position::kXFieldNumber;
const int position::kYFieldNumber;
const int position::kZFieldNumber;
#endif  // !_MSC_VER

position::position()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:position)
}

void position::InitAsDefaultInstance() {
}

position::position(const position& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:position)
}

void position::SharedCtor() {
  _cached_size_ = 0;
  x_ = 0;
  y_ = 0;
  z_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

position::~position() {
  // @@protoc_insertion_point(destructor:position)
  SharedDtor();
}

void position::SharedDtor() {
  if (this != default_instance_) {
  }
}

void position::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* position::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return position_descriptor_;
}

const position& position::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ssd2_2eproto();
  return *default_instance_;
}

position* position::default_instance_ = NULL;

position* position::New() const {
  return new position;
}

void position::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<position*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  ZR_(x_, z_);

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool position::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:position)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required float x = 1;
      case 1: {
        if (tag == 13) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &x_)));
          set_has_x();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(21)) goto parse_y;
        break;
      }

      // required float y = 2;
      case 2: {
        if (tag == 21) {
         parse_y:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &y_)));
          set_has_y();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(29)) goto parse_z;
        break;
      }

      // required float z = 3;
      case 3: {
        if (tag == 29) {
         parse_z:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &z_)));
          set_has_z();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:position)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:position)
  return false;
#undef DO_
}

void position::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:position)
  // required float x = 1;
  if (has_x()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(1, this->x(), output);
  }

  // required float y = 2;
  if (has_y()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->y(), output);
  }

  // required float z = 3;
  if (has_z()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->z(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:position)
}

::google::protobuf::uint8* position::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:position)
  // required float x = 1;
  if (has_x()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(1, this->x(), target);
  }

  // required float y = 2;
  if (has_y()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->y(), target);
  }

  // required float z = 3;
  if (has_z()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, this->z(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:position)
  return target;
}

int position::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required float x = 1;
    if (has_x()) {
      total_size += 1 + 4;
    }

    // required float y = 2;
    if (has_y()) {
      total_size += 1 + 4;
    }

    // required float z = 3;
    if (has_z()) {
      total_size += 1 + 4;
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

void position::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const position* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const position*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void position::MergeFrom(const position& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_x()) {
      set_x(from.x());
    }
    if (from.has_y()) {
      set_y(from.y());
    }
    if (from.has_z()) {
      set_z(from.z());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void position::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void position::CopyFrom(const position& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool position::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void position::Swap(position* other) {
  if (other != this) {
    std::swap(x_, other->x_);
    std::swap(y_, other->y_);
    std::swap(z_, other->z_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata position::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = position_descriptor_;
  metadata.reflection = position_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int firstSegment::kLxFieldNumber;
const int firstSegment::kLyFieldNumber;
const int firstSegment::kRxFieldNumber;
const int firstSegment::kRyFieldNumber;
#endif  // !_MSC_VER

firstSegment::firstSegment()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:firstSegment)
}

void firstSegment::InitAsDefaultInstance() {
}

firstSegment::firstSegment(const firstSegment& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:firstSegment)
}

void firstSegment::SharedCtor() {
  _cached_size_ = 0;
  lx_ = 0;
  ly_ = 0;
  rx_ = 0;
  ry_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

firstSegment::~firstSegment() {
  // @@protoc_insertion_point(destructor:firstSegment)
  SharedDtor();
}

void firstSegment::SharedDtor() {
  if (this != default_instance_) {
  }
}

void firstSegment::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* firstSegment::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return firstSegment_descriptor_;
}

const firstSegment& firstSegment::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ssd2_2eproto();
  return *default_instance_;
}

firstSegment* firstSegment::default_instance_ = NULL;

firstSegment* firstSegment::New() const {
  return new firstSegment;
}

void firstSegment::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<firstSegment*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  ZR_(lx_, ry_);

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool firstSegment::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:firstSegment)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required float lx = 1;
      case 1: {
        if (tag == 13) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &lx_)));
          set_has_lx();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(21)) goto parse_ly;
        break;
      }

      // required float ly = 2;
      case 2: {
        if (tag == 21) {
         parse_ly:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &ly_)));
          set_has_ly();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(29)) goto parse_rx;
        break;
      }

      // required float rx = 3;
      case 3: {
        if (tag == 29) {
         parse_rx:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &rx_)));
          set_has_rx();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(37)) goto parse_ry;
        break;
      }

      // required float ry = 4;
      case 4: {
        if (tag == 37) {
         parse_ry:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &ry_)));
          set_has_ry();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:firstSegment)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:firstSegment)
  return false;
#undef DO_
}

void firstSegment::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:firstSegment)
  // required float lx = 1;
  if (has_lx()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(1, this->lx(), output);
  }

  // required float ly = 2;
  if (has_ly()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->ly(), output);
  }

  // required float rx = 3;
  if (has_rx()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->rx(), output);
  }

  // required float ry = 4;
  if (has_ry()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(4, this->ry(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:firstSegment)
}

::google::protobuf::uint8* firstSegment::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:firstSegment)
  // required float lx = 1;
  if (has_lx()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(1, this->lx(), target);
  }

  // required float ly = 2;
  if (has_ly()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->ly(), target);
  }

  // required float rx = 3;
  if (has_rx()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, this->rx(), target);
  }

  // required float ry = 4;
  if (has_ry()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(4, this->ry(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:firstSegment)
  return target;
}

int firstSegment::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required float lx = 1;
    if (has_lx()) {
      total_size += 1 + 4;
    }

    // required float ly = 2;
    if (has_ly()) {
      total_size += 1 + 4;
    }

    // required float rx = 3;
    if (has_rx()) {
      total_size += 1 + 4;
    }

    // required float ry = 4;
    if (has_ry()) {
      total_size += 1 + 4;
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

void firstSegment::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const firstSegment* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const firstSegment*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void firstSegment::MergeFrom(const firstSegment& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_lx()) {
      set_lx(from.lx());
    }
    if (from.has_ly()) {
      set_ly(from.ly());
    }
    if (from.has_rx()) {
      set_rx(from.rx());
    }
    if (from.has_ry()) {
      set_ry(from.ry());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void firstSegment::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void firstSegment::CopyFrom(const firstSegment& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool firstSegment::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;

  return true;
}

void firstSegment::Swap(firstSegment* other) {
  if (other != this) {
    std::swap(lx_, other->lx_);
    std::swap(ly_, other->ly_);
    std::swap(rx_, other->rx_);
    std::swap(ry_, other->ry_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata firstSegment::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = firstSegment_descriptor_;
  metadata.reflection = firstSegment_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
