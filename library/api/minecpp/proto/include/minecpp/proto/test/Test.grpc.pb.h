// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: minecpp/proto/test/Test.proto
#ifndef GRPC_minecpp_2fproto_2ftest_2fTest_2eproto__INCLUDED
#define GRPC_minecpp_2fproto_2ftest_2fTest_2eproto__INCLUDED

#include <minecpp/proto/test/Test.pb.h>

#include <functional>
#include <grpcpp/generic/async_generic_service.h>
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
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>

namespace minecpp { namespace proto { namespace test {

class TestService final
{
 public:
   static constexpr char const *service_full_name()
   {
      return "minecpp.proto.test.TestService";
   }

   class StubInterface
   {
    public:
      virtual ~StubInterface() {}

      std::unique_ptr<::grpc::ClientReaderWriterInterface<::minecpp::proto::test::TestMessage,
                                                          ::minecpp::proto::test::TestMessage>>
      StartStream(::grpc::ClientContext *context)
      {
         return std::unique_ptr<::grpc::ClientReaderWriterInterface<::minecpp::proto::test::TestMessage,
                                                                    ::minecpp::proto::test::TestMessage>>(
                 StartStreamRaw(context));
      }

      std::unique_ptr<::grpc::ClientAsyncReaderWriterInterface<::minecpp::proto::test::TestMessage,
                                                               ::minecpp::proto::test::TestMessage>>
      AsyncStartStream(::grpc::ClientContext *context, ::grpc::CompletionQueue *cq, void *tag)
      {
         return std::unique_ptr<::grpc::ClientAsyncReaderWriterInterface<
                 ::minecpp::proto::test::TestMessage, ::minecpp::proto::test::TestMessage>>(
                 AsyncStartStreamRaw(context, cq, tag));
      }

      std::unique_ptr<::grpc::ClientAsyncReaderWriterInterface<::minecpp::proto::test::TestMessage,
                                                               ::minecpp::proto::test::TestMessage>>
      PrepareAsyncStartStream(::grpc::ClientContext *context, ::grpc::CompletionQueue *cq)
      {
         return std::unique_ptr<::grpc::ClientAsyncReaderWriterInterface<
                 ::minecpp::proto::test::TestMessage, ::minecpp::proto::test::TestMessage>>(
                 PrepareAsyncStartStreamRaw(context, cq));
      }

      class async_interface
      {
       public:
         virtual ~async_interface() {}

         virtual void
         StartStream(::grpc::ClientContext *context,
                     ::grpc::ClientBidiReactor<::minecpp::proto::test::TestMessage,
                                               ::minecpp::proto::test::TestMessage> *reactor) = 0;
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
      virtual ::grpc::ClientReaderWriterInterface<::minecpp::proto::test::TestMessage,
                                                  ::minecpp::proto::test::TestMessage> *
      StartStreamRaw(::grpc::ClientContext *context) = 0;
      virtual ::grpc::ClientAsyncReaderWriterInterface<::minecpp::proto::test::TestMessage,
                                                       ::minecpp::proto::test::TestMessage> *
      AsyncStartStreamRaw(::grpc::ClientContext *context, ::grpc::CompletionQueue *cq, void *tag) = 0;
      virtual ::grpc::ClientAsyncReaderWriterInterface<::minecpp::proto::test::TestMessage,
                                                       ::minecpp::proto::test::TestMessage> *
      PrepareAsyncStartStreamRaw(::grpc::ClientContext *context, ::grpc::CompletionQueue *cq) = 0;
   };

   class Stub final : public StubInterface
   {
    public:
      Stub(const std::shared_ptr<::grpc::ChannelInterface> &channel,
           const ::grpc::StubOptions &options = ::grpc::StubOptions());

      std::unique_ptr<::grpc::ClientReaderWriter<::minecpp::proto::test::TestMessage,
                                                 ::minecpp::proto::test::TestMessage>>
      StartStream(::grpc::ClientContext *context)
      {
         return std::unique_ptr<::grpc::ClientReaderWriter<::minecpp::proto::test::TestMessage,
                                                           ::minecpp::proto::test::TestMessage>>(
                 StartStreamRaw(context));
      }

      std::unique_ptr<::grpc::ClientAsyncReaderWriter<::minecpp::proto::test::TestMessage,
                                                      ::minecpp::proto::test::TestMessage>>
      AsyncStartStream(::grpc::ClientContext *context, ::grpc::CompletionQueue *cq, void *tag)
      {
         return std::unique_ptr<::grpc::ClientAsyncReaderWriter<::minecpp::proto::test::TestMessage,
                                                                ::minecpp::proto::test::TestMessage>>(
                 AsyncStartStreamRaw(context, cq, tag));
      }

      std::unique_ptr<::grpc::ClientAsyncReaderWriter<::minecpp::proto::test::TestMessage,
                                                      ::minecpp::proto::test::TestMessage>>
      PrepareAsyncStartStream(::grpc::ClientContext *context, ::grpc::CompletionQueue *cq)
      {
         return std::unique_ptr<::grpc::ClientAsyncReaderWriter<::minecpp::proto::test::TestMessage,
                                                                ::minecpp::proto::test::TestMessage>>(
                 PrepareAsyncStartStreamRaw(context, cq));
      }

      class async final : public StubInterface::async_interface
      {
       public:
         void StartStream(::grpc::ClientContext *context,
                          ::grpc::ClientBidiReactor<::minecpp::proto::test::TestMessage,
                                                    ::minecpp::proto::test::TestMessage> *reactor) override;

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

      ::grpc::ClientReaderWriter<::minecpp::proto::test::TestMessage, ::minecpp::proto::test::TestMessage> *
      StartStreamRaw(::grpc::ClientContext *context) override;
      ::grpc::ClientAsyncReaderWriter<::minecpp::proto::test::TestMessage,
                                      ::minecpp::proto::test::TestMessage> *
      AsyncStartStreamRaw(::grpc::ClientContext *context, ::grpc::CompletionQueue *cq, void *tag) override;
      ::grpc::ClientAsyncReaderWriter<::minecpp::proto::test::TestMessage,
                                      ::minecpp::proto::test::TestMessage> *
      PrepareAsyncStartStreamRaw(::grpc::ClientContext *context, ::grpc::CompletionQueue *cq) override;
      const ::grpc::internal::RpcMethod rpcmethod_StartStream_;
   };

   static std::unique_ptr<Stub> NewStub(const std::shared_ptr<::grpc::ChannelInterface> &channel,
                                        const ::grpc::StubOptions &options = ::grpc::StubOptions());

   class Service : public ::grpc::Service
   {
    public:
      Service();
      virtual ~Service();
      virtual ::grpc::Status
      StartStream(::grpc::ServerContext *context,
                  ::grpc::ServerReaderWriter<::minecpp::proto::test::TestMessage,
                                             ::minecpp::proto::test::TestMessage> *stream);
   };

   template<class BaseClass>
   class WithAsyncMethod_StartStream : public BaseClass
   {
    private:
      void BaseClassMustBeDerivedFromService(const Service * /*service*/) {}

    public:
      WithAsyncMethod_StartStream()
      {
         ::grpc::Service::MarkMethodAsync(0);
      }

      ~WithAsyncMethod_StartStream() override
      {
         BaseClassMustBeDerivedFromService(this);
      }

      // disable synchronous version of this method
      ::grpc::Status
      StartStream(::grpc::ServerContext * /*context*/,
                  ::grpc::ServerReaderWriter<::minecpp::proto::test::TestMessage,
                                             ::minecpp::proto::test::TestMessage> * /*stream*/) override
      {
         abort();
         return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
      }

      void RequestStartStream(::grpc::ServerContext *context,
                              ::grpc::ServerAsyncReaderWriter<::minecpp::proto::test::TestMessage,
                                                              ::minecpp::proto::test::TestMessage> *stream,
                              ::grpc::CompletionQueue *new_call_cq,
                              ::grpc::ServerCompletionQueue *notification_cq, void *tag)
      {
         ::grpc::Service::RequestAsyncBidiStreaming(0, context, stream, new_call_cq, notification_cq, tag);
      }
   };

   typedef WithAsyncMethod_StartStream<Service> AsyncService;

   template<class BaseClass>
   class WithCallbackMethod_StartStream : public BaseClass
   {
    private:
      void BaseClassMustBeDerivedFromService(const Service * /*service*/) {}

    public:
      WithCallbackMethod_StartStream()
      {
         ::grpc::Service::MarkMethodCallback(
                 0, new ::grpc::internal::CallbackBidiHandler<::minecpp::proto::test::TestMessage,
                                                              ::minecpp::proto::test::TestMessage>(
                            [this](::grpc::CallbackServerContext *context) {
                               return this->StartStream(context);
                            }));
      }

      ~WithCallbackMethod_StartStream() override
      {
         BaseClassMustBeDerivedFromService(this);
      }

      // disable synchronous version of this method
      ::grpc::Status
      StartStream(::grpc::ServerContext * /*context*/,
                  ::grpc::ServerReaderWriter<::minecpp::proto::test::TestMessage,
                                             ::minecpp::proto::test::TestMessage> * /*stream*/) override
      {
         abort();
         return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
      }

      virtual ::grpc::ServerBidiReactor<::minecpp::proto::test::TestMessage,
                                        ::minecpp::proto::test::TestMessage> *
      StartStream(::grpc::CallbackServerContext * /*context*/)
      {
         return nullptr;
      }
   };

   typedef WithCallbackMethod_StartStream<Service> CallbackService;
   typedef CallbackService ExperimentalCallbackService;

   template<class BaseClass>
   class WithGenericMethod_StartStream : public BaseClass
   {
    private:
      void BaseClassMustBeDerivedFromService(const Service * /*service*/) {}

    public:
      WithGenericMethod_StartStream()
      {
         ::grpc::Service::MarkMethodGeneric(0);
      }

      ~WithGenericMethod_StartStream() override
      {
         BaseClassMustBeDerivedFromService(this);
      }

      // disable synchronous version of this method
      ::grpc::Status
      StartStream(::grpc::ServerContext * /*context*/,
                  ::grpc::ServerReaderWriter<::minecpp::proto::test::TestMessage,
                                             ::minecpp::proto::test::TestMessage> * /*stream*/) override
      {
         abort();
         return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
      }
   };

   template<class BaseClass>
   class WithRawMethod_StartStream : public BaseClass
   {
    private:
      void BaseClassMustBeDerivedFromService(const Service * /*service*/) {}

    public:
      WithRawMethod_StartStream()
      {
         ::grpc::Service::MarkMethodRaw(0);
      }

      ~WithRawMethod_StartStream() override
      {
         BaseClassMustBeDerivedFromService(this);
      }

      // disable synchronous version of this method
      ::grpc::Status
      StartStream(::grpc::ServerContext * /*context*/,
                  ::grpc::ServerReaderWriter<::minecpp::proto::test::TestMessage,
                                             ::minecpp::proto::test::TestMessage> * /*stream*/) override
      {
         abort();
         return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
      }

      void RequestStartStream(::grpc::ServerContext *context,
                              ::grpc::ServerAsyncReaderWriter<::grpc::ByteBuffer, ::grpc::ByteBuffer> *stream,
                              ::grpc::CompletionQueue *new_call_cq,
                              ::grpc::ServerCompletionQueue *notification_cq, void *tag)
      {
         ::grpc::Service::RequestAsyncBidiStreaming(0, context, stream, new_call_cq, notification_cq, tag);
      }
   };

   template<class BaseClass>
   class WithRawCallbackMethod_StartStream : public BaseClass
   {
    private:
      void BaseClassMustBeDerivedFromService(const Service * /*service*/) {}

    public:
      WithRawCallbackMethod_StartStream()
      {
         ::grpc::Service::MarkMethodRawCallback(
                 0, new ::grpc::internal::CallbackBidiHandler<::grpc::ByteBuffer, ::grpc::ByteBuffer>(
                            [this](::grpc::CallbackServerContext *context) {
                               return this->StartStream(context);
                            }));
      }

      ~WithRawCallbackMethod_StartStream() override
      {
         BaseClassMustBeDerivedFromService(this);
      }

      // disable synchronous version of this method
      ::grpc::Status
      StartStream(::grpc::ServerContext * /*context*/,
                  ::grpc::ServerReaderWriter<::minecpp::proto::test::TestMessage,
                                             ::minecpp::proto::test::TestMessage> * /*stream*/) override
      {
         abort();
         return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
      }

      virtual ::grpc::ServerBidiReactor<::grpc::ByteBuffer, ::grpc::ByteBuffer> *
      StartStream(::grpc::CallbackServerContext * /*context*/)
      {
         return nullptr;
      }
   };

   typedef Service StreamedUnaryService;
   typedef Service SplitStreamedService;
   typedef Service StreamedService;
};

}}}// namespace minecpp::proto::test


#endif// GRPC_minecpp_2fproto_2ftest_2fTest_2eproto__INCLUDED
