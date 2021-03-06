/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef DbProxyService_H
#define DbProxyService_H

#include <thrift/TDispatchProcessor.h>
#include "db_proxy_types.h"

namespace mooon { namespace db_proxy {

class DbProxyServiceIf {
 public:
  virtual ~DbProxyServiceIf() {}
  virtual void query(DBTable& _return, const std::string& sign, const int32_t seq, const int32_t query_index, const std::vector<std::string> & tokens, const int32_t limit, const int32_t limit_start) = 0;
  virtual int32_t update(const std::string& sign, const int32_t seq, const int32_t update_index, const std::vector<std::string> & tokens) = 0;
  virtual void async_update(const std::string& sign, const int32_t seq, const int32_t update_index, const std::vector<std::string> & tokens) = 0;
};

class DbProxyServiceIfFactory {
 public:
  typedef DbProxyServiceIf Handler;

  virtual ~DbProxyServiceIfFactory() {}

  virtual DbProxyServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(DbProxyServiceIf* /* handler */) = 0;
};

class DbProxyServiceIfSingletonFactory : virtual public DbProxyServiceIfFactory {
 public:
  DbProxyServiceIfSingletonFactory(const boost::shared_ptr<DbProxyServiceIf>& iface) : iface_(iface) {}
  virtual ~DbProxyServiceIfSingletonFactory() {}

  virtual DbProxyServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(DbProxyServiceIf* /* handler */) {}

 protected:
  boost::shared_ptr<DbProxyServiceIf> iface_;
};

class DbProxyServiceNull : virtual public DbProxyServiceIf {
 public:
  virtual ~DbProxyServiceNull() {}
  void query(DBTable& /* _return */, const std::string& /* sign */, const int32_t /* seq */, const int32_t /* query_index */, const std::vector<std::string> & /* tokens */, const int32_t /* limit */, const int32_t /* limit_start */) {
    return;
  }
  int32_t update(const std::string& /* sign */, const int32_t /* seq */, const int32_t /* update_index */, const std::vector<std::string> & /* tokens */) {
    int32_t _return = 0;
    return _return;
  }
  void async_update(const std::string& /* sign */, const int32_t /* seq */, const int32_t /* update_index */, const std::vector<std::string> & /* tokens */) {
    return;
  }
};

typedef struct _DbProxyService_query_args__isset {
  _DbProxyService_query_args__isset() : sign(false), seq(false), query_index(false), tokens(false), limit(false), limit_start(false) {}
  bool sign;
  bool seq;
  bool query_index;
  bool tokens;
  bool limit;
  bool limit_start;
} _DbProxyService_query_args__isset;

class DbProxyService_query_args {
 public:

  DbProxyService_query_args() : sign(), seq(0), query_index(0), limit(0), limit_start(0) {
  }

  virtual ~DbProxyService_query_args() throw() {}

  std::string sign;
  int32_t seq;
  int32_t query_index;
  std::vector<std::string>  tokens;
  int32_t limit;
  int32_t limit_start;

  _DbProxyService_query_args__isset __isset;

  void __set_sign(const std::string& val) {
    sign = val;
  }

  void __set_seq(const int32_t val) {
    seq = val;
  }

  void __set_query_index(const int32_t val) {
    query_index = val;
  }

  void __set_tokens(const std::vector<std::string> & val) {
    tokens = val;
  }

  void __set_limit(const int32_t val) {
    limit = val;
  }

  void __set_limit_start(const int32_t val) {
    limit_start = val;
  }

  bool operator == (const DbProxyService_query_args & rhs) const
  {
    if (!(sign == rhs.sign))
      return false;
    if (!(seq == rhs.seq))
      return false;
    if (!(query_index == rhs.query_index))
      return false;
    if (!(tokens == rhs.tokens))
      return false;
    if (!(limit == rhs.limit))
      return false;
    if (!(limit_start == rhs.limit_start))
      return false;
    return true;
  }
  bool operator != (const DbProxyService_query_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const DbProxyService_query_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class DbProxyService_query_pargs {
 public:


  virtual ~DbProxyService_query_pargs() throw() {}

  const std::string* sign;
  const int32_t* seq;
  const int32_t* query_index;
  const std::vector<std::string> * tokens;
  const int32_t* limit;
  const int32_t* limit_start;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _DbProxyService_query_result__isset {
  _DbProxyService_query_result__isset() : success(false) {}
  bool success;
} _DbProxyService_query_result__isset;

class DbProxyService_query_result {
 public:

  DbProxyService_query_result() {
  }

  virtual ~DbProxyService_query_result() throw() {}

  DBTable success;

  _DbProxyService_query_result__isset __isset;

  void __set_success(const DBTable& val) {
    success = val;
  }

  bool operator == (const DbProxyService_query_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const DbProxyService_query_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const DbProxyService_query_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _DbProxyService_query_presult__isset {
  _DbProxyService_query_presult__isset() : success(false) {}
  bool success;
} _DbProxyService_query_presult__isset;

class DbProxyService_query_presult {
 public:


  virtual ~DbProxyService_query_presult() throw() {}

  DBTable* success;

  _DbProxyService_query_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _DbProxyService_update_args__isset {
  _DbProxyService_update_args__isset() : sign(false), seq(false), update_index(false), tokens(false) {}
  bool sign;
  bool seq;
  bool update_index;
  bool tokens;
} _DbProxyService_update_args__isset;

class DbProxyService_update_args {
 public:

  DbProxyService_update_args() : sign(), seq(0), update_index(0) {
  }

  virtual ~DbProxyService_update_args() throw() {}

  std::string sign;
  int32_t seq;
  int32_t update_index;
  std::vector<std::string>  tokens;

  _DbProxyService_update_args__isset __isset;

  void __set_sign(const std::string& val) {
    sign = val;
  }

  void __set_seq(const int32_t val) {
    seq = val;
  }

  void __set_update_index(const int32_t val) {
    update_index = val;
  }

  void __set_tokens(const std::vector<std::string> & val) {
    tokens = val;
  }

  bool operator == (const DbProxyService_update_args & rhs) const
  {
    if (!(sign == rhs.sign))
      return false;
    if (!(seq == rhs.seq))
      return false;
    if (!(update_index == rhs.update_index))
      return false;
    if (!(tokens == rhs.tokens))
      return false;
    return true;
  }
  bool operator != (const DbProxyService_update_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const DbProxyService_update_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class DbProxyService_update_pargs {
 public:


  virtual ~DbProxyService_update_pargs() throw() {}

  const std::string* sign;
  const int32_t* seq;
  const int32_t* update_index;
  const std::vector<std::string> * tokens;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _DbProxyService_update_result__isset {
  _DbProxyService_update_result__isset() : success(false) {}
  bool success;
} _DbProxyService_update_result__isset;

class DbProxyService_update_result {
 public:

  DbProxyService_update_result() : success(0) {
  }

  virtual ~DbProxyService_update_result() throw() {}

  int32_t success;

  _DbProxyService_update_result__isset __isset;

  void __set_success(const int32_t val) {
    success = val;
  }

  bool operator == (const DbProxyService_update_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const DbProxyService_update_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const DbProxyService_update_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _DbProxyService_update_presult__isset {
  _DbProxyService_update_presult__isset() : success(false) {}
  bool success;
} _DbProxyService_update_presult__isset;

class DbProxyService_update_presult {
 public:


  virtual ~DbProxyService_update_presult() throw() {}

  int32_t* success;

  _DbProxyService_update_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _DbProxyService_async_update_args__isset {
  _DbProxyService_async_update_args__isset() : sign(false), seq(false), update_index(false), tokens(false) {}
  bool sign;
  bool seq;
  bool update_index;
  bool tokens;
} _DbProxyService_async_update_args__isset;

class DbProxyService_async_update_args {
 public:

  DbProxyService_async_update_args() : sign(), seq(0), update_index(0) {
  }

  virtual ~DbProxyService_async_update_args() throw() {}

  std::string sign;
  int32_t seq;
  int32_t update_index;
  std::vector<std::string>  tokens;

  _DbProxyService_async_update_args__isset __isset;

  void __set_sign(const std::string& val) {
    sign = val;
  }

  void __set_seq(const int32_t val) {
    seq = val;
  }

  void __set_update_index(const int32_t val) {
    update_index = val;
  }

  void __set_tokens(const std::vector<std::string> & val) {
    tokens = val;
  }

  bool operator == (const DbProxyService_async_update_args & rhs) const
  {
    if (!(sign == rhs.sign))
      return false;
    if (!(seq == rhs.seq))
      return false;
    if (!(update_index == rhs.update_index))
      return false;
    if (!(tokens == rhs.tokens))
      return false;
    return true;
  }
  bool operator != (const DbProxyService_async_update_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const DbProxyService_async_update_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class DbProxyService_async_update_pargs {
 public:


  virtual ~DbProxyService_async_update_pargs() throw() {}

  const std::string* sign;
  const int32_t* seq;
  const int32_t* update_index;
  const std::vector<std::string> * tokens;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class DbProxyServiceClient : virtual public DbProxyServiceIf {
 public:
  DbProxyServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) :
    piprot_(prot),
    poprot_(prot) {
    iprot_ = prot.get();
    oprot_ = prot.get();
  }
  DbProxyServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) :
    piprot_(iprot),
    poprot_(oprot) {
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void query(DBTable& _return, const std::string& sign, const int32_t seq, const int32_t query_index, const std::vector<std::string> & tokens, const int32_t limit, const int32_t limit_start);
  void send_query(const std::string& sign, const int32_t seq, const int32_t query_index, const std::vector<std::string> & tokens, const int32_t limit, const int32_t limit_start);
  void recv_query(DBTable& _return);
  int32_t update(const std::string& sign, const int32_t seq, const int32_t update_index, const std::vector<std::string> & tokens);
  void send_update(const std::string& sign, const int32_t seq, const int32_t update_index, const std::vector<std::string> & tokens);
  int32_t recv_update();
  void async_update(const std::string& sign, const int32_t seq, const int32_t update_index, const std::vector<std::string> & tokens);
  void send_async_update(const std::string& sign, const int32_t seq, const int32_t update_index, const std::vector<std::string> & tokens);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class DbProxyServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  boost::shared_ptr<DbProxyServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (DbProxyServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_query(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_update(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_async_update(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  DbProxyServiceProcessor(boost::shared_ptr<DbProxyServiceIf> iface) :
    iface_(iface) {
    processMap_["query"] = &DbProxyServiceProcessor::process_query;
    processMap_["update"] = &DbProxyServiceProcessor::process_update;
    processMap_["async_update"] = &DbProxyServiceProcessor::process_async_update;
  }

  virtual ~DbProxyServiceProcessor() {}
};

class DbProxyServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  DbProxyServiceProcessorFactory(const ::boost::shared_ptr< DbProxyServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< DbProxyServiceIfFactory > handlerFactory_;
};

class DbProxyServiceMultiface : virtual public DbProxyServiceIf {
 public:
  DbProxyServiceMultiface(std::vector<boost::shared_ptr<DbProxyServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~DbProxyServiceMultiface() {}
 protected:
  std::vector<boost::shared_ptr<DbProxyServiceIf> > ifaces_;
  DbProxyServiceMultiface() {}
  void add(boost::shared_ptr<DbProxyServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void query(DBTable& _return, const std::string& sign, const int32_t seq, const int32_t query_index, const std::vector<std::string> & tokens, const int32_t limit, const int32_t limit_start) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->query(_return, sign, seq, query_index, tokens, limit, limit_start);
    }
    ifaces_[i]->query(_return, sign, seq, query_index, tokens, limit, limit_start);
    return;
  }

  int32_t update(const std::string& sign, const int32_t seq, const int32_t update_index, const std::vector<std::string> & tokens) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->update(sign, seq, update_index, tokens);
    }
    return ifaces_[i]->update(sign, seq, update_index, tokens);
  }

  void async_update(const std::string& sign, const int32_t seq, const int32_t update_index, const std::vector<std::string> & tokens) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->async_update(sign, seq, update_index, tokens);
    }
    ifaces_[i]->async_update(sign, seq, update_index, tokens);
  }

};

}} // namespace

#endif
