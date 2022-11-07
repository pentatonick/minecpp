// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: minecpp/proto/test/Test.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_minecpp_2fproto_2ftest_2fTest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_minecpp_2fproto_2ftest_2fTest_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021009 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/extension_set.h>// IWYU pragma: export
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/message.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/port_undef.inc>
#include <google/protobuf/repeated_field.h>// IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_minecpp_2fproto_2ftest_2fTest_2eproto
PROTOBUF_NAMESPACE_OPEN

namespace internal {
class AnyMetadata;
}// namespace internal

PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_minecpp_2fproto_2ftest_2fTest_2eproto
{
   static const uint32_t offsets[];
};

extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
        descriptor_table_minecpp_2fproto_2ftest_2fTest_2eproto;

namespace minecpp { namespace proto { namespace test {
class TestMessage;
struct TestMessageDefaultTypeInternal;
extern TestMessageDefaultTypeInternal _TestMessage_default_instance_;
}}}// namespace minecpp::proto::test

PROTOBUF_NAMESPACE_OPEN
template<>
::minecpp::proto::test::TestMessage *Arena::CreateMaybeMessage<::minecpp::proto::test::TestMessage>(Arena *);
PROTOBUF_NAMESPACE_CLOSE

namespace minecpp { namespace proto { namespace test {

// ===================================================================

class TestMessage final
    : public ::PROTOBUF_NAMESPACE_ID::
              Message /* @@protoc_insertion_point(class_definition:minecpp.proto.test.TestMessage) */
{
 public:
   inline TestMessage() :
       TestMessage(nullptr)
   {
   }

   ~TestMessage() override;
   explicit PROTOBUF_CONSTEXPR TestMessage(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

   TestMessage(const TestMessage &from);

   TestMessage(TestMessage &&from) noexcept :
       TestMessage()
   {
      *this = ::std::move(from);
   }

   inline TestMessage &operator=(const TestMessage &from)
   {
      CopyFrom(from);
      return *this;
   }

   inline TestMessage &operator=(TestMessage &&from) noexcept
   {
      if (this == &from)
         return *this;
      if (GetOwningArena() == from.GetOwningArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
          && GetOwningArena() != nullptr
#endif// !PROTOBUF_FORCE_COPY_IN_MOVE
      ) {
         InternalSwap(&from);
      } else {
         CopyFrom(from);
      }
      return *this;
   }

   static const ::PROTOBUF_NAMESPACE_ID::Descriptor *descriptor()
   {
      return GetDescriptor();
   }

   static const ::PROTOBUF_NAMESPACE_ID::Descriptor *GetDescriptor()
   {
      return default_instance().GetMetadata().descriptor;
   }

   static const ::PROTOBUF_NAMESPACE_ID::Reflection *GetReflection()
   {
      return default_instance().GetMetadata().reflection;
   }

   static const TestMessage &default_instance()
   {
      return *internal_default_instance();
   }

   static inline const TestMessage *internal_default_instance()
   {
      return reinterpret_cast<const TestMessage *>(&_TestMessage_default_instance_);
   }

   static constexpr int kIndexInFileMessages = 0;

   friend void swap(TestMessage &a, TestMessage &b)
   {
      a.Swap(&b);
   }

   inline void Swap(TestMessage *other)
   {
      if (other == this)
         return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
      if (GetOwningArena() != nullptr && GetOwningArena() == other->GetOwningArena()) {
#else // PROTOBUF_FORCE_COPY_IN_SWAP
      if (GetOwningArena() == other->GetOwningArena()) {
#endif// !PROTOBUF_FORCE_COPY_IN_SWAP
         InternalSwap(other);
      } else {
         ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
      }
   }

   void UnsafeArenaSwap(TestMessage *other)
   {
      if (other == this)
         return;
      GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
      InternalSwap(other);
   }

   // implements Message ----------------------------------------------

   TestMessage *New(::PROTOBUF_NAMESPACE_ID::Arena *arena = nullptr) const final
   {
      return CreateMaybeMessage<TestMessage>(arena);
   }

   using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
   void CopyFrom(const TestMessage &from);
   using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;

   void MergeFrom(const TestMessage &from)
   {
      TestMessage::MergeImpl(*this, from);
   }

 private:
   static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message &to_msg,
                         const ::PROTOBUF_NAMESPACE_ID::Message &from_msg);

 public:
   PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
   bool IsInitialized() const final;

   size_t ByteSizeLong() const final;
   const char *_InternalParse(const char *ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext *ctx) final;
   uint8_t *_InternalSerialize(uint8_t *target,
                               ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream *stream) const final;

   int GetCachedSize() const final
   {
      return _impl_._cached_size_.Get();
   }

 private:
   void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena *arena, bool is_message_owned);
   void SharedDtor();
   void SetCachedSize(int size) const final;
   void InternalSwap(TestMessage *other);

 private:
   friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;

   static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName()
   {
      return "minecpp.proto.test.TestMessage";
   }

 protected:
   explicit TestMessage(::PROTOBUF_NAMESPACE_ID::Arena *arena, bool is_message_owned = false);

 public:
   static const ClassData _class_data_;
   const ::PROTOBUF_NAMESPACE_ID::Message::ClassData *GetClassData() const final;

   ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

   // nested types ----------------------------------------------------

   // accessors -------------------------------------------------------

   enum : int
   {
      kValueFieldNumber = 1,
   };

   // string value = 1;
   void clear_value();
   const std::string &value() const;
   template<typename ArgT0 = const std::string &, typename... ArgT>
   void set_value(ArgT0 &&arg0, ArgT... args);
   std::string *mutable_value();
   PROTOBUF_NODISCARD std::string *release_value();
   void set_allocated_value(std::string *value);

 private:
   const std::string &_internal_value() const;
   inline PROTOBUF_ALWAYS_INLINE void _internal_set_value(const std::string &value);
   std::string *_internal_mutable_value();

 public:
   // @@protoc_insertion_point(class_scope:minecpp.proto.test.TestMessage)
 private:
   class _Internal;

   template<typename T>
   friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
   typedef void InternalArenaConstructable_;
   typedef void DestructorSkippable_;

   struct Impl_
   {
      ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr value_;
      mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
   };

   union
   {
      Impl_ _impl_;
   };
   friend struct ::TableStruct_minecpp_2fproto_2ftest_2fTest_2eproto;
};

// ===================================================================


// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif// __GNUC__
// TestMessage

// string value = 1;
inline void TestMessage::clear_value()
{
   _impl_.value_.ClearToEmpty();
}

inline const std::string &TestMessage::value() const
{
   // @@protoc_insertion_point(field_get:minecpp.proto.test.TestMessage.value)
   return _internal_value();
}

template<typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE void TestMessage::set_value(ArgT0 &&arg0, ArgT... args)
{

   _impl_.value_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
   // @@protoc_insertion_point(field_set:minecpp.proto.test.TestMessage.value)
}

inline std::string *TestMessage::mutable_value()
{
   std::string *_s = _internal_mutable_value();
   // @@protoc_insertion_point(field_mutable:minecpp.proto.test.TestMessage.value)
   return _s;
}

inline const std::string &TestMessage::_internal_value() const
{
   return _impl_.value_.Get();
}

inline void TestMessage::_internal_set_value(const std::string &value)
{

   _impl_.value_.Set(value, GetArenaForAllocation());
}

inline std::string *TestMessage::_internal_mutable_value()
{

   return _impl_.value_.Mutable(GetArenaForAllocation());
}

inline std::string *TestMessage::release_value()
{
   // @@protoc_insertion_point(field_release:minecpp.proto.test.TestMessage.value)
   return _impl_.value_.Release();
}

inline void TestMessage::set_allocated_value(std::string *value)
{
   if (value != nullptr) {

   } else {
   }
   _impl_.value_.SetAllocated(value, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
   if (_impl_.value_.IsDefault()) {
      _impl_.value_.Set("", GetArenaForAllocation());
   }
#endif// PROTOBUF_FORCE_COPY_DEFAULT_STRING
      // @@protoc_insertion_point(field_set_allocated:minecpp.proto.test.TestMessage.value)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif// __GNUC__

// @@protoc_insertion_point(namespace_scope)

}}}// namespace minecpp::proto::test

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif// GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_minecpp_2fproto_2ftest_2fTest_2eproto
