// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: minecpp/proto/entity/v1/Entity.proto

#include <minecpp/proto/entity/v1/Entity.pb.h>

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace minecpp {
namespace proto {
namespace entity {
namespace v1 {
PROTOBUF_CONSTEXPR Abilities::Abilities(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.walk_speed_)*/0
  , /*decltype(_impl_.fly_speed_)*/0
  , /*decltype(_impl_.flying_)*/false
  , /*decltype(_impl_.instant_build_)*/false
  , /*decltype(_impl_.invulnerable_)*/false
  , /*decltype(_impl_.may_build_)*/false
  , /*decltype(_impl_.may_fly_)*/false
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct AbilitiesDefaultTypeInternal {
  PROTOBUF_CONSTEXPR AbilitiesDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~AbilitiesDefaultTypeInternal() {}
  union {
    Abilities _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 AbilitiesDefaultTypeInternal _Abilities_default_instance_;
PROTOBUF_CONSTEXPR Entity::Entity(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.player_id_)*/nullptr
  , /*decltype(_impl_.position_)*/nullptr
  , /*decltype(_impl_.rotation_)*/nullptr
  , /*decltype(_impl_.abilities_)*/nullptr
  , /*decltype(_impl_.entity_id_)*/0u
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct EntityDefaultTypeInternal {
  PROTOBUF_CONSTEXPR EntityDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~EntityDefaultTypeInternal() {}
  union {
    Entity _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 EntityDefaultTypeInternal _Entity_default_instance_;
}  // namespace v1
}  // namespace entity
}  // namespace proto
}  // namespace minecpp
static ::_pb::Metadata file_level_metadata_minecpp_2fproto_2fentity_2fv1_2fEntity_2eproto[2];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_minecpp_2fproto_2fentity_2fv1_2fEntity_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_minecpp_2fproto_2fentity_2fv1_2fEntity_2eproto = nullptr;

const uint32_t TableStruct_minecpp_2fproto_2fentity_2fv1_2fEntity_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::minecpp::proto::entity::v1::Abilities, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::minecpp::proto::entity::v1::Abilities, _impl_.walk_speed_),
  PROTOBUF_FIELD_OFFSET(::minecpp::proto::entity::v1::Abilities, _impl_.fly_speed_),
  PROTOBUF_FIELD_OFFSET(::minecpp::proto::entity::v1::Abilities, _impl_.flying_),
  PROTOBUF_FIELD_OFFSET(::minecpp::proto::entity::v1::Abilities, _impl_.instant_build_),
  PROTOBUF_FIELD_OFFSET(::minecpp::proto::entity::v1::Abilities, _impl_.invulnerable_),
  PROTOBUF_FIELD_OFFSET(::minecpp::proto::entity::v1::Abilities, _impl_.may_build_),
  PROTOBUF_FIELD_OFFSET(::minecpp::proto::entity::v1::Abilities, _impl_.may_fly_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::minecpp::proto::entity::v1::Entity, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::minecpp::proto::entity::v1::Entity, _impl_.entity_id_),
  PROTOBUF_FIELD_OFFSET(::minecpp::proto::entity::v1::Entity, _impl_.name_),
  PROTOBUF_FIELD_OFFSET(::minecpp::proto::entity::v1::Entity, _impl_.player_id_),
  PROTOBUF_FIELD_OFFSET(::minecpp::proto::entity::v1::Entity, _impl_.position_),
  PROTOBUF_FIELD_OFFSET(::minecpp::proto::entity::v1::Entity, _impl_.rotation_),
  PROTOBUF_FIELD_OFFSET(::minecpp::proto::entity::v1::Entity, _impl_.abilities_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::minecpp::proto::entity::v1::Abilities)},
  { 13, -1, -1, sizeof(::minecpp::proto::entity::v1::Entity)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::minecpp::proto::entity::v1::_Abilities_default_instance_._instance,
  &::minecpp::proto::entity::v1::_Entity_default_instance_._instance,
};

const char descriptor_table_protodef_minecpp_2fproto_2fentity_2fv1_2fEntity_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n$minecpp/proto/entity/v1/Entity.proto\022\027"
  "minecpp.proto.entity.v1\032$minecpp/proto/c"
  "ommon/v1/Common.proto\032$minecpp/proto/com"
  "mon/v1/Vector.proto\032 minecpp/proto/playe"
  "r/v1/Id.proto\"\223\001\n\tAbilities\022\022\n\nwalk_spee"
  "d\030\001 \001(\002\022\021\n\tfly_speed\030\002 \001(\002\022\016\n\006flying\030\003 \001"
  "(\010\022\025\n\rinstant_build\030\004 \001(\010\022\024\n\014invulnerabl"
  "e\030\005 \001(\010\022\021\n\tmay_build\030\006 \001(\010\022\017\n\007may_fly\030\007 "
  "\001(\010\"\377\001\n\006Entity\022\021\n\tentity_id\030\001 \001(\r\022\014\n\004nam"
  "e\030\002 \001(\t\0224\n\tplayer_id\030\003 \001(\0132!.minecpp.pro"
  "to.player.v1.PlayerId\0222\n\010position\030\004 \001(\0132"
  " .minecpp.proto.common.v1.Vector3\0223\n\010rot"
  "ation\030\005 \001(\0132!.minecpp.proto.common.v1.Ro"
  "tation\0225\n\tabilities\030\006 \001(\0132\".minecpp.prot"
  "o.entity.v1.Abilities*a\n\rEquipmentSlot\022\r"
  "\n\tMAIN_HAND\020\000\022\014\n\010OFF_HAND\020\001\022\t\n\005BOOTS\020\002\022\014"
  "\n\010LEGGINGS\020\003\022\016\n\nCHESTPLATE\020\004\022\n\n\006HELMET\020\005"
  "b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_minecpp_2fproto_2fentity_2fv1_2fEntity_2eproto_deps[3] = {
  &::descriptor_table_minecpp_2fproto_2fcommon_2fv1_2fCommon_2eproto,
  &::descriptor_table_minecpp_2fproto_2fcommon_2fv1_2fVector_2eproto,
  &::descriptor_table_minecpp_2fproto_2fplayer_2fv1_2fId_2eproto,
};
static ::_pbi::once_flag descriptor_table_minecpp_2fproto_2fentity_2fv1_2fEntity_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_minecpp_2fproto_2fentity_2fv1_2fEntity_2eproto = {
    false, false, 688, descriptor_table_protodef_minecpp_2fproto_2fentity_2fv1_2fEntity_2eproto,
    "minecpp/proto/entity/v1/Entity.proto",
    &descriptor_table_minecpp_2fproto_2fentity_2fv1_2fEntity_2eproto_once, descriptor_table_minecpp_2fproto_2fentity_2fv1_2fEntity_2eproto_deps, 3, 2,
    schemas, file_default_instances, TableStruct_minecpp_2fproto_2fentity_2fv1_2fEntity_2eproto::offsets,
    file_level_metadata_minecpp_2fproto_2fentity_2fv1_2fEntity_2eproto, file_level_enum_descriptors_minecpp_2fproto_2fentity_2fv1_2fEntity_2eproto,
    file_level_service_descriptors_minecpp_2fproto_2fentity_2fv1_2fEntity_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_minecpp_2fproto_2fentity_2fv1_2fEntity_2eproto_getter() {
  return &descriptor_table_minecpp_2fproto_2fentity_2fv1_2fEntity_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_minecpp_2fproto_2fentity_2fv1_2fEntity_2eproto(&descriptor_table_minecpp_2fproto_2fentity_2fv1_2fEntity_2eproto);
namespace minecpp {
namespace proto {
namespace entity {
namespace v1 {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EquipmentSlot_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_minecpp_2fproto_2fentity_2fv1_2fEntity_2eproto);
  return file_level_enum_descriptors_minecpp_2fproto_2fentity_2fv1_2fEntity_2eproto[0];
}
bool EquipmentSlot_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}


// ===================================================================

class Abilities::_Internal {
 public:
};

Abilities::Abilities(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:minecpp.proto.entity.v1.Abilities)
}
Abilities::Abilities(const Abilities& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Abilities* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.walk_speed_){}
    , decltype(_impl_.fly_speed_){}
    , decltype(_impl_.flying_){}
    , decltype(_impl_.instant_build_){}
    , decltype(_impl_.invulnerable_){}
    , decltype(_impl_.may_build_){}
    , decltype(_impl_.may_fly_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.walk_speed_, &from._impl_.walk_speed_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.may_fly_) -
    reinterpret_cast<char*>(&_impl_.walk_speed_)) + sizeof(_impl_.may_fly_));
  // @@protoc_insertion_point(copy_constructor:minecpp.proto.entity.v1.Abilities)
}

inline void Abilities::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.walk_speed_){0}
    , decltype(_impl_.fly_speed_){0}
    , decltype(_impl_.flying_){false}
    , decltype(_impl_.instant_build_){false}
    , decltype(_impl_.invulnerable_){false}
    , decltype(_impl_.may_build_){false}
    , decltype(_impl_.may_fly_){false}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

Abilities::~Abilities() {
  // @@protoc_insertion_point(destructor:minecpp.proto.entity.v1.Abilities)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Abilities::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Abilities::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Abilities::Clear() {
// @@protoc_insertion_point(message_clear_start:minecpp.proto.entity.v1.Abilities)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.walk_speed_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.may_fly_) -
      reinterpret_cast<char*>(&_impl_.walk_speed_)) + sizeof(_impl_.may_fly_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Abilities::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // float walk_speed = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 13)) {
          _impl_.walk_speed_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // float fly_speed = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 21)) {
          _impl_.fly_speed_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // bool flying = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _impl_.flying_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bool instant_build = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _impl_.instant_build_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bool invulnerable = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _impl_.invulnerable_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bool may_build = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          _impl_.may_build_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bool may_fly = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 56)) {
          _impl_.may_fly_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Abilities::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:minecpp.proto.entity.v1.Abilities)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // float walk_speed = 1;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_walk_speed = this->_internal_walk_speed();
  uint32_t raw_walk_speed;
  memcpy(&raw_walk_speed, &tmp_walk_speed, sizeof(tmp_walk_speed));
  if (raw_walk_speed != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(1, this->_internal_walk_speed(), target);
  }

  // float fly_speed = 2;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_fly_speed = this->_internal_fly_speed();
  uint32_t raw_fly_speed;
  memcpy(&raw_fly_speed, &tmp_fly_speed, sizeof(tmp_fly_speed));
  if (raw_fly_speed != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(2, this->_internal_fly_speed(), target);
  }

  // bool flying = 3;
  if (this->_internal_flying() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(3, this->_internal_flying(), target);
  }

  // bool instant_build = 4;
  if (this->_internal_instant_build() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(4, this->_internal_instant_build(), target);
  }

  // bool invulnerable = 5;
  if (this->_internal_invulnerable() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(5, this->_internal_invulnerable(), target);
  }

  // bool may_build = 6;
  if (this->_internal_may_build() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(6, this->_internal_may_build(), target);
  }

  // bool may_fly = 7;
  if (this->_internal_may_fly() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(7, this->_internal_may_fly(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:minecpp.proto.entity.v1.Abilities)
  return target;
}

size_t Abilities::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:minecpp.proto.entity.v1.Abilities)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // float walk_speed = 1;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_walk_speed = this->_internal_walk_speed();
  uint32_t raw_walk_speed;
  memcpy(&raw_walk_speed, &tmp_walk_speed, sizeof(tmp_walk_speed));
  if (raw_walk_speed != 0) {
    total_size += 1 + 4;
  }

  // float fly_speed = 2;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_fly_speed = this->_internal_fly_speed();
  uint32_t raw_fly_speed;
  memcpy(&raw_fly_speed, &tmp_fly_speed, sizeof(tmp_fly_speed));
  if (raw_fly_speed != 0) {
    total_size += 1 + 4;
  }

  // bool flying = 3;
  if (this->_internal_flying() != 0) {
    total_size += 1 + 1;
  }

  // bool instant_build = 4;
  if (this->_internal_instant_build() != 0) {
    total_size += 1 + 1;
  }

  // bool invulnerable = 5;
  if (this->_internal_invulnerable() != 0) {
    total_size += 1 + 1;
  }

  // bool may_build = 6;
  if (this->_internal_may_build() != 0) {
    total_size += 1 + 1;
  }

  // bool may_fly = 7;
  if (this->_internal_may_fly() != 0) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Abilities::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Abilities::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Abilities::GetClassData() const { return &_class_data_; }


void Abilities::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Abilities*>(&to_msg);
  auto& from = static_cast<const Abilities&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:minecpp.proto.entity.v1.Abilities)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_walk_speed = from._internal_walk_speed();
  uint32_t raw_walk_speed;
  memcpy(&raw_walk_speed, &tmp_walk_speed, sizeof(tmp_walk_speed));
  if (raw_walk_speed != 0) {
    _this->_internal_set_walk_speed(from._internal_walk_speed());
  }
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_fly_speed = from._internal_fly_speed();
  uint32_t raw_fly_speed;
  memcpy(&raw_fly_speed, &tmp_fly_speed, sizeof(tmp_fly_speed));
  if (raw_fly_speed != 0) {
    _this->_internal_set_fly_speed(from._internal_fly_speed());
  }
  if (from._internal_flying() != 0) {
    _this->_internal_set_flying(from._internal_flying());
  }
  if (from._internal_instant_build() != 0) {
    _this->_internal_set_instant_build(from._internal_instant_build());
  }
  if (from._internal_invulnerable() != 0) {
    _this->_internal_set_invulnerable(from._internal_invulnerable());
  }
  if (from._internal_may_build() != 0) {
    _this->_internal_set_may_build(from._internal_may_build());
  }
  if (from._internal_may_fly() != 0) {
    _this->_internal_set_may_fly(from._internal_may_fly());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Abilities::CopyFrom(const Abilities& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:minecpp.proto.entity.v1.Abilities)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Abilities::IsInitialized() const {
  return true;
}

void Abilities::InternalSwap(Abilities* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Abilities, _impl_.may_fly_)
      + sizeof(Abilities::_impl_.may_fly_)
      - PROTOBUF_FIELD_OFFSET(Abilities, _impl_.walk_speed_)>(
          reinterpret_cast<char*>(&_impl_.walk_speed_),
          reinterpret_cast<char*>(&other->_impl_.walk_speed_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Abilities::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_minecpp_2fproto_2fentity_2fv1_2fEntity_2eproto_getter, &descriptor_table_minecpp_2fproto_2fentity_2fv1_2fEntity_2eproto_once,
      file_level_metadata_minecpp_2fproto_2fentity_2fv1_2fEntity_2eproto[0]);
}

// ===================================================================

class Entity::_Internal {
 public:
  static const ::minecpp::proto::player::v1::PlayerId& player_id(const Entity* msg);
  static const ::minecpp::proto::common::v1::Vector3& position(const Entity* msg);
  static const ::minecpp::proto::common::v1::Rotation& rotation(const Entity* msg);
  static const ::minecpp::proto::entity::v1::Abilities& abilities(const Entity* msg);
};

const ::minecpp::proto::player::v1::PlayerId&
Entity::_Internal::player_id(const Entity* msg) {
  return *msg->_impl_.player_id_;
}
const ::minecpp::proto::common::v1::Vector3&
Entity::_Internal::position(const Entity* msg) {
  return *msg->_impl_.position_;
}
const ::minecpp::proto::common::v1::Rotation&
Entity::_Internal::rotation(const Entity* msg) {
  return *msg->_impl_.rotation_;
}
const ::minecpp::proto::entity::v1::Abilities&
Entity::_Internal::abilities(const Entity* msg) {
  return *msg->_impl_.abilities_;
}
void Entity::clear_player_id() {
  if (GetArenaForAllocation() == nullptr && _impl_.player_id_ != nullptr) {
    delete _impl_.player_id_;
  }
  _impl_.player_id_ = nullptr;
}
void Entity::clear_position() {
  if (GetArenaForAllocation() == nullptr && _impl_.position_ != nullptr) {
    delete _impl_.position_;
  }
  _impl_.position_ = nullptr;
}
void Entity::clear_rotation() {
  if (GetArenaForAllocation() == nullptr && _impl_.rotation_ != nullptr) {
    delete _impl_.rotation_;
  }
  _impl_.rotation_ = nullptr;
}
Entity::Entity(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:minecpp.proto.entity.v1.Entity)
}
Entity::Entity(const Entity& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Entity* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.name_){}
    , decltype(_impl_.player_id_){nullptr}
    , decltype(_impl_.position_){nullptr}
    , decltype(_impl_.rotation_){nullptr}
    , decltype(_impl_.abilities_){nullptr}
    , decltype(_impl_.entity_id_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_name().empty()) {
    _this->_impl_.name_.Set(from._internal_name(), 
      _this->GetArenaForAllocation());
  }
  if (from._internal_has_player_id()) {
    _this->_impl_.player_id_ = new ::minecpp::proto::player::v1::PlayerId(*from._impl_.player_id_);
  }
  if (from._internal_has_position()) {
    _this->_impl_.position_ = new ::minecpp::proto::common::v1::Vector3(*from._impl_.position_);
  }
  if (from._internal_has_rotation()) {
    _this->_impl_.rotation_ = new ::minecpp::proto::common::v1::Rotation(*from._impl_.rotation_);
  }
  if (from._internal_has_abilities()) {
    _this->_impl_.abilities_ = new ::minecpp::proto::entity::v1::Abilities(*from._impl_.abilities_);
  }
  _this->_impl_.entity_id_ = from._impl_.entity_id_;
  // @@protoc_insertion_point(copy_constructor:minecpp.proto.entity.v1.Entity)
}

inline void Entity::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.name_){}
    , decltype(_impl_.player_id_){nullptr}
    , decltype(_impl_.position_){nullptr}
    , decltype(_impl_.rotation_){nullptr}
    , decltype(_impl_.abilities_){nullptr}
    , decltype(_impl_.entity_id_){0u}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Entity::~Entity() {
  // @@protoc_insertion_point(destructor:minecpp.proto.entity.v1.Entity)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Entity::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.name_.Destroy();
  if (this != internal_default_instance()) delete _impl_.player_id_;
  if (this != internal_default_instance()) delete _impl_.position_;
  if (this != internal_default_instance()) delete _impl_.rotation_;
  if (this != internal_default_instance()) delete _impl_.abilities_;
}

void Entity::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Entity::Clear() {
// @@protoc_insertion_point(message_clear_start:minecpp.proto.entity.v1.Entity)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.name_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && _impl_.player_id_ != nullptr) {
    delete _impl_.player_id_;
  }
  _impl_.player_id_ = nullptr;
  if (GetArenaForAllocation() == nullptr && _impl_.position_ != nullptr) {
    delete _impl_.position_;
  }
  _impl_.position_ = nullptr;
  if (GetArenaForAllocation() == nullptr && _impl_.rotation_ != nullptr) {
    delete _impl_.rotation_;
  }
  _impl_.rotation_ = nullptr;
  if (GetArenaForAllocation() == nullptr && _impl_.abilities_ != nullptr) {
    delete _impl_.abilities_;
  }
  _impl_.abilities_ = nullptr;
  _impl_.entity_id_ = 0u;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Entity::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // uint32 entity_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.entity_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "minecpp.proto.entity.v1.Entity.name"));
        } else
          goto handle_unusual;
        continue;
      // .minecpp.proto.player.v1.PlayerId player_id = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_player_id(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .minecpp.proto.common.v1.Vector3 position = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_position(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .minecpp.proto.common.v1.Rotation rotation = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          ptr = ctx->ParseMessage(_internal_mutable_rotation(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .minecpp.proto.entity.v1.Abilities abilities = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 50)) {
          ptr = ctx->ParseMessage(_internal_mutable_abilities(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Entity::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:minecpp.proto.entity.v1.Entity)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 entity_id = 1;
  if (this->_internal_entity_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_entity_id(), target);
  }

  // string name = 2;
  if (!this->_internal_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "minecpp.proto.entity.v1.Entity.name");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_name(), target);
  }

  // .minecpp.proto.player.v1.PlayerId player_id = 3;
  if (this->_internal_has_player_id()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, _Internal::player_id(this),
        _Internal::player_id(this).GetCachedSize(), target, stream);
  }

  // .minecpp.proto.common.v1.Vector3 position = 4;
  if (this->_internal_has_position()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(4, _Internal::position(this),
        _Internal::position(this).GetCachedSize(), target, stream);
  }

  // .minecpp.proto.common.v1.Rotation rotation = 5;
  if (this->_internal_has_rotation()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(5, _Internal::rotation(this),
        _Internal::rotation(this).GetCachedSize(), target, stream);
  }

  // .minecpp.proto.entity.v1.Abilities abilities = 6;
  if (this->_internal_has_abilities()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(6, _Internal::abilities(this),
        _Internal::abilities(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:minecpp.proto.entity.v1.Entity)
  return target;
}

size_t Entity::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:minecpp.proto.entity.v1.Entity)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 2;
  if (!this->_internal_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // .minecpp.proto.player.v1.PlayerId player_id = 3;
  if (this->_internal_has_player_id()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.player_id_);
  }

  // .minecpp.proto.common.v1.Vector3 position = 4;
  if (this->_internal_has_position()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.position_);
  }

  // .minecpp.proto.common.v1.Rotation rotation = 5;
  if (this->_internal_has_rotation()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.rotation_);
  }

  // .minecpp.proto.entity.v1.Abilities abilities = 6;
  if (this->_internal_has_abilities()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.abilities_);
  }

  // uint32 entity_id = 1;
  if (this->_internal_entity_id() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_entity_id());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Entity::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Entity::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Entity::GetClassData() const { return &_class_data_; }


void Entity::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Entity*>(&to_msg);
  auto& from = static_cast<const Entity&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:minecpp.proto.entity.v1.Entity)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_name().empty()) {
    _this->_internal_set_name(from._internal_name());
  }
  if (from._internal_has_player_id()) {
    _this->_internal_mutable_player_id()->::minecpp::proto::player::v1::PlayerId::MergeFrom(
        from._internal_player_id());
  }
  if (from._internal_has_position()) {
    _this->_internal_mutable_position()->::minecpp::proto::common::v1::Vector3::MergeFrom(
        from._internal_position());
  }
  if (from._internal_has_rotation()) {
    _this->_internal_mutable_rotation()->::minecpp::proto::common::v1::Rotation::MergeFrom(
        from._internal_rotation());
  }
  if (from._internal_has_abilities()) {
    _this->_internal_mutable_abilities()->::minecpp::proto::entity::v1::Abilities::MergeFrom(
        from._internal_abilities());
  }
  if (from._internal_entity_id() != 0) {
    _this->_internal_set_entity_id(from._internal_entity_id());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Entity::CopyFrom(const Entity& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:minecpp.proto.entity.v1.Entity)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Entity::IsInitialized() const {
  return true;
}

void Entity::InternalSwap(Entity* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.name_, lhs_arena,
      &other->_impl_.name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Entity, _impl_.entity_id_)
      + sizeof(Entity::_impl_.entity_id_)
      - PROTOBUF_FIELD_OFFSET(Entity, _impl_.player_id_)>(
          reinterpret_cast<char*>(&_impl_.player_id_),
          reinterpret_cast<char*>(&other->_impl_.player_id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Entity::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_minecpp_2fproto_2fentity_2fv1_2fEntity_2eproto_getter, &descriptor_table_minecpp_2fproto_2fentity_2fv1_2fEntity_2eproto_once,
      file_level_metadata_minecpp_2fproto_2fentity_2fv1_2fEntity_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace entity
}  // namespace proto
}  // namespace minecpp
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::minecpp::proto::entity::v1::Abilities*
Arena::CreateMaybeMessage< ::minecpp::proto::entity::v1::Abilities >(Arena* arena) {
  return Arena::CreateMessageInternal< ::minecpp::proto::entity::v1::Abilities >(arena);
}
template<> PROTOBUF_NOINLINE ::minecpp::proto::entity::v1::Entity*
Arena::CreateMaybeMessage< ::minecpp::proto::entity::v1::Entity >(Arena* arena) {
  return Arena::CreateMessageInternal< ::minecpp::proto::entity::v1::Entity >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
