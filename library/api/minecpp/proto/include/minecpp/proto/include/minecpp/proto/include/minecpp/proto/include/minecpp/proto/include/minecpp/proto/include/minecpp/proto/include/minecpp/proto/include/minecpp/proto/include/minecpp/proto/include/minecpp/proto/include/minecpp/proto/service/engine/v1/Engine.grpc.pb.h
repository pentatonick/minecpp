// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: minecpp/proto/service/engine/v1/Engine.proto
#ifndef GRPC_minecpp_2fproto_2fservice_2fengine_2fv1_2fEngine_2eproto__INCLUDED
#define GRPC_minecpp_2fproto_2fservice_2fengine_2fv1_2fEngine_2eproto__INCLUDED

#include <minecpp/proto/service/engine/v1/Engine.pb.h>

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace minecpp { namespace proto { namespace service { namespace engine { namespace v1 {

class EngineService final
{
 public:
   static constexpr char const *service_full_name()
   {
      return "minecpp.proto.service.engine.v1.EngineService";
   }

   class StubInterface
   {
    public:
      virtual ~StubInterface() {}

      std::unique_ptr<::grpc::ClientReaderWriterInterface<::minecpp::proto::event::serverbound::v1::Event,
                                                          ::minecpp::proto::event::clientbound::v1::Event>>
      Join(::grpc::ClientContext *context)
      {
         return std::unique_ptr<
                 ::grpc::ClientReaderWriterInterface<::minecpp::proto::event::serverbound::v1::Event,
                                                     ::minecpp::proto::event::clientbound::v1::Event>>(
                 JoinRaw(context));
      }

      std::unique_ptr<
              ::grpc::ClientAsyncReaderWriterInterface<::minecpp::proto::event::serverbound::v1::Event,
                                                       ::minecpp::proto::event::clientbound::v1::Event>>
      AsyncJoin(::grpc::ClientContext *context, ::grpc::CompletionQueue *cq, void *tag)
      {
         return std::unique_ptr<
                 ::grpc::ClientAsyncReaderWriterInterface<::minecpp::proto::event::serverbound::v1::Event,
                                                          ::minecpp::proto::event::clientbound::v1::Event>>(
                 AsyncJoinRaw(context, cq, tag));
      }

      std::unique_ptr<
              ::grpc::ClientAsyncReaderWriterInterface<::minecpp::proto::event::serverbound::v1::Event,
                                                       ::minecpp::proto::event::clientbound::v1::Event>>
      PrepareAsyncJoin(::grpc::ClientContext *context, ::grpc::CompletionQueue *cq)
      {
         return std::unique_ptr<
                 ::grpc::ClientAsyncReaderWriterInterface<::minecpp::proto::event::serverbound::v1::Event,
                                                          ::minecpp::proto::event::clientbound::v1::Event>>(
                 PrepareAsyncJoinRaw(context, cq));
      }

      class async_interface
      {
       public:
         virtual ~async_interface() {}

         virtual void
         Join(::grpc::ClientContext *context,
              ::grpc::ClientBidiReactor<::minecpp::proto::event::serverbound::v1::Event,
                                        ::minecpp::proto::event::clientbound::v1::Event> *reactor) = 0;
      };
      typedef class async_interface experimental_async_interface;

      virtual class async_interface *async()
      {
         return nullptr;
      }

      class async_interface *experimental_async()
      {
         return async();
      }

    private:
      virtual ::grpc::ClientReaderWriterInterface<::minecpp::proto::event::serverbound::v1::Event,
                                                  ::minecpp::proto::event::clientbound::v1::Event> *
      JoinRaw(::grpc::ClientContext *context) = 0;
      virtual ::grpc::ClientAsyncReaderWriterInterface<::minecpp::proto::event::serverbound::v1::Event,
                                                       ::minecpp::proto::event::clientbound::v1::Event> *
      AsyncJoinRaw(::grpc::ClientContext *context, ::grpc::CompletionQueue *cq, void *tag) = 0;
      virtual ::grpc::ClientAsyncReaderWriterInterface<::minecpp::proto::event::serverbound::v1::Event,
                                                       ::minecpp::proto::event::clientbound::v1::Event> *
      PrepareAsyncJoinRaw(::grpc::ClientContext *context, ::grpc::CompletionQueue *cq) = 0;
   };

   class Stub final : public StubInterface
   {
    public:
      Stub(const std::shared_ptr<::grpc::ChannelInterface> &channel,
           const ::grpc::StubOptions &options = ::grpc::StubOptions());

      std::unique_ptr<::grpc::ClientReaderWriter<::minecpp::proto::event::serverbound::v1::Event,
                                                 ::minecpp::proto::event::clientbound::v1::Event>>
      Join(::grpc::ClientContext *context)
      {
         return std::unique_ptr<::grpc::ClientReaderWriter<::minecpp::proto::event::serverbound::v1::Event,
                                                           ::minecpp::proto::event::clientbound::v1::Event>>(
                 JoinRaw(context));
      }

      std::unique_ptr<::grpc::ClientAsyncReaderWriter<::minecpp::proto::event::serverbound::v1::Event,
                                                      ::minecpp::proto::event::clientbound::v1::Event>>
      AsyncJoin(::grpc::ClientContext *context, ::grpc::CompletionQueue *cq, void *tag)
      {
         return std::unique_ptr<
                 ::grpc::ClientAsyncReaderWriter<::minecpp::proto::event::serverbound::v1::Event,
                                                 ::minecpp::proto::event::clientbound::v1::Event>>(
                 AsyncJoinRaw(context, cq, tag));
      }

      std::unique_ptr<::grpc::ClientAsyncReaderWriter<::minecpp::proto::event::serverbound::v1::Event,
                                                      ::minecpp::proto::event::clientbound::v1::Event>>
      PrepareAsyncJoin(::grpc::ClientContext *context, ::grpc::CompletionQueue *cq)
      {
         return std::unique_ptr<
                 ::grpc::ClientAsyncReaderWriter<::minecpp::proto::event::serverbound::v1::Event,
                                                 ::minecpp::proto::event::clientbound::v1::Event>>(
                 PrepareAsyncJoinRaw(context, cq));
      }

      class async final : public StubInterface::async_interface
      {
       public:
         void
         Join(::grpc::ClientContext *context,
              ::grpc::ClientBidiReactor<::minecpp::proto::event::serverbound::v1::Event,
                                        ::minecpp::proto::event::clientbound::v1::Event> *reactor) override;

       private:
         friend class Stub;

         explicit async(Stub *stub) :
             stub_(stub)
         {
         }

         Stub *stub()
         {
            return stub_;
         }

         Stub *stub_;
      };

      class async *async() override
      {
         return &async_stub_;
      }

    private:
      std::shared_ptr<::grpc::ChannelInterface> channel_;

      class async async_stub_
      {
         this
      };

      ::grpc::ClientReaderWriter<::minecpp::proto::event::serverbound::v1::Event,
                                 ::minecpp::proto::event::clientbound::v1::Event> *
      JoinRaw(::grpc::ClientContext *context) override;
      ::grpc::ClientAsyncReaderWriter<::minecpp::proto::event::serverbound::v1::Event,
                                      ::minecpp::proto::event::clientbound::v1::Event> *
      AsyncJoinRaw(::grpc::ClientContext *context, ::grpc::CompletionQueue *cq, void *tag) override;
      ::grpc::ClientAsyncReaderWriter<::minecpp::proto::event::serverbound::v1::Event,
                                      ::minecpp::proto::event::clientbound::v1::Event> *
      PrepareAsyncJoinRaw(::grpc::ClientContext *context, ::grpc::CompletionQueue *cq) override;
      const ::grpc::internal::RpcMethod rpcmethod_Join_;
   };

   static std::unique_ptr<Stub> NewStub(const std::shared_ptr<::grpc::ChannelInterface> &channel,
                                        const ::grpc::StubOptions &options = ::grpc::StubOptions());

   class Service : public ::grpc::Service
   {
    public:
      Service();
      virtual ~Service();
      virtual ::grpc::Status
      Join(::grpc::ServerContext *context,
           ::grpc::ServerReaderWriter<::minecpp::proto::event::clientbound::v1::Event,
                                      ::minecpp::proto::event::serverbound::v1::Event> *stream);
   };

   template<class BaseClass>
   class WithAsyncMethod_Join : public BaseClass
   {
    private:
      void BaseClassMustBeDerivedFromService(const Service * /*service*/) {}

    public:
      WithAsyncMethod_Join()
      {
         ::grpc::Service::MarkMethodAsync(0);
      }

      ~WithAsyncMethod_Join() override
      {
         BaseClassMustBeDerivedFromService(this);
      }

      // disable synchronous version of this method
      ::grpc::Status
      Join(::grpc::ServerContext * /*context*/,
           ::grpc::ServerReaderWriter<::minecpp::proto::event::clientbound::v1::Event,
                                      ::minecpp::proto::event::serverbound::v1::Event> * /*stream*/) override
      {
         abort();
         return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
      }

      void
      RequestJoin(::grpc::ServerContext *context,
                  ::grpc::ServerAsyncReaderWriter<::minecpp::proto::event::clientbound::v1::Event,
                                                  ::minecpp::proto::event::serverbound::v1::Event> *stream,
                  ::grpc::CompletionQueue *new_call_cq, ::grpc::ServerCompletionQueue *notification_cq,
                  void *tag)
      {
         ::grpc::Service::RequestAsyncBidiStreaming(0, context, stream, new_call_cq, notification_cq, tag);
      }
   };

   typedef WithAsyncMethod_Join<Service> AsyncService;

   template<class BaseClass>
   class WithCallbackMethod_Join : public BaseClass
   {
    private:
      void BaseClassMustBeDerivedFromService(const Service * /*service*/) {}

    public:
      WithCallbackMethod_Join()
      {
         ::grpc::Service::MarkMethodCallback(
                 0,
                 new ::grpc::internal::CallbackBidiHandler<::minecpp::proto::event::serverbound::v1::Event,
                                                           ::minecpp::proto::event::clientbound::v1::Event>(
                         [this](::grpc::CallbackServerContext *context) { return this->Join(context); }));
      }

      ~WithCallbackMethod_Join() override
      {
         BaseClassMustBeDerivedFromService(this);
      }

      // disable synchronous version of this method
      ::grpc::Status
      Join(::grpc::ServerContext * /*context*/,
           ::grpc::ServerReaderWriter<::minecpp::proto::event::clientbound::v1::Event,
                                      ::minecpp::proto::event::serverbound::v1::Event> * /*stream*/) override
      {
         abort();
         return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
      }

      virtual ::grpc::ServerBidiReactor<::minecpp::proto::event::serverbound::v1::Event,
                                        ::minecpp::proto::event::clientbound::v1::Event> *
      Join(::grpc::CallbackServerContext * /*context*/)
      {
         return nullptr;
      }
   };

   typedef WithCallbackMethod_Join<Service> CallbackService;
   typedef CallbackService ExperimentalCallbackService;

   template<class BaseClass>
   class WithGenericMethod_Join : public BaseClass
   {
    private:
      void BaseClassMustBeDerivedFromService(const Service * /*service*/) {}

    public:
      WithGenericMethod_Join()
      {
         ::grpc::Service::MarkMethodGeneric(0);
      }

      ~WithGenericMethod_Join() override
      {
         BaseClassMustBeDerivedFromService(this);
      }

      // disable synchronous version of this method
      ::grpc::Status
      Join(::grpc::ServerContext * /*context*/,
           ::grpc::ServerReaderWriter<::minecpp::proto::event::clientbound::v1::Event,
                                      ::minecpp::proto::event::serverbound::v1::Event> * /*stream*/) override
      {
         abort();
         return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
      }
   };

   template<class BaseClass>
   class WithRawMethod_Join : public BaseClass
   {
    private:
      void BaseClassMustBeDerivedFromService(const Service * /*service*/) {}

    public:
      WithRawMethod_Join()
      {
         ::grpc::Service::MarkMethodRaw(0);
      }

      ~WithRawMethod_Join() override
      {
         BaseClassMustBeDerivedFromService(this);
      }

      // disable synchronous version of this method
      ::grpc::Status
      Join(::grpc::ServerContext * /*context*/,
           ::grpc::ServerReaderWriter<::minecpp::proto::event::clientbound::v1::Event,
                                      ::minecpp::proto::event::serverbound::v1::Event> * /*stream*/) override
      {
         abort();
         return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
      }

      void RequestJoin(::grpc::ServerContext *context,
                       ::grpc::ServerAsyncReaderWriter<::grpc::ByteBuffer, ::grpc::ByteBuffer> *stream,
                       ::grpc::CompletionQueue *new_call_cq, ::grpc::ServerCompletionQueue *notification_cq,
                       void *tag)
      {
         ::grpc::Service::RequestAsyncBidiStreaming(0, context, stream, new_call_cq, notification_cq, tag);
      }
   };

   template<class BaseClass>
   class WithRawCallbackMethod_Join : public BaseClass
   {
    private:
      void BaseClassMustBeDerivedFromService(const Service * /*service*/) {}

    public:
      WithRawCallbackMethod_Join()
      {
         ::grpc::Service::MarkMethodRawCallback(
                 0, new ::grpc::internal::CallbackBidiHandler<::grpc::ByteBuffer, ::grpc::ByteBuffer>(
                            [this](::grpc::CallbackServerContext *context) { return this->Join(context); }));
      }

      ~WithRawCallbackMethod_Join() override
      {
         BaseClassMustBeDerivedFromService(this);
      }

      // disable synchronous version of this method
      ::grpc::Status
      Join(::grpc::ServerContext * /*context*/,
           ::grpc::ServerReaderWriter<::minecpp::proto::event::clientbound::v1::Event,
                                      ::minecpp::proto::event::serverbound::v1::Event> * /*stream*/) override
      {
         abort();
         return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
      }

      virtual ::grpc::ServerBidiReactor<::grpc::ByteBuffer, ::grpc::ByteBuffer> *
      Join(::grpc::CallbackServerContext * /*context*/)
      {
         return nullptr;
      }
   };

   typedef Service StreamedUnaryService;
   typedef Service SplitStreamedService;
   typedef Service StreamedService;
};

}}}}}// namespace minecpp::proto::service::engine::v1


#endif// GRPC_minecpp_2fproto_2fservice_2fengine_2fv1_2fEngine_2eproto__INCLUDED
