// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: snippet_sample.proto
#ifndef GRPC_snippet_5fsample_2eproto__INCLUDED
#define GRPC_snippet_5fsample_2eproto__INCLUDED

#include "snippet_sample.pb.h"

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

namespace StorageEngineInstance {

class InterfaceContainer final {
 public:
  static constexpr char const* service_full_name() {
    return "StorageEngineInstance.InterfaceContainer";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::StorageEngineInstance::SnippetRequest, ::StorageEngineInstance::Result>> SetSnippet(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::StorageEngineInstance::SnippetRequest, ::StorageEngineInstance::Result>>(SetSnippetRaw(context));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::StorageEngineInstance::SnippetRequest, ::StorageEngineInstance::Result>> AsyncSetSnippet(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::StorageEngineInstance::SnippetRequest, ::StorageEngineInstance::Result>>(AsyncSetSnippetRaw(context, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::StorageEngineInstance::SnippetRequest, ::StorageEngineInstance::Result>> PrepareAsyncSetSnippet(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::StorageEngineInstance::SnippetRequest, ::StorageEngineInstance::Result>>(PrepareAsyncSetSnippetRaw(context, cq));
    }
    virtual ::grpc::Status Run(::grpc::ClientContext* context, const ::StorageEngineInstance::Request& request, ::StorageEngineInstance::Result* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::StorageEngineInstance::Result>> AsyncRun(::grpc::ClientContext* context, const ::StorageEngineInstance::Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::StorageEngineInstance::Result>>(AsyncRunRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::StorageEngineInstance::Result>> PrepareAsyncRun(::grpc::ClientContext* context, const ::StorageEngineInstance::Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::StorageEngineInstance::Result>>(PrepareAsyncRunRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void SetSnippet(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::StorageEngineInstance::SnippetRequest,::StorageEngineInstance::Result>* reactor) = 0;
      virtual void Run(::grpc::ClientContext* context, const ::StorageEngineInstance::Request* request, ::StorageEngineInstance::Result* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Run(::grpc::ClientContext* context, const ::StorageEngineInstance::Request* request, ::StorageEngineInstance::Result* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientReaderWriterInterface< ::StorageEngineInstance::SnippetRequest, ::StorageEngineInstance::Result>* SetSnippetRaw(::grpc::ClientContext* context) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::StorageEngineInstance::SnippetRequest, ::StorageEngineInstance::Result>* AsyncSetSnippetRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::StorageEngineInstance::SnippetRequest, ::StorageEngineInstance::Result>* PrepareAsyncSetSnippetRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::StorageEngineInstance::Result>* AsyncRunRaw(::grpc::ClientContext* context, const ::StorageEngineInstance::Request& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::StorageEngineInstance::Result>* PrepareAsyncRunRaw(::grpc::ClientContext* context, const ::StorageEngineInstance::Request& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    std::unique_ptr< ::grpc::ClientReaderWriter< ::StorageEngineInstance::SnippetRequest, ::StorageEngineInstance::Result>> SetSnippet(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriter< ::StorageEngineInstance::SnippetRequest, ::StorageEngineInstance::Result>>(SetSnippetRaw(context));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::StorageEngineInstance::SnippetRequest, ::StorageEngineInstance::Result>> AsyncSetSnippet(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::StorageEngineInstance::SnippetRequest, ::StorageEngineInstance::Result>>(AsyncSetSnippetRaw(context, cq, tag));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::StorageEngineInstance::SnippetRequest, ::StorageEngineInstance::Result>> PrepareAsyncSetSnippet(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::StorageEngineInstance::SnippetRequest, ::StorageEngineInstance::Result>>(PrepareAsyncSetSnippetRaw(context, cq));
    }
    ::grpc::Status Run(::grpc::ClientContext* context, const ::StorageEngineInstance::Request& request, ::StorageEngineInstance::Result* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::StorageEngineInstance::Result>> AsyncRun(::grpc::ClientContext* context, const ::StorageEngineInstance::Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::StorageEngineInstance::Result>>(AsyncRunRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::StorageEngineInstance::Result>> PrepareAsyncRun(::grpc::ClientContext* context, const ::StorageEngineInstance::Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::StorageEngineInstance::Result>>(PrepareAsyncRunRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void SetSnippet(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::StorageEngineInstance::SnippetRequest,::StorageEngineInstance::Result>* reactor) override;
      void Run(::grpc::ClientContext* context, const ::StorageEngineInstance::Request* request, ::StorageEngineInstance::Result* response, std::function<void(::grpc::Status)>) override;
      void Run(::grpc::ClientContext* context, const ::StorageEngineInstance::Request* request, ::StorageEngineInstance::Result* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientReaderWriter< ::StorageEngineInstance::SnippetRequest, ::StorageEngineInstance::Result>* SetSnippetRaw(::grpc::ClientContext* context) override;
    ::grpc::ClientAsyncReaderWriter< ::StorageEngineInstance::SnippetRequest, ::StorageEngineInstance::Result>* AsyncSetSnippetRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReaderWriter< ::StorageEngineInstance::SnippetRequest, ::StorageEngineInstance::Result>* PrepareAsyncSetSnippetRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::StorageEngineInstance::Result>* AsyncRunRaw(::grpc::ClientContext* context, const ::StorageEngineInstance::Request& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::StorageEngineInstance::Result>* PrepareAsyncRunRaw(::grpc::ClientContext* context, const ::StorageEngineInstance::Request& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_SetSnippet_;
    const ::grpc::internal::RpcMethod rpcmethod_Run_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status SetSnippet(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::StorageEngineInstance::Result, ::StorageEngineInstance::SnippetRequest>* stream);
    virtual ::grpc::Status Run(::grpc::ServerContext* context, const ::StorageEngineInstance::Request* request, ::StorageEngineInstance::Result* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_SetSnippet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_SetSnippet() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_SetSnippet() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SetSnippet(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::StorageEngineInstance::Result, ::StorageEngineInstance::SnippetRequest>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSetSnippet(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::StorageEngineInstance::Result, ::StorageEngineInstance::SnippetRequest>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(0, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Run : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Run() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_Run() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Run(::grpc::ServerContext* /*context*/, const ::StorageEngineInstance::Request* /*request*/, ::StorageEngineInstance::Result* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestRun(::grpc::ServerContext* context, ::StorageEngineInstance::Request* request, ::grpc::ServerAsyncResponseWriter< ::StorageEngineInstance::Result>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_SetSnippet<WithAsyncMethod_Run<Service > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_SetSnippet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_SetSnippet() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackBidiHandler< ::StorageEngineInstance::SnippetRequest, ::StorageEngineInstance::Result>(
            [this](
                   ::grpc::CallbackServerContext* context) { return this->SetSnippet(context); }));
    }
    ~WithCallbackMethod_SetSnippet() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SetSnippet(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::StorageEngineInstance::Result, ::StorageEngineInstance::SnippetRequest>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerBidiReactor< ::StorageEngineInstance::SnippetRequest, ::StorageEngineInstance::Result>* SetSnippet(
      ::grpc::CallbackServerContext* /*context*/)
      { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_Run : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Run() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::StorageEngineInstance::Request, ::StorageEngineInstance::Result>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::StorageEngineInstance::Request* request, ::StorageEngineInstance::Result* response) { return this->Run(context, request, response); }));}
    void SetMessageAllocatorFor_Run(
        ::grpc::MessageAllocator< ::StorageEngineInstance::Request, ::StorageEngineInstance::Result>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::StorageEngineInstance::Request, ::StorageEngineInstance::Result>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_Run() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Run(::grpc::ServerContext* /*context*/, const ::StorageEngineInstance::Request* /*request*/, ::StorageEngineInstance::Result* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Run(
      ::grpc::CallbackServerContext* /*context*/, const ::StorageEngineInstance::Request* /*request*/, ::StorageEngineInstance::Result* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_SetSnippet<WithCallbackMethod_Run<Service > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_SetSnippet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_SetSnippet() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_SetSnippet() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SetSnippet(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::StorageEngineInstance::Result, ::StorageEngineInstance::SnippetRequest>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Run : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Run() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_Run() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Run(::grpc::ServerContext* /*context*/, const ::StorageEngineInstance::Request* /*request*/, ::StorageEngineInstance::Result* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_SetSnippet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_SetSnippet() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_SetSnippet() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SetSnippet(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::StorageEngineInstance::Result, ::StorageEngineInstance::SnippetRequest>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSetSnippet(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(0, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_Run : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Run() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_Run() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Run(::grpc::ServerContext* /*context*/, const ::StorageEngineInstance::Request* /*request*/, ::StorageEngineInstance::Result* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestRun(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_SetSnippet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_SetSnippet() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackBidiHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context) { return this->SetSnippet(context); }));
    }
    ~WithRawCallbackMethod_SetSnippet() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SetSnippet(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::StorageEngineInstance::Result, ::StorageEngineInstance::SnippetRequest>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerBidiReactor< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* SetSnippet(
      ::grpc::CallbackServerContext* /*context*/)
      { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Run : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Run() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Run(context, request, response); }));
    }
    ~WithRawCallbackMethod_Run() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Run(::grpc::ServerContext* /*context*/, const ::StorageEngineInstance::Request* /*request*/, ::StorageEngineInstance::Result* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Run(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Run : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Run() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::StorageEngineInstance::Request, ::StorageEngineInstance::Result>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::StorageEngineInstance::Request, ::StorageEngineInstance::Result>* streamer) {
                       return this->StreamedRun(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Run() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Run(::grpc::ServerContext* /*context*/, const ::StorageEngineInstance::Request* /*request*/, ::StorageEngineInstance::Result* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedRun(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::StorageEngineInstance::Request,::StorageEngineInstance::Result>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Run<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Run<Service > StreamedService;
};

}  // namespace StorageEngineInstance


#endif  // GRPC_snippet_5fsample_2eproto__INCLUDED
