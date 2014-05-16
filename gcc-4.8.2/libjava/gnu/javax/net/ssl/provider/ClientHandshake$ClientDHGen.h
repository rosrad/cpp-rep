
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_net_ssl_provider_ClientHandshake$ClientDHGen__
#define __gnu_javax_net_ssl_provider_ClientHandshake$ClientDHGen__

#pragma interface

#include <gnu/javax/net/ssl/provider/DelegatedTask.h>
extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace net
      {
        namespace ssl
        {
          namespace provider
          {
              class ClientHandshake;
              class ClientHandshake$ClientDHGen;
          }
        }
      }
    }
  }
  namespace javax
  {
    namespace crypto
    {
      namespace interfaces
      {
          class DHPublicKey;
      }
      namespace spec
      {
          class DHParameterSpec;
      }
    }
  }
}

class gnu::javax::net::ssl::provider::ClientHandshake$ClientDHGen : public ::gnu::javax::net::ssl::provider::DelegatedTask
{

public: // actually package-private
  ClientHandshake$ClientDHGen(::gnu::javax::net::ssl::provider::ClientHandshake *, ::javax::crypto::interfaces::DHPublicKey *, ::javax::crypto::spec::DHParameterSpec *, jboolean);
public:
  virtual void implRun();
public: // actually package-private
  virtual ::javax::crypto::interfaces::DHPublicKey * serverKey();
private:
  ::javax::crypto::interfaces::DHPublicKey * __attribute__((aligned(__alignof__( ::gnu::javax::net::ssl::provider::DelegatedTask)))) serverKey__;
  ::javax::crypto::spec::DHParameterSpec * params;
  jboolean full;
public: // actually package-private
  ::gnu::javax::net::ssl::provider::ClientHandshake * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_net_ssl_provider_ClientHandshake$ClientDHGen__
