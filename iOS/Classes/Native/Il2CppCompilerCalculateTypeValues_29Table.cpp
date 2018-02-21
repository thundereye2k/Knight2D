#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t921849256;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_t3143858499;
// Org.BouncyCastle.Crypto.IDigest
struct IDigest_t1453488969;
// Org.BouncyCastle.Crypto.IAsymmetricBlockCipher
struct IAsymmetricBlockCipher_t3771502145;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// Org.BouncyCastle.Crypto.Macs.HMac
struct HMac_t4154676717;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier
struct AlgorithmIdentifier_t2882026504;
// System.Collections.IList
struct IList_t2094931216;
// Org.BouncyCastle.Crypto.Tls.TlsContext
struct TlsContext_t448022572;
// Org.BouncyCastle.Crypto.Prng.IRandomGenerator
struct IRandomGenerator_t175034739;
// Org.BouncyCastle.Crypto.Tls.SecurityParameters
struct SecurityParameters_t2547757593;
// Org.BouncyCastle.Crypto.Tls.ProtocolVersion
struct ProtocolVersion_t2693197969;
// Org.BouncyCastle.Crypto.Tls.TlsSession
struct TlsSession_t245022356;
// Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters
struct RsaKeyParameters_t2730774859;
// Org.BouncyCastle.Crypto.IDsa
struct IDsa_t2989258326;
// Org.BouncyCastle.Crypto.Signers.IDsaKCalculator
struct IDsaKCalculator_t933182460;
// Org.BouncyCastle.Crypto.Parameters.DsaKeyParameters
struct DsaKeyParameters_t457954099;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// Org.BouncyCastle.Crypto.Parameters.ECKeyParameters
struct ECKeyParameters_t251955665;
// Org.BouncyCastle.Crypto.Parameters.Gost3410KeyParameters
struct Gost3410KeyParameters_t1373670768;
// Org.BouncyCastle.Crypto.Engines.ChaCha7539Engine
struct ChaCha7539Engine_t797083379;
// Org.BouncyCastle.Asn1.X509.X509CertificateStructure[]
struct X509CertificateStructureU5BU5D_t994092288;
// Org.BouncyCastle.Crypto.Parameters.Gost3410ValidationParameters
struct Gost3410ValidationParameters_t2339624737;
// Org.BouncyCastle.Crypto.Parameters.DHValidationParameters
struct DHValidationParameters_t1290447282;
// Org.BouncyCastle.Math.EC.ECCurve
struct ECCurve_t507263384;
// Org.BouncyCastle.Math.EC.ECPoint
struct ECPoint_t2689130122;
// Org.BouncyCastle.Crypto.Parameters.DsaValidationParameters
struct DsaValidationParameters_t4208245698;
// Org.BouncyCastle.Crypto.Parameters.KeyParameter
struct KeyParameter_t422996900;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3105909747;
// Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters
struct ECPublicKeyParameters_t4285242833;
// Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters
struct ECPrivateKeyParameters_t3071696947;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.Parameters.ECDomainParameters
struct ECDomainParameters_t3853250996;
// Org.BouncyCastle.Asn1.DerObjectIdentifier
struct DerObjectIdentifier_t1618836225;
// Org.BouncyCastle.Crypto.Tls.ByteQueue
struct ByteQueue_t3132735923;
// Org.BouncyCastle.Crypto.Parameters.DHParameters
struct DHParameters_t2329248715;
// Org.BouncyCastle.Crypto.Parameters.DsaParameters
struct DsaParameters_t16985560;
// Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters
struct Gost3410Parameters_t831777799;
// Org.BouncyCastle.Crypto.Tls.TlsCipherFactory
struct TlsCipherFactory_t4161977620;
// Org.BouncyCastle.Crypto.Tls.TlsClientContext
struct TlsClientContext_t3662743044;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// Org.BouncyCastle.Crypto.Parameters.ElGamalParameters
struct ElGamalParameters_t953082378;
// Org.BouncyCastle.Crypto.Tls.TlsServerContext
struct TlsServerContext_t1303423799;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef RANDOMDSAKCALCULATOR_T3417229706_H
#define RANDOMDSAKCALCULATOR_T3417229706_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Signers.RandomDsaKCalculator
struct  RandomDsaKCalculator_t3417229706  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Signers.RandomDsaKCalculator::q
	BigInteger_t921849256 * ___q_0;
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.Signers.RandomDsaKCalculator::random
	SecureRandom_t3143858499 * ___random_1;

public:
	inline static int32_t get_offset_of_q_0() { return static_cast<int32_t>(offsetof(RandomDsaKCalculator_t3417229706, ___q_0)); }
	inline BigInteger_t921849256 * get_q_0() const { return ___q_0; }
	inline BigInteger_t921849256 ** get_address_of_q_0() { return &___q_0; }
	inline void set_q_0(BigInteger_t921849256 * value)
	{
		___q_0 = value;
		Il2CppCodeGenWriteBarrier((&___q_0), value);
	}

	inline static int32_t get_offset_of_random_1() { return static_cast<int32_t>(offsetof(RandomDsaKCalculator_t3417229706, ___random_1)); }
	inline SecureRandom_t3143858499 * get_random_1() const { return ___random_1; }
	inline SecureRandom_t3143858499 ** get_address_of_random_1() { return &___random_1; }
	inline void set_random_1(SecureRandom_t3143858499 * value)
	{
		___random_1 = value;
		Il2CppCodeGenWriteBarrier((&___random_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOMDSAKCALCULATOR_T3417229706_H
#ifndef PSSSIGNER_T2988062466_H
#define PSSSIGNER_T2988062466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Signers.PssSigner
struct  PssSigner_t2988062466  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Crypto.Signers.PssSigner::contentDigest1
	RuntimeObject* ___contentDigest1_1;
	// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Crypto.Signers.PssSigner::contentDigest2
	RuntimeObject* ___contentDigest2_2;
	// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Crypto.Signers.PssSigner::mgfDigest
	RuntimeObject* ___mgfDigest_3;
	// Org.BouncyCastle.Crypto.IAsymmetricBlockCipher Org.BouncyCastle.Crypto.Signers.PssSigner::cipher
	RuntimeObject* ___cipher_4;
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.Signers.PssSigner::random
	SecureRandom_t3143858499 * ___random_5;
	// System.Int32 Org.BouncyCastle.Crypto.Signers.PssSigner::hLen
	int32_t ___hLen_6;
	// System.Int32 Org.BouncyCastle.Crypto.Signers.PssSigner::mgfhLen
	int32_t ___mgfhLen_7;
	// System.Int32 Org.BouncyCastle.Crypto.Signers.PssSigner::sLen
	int32_t ___sLen_8;
	// System.Boolean Org.BouncyCastle.Crypto.Signers.PssSigner::sSet
	bool ___sSet_9;
	// System.Int32 Org.BouncyCastle.Crypto.Signers.PssSigner::emBits
	int32_t ___emBits_10;
	// System.Byte[] Org.BouncyCastle.Crypto.Signers.PssSigner::salt
	ByteU5BU5D_t4116647657* ___salt_11;
	// System.Byte[] Org.BouncyCastle.Crypto.Signers.PssSigner::mDash
	ByteU5BU5D_t4116647657* ___mDash_12;
	// System.Byte[] Org.BouncyCastle.Crypto.Signers.PssSigner::block
	ByteU5BU5D_t4116647657* ___block_13;
	// System.Byte Org.BouncyCastle.Crypto.Signers.PssSigner::trailer
	uint8_t ___trailer_14;

public:
	inline static int32_t get_offset_of_contentDigest1_1() { return static_cast<int32_t>(offsetof(PssSigner_t2988062466, ___contentDigest1_1)); }
	inline RuntimeObject* get_contentDigest1_1() const { return ___contentDigest1_1; }
	inline RuntimeObject** get_address_of_contentDigest1_1() { return &___contentDigest1_1; }
	inline void set_contentDigest1_1(RuntimeObject* value)
	{
		___contentDigest1_1 = value;
		Il2CppCodeGenWriteBarrier((&___contentDigest1_1), value);
	}

	inline static int32_t get_offset_of_contentDigest2_2() { return static_cast<int32_t>(offsetof(PssSigner_t2988062466, ___contentDigest2_2)); }
	inline RuntimeObject* get_contentDigest2_2() const { return ___contentDigest2_2; }
	inline RuntimeObject** get_address_of_contentDigest2_2() { return &___contentDigest2_2; }
	inline void set_contentDigest2_2(RuntimeObject* value)
	{
		___contentDigest2_2 = value;
		Il2CppCodeGenWriteBarrier((&___contentDigest2_2), value);
	}

	inline static int32_t get_offset_of_mgfDigest_3() { return static_cast<int32_t>(offsetof(PssSigner_t2988062466, ___mgfDigest_3)); }
	inline RuntimeObject* get_mgfDigest_3() const { return ___mgfDigest_3; }
	inline RuntimeObject** get_address_of_mgfDigest_3() { return &___mgfDigest_3; }
	inline void set_mgfDigest_3(RuntimeObject* value)
	{
		___mgfDigest_3 = value;
		Il2CppCodeGenWriteBarrier((&___mgfDigest_3), value);
	}

	inline static int32_t get_offset_of_cipher_4() { return static_cast<int32_t>(offsetof(PssSigner_t2988062466, ___cipher_4)); }
	inline RuntimeObject* get_cipher_4() const { return ___cipher_4; }
	inline RuntimeObject** get_address_of_cipher_4() { return &___cipher_4; }
	inline void set_cipher_4(RuntimeObject* value)
	{
		___cipher_4 = value;
		Il2CppCodeGenWriteBarrier((&___cipher_4), value);
	}

	inline static int32_t get_offset_of_random_5() { return static_cast<int32_t>(offsetof(PssSigner_t2988062466, ___random_5)); }
	inline SecureRandom_t3143858499 * get_random_5() const { return ___random_5; }
	inline SecureRandom_t3143858499 ** get_address_of_random_5() { return &___random_5; }
	inline void set_random_5(SecureRandom_t3143858499 * value)
	{
		___random_5 = value;
		Il2CppCodeGenWriteBarrier((&___random_5), value);
	}

	inline static int32_t get_offset_of_hLen_6() { return static_cast<int32_t>(offsetof(PssSigner_t2988062466, ___hLen_6)); }
	inline int32_t get_hLen_6() const { return ___hLen_6; }
	inline int32_t* get_address_of_hLen_6() { return &___hLen_6; }
	inline void set_hLen_6(int32_t value)
	{
		___hLen_6 = value;
	}

	inline static int32_t get_offset_of_mgfhLen_7() { return static_cast<int32_t>(offsetof(PssSigner_t2988062466, ___mgfhLen_7)); }
	inline int32_t get_mgfhLen_7() const { return ___mgfhLen_7; }
	inline int32_t* get_address_of_mgfhLen_7() { return &___mgfhLen_7; }
	inline void set_mgfhLen_7(int32_t value)
	{
		___mgfhLen_7 = value;
	}

	inline static int32_t get_offset_of_sLen_8() { return static_cast<int32_t>(offsetof(PssSigner_t2988062466, ___sLen_8)); }
	inline int32_t get_sLen_8() const { return ___sLen_8; }
	inline int32_t* get_address_of_sLen_8() { return &___sLen_8; }
	inline void set_sLen_8(int32_t value)
	{
		___sLen_8 = value;
	}

	inline static int32_t get_offset_of_sSet_9() { return static_cast<int32_t>(offsetof(PssSigner_t2988062466, ___sSet_9)); }
	inline bool get_sSet_9() const { return ___sSet_9; }
	inline bool* get_address_of_sSet_9() { return &___sSet_9; }
	inline void set_sSet_9(bool value)
	{
		___sSet_9 = value;
	}

	inline static int32_t get_offset_of_emBits_10() { return static_cast<int32_t>(offsetof(PssSigner_t2988062466, ___emBits_10)); }
	inline int32_t get_emBits_10() const { return ___emBits_10; }
	inline int32_t* get_address_of_emBits_10() { return &___emBits_10; }
	inline void set_emBits_10(int32_t value)
	{
		___emBits_10 = value;
	}

	inline static int32_t get_offset_of_salt_11() { return static_cast<int32_t>(offsetof(PssSigner_t2988062466, ___salt_11)); }
	inline ByteU5BU5D_t4116647657* get_salt_11() const { return ___salt_11; }
	inline ByteU5BU5D_t4116647657** get_address_of_salt_11() { return &___salt_11; }
	inline void set_salt_11(ByteU5BU5D_t4116647657* value)
	{
		___salt_11 = value;
		Il2CppCodeGenWriteBarrier((&___salt_11), value);
	}

	inline static int32_t get_offset_of_mDash_12() { return static_cast<int32_t>(offsetof(PssSigner_t2988062466, ___mDash_12)); }
	inline ByteU5BU5D_t4116647657* get_mDash_12() const { return ___mDash_12; }
	inline ByteU5BU5D_t4116647657** get_address_of_mDash_12() { return &___mDash_12; }
	inline void set_mDash_12(ByteU5BU5D_t4116647657* value)
	{
		___mDash_12 = value;
		Il2CppCodeGenWriteBarrier((&___mDash_12), value);
	}

	inline static int32_t get_offset_of_block_13() { return static_cast<int32_t>(offsetof(PssSigner_t2988062466, ___block_13)); }
	inline ByteU5BU5D_t4116647657* get_block_13() const { return ___block_13; }
	inline ByteU5BU5D_t4116647657** get_address_of_block_13() { return &___block_13; }
	inline void set_block_13(ByteU5BU5D_t4116647657* value)
	{
		___block_13 = value;
		Il2CppCodeGenWriteBarrier((&___block_13), value);
	}

	inline static int32_t get_offset_of_trailer_14() { return static_cast<int32_t>(offsetof(PssSigner_t2988062466, ___trailer_14)); }
	inline uint8_t get_trailer_14() const { return ___trailer_14; }
	inline uint8_t* get_address_of_trailer_14() { return &___trailer_14; }
	inline void set_trailer_14(uint8_t value)
	{
		___trailer_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PSSSIGNER_T2988062466_H
#ifndef HMACDSAKCALCULATOR_T1454375156_H
#define HMACDSAKCALCULATOR_T1454375156_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Signers.HMacDsaKCalculator
struct  HMacDsaKCalculator_t1454375156  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Crypto.Macs.HMac Org.BouncyCastle.Crypto.Signers.HMacDsaKCalculator::hMac
	HMac_t4154676717 * ___hMac_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Signers.HMacDsaKCalculator::K
	ByteU5BU5D_t4116647657* ___K_1;
	// System.Byte[] Org.BouncyCastle.Crypto.Signers.HMacDsaKCalculator::V
	ByteU5BU5D_t4116647657* ___V_2;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Signers.HMacDsaKCalculator::n
	BigInteger_t921849256 * ___n_3;

public:
	inline static int32_t get_offset_of_hMac_0() { return static_cast<int32_t>(offsetof(HMacDsaKCalculator_t1454375156, ___hMac_0)); }
	inline HMac_t4154676717 * get_hMac_0() const { return ___hMac_0; }
	inline HMac_t4154676717 ** get_address_of_hMac_0() { return &___hMac_0; }
	inline void set_hMac_0(HMac_t4154676717 * value)
	{
		___hMac_0 = value;
		Il2CppCodeGenWriteBarrier((&___hMac_0), value);
	}

	inline static int32_t get_offset_of_K_1() { return static_cast<int32_t>(offsetof(HMacDsaKCalculator_t1454375156, ___K_1)); }
	inline ByteU5BU5D_t4116647657* get_K_1() const { return ___K_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_K_1() { return &___K_1; }
	inline void set_K_1(ByteU5BU5D_t4116647657* value)
	{
		___K_1 = value;
		Il2CppCodeGenWriteBarrier((&___K_1), value);
	}

	inline static int32_t get_offset_of_V_2() { return static_cast<int32_t>(offsetof(HMacDsaKCalculator_t1454375156, ___V_2)); }
	inline ByteU5BU5D_t4116647657* get_V_2() const { return ___V_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_V_2() { return &___V_2; }
	inline void set_V_2(ByteU5BU5D_t4116647657* value)
	{
		___V_2 = value;
		Il2CppCodeGenWriteBarrier((&___V_2), value);
	}

	inline static int32_t get_offset_of_n_3() { return static_cast<int32_t>(offsetof(HMacDsaKCalculator_t1454375156, ___n_3)); }
	inline BigInteger_t921849256 * get_n_3() const { return ___n_3; }
	inline BigInteger_t921849256 ** get_address_of_n_3() { return &___n_3; }
	inline void set_n_3(BigInteger_t921849256 * value)
	{
		___n_3 = value;
		Il2CppCodeGenWriteBarrier((&___n_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACDSAKCALCULATOR_T1454375156_H
#ifndef ISO9796D2SIGNER_T3767432082_H
#define ISO9796D2SIGNER_T3767432082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Signers.Iso9796d2Signer
struct  Iso9796d2Signer_t3767432082  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Crypto.Signers.Iso9796d2Signer::digest
	RuntimeObject* ___digest_8;
	// Org.BouncyCastle.Crypto.IAsymmetricBlockCipher Org.BouncyCastle.Crypto.Signers.Iso9796d2Signer::cipher
	RuntimeObject* ___cipher_9;
	// System.Int32 Org.BouncyCastle.Crypto.Signers.Iso9796d2Signer::trailer
	int32_t ___trailer_10;
	// System.Int32 Org.BouncyCastle.Crypto.Signers.Iso9796d2Signer::keyBits
	int32_t ___keyBits_11;
	// System.Byte[] Org.BouncyCastle.Crypto.Signers.Iso9796d2Signer::block
	ByteU5BU5D_t4116647657* ___block_12;
	// System.Byte[] Org.BouncyCastle.Crypto.Signers.Iso9796d2Signer::mBuf
	ByteU5BU5D_t4116647657* ___mBuf_13;
	// System.Int32 Org.BouncyCastle.Crypto.Signers.Iso9796d2Signer::messageLength
	int32_t ___messageLength_14;
	// System.Boolean Org.BouncyCastle.Crypto.Signers.Iso9796d2Signer::fullMessage
	bool ___fullMessage_15;
	// System.Byte[] Org.BouncyCastle.Crypto.Signers.Iso9796d2Signer::recoveredMessage
	ByteU5BU5D_t4116647657* ___recoveredMessage_16;
	// System.Byte[] Org.BouncyCastle.Crypto.Signers.Iso9796d2Signer::preSig
	ByteU5BU5D_t4116647657* ___preSig_17;
	// System.Byte[] Org.BouncyCastle.Crypto.Signers.Iso9796d2Signer::preBlock
	ByteU5BU5D_t4116647657* ___preBlock_18;

public:
	inline static int32_t get_offset_of_digest_8() { return static_cast<int32_t>(offsetof(Iso9796d2Signer_t3767432082, ___digest_8)); }
	inline RuntimeObject* get_digest_8() const { return ___digest_8; }
	inline RuntimeObject** get_address_of_digest_8() { return &___digest_8; }
	inline void set_digest_8(RuntimeObject* value)
	{
		___digest_8 = value;
		Il2CppCodeGenWriteBarrier((&___digest_8), value);
	}

	inline static int32_t get_offset_of_cipher_9() { return static_cast<int32_t>(offsetof(Iso9796d2Signer_t3767432082, ___cipher_9)); }
	inline RuntimeObject* get_cipher_9() const { return ___cipher_9; }
	inline RuntimeObject** get_address_of_cipher_9() { return &___cipher_9; }
	inline void set_cipher_9(RuntimeObject* value)
	{
		___cipher_9 = value;
		Il2CppCodeGenWriteBarrier((&___cipher_9), value);
	}

	inline static int32_t get_offset_of_trailer_10() { return static_cast<int32_t>(offsetof(Iso9796d2Signer_t3767432082, ___trailer_10)); }
	inline int32_t get_trailer_10() const { return ___trailer_10; }
	inline int32_t* get_address_of_trailer_10() { return &___trailer_10; }
	inline void set_trailer_10(int32_t value)
	{
		___trailer_10 = value;
	}

	inline static int32_t get_offset_of_keyBits_11() { return static_cast<int32_t>(offsetof(Iso9796d2Signer_t3767432082, ___keyBits_11)); }
	inline int32_t get_keyBits_11() const { return ___keyBits_11; }
	inline int32_t* get_address_of_keyBits_11() { return &___keyBits_11; }
	inline void set_keyBits_11(int32_t value)
	{
		___keyBits_11 = value;
	}

	inline static int32_t get_offset_of_block_12() { return static_cast<int32_t>(offsetof(Iso9796d2Signer_t3767432082, ___block_12)); }
	inline ByteU5BU5D_t4116647657* get_block_12() const { return ___block_12; }
	inline ByteU5BU5D_t4116647657** get_address_of_block_12() { return &___block_12; }
	inline void set_block_12(ByteU5BU5D_t4116647657* value)
	{
		___block_12 = value;
		Il2CppCodeGenWriteBarrier((&___block_12), value);
	}

	inline static int32_t get_offset_of_mBuf_13() { return static_cast<int32_t>(offsetof(Iso9796d2Signer_t3767432082, ___mBuf_13)); }
	inline ByteU5BU5D_t4116647657* get_mBuf_13() const { return ___mBuf_13; }
	inline ByteU5BU5D_t4116647657** get_address_of_mBuf_13() { return &___mBuf_13; }
	inline void set_mBuf_13(ByteU5BU5D_t4116647657* value)
	{
		___mBuf_13 = value;
		Il2CppCodeGenWriteBarrier((&___mBuf_13), value);
	}

	inline static int32_t get_offset_of_messageLength_14() { return static_cast<int32_t>(offsetof(Iso9796d2Signer_t3767432082, ___messageLength_14)); }
	inline int32_t get_messageLength_14() const { return ___messageLength_14; }
	inline int32_t* get_address_of_messageLength_14() { return &___messageLength_14; }
	inline void set_messageLength_14(int32_t value)
	{
		___messageLength_14 = value;
	}

	inline static int32_t get_offset_of_fullMessage_15() { return static_cast<int32_t>(offsetof(Iso9796d2Signer_t3767432082, ___fullMessage_15)); }
	inline bool get_fullMessage_15() const { return ___fullMessage_15; }
	inline bool* get_address_of_fullMessage_15() { return &___fullMessage_15; }
	inline void set_fullMessage_15(bool value)
	{
		___fullMessage_15 = value;
	}

	inline static int32_t get_offset_of_recoveredMessage_16() { return static_cast<int32_t>(offsetof(Iso9796d2Signer_t3767432082, ___recoveredMessage_16)); }
	inline ByteU5BU5D_t4116647657* get_recoveredMessage_16() const { return ___recoveredMessage_16; }
	inline ByteU5BU5D_t4116647657** get_address_of_recoveredMessage_16() { return &___recoveredMessage_16; }
	inline void set_recoveredMessage_16(ByteU5BU5D_t4116647657* value)
	{
		___recoveredMessage_16 = value;
		Il2CppCodeGenWriteBarrier((&___recoveredMessage_16), value);
	}

	inline static int32_t get_offset_of_preSig_17() { return static_cast<int32_t>(offsetof(Iso9796d2Signer_t3767432082, ___preSig_17)); }
	inline ByteU5BU5D_t4116647657* get_preSig_17() const { return ___preSig_17; }
	inline ByteU5BU5D_t4116647657** get_address_of_preSig_17() { return &___preSig_17; }
	inline void set_preSig_17(ByteU5BU5D_t4116647657* value)
	{
		___preSig_17 = value;
		Il2CppCodeGenWriteBarrier((&___preSig_17), value);
	}

	inline static int32_t get_offset_of_preBlock_18() { return static_cast<int32_t>(offsetof(Iso9796d2Signer_t3767432082, ___preBlock_18)); }
	inline ByteU5BU5D_t4116647657* get_preBlock_18() const { return ___preBlock_18; }
	inline ByteU5BU5D_t4116647657** get_address_of_preBlock_18() { return &___preBlock_18; }
	inline void set_preBlock_18(ByteU5BU5D_t4116647657* value)
	{
		___preBlock_18 = value;
		Il2CppCodeGenWriteBarrier((&___preBlock_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISO9796D2SIGNER_T3767432082_H
#ifndef ISOTRAILERS_T1519402221_H
#define ISOTRAILERS_T1519402221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Signers.IsoTrailers
struct  IsoTrailers_t1519402221  : public RuntimeObject
{
public:

public:
};

struct IsoTrailers_t1519402221_StaticFields
{
public:
	// System.Collections.IDictionary Org.BouncyCastle.Crypto.Signers.IsoTrailers::trailerMap
	RuntimeObject* ___trailerMap_11;

public:
	inline static int32_t get_offset_of_trailerMap_11() { return static_cast<int32_t>(offsetof(IsoTrailers_t1519402221_StaticFields, ___trailerMap_11)); }
	inline RuntimeObject* get_trailerMap_11() const { return ___trailerMap_11; }
	inline RuntimeObject** get_address_of_trailerMap_11() { return &___trailerMap_11; }
	inline void set_trailerMap_11(RuntimeObject* value)
	{
		___trailerMap_11 = value;
		Il2CppCodeGenWriteBarrier((&___trailerMap_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISOTRAILERS_T1519402221_H
#ifndef RSADIGESTSIGNER_T1684496909_H
#define RSADIGESTSIGNER_T1684496909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Signers.RsaDigestSigner
struct  RsaDigestSigner_t1684496909  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Crypto.IAsymmetricBlockCipher Org.BouncyCastle.Crypto.Signers.RsaDigestSigner::rsaEngine
	RuntimeObject* ___rsaEngine_0;
	// Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier Org.BouncyCastle.Crypto.Signers.RsaDigestSigner::algId
	AlgorithmIdentifier_t2882026504 * ___algId_1;
	// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Crypto.Signers.RsaDigestSigner::digest
	RuntimeObject* ___digest_2;
	// System.Boolean Org.BouncyCastle.Crypto.Signers.RsaDigestSigner::forSigning
	bool ___forSigning_3;

public:
	inline static int32_t get_offset_of_rsaEngine_0() { return static_cast<int32_t>(offsetof(RsaDigestSigner_t1684496909, ___rsaEngine_0)); }
	inline RuntimeObject* get_rsaEngine_0() const { return ___rsaEngine_0; }
	inline RuntimeObject** get_address_of_rsaEngine_0() { return &___rsaEngine_0; }
	inline void set_rsaEngine_0(RuntimeObject* value)
	{
		___rsaEngine_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsaEngine_0), value);
	}

	inline static int32_t get_offset_of_algId_1() { return static_cast<int32_t>(offsetof(RsaDigestSigner_t1684496909, ___algId_1)); }
	inline AlgorithmIdentifier_t2882026504 * get_algId_1() const { return ___algId_1; }
	inline AlgorithmIdentifier_t2882026504 ** get_address_of_algId_1() { return &___algId_1; }
	inline void set_algId_1(AlgorithmIdentifier_t2882026504 * value)
	{
		___algId_1 = value;
		Il2CppCodeGenWriteBarrier((&___algId_1), value);
	}

	inline static int32_t get_offset_of_digest_2() { return static_cast<int32_t>(offsetof(RsaDigestSigner_t1684496909, ___digest_2)); }
	inline RuntimeObject* get_digest_2() const { return ___digest_2; }
	inline RuntimeObject** get_address_of_digest_2() { return &___digest_2; }
	inline void set_digest_2(RuntimeObject* value)
	{
		___digest_2 = value;
		Il2CppCodeGenWriteBarrier((&___digest_2), value);
	}

	inline static int32_t get_offset_of_forSigning_3() { return static_cast<int32_t>(offsetof(RsaDigestSigner_t1684496909, ___forSigning_3)); }
	inline bool get_forSigning_3() const { return ___forSigning_3; }
	inline bool* get_address_of_forSigning_3() { return &___forSigning_3; }
	inline void set_forSigning_3(bool value)
	{
		___forSigning_3 = value;
	}
};

struct RsaDigestSigner_t1684496909_StaticFields
{
public:
	// System.Collections.IDictionary Org.BouncyCastle.Crypto.Signers.RsaDigestSigner::oidMap
	RuntimeObject* ___oidMap_4;

public:
	inline static int32_t get_offset_of_oidMap_4() { return static_cast<int32_t>(offsetof(RsaDigestSigner_t1684496909_StaticFields, ___oidMap_4)); }
	inline RuntimeObject* get_oidMap_4() const { return ___oidMap_4; }
	inline RuntimeObject** get_address_of_oidMap_4() { return &___oidMap_4; }
	inline void set_oidMap_4(RuntimeObject* value)
	{
		___oidMap_4 = value;
		Il2CppCodeGenWriteBarrier((&___oidMap_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSADIGESTSIGNER_T1684496909_H
#ifndef ABSTRACTTLSCREDENTIALS_T880295237_H
#define ABSTRACTTLSCREDENTIALS_T880295237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Tls.AbstractTlsCredentials
struct  AbstractTlsCredentials_t880295237  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTTLSCREDENTIALS_T880295237_H
#ifndef ABSTRACTTLSKEYEXCHANGE_T2558703984_H
#define ABSTRACTTLSKEYEXCHANGE_T2558703984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Tls.AbstractTlsKeyExchange
struct  AbstractTlsKeyExchange_t2558703984  : public RuntimeObject
{
public:
	// System.Int32 Org.BouncyCastle.Crypto.Tls.AbstractTlsKeyExchange::mKeyExchange
	int32_t ___mKeyExchange_0;
	// System.Collections.IList Org.BouncyCastle.Crypto.Tls.AbstractTlsKeyExchange::mSupportedSignatureAlgorithms
	RuntimeObject* ___mSupportedSignatureAlgorithms_1;
	// Org.BouncyCastle.Crypto.Tls.TlsContext Org.BouncyCastle.Crypto.Tls.AbstractTlsKeyExchange::mContext
	RuntimeObject* ___mContext_2;

public:
	inline static int32_t get_offset_of_mKeyExchange_0() { return static_cast<int32_t>(offsetof(AbstractTlsKeyExchange_t2558703984, ___mKeyExchange_0)); }
	inline int32_t get_mKeyExchange_0() const { return ___mKeyExchange_0; }
	inline int32_t* get_address_of_mKeyExchange_0() { return &___mKeyExchange_0; }
	inline void set_mKeyExchange_0(int32_t value)
	{
		___mKeyExchange_0 = value;
	}

	inline static int32_t get_offset_of_mSupportedSignatureAlgorithms_1() { return static_cast<int32_t>(offsetof(AbstractTlsKeyExchange_t2558703984, ___mSupportedSignatureAlgorithms_1)); }
	inline RuntimeObject* get_mSupportedSignatureAlgorithms_1() const { return ___mSupportedSignatureAlgorithms_1; }
	inline RuntimeObject** get_address_of_mSupportedSignatureAlgorithms_1() { return &___mSupportedSignatureAlgorithms_1; }
	inline void set_mSupportedSignatureAlgorithms_1(RuntimeObject* value)
	{
		___mSupportedSignatureAlgorithms_1 = value;
		Il2CppCodeGenWriteBarrier((&___mSupportedSignatureAlgorithms_1), value);
	}

	inline static int32_t get_offset_of_mContext_2() { return static_cast<int32_t>(offsetof(AbstractTlsKeyExchange_t2558703984, ___mContext_2)); }
	inline RuntimeObject* get_mContext_2() const { return ___mContext_2; }
	inline RuntimeObject** get_address_of_mContext_2() { return &___mContext_2; }
	inline void set_mContext_2(RuntimeObject* value)
	{
		___mContext_2 = value;
		Il2CppCodeGenWriteBarrier((&___mContext_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTTLSKEYEXCHANGE_T2558703984_H
#ifndef ABSTRACTTLSCONTEXT_T440842929_H
#define ABSTRACTTLSCONTEXT_T440842929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Tls.AbstractTlsContext
struct  AbstractTlsContext_t440842929  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Crypto.Prng.IRandomGenerator Org.BouncyCastle.Crypto.Tls.AbstractTlsContext::mNonceRandom
	RuntimeObject* ___mNonceRandom_1;
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.Tls.AbstractTlsContext::mSecureRandom
	SecureRandom_t3143858499 * ___mSecureRandom_2;
	// Org.BouncyCastle.Crypto.Tls.SecurityParameters Org.BouncyCastle.Crypto.Tls.AbstractTlsContext::mSecurityParameters
	SecurityParameters_t2547757593 * ___mSecurityParameters_3;
	// Org.BouncyCastle.Crypto.Tls.ProtocolVersion Org.BouncyCastle.Crypto.Tls.AbstractTlsContext::mClientVersion
	ProtocolVersion_t2693197969 * ___mClientVersion_4;
	// Org.BouncyCastle.Crypto.Tls.ProtocolVersion Org.BouncyCastle.Crypto.Tls.AbstractTlsContext::mServerVersion
	ProtocolVersion_t2693197969 * ___mServerVersion_5;
	// Org.BouncyCastle.Crypto.Tls.TlsSession Org.BouncyCastle.Crypto.Tls.AbstractTlsContext::mSession
	RuntimeObject* ___mSession_6;
	// System.Object Org.BouncyCastle.Crypto.Tls.AbstractTlsContext::mUserObject
	RuntimeObject * ___mUserObject_7;

public:
	inline static int32_t get_offset_of_mNonceRandom_1() { return static_cast<int32_t>(offsetof(AbstractTlsContext_t440842929, ___mNonceRandom_1)); }
	inline RuntimeObject* get_mNonceRandom_1() const { return ___mNonceRandom_1; }
	inline RuntimeObject** get_address_of_mNonceRandom_1() { return &___mNonceRandom_1; }
	inline void set_mNonceRandom_1(RuntimeObject* value)
	{
		___mNonceRandom_1 = value;
		Il2CppCodeGenWriteBarrier((&___mNonceRandom_1), value);
	}

	inline static int32_t get_offset_of_mSecureRandom_2() { return static_cast<int32_t>(offsetof(AbstractTlsContext_t440842929, ___mSecureRandom_2)); }
	inline SecureRandom_t3143858499 * get_mSecureRandom_2() const { return ___mSecureRandom_2; }
	inline SecureRandom_t3143858499 ** get_address_of_mSecureRandom_2() { return &___mSecureRandom_2; }
	inline void set_mSecureRandom_2(SecureRandom_t3143858499 * value)
	{
		___mSecureRandom_2 = value;
		Il2CppCodeGenWriteBarrier((&___mSecureRandom_2), value);
	}

	inline static int32_t get_offset_of_mSecurityParameters_3() { return static_cast<int32_t>(offsetof(AbstractTlsContext_t440842929, ___mSecurityParameters_3)); }
	inline SecurityParameters_t2547757593 * get_mSecurityParameters_3() const { return ___mSecurityParameters_3; }
	inline SecurityParameters_t2547757593 ** get_address_of_mSecurityParameters_3() { return &___mSecurityParameters_3; }
	inline void set_mSecurityParameters_3(SecurityParameters_t2547757593 * value)
	{
		___mSecurityParameters_3 = value;
		Il2CppCodeGenWriteBarrier((&___mSecurityParameters_3), value);
	}

	inline static int32_t get_offset_of_mClientVersion_4() { return static_cast<int32_t>(offsetof(AbstractTlsContext_t440842929, ___mClientVersion_4)); }
	inline ProtocolVersion_t2693197969 * get_mClientVersion_4() const { return ___mClientVersion_4; }
	inline ProtocolVersion_t2693197969 ** get_address_of_mClientVersion_4() { return &___mClientVersion_4; }
	inline void set_mClientVersion_4(ProtocolVersion_t2693197969 * value)
	{
		___mClientVersion_4 = value;
		Il2CppCodeGenWriteBarrier((&___mClientVersion_4), value);
	}

	inline static int32_t get_offset_of_mServerVersion_5() { return static_cast<int32_t>(offsetof(AbstractTlsContext_t440842929, ___mServerVersion_5)); }
	inline ProtocolVersion_t2693197969 * get_mServerVersion_5() const { return ___mServerVersion_5; }
	inline ProtocolVersion_t2693197969 ** get_address_of_mServerVersion_5() { return &___mServerVersion_5; }
	inline void set_mServerVersion_5(ProtocolVersion_t2693197969 * value)
	{
		___mServerVersion_5 = value;
		Il2CppCodeGenWriteBarrier((&___mServerVersion_5), value);
	}

	inline static int32_t get_offset_of_mSession_6() { return static_cast<int32_t>(offsetof(AbstractTlsContext_t440842929, ___mSession_6)); }
	inline RuntimeObject* get_mSession_6() const { return ___mSession_6; }
	inline RuntimeObject** get_address_of_mSession_6() { return &___mSession_6; }
	inline void set_mSession_6(RuntimeObject* value)
	{
		___mSession_6 = value;
		Il2CppCodeGenWriteBarrier((&___mSession_6), value);
	}

	inline static int32_t get_offset_of_mUserObject_7() { return static_cast<int32_t>(offsetof(AbstractTlsContext_t440842929, ___mUserObject_7)); }
	inline RuntimeObject * get_mUserObject_7() const { return ___mUserObject_7; }
	inline RuntimeObject ** get_address_of_mUserObject_7() { return &___mUserObject_7; }
	inline void set_mUserObject_7(RuntimeObject * value)
	{
		___mUserObject_7 = value;
		Il2CppCodeGenWriteBarrier((&___mUserObject_7), value);
	}
};

struct AbstractTlsContext_t440842929_StaticFields
{
public:
	// System.Int64 Org.BouncyCastle.Crypto.Tls.AbstractTlsContext::counter
	int64_t ___counter_0;

public:
	inline static int32_t get_offset_of_counter_0() { return static_cast<int32_t>(offsetof(AbstractTlsContext_t440842929_StaticFields, ___counter_0)); }
	inline int64_t get_counter_0() const { return ___counter_0; }
	inline int64_t* get_address_of_counter_0() { return &___counter_0; }
	inline void set_counter_0(int64_t value)
	{
		___counter_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTTLSCONTEXT_T440842929_H
#ifndef X931SIGNER_T3161953861_H
#define X931SIGNER_T3161953861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Signers.X931Signer
struct  X931Signer_t3161953861  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Crypto.Signers.X931Signer::digest
	RuntimeObject* ___digest_9;
	// Org.BouncyCastle.Crypto.IAsymmetricBlockCipher Org.BouncyCastle.Crypto.Signers.X931Signer::cipher
	RuntimeObject* ___cipher_10;
	// Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters Org.BouncyCastle.Crypto.Signers.X931Signer::kParam
	RsaKeyParameters_t2730774859 * ___kParam_11;
	// System.Int32 Org.BouncyCastle.Crypto.Signers.X931Signer::trailer
	int32_t ___trailer_12;
	// System.Int32 Org.BouncyCastle.Crypto.Signers.X931Signer::keyBits
	int32_t ___keyBits_13;
	// System.Byte[] Org.BouncyCastle.Crypto.Signers.X931Signer::block
	ByteU5BU5D_t4116647657* ___block_14;

public:
	inline static int32_t get_offset_of_digest_9() { return static_cast<int32_t>(offsetof(X931Signer_t3161953861, ___digest_9)); }
	inline RuntimeObject* get_digest_9() const { return ___digest_9; }
	inline RuntimeObject** get_address_of_digest_9() { return &___digest_9; }
	inline void set_digest_9(RuntimeObject* value)
	{
		___digest_9 = value;
		Il2CppCodeGenWriteBarrier((&___digest_9), value);
	}

	inline static int32_t get_offset_of_cipher_10() { return static_cast<int32_t>(offsetof(X931Signer_t3161953861, ___cipher_10)); }
	inline RuntimeObject* get_cipher_10() const { return ___cipher_10; }
	inline RuntimeObject** get_address_of_cipher_10() { return &___cipher_10; }
	inline void set_cipher_10(RuntimeObject* value)
	{
		___cipher_10 = value;
		Il2CppCodeGenWriteBarrier((&___cipher_10), value);
	}

	inline static int32_t get_offset_of_kParam_11() { return static_cast<int32_t>(offsetof(X931Signer_t3161953861, ___kParam_11)); }
	inline RsaKeyParameters_t2730774859 * get_kParam_11() const { return ___kParam_11; }
	inline RsaKeyParameters_t2730774859 ** get_address_of_kParam_11() { return &___kParam_11; }
	inline void set_kParam_11(RsaKeyParameters_t2730774859 * value)
	{
		___kParam_11 = value;
		Il2CppCodeGenWriteBarrier((&___kParam_11), value);
	}

	inline static int32_t get_offset_of_trailer_12() { return static_cast<int32_t>(offsetof(X931Signer_t3161953861, ___trailer_12)); }
	inline int32_t get_trailer_12() const { return ___trailer_12; }
	inline int32_t* get_address_of_trailer_12() { return &___trailer_12; }
	inline void set_trailer_12(int32_t value)
	{
		___trailer_12 = value;
	}

	inline static int32_t get_offset_of_keyBits_13() { return static_cast<int32_t>(offsetof(X931Signer_t3161953861, ___keyBits_13)); }
	inline int32_t get_keyBits_13() const { return ___keyBits_13; }
	inline int32_t* get_address_of_keyBits_13() { return &___keyBits_13; }
	inline void set_keyBits_13(int32_t value)
	{
		___keyBits_13 = value;
	}

	inline static int32_t get_offset_of_block_14() { return static_cast<int32_t>(offsetof(X931Signer_t3161953861, ___block_14)); }
	inline ByteU5BU5D_t4116647657* get_block_14() const { return ___block_14; }
	inline ByteU5BU5D_t4116647657** get_address_of_block_14() { return &___block_14; }
	inline void set_block_14(ByteU5BU5D_t4116647657* value)
	{
		___block_14 = value;
		Il2CppCodeGenWriteBarrier((&___block_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X931SIGNER_T3161953861_H
#ifndef ABSTRACTTLSCIPHERFACTORY_T2144958600_H
#define ABSTRACTTLSCIPHERFACTORY_T2144958600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Tls.AbstractTlsCipherFactory
struct  AbstractTlsCipherFactory_t2144958600  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTTLSCIPHERFACTORY_T2144958600_H
#ifndef DSADIGESTSIGNER_T1679693331_H
#define DSADIGESTSIGNER_T1679693331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Signers.DsaDigestSigner
struct  DsaDigestSigner_t1679693331  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Crypto.Signers.DsaDigestSigner::digest
	RuntimeObject* ___digest_0;
	// Org.BouncyCastle.Crypto.IDsa Org.BouncyCastle.Crypto.Signers.DsaDigestSigner::dsaSigner
	RuntimeObject* ___dsaSigner_1;
	// System.Boolean Org.BouncyCastle.Crypto.Signers.DsaDigestSigner::forSigning
	bool ___forSigning_2;

public:
	inline static int32_t get_offset_of_digest_0() { return static_cast<int32_t>(offsetof(DsaDigestSigner_t1679693331, ___digest_0)); }
	inline RuntimeObject* get_digest_0() const { return ___digest_0; }
	inline RuntimeObject** get_address_of_digest_0() { return &___digest_0; }
	inline void set_digest_0(RuntimeObject* value)
	{
		___digest_0 = value;
		Il2CppCodeGenWriteBarrier((&___digest_0), value);
	}

	inline static int32_t get_offset_of_dsaSigner_1() { return static_cast<int32_t>(offsetof(DsaDigestSigner_t1679693331, ___dsaSigner_1)); }
	inline RuntimeObject* get_dsaSigner_1() const { return ___dsaSigner_1; }
	inline RuntimeObject** get_address_of_dsaSigner_1() { return &___dsaSigner_1; }
	inline void set_dsaSigner_1(RuntimeObject* value)
	{
		___dsaSigner_1 = value;
		Il2CppCodeGenWriteBarrier((&___dsaSigner_1), value);
	}

	inline static int32_t get_offset_of_forSigning_2() { return static_cast<int32_t>(offsetof(DsaDigestSigner_t1679693331, ___forSigning_2)); }
	inline bool get_forSigning_2() const { return ___forSigning_2; }
	inline bool* get_address_of_forSigning_2() { return &___forSigning_2; }
	inline void set_forSigning_2(bool value)
	{
		___forSigning_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSADIGESTSIGNER_T1679693331_H
#ifndef DSASIGNER_T669348436_H
#define DSASIGNER_T669348436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Signers.DsaSigner
struct  DsaSigner_t669348436  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Crypto.Signers.IDsaKCalculator Org.BouncyCastle.Crypto.Signers.DsaSigner::kCalculator
	RuntimeObject* ___kCalculator_0;
	// Org.BouncyCastle.Crypto.Parameters.DsaKeyParameters Org.BouncyCastle.Crypto.Signers.DsaSigner::key
	DsaKeyParameters_t457954099 * ___key_1;
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.Signers.DsaSigner::random
	SecureRandom_t3143858499 * ___random_2;

public:
	inline static int32_t get_offset_of_kCalculator_0() { return static_cast<int32_t>(offsetof(DsaSigner_t669348436, ___kCalculator_0)); }
	inline RuntimeObject* get_kCalculator_0() const { return ___kCalculator_0; }
	inline RuntimeObject** get_address_of_kCalculator_0() { return &___kCalculator_0; }
	inline void set_kCalculator_0(RuntimeObject* value)
	{
		___kCalculator_0 = value;
		Il2CppCodeGenWriteBarrier((&___kCalculator_0), value);
	}

	inline static int32_t get_offset_of_key_1() { return static_cast<int32_t>(offsetof(DsaSigner_t669348436, ___key_1)); }
	inline DsaKeyParameters_t457954099 * get_key_1() const { return ___key_1; }
	inline DsaKeyParameters_t457954099 ** get_address_of_key_1() { return &___key_1; }
	inline void set_key_1(DsaKeyParameters_t457954099 * value)
	{
		___key_1 = value;
		Il2CppCodeGenWriteBarrier((&___key_1), value);
	}

	inline static int32_t get_offset_of_random_2() { return static_cast<int32_t>(offsetof(DsaSigner_t669348436, ___random_2)); }
	inline SecureRandom_t3143858499 * get_random_2() const { return ___random_2; }
	inline SecureRandom_t3143858499 ** get_address_of_random_2() { return &___random_2; }
	inline void set_random_2(SecureRandom_t3143858499 * value)
	{
		___random_2 = value;
		Il2CppCodeGenWriteBarrier((&___random_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSASIGNER_T669348436_H
#ifndef DIGESTRANDOMGENERATOR_T3838956614_H
#define DIGESTRANDOMGENERATOR_T3838956614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Prng.DigestRandomGenerator
struct  DigestRandomGenerator_t3838956614  : public RuntimeObject
{
public:
	// System.Int64 Org.BouncyCastle.Crypto.Prng.DigestRandomGenerator::stateCounter
	int64_t ___stateCounter_1;
	// System.Int64 Org.BouncyCastle.Crypto.Prng.DigestRandomGenerator::seedCounter
	int64_t ___seedCounter_2;
	// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Crypto.Prng.DigestRandomGenerator::digest
	RuntimeObject* ___digest_3;
	// System.Byte[] Org.BouncyCastle.Crypto.Prng.DigestRandomGenerator::state
	ByteU5BU5D_t4116647657* ___state_4;
	// System.Byte[] Org.BouncyCastle.Crypto.Prng.DigestRandomGenerator::seed
	ByteU5BU5D_t4116647657* ___seed_5;

public:
	inline static int32_t get_offset_of_stateCounter_1() { return static_cast<int32_t>(offsetof(DigestRandomGenerator_t3838956614, ___stateCounter_1)); }
	inline int64_t get_stateCounter_1() const { return ___stateCounter_1; }
	inline int64_t* get_address_of_stateCounter_1() { return &___stateCounter_1; }
	inline void set_stateCounter_1(int64_t value)
	{
		___stateCounter_1 = value;
	}

	inline static int32_t get_offset_of_seedCounter_2() { return static_cast<int32_t>(offsetof(DigestRandomGenerator_t3838956614, ___seedCounter_2)); }
	inline int64_t get_seedCounter_2() const { return ___seedCounter_2; }
	inline int64_t* get_address_of_seedCounter_2() { return &___seedCounter_2; }
	inline void set_seedCounter_2(int64_t value)
	{
		___seedCounter_2 = value;
	}

	inline static int32_t get_offset_of_digest_3() { return static_cast<int32_t>(offsetof(DigestRandomGenerator_t3838956614, ___digest_3)); }
	inline RuntimeObject* get_digest_3() const { return ___digest_3; }
	inline RuntimeObject** get_address_of_digest_3() { return &___digest_3; }
	inline void set_digest_3(RuntimeObject* value)
	{
		___digest_3 = value;
		Il2CppCodeGenWriteBarrier((&___digest_3), value);
	}

	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(DigestRandomGenerator_t3838956614, ___state_4)); }
	inline ByteU5BU5D_t4116647657* get_state_4() const { return ___state_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(ByteU5BU5D_t4116647657* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((&___state_4), value);
	}

	inline static int32_t get_offset_of_seed_5() { return static_cast<int32_t>(offsetof(DigestRandomGenerator_t3838956614, ___seed_5)); }
	inline ByteU5BU5D_t4116647657* get_seed_5() const { return ___seed_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_seed_5() { return &___seed_5; }
	inline void set_seed_5(ByteU5BU5D_t4116647657* value)
	{
		___seed_5 = value;
		Il2CppCodeGenWriteBarrier((&___seed_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIGESTRANDOMGENERATOR_T3838956614_H
#ifndef PBEPARAMETERSGENERATOR_T219119578_H
#define PBEPARAMETERSGENERATOR_T219119578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.PbeParametersGenerator
struct  PbeParametersGenerator_t219119578  : public RuntimeObject
{
public:
	// System.Byte[] Org.BouncyCastle.Crypto.PbeParametersGenerator::mPassword
	ByteU5BU5D_t4116647657* ___mPassword_0;
	// System.Byte[] Org.BouncyCastle.Crypto.PbeParametersGenerator::mSalt
	ByteU5BU5D_t4116647657* ___mSalt_1;
	// System.Int32 Org.BouncyCastle.Crypto.PbeParametersGenerator::mIterationCount
	int32_t ___mIterationCount_2;

public:
	inline static int32_t get_offset_of_mPassword_0() { return static_cast<int32_t>(offsetof(PbeParametersGenerator_t219119578, ___mPassword_0)); }
	inline ByteU5BU5D_t4116647657* get_mPassword_0() const { return ___mPassword_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_mPassword_0() { return &___mPassword_0; }
	inline void set_mPassword_0(ByteU5BU5D_t4116647657* value)
	{
		___mPassword_0 = value;
		Il2CppCodeGenWriteBarrier((&___mPassword_0), value);
	}

	inline static int32_t get_offset_of_mSalt_1() { return static_cast<int32_t>(offsetof(PbeParametersGenerator_t219119578, ___mSalt_1)); }
	inline ByteU5BU5D_t4116647657* get_mSalt_1() const { return ___mSalt_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_mSalt_1() { return &___mSalt_1; }
	inline void set_mSalt_1(ByteU5BU5D_t4116647657* value)
	{
		___mSalt_1 = value;
		Il2CppCodeGenWriteBarrier((&___mSalt_1), value);
	}

	inline static int32_t get_offset_of_mIterationCount_2() { return static_cast<int32_t>(offsetof(PbeParametersGenerator_t219119578, ___mIterationCount_2)); }
	inline int32_t get_mIterationCount_2() const { return ___mIterationCount_2; }
	inline int32_t* get_address_of_mIterationCount_2() { return &___mIterationCount_2; }
	inline void set_mIterationCount_2(int32_t value)
	{
		___mIterationCount_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PBEPARAMETERSGENERATOR_T219119578_H
#ifndef CRYPTOAPIRANDOMGENERATOR_T760734569_H
#define CRYPTOAPIRANDOMGENERATOR_T760734569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Prng.CryptoApiRandomGenerator
struct  CryptoApiRandomGenerator_t760734569  : public RuntimeObject
{
public:
	// System.Security.Cryptography.RandomNumberGenerator Org.BouncyCastle.Crypto.Prng.CryptoApiRandomGenerator::rndProv
	RandomNumberGenerator_t386037858 * ___rndProv_0;

public:
	inline static int32_t get_offset_of_rndProv_0() { return static_cast<int32_t>(offsetof(CryptoApiRandomGenerator_t760734569, ___rndProv_0)); }
	inline RandomNumberGenerator_t386037858 * get_rndProv_0() const { return ___rndProv_0; }
	inline RandomNumberGenerator_t386037858 ** get_address_of_rndProv_0() { return &___rndProv_0; }
	inline void set_rndProv_0(RandomNumberGenerator_t386037858 * value)
	{
		___rndProv_0 = value;
		Il2CppCodeGenWriteBarrier((&___rndProv_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOAPIRANDOMGENERATOR_T760734569_H
#ifndef ECDSASIGNER_T2074460791_H
#define ECDSASIGNER_T2074460791_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Signers.ECDsaSigner
struct  ECDsaSigner_t2074460791  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Crypto.Signers.IDsaKCalculator Org.BouncyCastle.Crypto.Signers.ECDsaSigner::kCalculator
	RuntimeObject* ___kCalculator_1;
	// Org.BouncyCastle.Crypto.Parameters.ECKeyParameters Org.BouncyCastle.Crypto.Signers.ECDsaSigner::key
	ECKeyParameters_t251955665 * ___key_2;
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.Signers.ECDsaSigner::random
	SecureRandom_t3143858499 * ___random_3;

public:
	inline static int32_t get_offset_of_kCalculator_1() { return static_cast<int32_t>(offsetof(ECDsaSigner_t2074460791, ___kCalculator_1)); }
	inline RuntimeObject* get_kCalculator_1() const { return ___kCalculator_1; }
	inline RuntimeObject** get_address_of_kCalculator_1() { return &___kCalculator_1; }
	inline void set_kCalculator_1(RuntimeObject* value)
	{
		___kCalculator_1 = value;
		Il2CppCodeGenWriteBarrier((&___kCalculator_1), value);
	}

	inline static int32_t get_offset_of_key_2() { return static_cast<int32_t>(offsetof(ECDsaSigner_t2074460791, ___key_2)); }
	inline ECKeyParameters_t251955665 * get_key_2() const { return ___key_2; }
	inline ECKeyParameters_t251955665 ** get_address_of_key_2() { return &___key_2; }
	inline void set_key_2(ECKeyParameters_t251955665 * value)
	{
		___key_2 = value;
		Il2CppCodeGenWriteBarrier((&___key_2), value);
	}

	inline static int32_t get_offset_of_random_3() { return static_cast<int32_t>(offsetof(ECDsaSigner_t2074460791, ___random_3)); }
	inline SecureRandom_t3143858499 * get_random_3() const { return ___random_3; }
	inline SecureRandom_t3143858499 ** get_address_of_random_3() { return &___random_3; }
	inline void set_random_3(SecureRandom_t3143858499 * value)
	{
		___random_3 = value;
		Il2CppCodeGenWriteBarrier((&___random_3), value);
	}
};

struct ECDsaSigner_t2074460791_StaticFields
{
public:
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Signers.ECDsaSigner::Eight
	BigInteger_t921849256 * ___Eight_0;

public:
	inline static int32_t get_offset_of_Eight_0() { return static_cast<int32_t>(offsetof(ECDsaSigner_t2074460791_StaticFields, ___Eight_0)); }
	inline BigInteger_t921849256 * get_Eight_0() const { return ___Eight_0; }
	inline BigInteger_t921849256 ** get_address_of_Eight_0() { return &___Eight_0; }
	inline void set_Eight_0(BigInteger_t921849256 * value)
	{
		___Eight_0 = value;
		Il2CppCodeGenWriteBarrier((&___Eight_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ECDSASIGNER_T2074460791_H
#ifndef GOST3410DIGESTSIGNER_T148182715_H
#define GOST3410DIGESTSIGNER_T148182715_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Signers.Gost3410DigestSigner
struct  Gost3410DigestSigner_t148182715  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Crypto.Signers.Gost3410DigestSigner::digest
	RuntimeObject* ___digest_0;
	// Org.BouncyCastle.Crypto.IDsa Org.BouncyCastle.Crypto.Signers.Gost3410DigestSigner::dsaSigner
	RuntimeObject* ___dsaSigner_1;
	// System.Boolean Org.BouncyCastle.Crypto.Signers.Gost3410DigestSigner::forSigning
	bool ___forSigning_2;

public:
	inline static int32_t get_offset_of_digest_0() { return static_cast<int32_t>(offsetof(Gost3410DigestSigner_t148182715, ___digest_0)); }
	inline RuntimeObject* get_digest_0() const { return ___digest_0; }
	inline RuntimeObject** get_address_of_digest_0() { return &___digest_0; }
	inline void set_digest_0(RuntimeObject* value)
	{
		___digest_0 = value;
		Il2CppCodeGenWriteBarrier((&___digest_0), value);
	}

	inline static int32_t get_offset_of_dsaSigner_1() { return static_cast<int32_t>(offsetof(Gost3410DigestSigner_t148182715, ___dsaSigner_1)); }
	inline RuntimeObject* get_dsaSigner_1() const { return ___dsaSigner_1; }
	inline RuntimeObject** get_address_of_dsaSigner_1() { return &___dsaSigner_1; }
	inline void set_dsaSigner_1(RuntimeObject* value)
	{
		___dsaSigner_1 = value;
		Il2CppCodeGenWriteBarrier((&___dsaSigner_1), value);
	}

	inline static int32_t get_offset_of_forSigning_2() { return static_cast<int32_t>(offsetof(Gost3410DigestSigner_t148182715, ___forSigning_2)); }
	inline bool get_forSigning_2() const { return ___forSigning_2; }
	inline bool* get_address_of_forSigning_2() { return &___forSigning_2; }
	inline void set_forSigning_2(bool value)
	{
		___forSigning_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GOST3410DIGESTSIGNER_T148182715_H
#ifndef GOST3410SIGNER_T2616394647_H
#define GOST3410SIGNER_T2616394647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Signers.Gost3410Signer
struct  Gost3410Signer_t2616394647  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Crypto.Parameters.Gost3410KeyParameters Org.BouncyCastle.Crypto.Signers.Gost3410Signer::key
	Gost3410KeyParameters_t1373670768 * ___key_0;
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.Signers.Gost3410Signer::random
	SecureRandom_t3143858499 * ___random_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(Gost3410Signer_t2616394647, ___key_0)); }
	inline Gost3410KeyParameters_t1373670768 * get_key_0() const { return ___key_0; }
	inline Gost3410KeyParameters_t1373670768 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Gost3410KeyParameters_t1373670768 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_random_1() { return static_cast<int32_t>(offsetof(Gost3410Signer_t2616394647, ___random_1)); }
	inline SecureRandom_t3143858499 * get_random_1() const { return ___random_1; }
	inline SecureRandom_t3143858499 ** get_address_of_random_1() { return &___random_1; }
	inline void set_random_1(SecureRandom_t3143858499 * value)
	{
		___random_1 = value;
		Il2CppCodeGenWriteBarrier((&___random_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GOST3410SIGNER_T2616394647_H
#ifndef GENERICSIGNER_T1855289437_H
#define GENERICSIGNER_T1855289437_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Signers.GenericSigner
struct  GenericSigner_t1855289437  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Crypto.IAsymmetricBlockCipher Org.BouncyCastle.Crypto.Signers.GenericSigner::engine
	RuntimeObject* ___engine_0;
	// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Crypto.Signers.GenericSigner::digest
	RuntimeObject* ___digest_1;
	// System.Boolean Org.BouncyCastle.Crypto.Signers.GenericSigner::forSigning
	bool ___forSigning_2;

public:
	inline static int32_t get_offset_of_engine_0() { return static_cast<int32_t>(offsetof(GenericSigner_t1855289437, ___engine_0)); }
	inline RuntimeObject* get_engine_0() const { return ___engine_0; }
	inline RuntimeObject** get_address_of_engine_0() { return &___engine_0; }
	inline void set_engine_0(RuntimeObject* value)
	{
		___engine_0 = value;
		Il2CppCodeGenWriteBarrier((&___engine_0), value);
	}

	inline static int32_t get_offset_of_digest_1() { return static_cast<int32_t>(offsetof(GenericSigner_t1855289437, ___digest_1)); }
	inline RuntimeObject* get_digest_1() const { return ___digest_1; }
	inline RuntimeObject** get_address_of_digest_1() { return &___digest_1; }
	inline void set_digest_1(RuntimeObject* value)
	{
		___digest_1 = value;
		Il2CppCodeGenWriteBarrier((&___digest_1), value);
	}

	inline static int32_t get_offset_of_forSigning_2() { return static_cast<int32_t>(offsetof(GenericSigner_t1855289437, ___forSigning_2)); }
	inline bool get_forSigning_2() const { return ___forSigning_2; }
	inline bool* get_address_of_forSigning_2() { return &___forSigning_2; }
	inline void set_forSigning_2(bool value)
	{
		___forSigning_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICSIGNER_T1855289437_H
#ifndef ECGOST3410SIGNER_T2161909146_H
#define ECGOST3410SIGNER_T2161909146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Signers.ECGost3410Signer
struct  ECGost3410Signer_t2161909146  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Crypto.Parameters.ECKeyParameters Org.BouncyCastle.Crypto.Signers.ECGost3410Signer::key
	ECKeyParameters_t251955665 * ___key_0;
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.Signers.ECGost3410Signer::random
	SecureRandom_t3143858499 * ___random_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(ECGost3410Signer_t2161909146, ___key_0)); }
	inline ECKeyParameters_t251955665 * get_key_0() const { return ___key_0; }
	inline ECKeyParameters_t251955665 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(ECKeyParameters_t251955665 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_random_1() { return static_cast<int32_t>(offsetof(ECGost3410Signer_t2161909146, ___random_1)); }
	inline SecureRandom_t3143858499 * get_random_1() const { return ___random_1; }
	inline SecureRandom_t3143858499 ** get_address_of_random_1() { return &___random_1; }
	inline void set_random_1(SecureRandom_t3143858499 * value)
	{
		___random_1 = value;
		Il2CppCodeGenWriteBarrier((&___random_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ECGOST3410SIGNER_T2161909146_H
#ifndef ECNRSIGNER_T2459142589_H
#define ECNRSIGNER_T2459142589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Signers.ECNRSigner
struct  ECNRSigner_t2459142589  : public RuntimeObject
{
public:
	// System.Boolean Org.BouncyCastle.Crypto.Signers.ECNRSigner::forSigning
	bool ___forSigning_0;
	// Org.BouncyCastle.Crypto.Parameters.ECKeyParameters Org.BouncyCastle.Crypto.Signers.ECNRSigner::key
	ECKeyParameters_t251955665 * ___key_1;
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.Signers.ECNRSigner::random
	SecureRandom_t3143858499 * ___random_2;

public:
	inline static int32_t get_offset_of_forSigning_0() { return static_cast<int32_t>(offsetof(ECNRSigner_t2459142589, ___forSigning_0)); }
	inline bool get_forSigning_0() const { return ___forSigning_0; }
	inline bool* get_address_of_forSigning_0() { return &___forSigning_0; }
	inline void set_forSigning_0(bool value)
	{
		___forSigning_0 = value;
	}

	inline static int32_t get_offset_of_key_1() { return static_cast<int32_t>(offsetof(ECNRSigner_t2459142589, ___key_1)); }
	inline ECKeyParameters_t251955665 * get_key_1() const { return ___key_1; }
	inline ECKeyParameters_t251955665 ** get_address_of_key_1() { return &___key_1; }
	inline void set_key_1(ECKeyParameters_t251955665 * value)
	{
		___key_1 = value;
		Il2CppCodeGenWriteBarrier((&___key_1), value);
	}

	inline static int32_t get_offset_of_random_2() { return static_cast<int32_t>(offsetof(ECNRSigner_t2459142589, ___random_2)); }
	inline SecureRandom_t3143858499 * get_random_2() const { return ___random_2; }
	inline SecureRandom_t3143858499 ** get_address_of_random_2() { return &___random_2; }
	inline void set_random_2(SecureRandom_t3143858499 * value)
	{
		___random_2 = value;
		Il2CppCodeGenWriteBarrier((&___random_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ECNRSIGNER_T2459142589_H
#ifndef ABSTRACTTLSPEER_T2592610270_H
#define ABSTRACTTLSPEER_T2592610270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Tls.AbstractTlsPeer
struct  AbstractTlsPeer_t2592610270  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTTLSPEER_T2592610270_H
#ifndef CIPHERTYPE_T189716872_H
#define CIPHERTYPE_T189716872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Tls.CipherType
struct  CipherType_t189716872  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CIPHERTYPE_T189716872_H
#ifndef CLIENTCERTIFICATETYPE_T3245646000_H
#define CLIENTCERTIFICATETYPE_T3245646000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Tls.ClientCertificateType
struct  ClientCertificateType_t3245646000  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTCERTIFICATETYPE_T3245646000_H
#ifndef CIPHERSUITE_T993265412_H
#define CIPHERSUITE_T993265412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Tls.CipherSuite
struct  CipherSuite_t993265412  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CIPHERSUITE_T993265412_H
#ifndef CHACHA20POLY1305_T3737814979_H
#define CHACHA20POLY1305_T3737814979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Tls.Chacha20Poly1305
struct  Chacha20Poly1305_t3737814979  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Crypto.Tls.TlsContext Org.BouncyCastle.Crypto.Tls.Chacha20Poly1305::context
	RuntimeObject* ___context_1;
	// Org.BouncyCastle.Crypto.Engines.ChaCha7539Engine Org.BouncyCastle.Crypto.Tls.Chacha20Poly1305::encryptCipher
	ChaCha7539Engine_t797083379 * ___encryptCipher_2;
	// Org.BouncyCastle.Crypto.Engines.ChaCha7539Engine Org.BouncyCastle.Crypto.Tls.Chacha20Poly1305::decryptCipher
	ChaCha7539Engine_t797083379 * ___decryptCipher_3;
	// System.Byte[] Org.BouncyCastle.Crypto.Tls.Chacha20Poly1305::encryptIV
	ByteU5BU5D_t4116647657* ___encryptIV_4;
	// System.Byte[] Org.BouncyCastle.Crypto.Tls.Chacha20Poly1305::decryptIV
	ByteU5BU5D_t4116647657* ___decryptIV_5;

public:
	inline static int32_t get_offset_of_context_1() { return static_cast<int32_t>(offsetof(Chacha20Poly1305_t3737814979, ___context_1)); }
	inline RuntimeObject* get_context_1() const { return ___context_1; }
	inline RuntimeObject** get_address_of_context_1() { return &___context_1; }
	inline void set_context_1(RuntimeObject* value)
	{
		___context_1 = value;
		Il2CppCodeGenWriteBarrier((&___context_1), value);
	}

	inline static int32_t get_offset_of_encryptCipher_2() { return static_cast<int32_t>(offsetof(Chacha20Poly1305_t3737814979, ___encryptCipher_2)); }
	inline ChaCha7539Engine_t797083379 * get_encryptCipher_2() const { return ___encryptCipher_2; }
	inline ChaCha7539Engine_t797083379 ** get_address_of_encryptCipher_2() { return &___encryptCipher_2; }
	inline void set_encryptCipher_2(ChaCha7539Engine_t797083379 * value)
	{
		___encryptCipher_2 = value;
		Il2CppCodeGenWriteBarrier((&___encryptCipher_2), value);
	}

	inline static int32_t get_offset_of_decryptCipher_3() { return static_cast<int32_t>(offsetof(Chacha20Poly1305_t3737814979, ___decryptCipher_3)); }
	inline ChaCha7539Engine_t797083379 * get_decryptCipher_3() const { return ___decryptCipher_3; }
	inline ChaCha7539Engine_t797083379 ** get_address_of_decryptCipher_3() { return &___decryptCipher_3; }
	inline void set_decryptCipher_3(ChaCha7539Engine_t797083379 * value)
	{
		___decryptCipher_3 = value;
		Il2CppCodeGenWriteBarrier((&___decryptCipher_3), value);
	}

	inline static int32_t get_offset_of_encryptIV_4() { return static_cast<int32_t>(offsetof(Chacha20Poly1305_t3737814979, ___encryptIV_4)); }
	inline ByteU5BU5D_t4116647657* get_encryptIV_4() const { return ___encryptIV_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_encryptIV_4() { return &___encryptIV_4; }
	inline void set_encryptIV_4(ByteU5BU5D_t4116647657* value)
	{
		___encryptIV_4 = value;
		Il2CppCodeGenWriteBarrier((&___encryptIV_4), value);
	}

	inline static int32_t get_offset_of_decryptIV_5() { return static_cast<int32_t>(offsetof(Chacha20Poly1305_t3737814979, ___decryptIV_5)); }
	inline ByteU5BU5D_t4116647657* get_decryptIV_5() const { return ___decryptIV_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_decryptIV_5() { return &___decryptIV_5; }
	inline void set_decryptIV_5(ByteU5BU5D_t4116647657* value)
	{
		___decryptIV_5 = value;
		Il2CppCodeGenWriteBarrier((&___decryptIV_5), value);
	}
};

struct Chacha20Poly1305_t3737814979_StaticFields
{
public:
	// System.Byte[] Org.BouncyCastle.Crypto.Tls.Chacha20Poly1305::Zeroes
	ByteU5BU5D_t4116647657* ___Zeroes_0;

public:
	inline static int32_t get_offset_of_Zeroes_0() { return static_cast<int32_t>(offsetof(Chacha20Poly1305_t3737814979_StaticFields, ___Zeroes_0)); }
	inline ByteU5BU5D_t4116647657* get_Zeroes_0() const { return ___Zeroes_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_Zeroes_0() { return &___Zeroes_0; }
	inline void set_Zeroes_0(ByteU5BU5D_t4116647657* value)
	{
		___Zeroes_0 = value;
		Il2CppCodeGenWriteBarrier((&___Zeroes_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHACHA20POLY1305_T3737814979_H
#ifndef CHANGECIPHERSPEC_T1586362859_H
#define CHANGECIPHERSPEC_T1586362859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Tls.ChangeCipherSpec
struct  ChangeCipherSpec_t1586362859  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANGECIPHERSPEC_T1586362859_H
#ifndef COMBINEDHASH_T1490040839_H
#define COMBINEDHASH_T1490040839_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Tls.CombinedHash
struct  CombinedHash_t1490040839  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Crypto.Tls.TlsContext Org.BouncyCastle.Crypto.Tls.CombinedHash::mContext
	RuntimeObject* ___mContext_0;
	// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Crypto.Tls.CombinedHash::mMd5
	RuntimeObject* ___mMd5_1;
	// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Crypto.Tls.CombinedHash::mSha1
	RuntimeObject* ___mSha1_2;

public:
	inline static int32_t get_offset_of_mContext_0() { return static_cast<int32_t>(offsetof(CombinedHash_t1490040839, ___mContext_0)); }
	inline RuntimeObject* get_mContext_0() const { return ___mContext_0; }
	inline RuntimeObject** get_address_of_mContext_0() { return &___mContext_0; }
	inline void set_mContext_0(RuntimeObject* value)
	{
		___mContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___mContext_0), value);
	}

	inline static int32_t get_offset_of_mMd5_1() { return static_cast<int32_t>(offsetof(CombinedHash_t1490040839, ___mMd5_1)); }
	inline RuntimeObject* get_mMd5_1() const { return ___mMd5_1; }
	inline RuntimeObject** get_address_of_mMd5_1() { return &___mMd5_1; }
	inline void set_mMd5_1(RuntimeObject* value)
	{
		___mMd5_1 = value;
		Il2CppCodeGenWriteBarrier((&___mMd5_1), value);
	}

	inline static int32_t get_offset_of_mSha1_2() { return static_cast<int32_t>(offsetof(CombinedHash_t1490040839, ___mSha1_2)); }
	inline RuntimeObject* get_mSha1_2() const { return ___mSha1_2; }
	inline RuntimeObject** get_address_of_mSha1_2() { return &___mSha1_2; }
	inline void set_mSha1_2(RuntimeObject* value)
	{
		___mSha1_2 = value;
		Il2CppCodeGenWriteBarrier((&___mSha1_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMBINEDHASH_T1490040839_H
#ifndef ASYMMETRICKEYPARAMETER_T1171635530_H
#define ASYMMETRICKEYPARAMETER_T1171635530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.AsymmetricKeyParameter
struct  AsymmetricKeyParameter_t1171635530  : public RuntimeObject
{
public:
	// System.Boolean Org.BouncyCastle.Crypto.AsymmetricKeyParameter::privateKey
	bool ___privateKey_0;

public:
	inline static int32_t get_offset_of_privateKey_0() { return static_cast<int32_t>(offsetof(AsymmetricKeyParameter_t1171635530, ___privateKey_0)); }
	inline bool get_privateKey_0() const { return ___privateKey_0; }
	inline bool* get_address_of_privateKey_0() { return &___privateKey_0; }
	inline void set_privateKey_0(bool value)
	{
		___privateKey_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICKEYPARAMETER_T1171635530_H
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public RuntimeObject
{
public:

public:
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_0)); }
	inline Stream_t1273022909 * get_Null_0() const { return ___Null_0; }
	inline Stream_t1273022909 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_t1273022909 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
#ifndef KEYGENERATIONPARAMETERS_T710742334_H
#define KEYGENERATIONPARAMETERS_T710742334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.KeyGenerationParameters
struct  KeyGenerationParameters_t710742334  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.KeyGenerationParameters::random
	SecureRandom_t3143858499 * ___random_0;
	// System.Int32 Org.BouncyCastle.Crypto.KeyGenerationParameters::strength
	int32_t ___strength_1;

public:
	inline static int32_t get_offset_of_random_0() { return static_cast<int32_t>(offsetof(KeyGenerationParameters_t710742334, ___random_0)); }
	inline SecureRandom_t3143858499 * get_random_0() const { return ___random_0; }
	inline SecureRandom_t3143858499 ** get_address_of_random_0() { return &___random_0; }
	inline void set_random_0(SecureRandom_t3143858499 * value)
	{
		___random_0 = value;
		Il2CppCodeGenWriteBarrier((&___random_0), value);
	}

	inline static int32_t get_offset_of_strength_1() { return static_cast<int32_t>(offsetof(KeyGenerationParameters_t710742334, ___strength_1)); }
	inline int32_t get_strength_1() const { return ___strength_1; }
	inline int32_t* get_address_of_strength_1() { return &___strength_1; }
	inline void set_strength_1(int32_t value)
	{
		___strength_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYGENERATIONPARAMETERS_T710742334_H
#ifndef COMPRESSIONMETHOD_T1759592129_H
#define COMPRESSIONMETHOD_T1759592129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Tls.CompressionMethod
struct  CompressionMethod_t1759592129  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPRESSIONMETHOD_T1759592129_H
#ifndef CONNECTIONEND_T2389710447_H
#define CONNECTIONEND_T2389710447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Tls.ConnectionEnd
struct  ConnectionEnd_t2389710447  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONEND_T2389710447_H
#ifndef ALWAYSVALIDVERIFYER_T3902044121_H
#define ALWAYSVALIDVERIFYER_T3902044121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Tls.AlwaysValidVerifyer
struct  AlwaysValidVerifyer_t3902044121  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALWAYSVALIDVERIFYER_T3902044121_H
#ifndef BYTEQUEUE_T3132735923_H
#define BYTEQUEUE_T3132735923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Tls.ByteQueue
struct  ByteQueue_t3132735923  : public RuntimeObject
{
public:
	// System.Byte[] Org.BouncyCastle.Crypto.Tls.ByteQueue::databuf
	ByteU5BU5D_t4116647657* ___databuf_1;
	// System.Int32 Org.BouncyCastle.Crypto.Tls.ByteQueue::skipped
	int32_t ___skipped_2;
	// System.Int32 Org.BouncyCastle.Crypto.Tls.ByteQueue::available
	int32_t ___available_3;

public:
	inline static int32_t get_offset_of_databuf_1() { return static_cast<int32_t>(offsetof(ByteQueue_t3132735923, ___databuf_1)); }
	inline ByteU5BU5D_t4116647657* get_databuf_1() const { return ___databuf_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_databuf_1() { return &___databuf_1; }
	inline void set_databuf_1(ByteU5BU5D_t4116647657* value)
	{
		___databuf_1 = value;
		Il2CppCodeGenWriteBarrier((&___databuf_1), value);
	}

	inline static int32_t get_offset_of_skipped_2() { return static_cast<int32_t>(offsetof(ByteQueue_t3132735923, ___skipped_2)); }
	inline int32_t get_skipped_2() const { return ___skipped_2; }
	inline int32_t* get_address_of_skipped_2() { return &___skipped_2; }
	inline void set_skipped_2(int32_t value)
	{
		___skipped_2 = value;
	}

	inline static int32_t get_offset_of_available_3() { return static_cast<int32_t>(offsetof(ByteQueue_t3132735923, ___available_3)); }
	inline int32_t get_available_3() const { return ___available_3; }
	inline int32_t* get_address_of_available_3() { return &___available_3; }
	inline void set_available_3(int32_t value)
	{
		___available_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTEQUEUE_T3132735923_H
#ifndef ALERTLEVEL_T2815103780_H
#define ALERTLEVEL_T2815103780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Tls.AlertLevel
struct  AlertLevel_t2815103780  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALERTLEVEL_T2815103780_H
#ifndef ABSTRACTTLSSIGNER_T1138128163_H
#define ABSTRACTTLSSIGNER_T1138128163_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Tls.AbstractTlsSigner
struct  AbstractTlsSigner_t1138128163  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Crypto.Tls.TlsContext Org.BouncyCastle.Crypto.Tls.AbstractTlsSigner::mContext
	RuntimeObject* ___mContext_0;

public:
	inline static int32_t get_offset_of_mContext_0() { return static_cast<int32_t>(offsetof(AbstractTlsSigner_t1138128163, ___mContext_0)); }
	inline RuntimeObject* get_mContext_0() const { return ___mContext_0; }
	inline RuntimeObject** get_address_of_mContext_0() { return &___mContext_0; }
	inline void set_mContext_0(RuntimeObject* value)
	{
		___mContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___mContext_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTTLSSIGNER_T1138128163_H
#ifndef ALERTDESCRIPTION_T882269339_H
#define ALERTDESCRIPTION_T882269339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Tls.AlertDescription
struct  AlertDescription_t882269339  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALERTDESCRIPTION_T882269339_H
#ifndef CERTCHAINTYPE_T980720681_H
#define CERTCHAINTYPE_T980720681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Tls.CertChainType
struct  CertChainType_t980720681  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CERTCHAINTYPE_T980720681_H
#ifndef CERTIFICATESTATUSREQUEST_T3208974589_H
#define CERTIFICATESTATUSREQUEST_T3208974589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Tls.CertificateStatusRequest
struct  CertificateStatusRequest_t3208974589  : public RuntimeObject
{
public:
	// System.Byte Org.BouncyCastle.Crypto.Tls.CertificateStatusRequest::mStatusType
	uint8_t ___mStatusType_0;
	// System.Object Org.BouncyCastle.Crypto.Tls.CertificateStatusRequest::mRequest
	RuntimeObject * ___mRequest_1;

public:
	inline static int32_t get_offset_of_mStatusType_0() { return static_cast<int32_t>(offsetof(CertificateStatusRequest_t3208974589, ___mStatusType_0)); }
	inline uint8_t get_mStatusType_0() const { return ___mStatusType_0; }
	inline uint8_t* get_address_of_mStatusType_0() { return &___mStatusType_0; }
	inline void set_mStatusType_0(uint8_t value)
	{
		___mStatusType_0 = value;
	}

	inline static int32_t get_offset_of_mRequest_1() { return static_cast<int32_t>(offsetof(CertificateStatusRequest_t3208974589, ___mRequest_1)); }
	inline RuntimeObject * get_mRequest_1() const { return ___mRequest_1; }
	inline RuntimeObject ** get_address_of_mRequest_1() { return &___mRequest_1; }
	inline void set_mRequest_1(RuntimeObject * value)
	{
		___mRequest_1 = value;
		Il2CppCodeGenWriteBarrier((&___mRequest_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CERTIFICATESTATUSREQUEST_T3208974589_H
#ifndef CERTIFICATESTATUSTYPE_T2401043302_H
#define CERTIFICATESTATUSTYPE_T2401043302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Tls.CertificateStatusType
struct  CertificateStatusType_t2401043302  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CERTIFICATESTATUSTYPE_T2401043302_H
#ifndef CERTIFICATESTATUS_T437074296_H
#define CERTIFICATESTATUS_T437074296_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Tls.CertificateStatus
struct  CertificateStatus_t437074296  : public RuntimeObject
{
public:
	// System.Byte Org.BouncyCastle.Crypto.Tls.CertificateStatus::mStatusType
	uint8_t ___mStatusType_0;
	// System.Object Org.BouncyCastle.Crypto.Tls.CertificateStatus::mResponse
	RuntimeObject * ___mResponse_1;

public:
	inline static int32_t get_offset_of_mStatusType_0() { return static_cast<int32_t>(offsetof(CertificateStatus_t437074296, ___mStatusType_0)); }
	inline uint8_t get_mStatusType_0() const { return ___mStatusType_0; }
	inline uint8_t* get_address_of_mStatusType_0() { return &___mStatusType_0; }
	inline void set_mStatusType_0(uint8_t value)
	{
		___mStatusType_0 = value;
	}

	inline static int32_t get_offset_of_mResponse_1() { return static_cast<int32_t>(offsetof(CertificateStatus_t437074296, ___mResponse_1)); }
	inline RuntimeObject * get_mResponse_1() const { return ___mResponse_1; }
	inline RuntimeObject ** get_address_of_mResponse_1() { return &___mResponse_1; }
	inline void set_mResponse_1(RuntimeObject * value)
	{
		___mResponse_1 = value;
		Il2CppCodeGenWriteBarrier((&___mResponse_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CERTIFICATESTATUS_T437074296_H
#ifndef CERTIFICATE_T492959532_H
#define CERTIFICATE_T492959532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Tls.Certificate
struct  Certificate_t492959532  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Asn1.X509.X509CertificateStructure[] Org.BouncyCastle.Crypto.Tls.Certificate::mCertificateList
	X509CertificateStructureU5BU5D_t994092288* ___mCertificateList_1;

public:
	inline static int32_t get_offset_of_mCertificateList_1() { return static_cast<int32_t>(offsetof(Certificate_t492959532, ___mCertificateList_1)); }
	inline X509CertificateStructureU5BU5D_t994092288* get_mCertificateList_1() const { return ___mCertificateList_1; }
	inline X509CertificateStructureU5BU5D_t994092288** get_address_of_mCertificateList_1() { return &___mCertificateList_1; }
	inline void set_mCertificateList_1(X509CertificateStructureU5BU5D_t994092288* value)
	{
		___mCertificateList_1 = value;
		Il2CppCodeGenWriteBarrier((&___mCertificateList_1), value);
	}
};

struct Certificate_t492959532_StaticFields
{
public:
	// Org.BouncyCastle.Crypto.Tls.Certificate Org.BouncyCastle.Crypto.Tls.Certificate::EmptyChain
	Certificate_t492959532 * ___EmptyChain_0;

public:
	inline static int32_t get_offset_of_EmptyChain_0() { return static_cast<int32_t>(offsetof(Certificate_t492959532_StaticFields, ___EmptyChain_0)); }
	inline Certificate_t492959532 * get_EmptyChain_0() const { return ___EmptyChain_0; }
	inline Certificate_t492959532 ** get_address_of_EmptyChain_0() { return &___EmptyChain_0; }
	inline void set_EmptyChain_0(Certificate_t492959532 * value)
	{
		___EmptyChain_0 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyChain_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CERTIFICATE_T492959532_H
#ifndef CERTIFICATEREQUEST_T3306794044_H
#define CERTIFICATEREQUEST_T3306794044_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Tls.CertificateRequest
struct  CertificateRequest_t3306794044  : public RuntimeObject
{
public:
	// System.Byte[] Org.BouncyCastle.Crypto.Tls.CertificateRequest::mCertificateTypes
	ByteU5BU5D_t4116647657* ___mCertificateTypes_0;
	// System.Collections.IList Org.BouncyCastle.Crypto.Tls.CertificateRequest::mSupportedSignatureAlgorithms
	RuntimeObject* ___mSupportedSignatureAlgorithms_1;
	// System.Collections.IList Org.BouncyCastle.Crypto.Tls.CertificateRequest::mCertificateAuthorities
	RuntimeObject* ___mCertificateAuthorities_2;

public:
	inline static int32_t get_offset_of_mCertificateTypes_0() { return static_cast<int32_t>(offsetof(CertificateRequest_t3306794044, ___mCertificateTypes_0)); }
	inline ByteU5BU5D_t4116647657* get_mCertificateTypes_0() const { return ___mCertificateTypes_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_mCertificateTypes_0() { return &___mCertificateTypes_0; }
	inline void set_mCertificateTypes_0(ByteU5BU5D_t4116647657* value)
	{
		___mCertificateTypes_0 = value;
		Il2CppCodeGenWriteBarrier((&___mCertificateTypes_0), value);
	}

	inline static int32_t get_offset_of_mSupportedSignatureAlgorithms_1() { return static_cast<int32_t>(offsetof(CertificateRequest_t3306794044, ___mSupportedSignatureAlgorithms_1)); }
	inline RuntimeObject* get_mSupportedSignatureAlgorithms_1() const { return ___mSupportedSignatureAlgorithms_1; }
	inline RuntimeObject** get_address_of_mSupportedSignatureAlgorithms_1() { return &___mSupportedSignatureAlgorithms_1; }
	inline void set_mSupportedSignatureAlgorithms_1(RuntimeObject* value)
	{
		___mSupportedSignatureAlgorithms_1 = value;
		Il2CppCodeGenWriteBarrier((&___mSupportedSignatureAlgorithms_1), value);
	}

	inline static int32_t get_offset_of_mCertificateAuthorities_2() { return static_cast<int32_t>(offsetof(CertificateRequest_t3306794044, ___mCertificateAuthorities_2)); }
	inline RuntimeObject* get_mCertificateAuthorities_2() const { return ___mCertificateAuthorities_2; }
	inline RuntimeObject** get_address_of_mCertificateAuthorities_2() { return &___mCertificateAuthorities_2; }
	inline void set_mCertificateAuthorities_2(RuntimeObject* value)
	{
		___mCertificateAuthorities_2 = value;
		Il2CppCodeGenWriteBarrier((&___mCertificateAuthorities_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CERTIFICATEREQUEST_T3306794044_H
#ifndef RSABLINDINGPARAMETERS_T1676351004_H
#define RSABLINDINGPARAMETERS_T1676351004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.RsaBlindingParameters
struct  RsaBlindingParameters_t1676351004  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters Org.BouncyCastle.Crypto.Parameters.RsaBlindingParameters::publicKey
	RsaKeyParameters_t2730774859 * ___publicKey_0;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaBlindingParameters::blindingFactor
	BigInteger_t921849256 * ___blindingFactor_1;

public:
	inline static int32_t get_offset_of_publicKey_0() { return static_cast<int32_t>(offsetof(RsaBlindingParameters_t1676351004, ___publicKey_0)); }
	inline RsaKeyParameters_t2730774859 * get_publicKey_0() const { return ___publicKey_0; }
	inline RsaKeyParameters_t2730774859 ** get_address_of_publicKey_0() { return &___publicKey_0; }
	inline void set_publicKey_0(RsaKeyParameters_t2730774859 * value)
	{
		___publicKey_0 = value;
		Il2CppCodeGenWriteBarrier((&___publicKey_0), value);
	}

	inline static int32_t get_offset_of_blindingFactor_1() { return static_cast<int32_t>(offsetof(RsaBlindingParameters_t1676351004, ___blindingFactor_1)); }
	inline BigInteger_t921849256 * get_blindingFactor_1() const { return ___blindingFactor_1; }
	inline BigInteger_t921849256 ** get_address_of_blindingFactor_1() { return &___blindingFactor_1; }
	inline void set_blindingFactor_1(BigInteger_t921849256 * value)
	{
		___blindingFactor_1 = value;
		Il2CppCodeGenWriteBarrier((&___blindingFactor_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSABLINDINGPARAMETERS_T1676351004_H
#ifndef GOST3410VALIDATIONPARAMETERS_T2339624737_H
#define GOST3410VALIDATIONPARAMETERS_T2339624737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.Gost3410ValidationParameters
struct  Gost3410ValidationParameters_t2339624737  : public RuntimeObject
{
public:
	// System.Int32 Org.BouncyCastle.Crypto.Parameters.Gost3410ValidationParameters::x0
	int32_t ___x0_0;
	// System.Int32 Org.BouncyCastle.Crypto.Parameters.Gost3410ValidationParameters::c
	int32_t ___c_1;
	// System.Int64 Org.BouncyCastle.Crypto.Parameters.Gost3410ValidationParameters::x0L
	int64_t ___x0L_2;
	// System.Int64 Org.BouncyCastle.Crypto.Parameters.Gost3410ValidationParameters::cL
	int64_t ___cL_3;

public:
	inline static int32_t get_offset_of_x0_0() { return static_cast<int32_t>(offsetof(Gost3410ValidationParameters_t2339624737, ___x0_0)); }
	inline int32_t get_x0_0() const { return ___x0_0; }
	inline int32_t* get_address_of_x0_0() { return &___x0_0; }
	inline void set_x0_0(int32_t value)
	{
		___x0_0 = value;
	}

	inline static int32_t get_offset_of_c_1() { return static_cast<int32_t>(offsetof(Gost3410ValidationParameters_t2339624737, ___c_1)); }
	inline int32_t get_c_1() const { return ___c_1; }
	inline int32_t* get_address_of_c_1() { return &___c_1; }
	inline void set_c_1(int32_t value)
	{
		___c_1 = value;
	}

	inline static int32_t get_offset_of_x0L_2() { return static_cast<int32_t>(offsetof(Gost3410ValidationParameters_t2339624737, ___x0L_2)); }
	inline int64_t get_x0L_2() const { return ___x0L_2; }
	inline int64_t* get_address_of_x0L_2() { return &___x0L_2; }
	inline void set_x0L_2(int64_t value)
	{
		___x0L_2 = value;
	}

	inline static int32_t get_offset_of_cL_3() { return static_cast<int32_t>(offsetof(Gost3410ValidationParameters_t2339624737, ___cL_3)); }
	inline int64_t get_cL_3() const { return ___cL_3; }
	inline int64_t* get_address_of_cL_3() { return &___cL_3; }
	inline void set_cL_3(int64_t value)
	{
		___cL_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GOST3410VALIDATIONPARAMETERS_T2339624737_H
#ifndef GOST3410PARAMETERS_T831777799_H
#define GOST3410PARAMETERS_T831777799_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters
struct  Gost3410Parameters_t831777799  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters::p
	BigInteger_t921849256 * ___p_0;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters::q
	BigInteger_t921849256 * ___q_1;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters::a
	BigInteger_t921849256 * ___a_2;
	// Org.BouncyCastle.Crypto.Parameters.Gost3410ValidationParameters Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters::validation
	Gost3410ValidationParameters_t2339624737 * ___validation_3;

public:
	inline static int32_t get_offset_of_p_0() { return static_cast<int32_t>(offsetof(Gost3410Parameters_t831777799, ___p_0)); }
	inline BigInteger_t921849256 * get_p_0() const { return ___p_0; }
	inline BigInteger_t921849256 ** get_address_of_p_0() { return &___p_0; }
	inline void set_p_0(BigInteger_t921849256 * value)
	{
		___p_0 = value;
		Il2CppCodeGenWriteBarrier((&___p_0), value);
	}

	inline static int32_t get_offset_of_q_1() { return static_cast<int32_t>(offsetof(Gost3410Parameters_t831777799, ___q_1)); }
	inline BigInteger_t921849256 * get_q_1() const { return ___q_1; }
	inline BigInteger_t921849256 ** get_address_of_q_1() { return &___q_1; }
	inline void set_q_1(BigInteger_t921849256 * value)
	{
		___q_1 = value;
		Il2CppCodeGenWriteBarrier((&___q_1), value);
	}

	inline static int32_t get_offset_of_a_2() { return static_cast<int32_t>(offsetof(Gost3410Parameters_t831777799, ___a_2)); }
	inline BigInteger_t921849256 * get_a_2() const { return ___a_2; }
	inline BigInteger_t921849256 ** get_address_of_a_2() { return &___a_2; }
	inline void set_a_2(BigInteger_t921849256 * value)
	{
		___a_2 = value;
		Il2CppCodeGenWriteBarrier((&___a_2), value);
	}

	inline static int32_t get_offset_of_validation_3() { return static_cast<int32_t>(offsetof(Gost3410Parameters_t831777799, ___validation_3)); }
	inline Gost3410ValidationParameters_t2339624737 * get_validation_3() const { return ___validation_3; }
	inline Gost3410ValidationParameters_t2339624737 ** get_address_of_validation_3() { return &___validation_3; }
	inline void set_validation_3(Gost3410ValidationParameters_t2339624737 * value)
	{
		___validation_3 = value;
		Il2CppCodeGenWriteBarrier((&___validation_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GOST3410PARAMETERS_T831777799_H
#ifndef IESPARAMETERS_T1750939157_H
#define IESPARAMETERS_T1750939157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.IesParameters
struct  IesParameters_t1750939157  : public RuntimeObject
{
public:
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.IesParameters::derivation
	ByteU5BU5D_t4116647657* ___derivation_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.IesParameters::encoding
	ByteU5BU5D_t4116647657* ___encoding_1;
	// System.Int32 Org.BouncyCastle.Crypto.Parameters.IesParameters::macKeySize
	int32_t ___macKeySize_2;

public:
	inline static int32_t get_offset_of_derivation_0() { return static_cast<int32_t>(offsetof(IesParameters_t1750939157, ___derivation_0)); }
	inline ByteU5BU5D_t4116647657* get_derivation_0() const { return ___derivation_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_derivation_0() { return &___derivation_0; }
	inline void set_derivation_0(ByteU5BU5D_t4116647657* value)
	{
		___derivation_0 = value;
		Il2CppCodeGenWriteBarrier((&___derivation_0), value);
	}

	inline static int32_t get_offset_of_encoding_1() { return static_cast<int32_t>(offsetof(IesParameters_t1750939157, ___encoding_1)); }
	inline ByteU5BU5D_t4116647657* get_encoding_1() const { return ___encoding_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_encoding_1() { return &___encoding_1; }
	inline void set_encoding_1(ByteU5BU5D_t4116647657* value)
	{
		___encoding_1 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_1), value);
	}

	inline static int32_t get_offset_of_macKeySize_2() { return static_cast<int32_t>(offsetof(IesParameters_t1750939157, ___macKeySize_2)); }
	inline int32_t get_macKeySize_2() const { return ___macKeySize_2; }
	inline int32_t* get_address_of_macKeySize_2() { return &___macKeySize_2; }
	inline void set_macKeySize_2(int32_t value)
	{
		___macKeySize_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IESPARAMETERS_T1750939157_H
#ifndef KDFPARAMETERS_T4212552711_H
#define KDFPARAMETERS_T4212552711_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.KdfParameters
struct  KdfParameters_t4212552711  : public RuntimeObject
{
public:
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.KdfParameters::iv
	ByteU5BU5D_t4116647657* ___iv_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.KdfParameters::shared
	ByteU5BU5D_t4116647657* ___shared_1;

public:
	inline static int32_t get_offset_of_iv_0() { return static_cast<int32_t>(offsetof(KdfParameters_t4212552711, ___iv_0)); }
	inline ByteU5BU5D_t4116647657* get_iv_0() const { return ___iv_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_iv_0() { return &___iv_0; }
	inline void set_iv_0(ByteU5BU5D_t4116647657* value)
	{
		___iv_0 = value;
		Il2CppCodeGenWriteBarrier((&___iv_0), value);
	}

	inline static int32_t get_offset_of_shared_1() { return static_cast<int32_t>(offsetof(KdfParameters_t4212552711, ___shared_1)); }
	inline ByteU5BU5D_t4116647657* get_shared_1() const { return ___shared_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_shared_1() { return &___shared_1; }
	inline void set_shared_1(ByteU5BU5D_t4116647657* value)
	{
		___shared_1 = value;
		Il2CppCodeGenWriteBarrier((&___shared_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KDFPARAMETERS_T4212552711_H
#ifndef ISO18033KDFPARAMETERS_T2230401193_H
#define ISO18033KDFPARAMETERS_T2230401193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.Iso18033KdfParameters
struct  Iso18033KdfParameters_t2230401193  : public RuntimeObject
{
public:
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.Iso18033KdfParameters::seed
	ByteU5BU5D_t4116647657* ___seed_0;

public:
	inline static int32_t get_offset_of_seed_0() { return static_cast<int32_t>(offsetof(Iso18033KdfParameters_t2230401193, ___seed_0)); }
	inline ByteU5BU5D_t4116647657* get_seed_0() const { return ___seed_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_seed_0() { return &___seed_0; }
	inline void set_seed_0(ByteU5BU5D_t4116647657* value)
	{
		___seed_0 = value;
		Il2CppCodeGenWriteBarrier((&___seed_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISO18033KDFPARAMETERS_T2230401193_H
#ifndef DHPARAMETERS_T2329248715_H
#define DHPARAMETERS_T2329248715_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.DHParameters
struct  DHParameters_t2329248715  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DHParameters::p
	BigInteger_t921849256 * ___p_1;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DHParameters::g
	BigInteger_t921849256 * ___g_2;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DHParameters::q
	BigInteger_t921849256 * ___q_3;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DHParameters::j
	BigInteger_t921849256 * ___j_4;
	// System.Int32 Org.BouncyCastle.Crypto.Parameters.DHParameters::m
	int32_t ___m_5;
	// System.Int32 Org.BouncyCastle.Crypto.Parameters.DHParameters::l
	int32_t ___l_6;
	// Org.BouncyCastle.Crypto.Parameters.DHValidationParameters Org.BouncyCastle.Crypto.Parameters.DHParameters::validation
	DHValidationParameters_t1290447282 * ___validation_7;

public:
	inline static int32_t get_offset_of_p_1() { return static_cast<int32_t>(offsetof(DHParameters_t2329248715, ___p_1)); }
	inline BigInteger_t921849256 * get_p_1() const { return ___p_1; }
	inline BigInteger_t921849256 ** get_address_of_p_1() { return &___p_1; }
	inline void set_p_1(BigInteger_t921849256 * value)
	{
		___p_1 = value;
		Il2CppCodeGenWriteBarrier((&___p_1), value);
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(DHParameters_t2329248715, ___g_2)); }
	inline BigInteger_t921849256 * get_g_2() const { return ___g_2; }
	inline BigInteger_t921849256 ** get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(BigInteger_t921849256 * value)
	{
		___g_2 = value;
		Il2CppCodeGenWriteBarrier((&___g_2), value);
	}

	inline static int32_t get_offset_of_q_3() { return static_cast<int32_t>(offsetof(DHParameters_t2329248715, ___q_3)); }
	inline BigInteger_t921849256 * get_q_3() const { return ___q_3; }
	inline BigInteger_t921849256 ** get_address_of_q_3() { return &___q_3; }
	inline void set_q_3(BigInteger_t921849256 * value)
	{
		___q_3 = value;
		Il2CppCodeGenWriteBarrier((&___q_3), value);
	}

	inline static int32_t get_offset_of_j_4() { return static_cast<int32_t>(offsetof(DHParameters_t2329248715, ___j_4)); }
	inline BigInteger_t921849256 * get_j_4() const { return ___j_4; }
	inline BigInteger_t921849256 ** get_address_of_j_4() { return &___j_4; }
	inline void set_j_4(BigInteger_t921849256 * value)
	{
		___j_4 = value;
		Il2CppCodeGenWriteBarrier((&___j_4), value);
	}

	inline static int32_t get_offset_of_m_5() { return static_cast<int32_t>(offsetof(DHParameters_t2329248715, ___m_5)); }
	inline int32_t get_m_5() const { return ___m_5; }
	inline int32_t* get_address_of_m_5() { return &___m_5; }
	inline void set_m_5(int32_t value)
	{
		___m_5 = value;
	}

	inline static int32_t get_offset_of_l_6() { return static_cast<int32_t>(offsetof(DHParameters_t2329248715, ___l_6)); }
	inline int32_t get_l_6() const { return ___l_6; }
	inline int32_t* get_address_of_l_6() { return &___l_6; }
	inline void set_l_6(int32_t value)
	{
		___l_6 = value;
	}

	inline static int32_t get_offset_of_validation_7() { return static_cast<int32_t>(offsetof(DHParameters_t2329248715, ___validation_7)); }
	inline DHValidationParameters_t1290447282 * get_validation_7() const { return ___validation_7; }
	inline DHValidationParameters_t1290447282 ** get_address_of_validation_7() { return &___validation_7; }
	inline void set_validation_7(DHValidationParameters_t1290447282 * value)
	{
		___validation_7 = value;
		Il2CppCodeGenWriteBarrier((&___validation_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DHPARAMETERS_T2329248715_H
#ifndef DSAVALIDATIONPARAMETERS_T4208245698_H
#define DSAVALIDATIONPARAMETERS_T4208245698_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.DsaValidationParameters
struct  DsaValidationParameters_t4208245698  : public RuntimeObject
{
public:
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.DsaValidationParameters::seed
	ByteU5BU5D_t4116647657* ___seed_0;
	// System.Int32 Org.BouncyCastle.Crypto.Parameters.DsaValidationParameters::counter
	int32_t ___counter_1;
	// System.Int32 Org.BouncyCastle.Crypto.Parameters.DsaValidationParameters::usageIndex
	int32_t ___usageIndex_2;

public:
	inline static int32_t get_offset_of_seed_0() { return static_cast<int32_t>(offsetof(DsaValidationParameters_t4208245698, ___seed_0)); }
	inline ByteU5BU5D_t4116647657* get_seed_0() const { return ___seed_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_seed_0() { return &___seed_0; }
	inline void set_seed_0(ByteU5BU5D_t4116647657* value)
	{
		___seed_0 = value;
		Il2CppCodeGenWriteBarrier((&___seed_0), value);
	}

	inline static int32_t get_offset_of_counter_1() { return static_cast<int32_t>(offsetof(DsaValidationParameters_t4208245698, ___counter_1)); }
	inline int32_t get_counter_1() const { return ___counter_1; }
	inline int32_t* get_address_of_counter_1() { return &___counter_1; }
	inline void set_counter_1(int32_t value)
	{
		___counter_1 = value;
	}

	inline static int32_t get_offset_of_usageIndex_2() { return static_cast<int32_t>(offsetof(DsaValidationParameters_t4208245698, ___usageIndex_2)); }
	inline int32_t get_usageIndex_2() const { return ___usageIndex_2; }
	inline int32_t* get_address_of_usageIndex_2() { return &___usageIndex_2; }
	inline void set_usageIndex_2(int32_t value)
	{
		___usageIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSAVALIDATIONPARAMETERS_T4208245698_H
#ifndef ECDOMAINPARAMETERS_T3853250996_H
#define ECDOMAINPARAMETERS_T3853250996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.ECDomainParameters
struct  ECDomainParameters_t3853250996  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Math.EC.ECCurve Org.BouncyCastle.Crypto.Parameters.ECDomainParameters::curve
	ECCurve_t507263384 * ___curve_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.ECDomainParameters::seed
	ByteU5BU5D_t4116647657* ___seed_1;
	// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Crypto.Parameters.ECDomainParameters::g
	ECPoint_t2689130122 * ___g_2;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.ECDomainParameters::n
	BigInteger_t921849256 * ___n_3;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.ECDomainParameters::h
	BigInteger_t921849256 * ___h_4;

public:
	inline static int32_t get_offset_of_curve_0() { return static_cast<int32_t>(offsetof(ECDomainParameters_t3853250996, ___curve_0)); }
	inline ECCurve_t507263384 * get_curve_0() const { return ___curve_0; }
	inline ECCurve_t507263384 ** get_address_of_curve_0() { return &___curve_0; }
	inline void set_curve_0(ECCurve_t507263384 * value)
	{
		___curve_0 = value;
		Il2CppCodeGenWriteBarrier((&___curve_0), value);
	}

	inline static int32_t get_offset_of_seed_1() { return static_cast<int32_t>(offsetof(ECDomainParameters_t3853250996, ___seed_1)); }
	inline ByteU5BU5D_t4116647657* get_seed_1() const { return ___seed_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_seed_1() { return &___seed_1; }
	inline void set_seed_1(ByteU5BU5D_t4116647657* value)
	{
		___seed_1 = value;
		Il2CppCodeGenWriteBarrier((&___seed_1), value);
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(ECDomainParameters_t3853250996, ___g_2)); }
	inline ECPoint_t2689130122 * get_g_2() const { return ___g_2; }
	inline ECPoint_t2689130122 ** get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(ECPoint_t2689130122 * value)
	{
		___g_2 = value;
		Il2CppCodeGenWriteBarrier((&___g_2), value);
	}

	inline static int32_t get_offset_of_n_3() { return static_cast<int32_t>(offsetof(ECDomainParameters_t3853250996, ___n_3)); }
	inline BigInteger_t921849256 * get_n_3() const { return ___n_3; }
	inline BigInteger_t921849256 ** get_address_of_n_3() { return &___n_3; }
	inline void set_n_3(BigInteger_t921849256 * value)
	{
		___n_3 = value;
		Il2CppCodeGenWriteBarrier((&___n_3), value);
	}

	inline static int32_t get_offset_of_h_4() { return static_cast<int32_t>(offsetof(ECDomainParameters_t3853250996, ___h_4)); }
	inline BigInteger_t921849256 * get_h_4() const { return ___h_4; }
	inline BigInteger_t921849256 ** get_address_of_h_4() { return &___h_4; }
	inline void set_h_4(BigInteger_t921849256 * value)
	{
		___h_4 = value;
		Il2CppCodeGenWriteBarrier((&___h_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ECDOMAINPARAMETERS_T3853250996_H
#ifndef ELGAMALPARAMETERS_T953082378_H
#define ELGAMALPARAMETERS_T953082378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.ElGamalParameters
struct  ElGamalParameters_t953082378  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.ElGamalParameters::p
	BigInteger_t921849256 * ___p_0;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.ElGamalParameters::g
	BigInteger_t921849256 * ___g_1;
	// System.Int32 Org.BouncyCastle.Crypto.Parameters.ElGamalParameters::l
	int32_t ___l_2;

public:
	inline static int32_t get_offset_of_p_0() { return static_cast<int32_t>(offsetof(ElGamalParameters_t953082378, ___p_0)); }
	inline BigInteger_t921849256 * get_p_0() const { return ___p_0; }
	inline BigInteger_t921849256 ** get_address_of_p_0() { return &___p_0; }
	inline void set_p_0(BigInteger_t921849256 * value)
	{
		___p_0 = value;
		Il2CppCodeGenWriteBarrier((&___p_0), value);
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(ElGamalParameters_t953082378, ___g_1)); }
	inline BigInteger_t921849256 * get_g_1() const { return ___g_1; }
	inline BigInteger_t921849256 ** get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(BigInteger_t921849256 * value)
	{
		___g_1 = value;
		Il2CppCodeGenWriteBarrier((&___g_1), value);
	}

	inline static int32_t get_offset_of_l_2() { return static_cast<int32_t>(offsetof(ElGamalParameters_t953082378, ___l_2)); }
	inline int32_t get_l_2() const { return ___l_2; }
	inline int32_t* get_address_of_l_2() { return &___l_2; }
	inline void set_l_2(int32_t value)
	{
		___l_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELGAMALPARAMETERS_T953082378_H
#ifndef DHVALIDATIONPARAMETERS_T1290447282_H
#define DHVALIDATIONPARAMETERS_T1290447282_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.DHValidationParameters
struct  DHValidationParameters_t1290447282  : public RuntimeObject
{
public:
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.DHValidationParameters::seed
	ByteU5BU5D_t4116647657* ___seed_0;
	// System.Int32 Org.BouncyCastle.Crypto.Parameters.DHValidationParameters::counter
	int32_t ___counter_1;

public:
	inline static int32_t get_offset_of_seed_0() { return static_cast<int32_t>(offsetof(DHValidationParameters_t1290447282, ___seed_0)); }
	inline ByteU5BU5D_t4116647657* get_seed_0() const { return ___seed_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_seed_0() { return &___seed_0; }
	inline void set_seed_0(ByteU5BU5D_t4116647657* value)
	{
		___seed_0 = value;
		Il2CppCodeGenWriteBarrier((&___seed_0), value);
	}

	inline static int32_t get_offset_of_counter_1() { return static_cast<int32_t>(offsetof(DHValidationParameters_t1290447282, ___counter_1)); }
	inline int32_t get_counter_1() const { return ___counter_1; }
	inline int32_t* get_address_of_counter_1() { return &___counter_1; }
	inline void set_counter_1(int32_t value)
	{
		___counter_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DHVALIDATIONPARAMETERS_T1290447282_H
#ifndef DSAPARAMETERS_T16985560_H
#define DSAPARAMETERS_T16985560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.DsaParameters
struct  DsaParameters_t16985560  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DsaParameters::p
	BigInteger_t921849256 * ___p_0;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DsaParameters::q
	BigInteger_t921849256 * ___q_1;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DsaParameters::g
	BigInteger_t921849256 * ___g_2;
	// Org.BouncyCastle.Crypto.Parameters.DsaValidationParameters Org.BouncyCastle.Crypto.Parameters.DsaParameters::validation
	DsaValidationParameters_t4208245698 * ___validation_3;

public:
	inline static int32_t get_offset_of_p_0() { return static_cast<int32_t>(offsetof(DsaParameters_t16985560, ___p_0)); }
	inline BigInteger_t921849256 * get_p_0() const { return ___p_0; }
	inline BigInteger_t921849256 ** get_address_of_p_0() { return &___p_0; }
	inline void set_p_0(BigInteger_t921849256 * value)
	{
		___p_0 = value;
		Il2CppCodeGenWriteBarrier((&___p_0), value);
	}

	inline static int32_t get_offset_of_q_1() { return static_cast<int32_t>(offsetof(DsaParameters_t16985560, ___q_1)); }
	inline BigInteger_t921849256 * get_q_1() const { return ___q_1; }
	inline BigInteger_t921849256 ** get_address_of_q_1() { return &___q_1; }
	inline void set_q_1(BigInteger_t921849256 * value)
	{
		___q_1 = value;
		Il2CppCodeGenWriteBarrier((&___q_1), value);
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(DsaParameters_t16985560, ___g_2)); }
	inline BigInteger_t921849256 * get_g_2() const { return ___g_2; }
	inline BigInteger_t921849256 ** get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(BigInteger_t921849256 * value)
	{
		___g_2 = value;
		Il2CppCodeGenWriteBarrier((&___g_2), value);
	}

	inline static int32_t get_offset_of_validation_3() { return static_cast<int32_t>(offsetof(DsaParameters_t16985560, ___validation_3)); }
	inline DsaValidationParameters_t4208245698 * get_validation_3() const { return ___validation_3; }
	inline DsaValidationParameters_t4208245698 ** get_address_of_validation_3() { return &___validation_3; }
	inline void set_validation_3(DsaValidationParameters_t4208245698 * value)
	{
		___validation_3 = value;
		Il2CppCodeGenWriteBarrier((&___validation_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSAPARAMETERS_T16985560_H
#ifndef KEYPARAMETER_T422996900_H
#define KEYPARAMETER_T422996900_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.KeyParameter
struct  KeyParameter_t422996900  : public RuntimeObject
{
public:
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.KeyParameter::key
	ByteU5BU5D_t4116647657* ___key_0;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyParameter_t422996900, ___key_0)); }
	inline ByteU5BU5D_t4116647657* get_key_0() const { return ___key_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(ByteU5BU5D_t4116647657* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYPARAMETER_T422996900_H
#ifndef AEADPARAMETERS_T2640412304_H
#define AEADPARAMETERS_T2640412304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.AeadParameters
struct  AeadParameters_t2640412304  : public RuntimeObject
{
public:
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.AeadParameters::associatedText
	ByteU5BU5D_t4116647657* ___associatedText_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.AeadParameters::nonce
	ByteU5BU5D_t4116647657* ___nonce_1;
	// Org.BouncyCastle.Crypto.Parameters.KeyParameter Org.BouncyCastle.Crypto.Parameters.AeadParameters::key
	KeyParameter_t422996900 * ___key_2;
	// System.Int32 Org.BouncyCastle.Crypto.Parameters.AeadParameters::macSize
	int32_t ___macSize_3;

public:
	inline static int32_t get_offset_of_associatedText_0() { return static_cast<int32_t>(offsetof(AeadParameters_t2640412304, ___associatedText_0)); }
	inline ByteU5BU5D_t4116647657* get_associatedText_0() const { return ___associatedText_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_associatedText_0() { return &___associatedText_0; }
	inline void set_associatedText_0(ByteU5BU5D_t4116647657* value)
	{
		___associatedText_0 = value;
		Il2CppCodeGenWriteBarrier((&___associatedText_0), value);
	}

	inline static int32_t get_offset_of_nonce_1() { return static_cast<int32_t>(offsetof(AeadParameters_t2640412304, ___nonce_1)); }
	inline ByteU5BU5D_t4116647657* get_nonce_1() const { return ___nonce_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_nonce_1() { return &___nonce_1; }
	inline void set_nonce_1(ByteU5BU5D_t4116647657* value)
	{
		___nonce_1 = value;
		Il2CppCodeGenWriteBarrier((&___nonce_1), value);
	}

	inline static int32_t get_offset_of_key_2() { return static_cast<int32_t>(offsetof(AeadParameters_t2640412304, ___key_2)); }
	inline KeyParameter_t422996900 * get_key_2() const { return ___key_2; }
	inline KeyParameter_t422996900 ** get_address_of_key_2() { return &___key_2; }
	inline void set_key_2(KeyParameter_t422996900 * value)
	{
		___key_2 = value;
		Il2CppCodeGenWriteBarrier((&___key_2), value);
	}

	inline static int32_t get_offset_of_macSize_3() { return static_cast<int32_t>(offsetof(AeadParameters_t2640412304, ___macSize_3)); }
	inline int32_t get_macSize_3() const { return ___macSize_3; }
	inline int32_t* get_address_of_macSize_3() { return &___macSize_3; }
	inline void set_macSize_3(int32_t value)
	{
		___macSize_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AEADPARAMETERS_T2640412304_H
#ifndef PARAMETERSWITHSBOX_T347204375_H
#define PARAMETERSWITHSBOX_T347204375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.ParametersWithSBox
struct  ParametersWithSBox_t347204375  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Parameters.ParametersWithSBox::parameters
	RuntimeObject* ___parameters_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.ParametersWithSBox::sBox
	ByteU5BU5D_t4116647657* ___sBox_1;

public:
	inline static int32_t get_offset_of_parameters_0() { return static_cast<int32_t>(offsetof(ParametersWithSBox_t347204375, ___parameters_0)); }
	inline RuntimeObject* get_parameters_0() const { return ___parameters_0; }
	inline RuntimeObject** get_address_of_parameters_0() { return &___parameters_0; }
	inline void set_parameters_0(RuntimeObject* value)
	{
		___parameters_0 = value;
		Il2CppCodeGenWriteBarrier((&___parameters_0), value);
	}

	inline static int32_t get_offset_of_sBox_1() { return static_cast<int32_t>(offsetof(ParametersWithSBox_t347204375, ___sBox_1)); }
	inline ByteU5BU5D_t4116647657* get_sBox_1() const { return ___sBox_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_sBox_1() { return &___sBox_1; }
	inline void set_sBox_1(ByteU5BU5D_t4116647657* value)
	{
		___sBox_1 = value;
		Il2CppCodeGenWriteBarrier((&___sBox_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERSWITHSBOX_T347204375_H
#ifndef PARAMETERSWITHSALT_T2046556642_H
#define PARAMETERSWITHSALT_T2046556642_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.ParametersWithSalt
struct  ParametersWithSalt_t2046556642  : public RuntimeObject
{
public:
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.ParametersWithSalt::salt
	ByteU5BU5D_t4116647657* ___salt_0;
	// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Parameters.ParametersWithSalt::parameters
	RuntimeObject* ___parameters_1;

public:
	inline static int32_t get_offset_of_salt_0() { return static_cast<int32_t>(offsetof(ParametersWithSalt_t2046556642, ___salt_0)); }
	inline ByteU5BU5D_t4116647657* get_salt_0() const { return ___salt_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_salt_0() { return &___salt_0; }
	inline void set_salt_0(ByteU5BU5D_t4116647657* value)
	{
		___salt_0 = value;
		Il2CppCodeGenWriteBarrier((&___salt_0), value);
	}

	inline static int32_t get_offset_of_parameters_1() { return static_cast<int32_t>(offsetof(ParametersWithSalt_t2046556642, ___parameters_1)); }
	inline RuntimeObject* get_parameters_1() const { return ___parameters_1; }
	inline RuntimeObject** get_address_of_parameters_1() { return &___parameters_1; }
	inline void set_parameters_1(RuntimeObject* value)
	{
		___parameters_1 = value;
		Il2CppCodeGenWriteBarrier((&___parameters_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERSWITHSALT_T2046556642_H
#ifndef TBCPADDING_T1569833110_H
#define TBCPADDING_T1569833110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Paddings.TbcPadding
struct  TbcPadding_t1569833110  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TBCPADDING_T1569833110_H
#ifndef X923PADDING_T2080630216_H
#define X923PADDING_T2080630216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Paddings.X923Padding
struct  X923Padding_t2080630216  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.Paddings.X923Padding::random
	SecureRandom_t3143858499 * ___random_0;

public:
	inline static int32_t get_offset_of_random_0() { return static_cast<int32_t>(offsetof(X923Padding_t2080630216, ___random_0)); }
	inline SecureRandom_t3143858499 * get_random_0() const { return ___random_0; }
	inline SecureRandom_t3143858499 ** get_address_of_random_0() { return &___random_0; }
	inline void set_random_0(SecureRandom_t3143858499 * value)
	{
		___random_0 = value;
		Il2CppCodeGenWriteBarrier((&___random_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X923PADDING_T2080630216_H
#ifndef ZEROBYTEPADDING_T194476146_H
#define ZEROBYTEPADDING_T194476146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Paddings.ZeroBytePadding
struct  ZeroBytePadding_t194476146  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZEROBYTEPADDING_T194476146_H
#ifndef MQVPUBLICPARAMETERS_T1490849081_H
#define MQVPUBLICPARAMETERS_T1490849081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.MqvPublicParameters
struct  MqvPublicParameters_t1490849081  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters Org.BouncyCastle.Crypto.Parameters.MqvPublicParameters::staticPublicKey
	ECPublicKeyParameters_t4285242833 * ___staticPublicKey_0;
	// Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters Org.BouncyCastle.Crypto.Parameters.MqvPublicParameters::ephemeralPublicKey
	ECPublicKeyParameters_t4285242833 * ___ephemeralPublicKey_1;

public:
	inline static int32_t get_offset_of_staticPublicKey_0() { return static_cast<int32_t>(offsetof(MqvPublicParameters_t1490849081, ___staticPublicKey_0)); }
	inline ECPublicKeyParameters_t4285242833 * get_staticPublicKey_0() const { return ___staticPublicKey_0; }
	inline ECPublicKeyParameters_t4285242833 ** get_address_of_staticPublicKey_0() { return &___staticPublicKey_0; }
	inline void set_staticPublicKey_0(ECPublicKeyParameters_t4285242833 * value)
	{
		___staticPublicKey_0 = value;
		Il2CppCodeGenWriteBarrier((&___staticPublicKey_0), value);
	}

	inline static int32_t get_offset_of_ephemeralPublicKey_1() { return static_cast<int32_t>(offsetof(MqvPublicParameters_t1490849081, ___ephemeralPublicKey_1)); }
	inline ECPublicKeyParameters_t4285242833 * get_ephemeralPublicKey_1() const { return ___ephemeralPublicKey_1; }
	inline ECPublicKeyParameters_t4285242833 ** get_address_of_ephemeralPublicKey_1() { return &___ephemeralPublicKey_1; }
	inline void set_ephemeralPublicKey_1(ECPublicKeyParameters_t4285242833 * value)
	{
		___ephemeralPublicKey_1 = value;
		Il2CppCodeGenWriteBarrier((&___ephemeralPublicKey_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQVPUBLICPARAMETERS_T1490849081_H
#ifndef MQVPRIVATEPARAMETERS_T2190777861_H
#define MQVPRIVATEPARAMETERS_T2190777861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.MqvPrivateParameters
struct  MqvPrivateParameters_t2190777861  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters Org.BouncyCastle.Crypto.Parameters.MqvPrivateParameters::staticPrivateKey
	ECPrivateKeyParameters_t3071696947 * ___staticPrivateKey_0;
	// Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters Org.BouncyCastle.Crypto.Parameters.MqvPrivateParameters::ephemeralPrivateKey
	ECPrivateKeyParameters_t3071696947 * ___ephemeralPrivateKey_1;
	// Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters Org.BouncyCastle.Crypto.Parameters.MqvPrivateParameters::ephemeralPublicKey
	ECPublicKeyParameters_t4285242833 * ___ephemeralPublicKey_2;

public:
	inline static int32_t get_offset_of_staticPrivateKey_0() { return static_cast<int32_t>(offsetof(MqvPrivateParameters_t2190777861, ___staticPrivateKey_0)); }
	inline ECPrivateKeyParameters_t3071696947 * get_staticPrivateKey_0() const { return ___staticPrivateKey_0; }
	inline ECPrivateKeyParameters_t3071696947 ** get_address_of_staticPrivateKey_0() { return &___staticPrivateKey_0; }
	inline void set_staticPrivateKey_0(ECPrivateKeyParameters_t3071696947 * value)
	{
		___staticPrivateKey_0 = value;
		Il2CppCodeGenWriteBarrier((&___staticPrivateKey_0), value);
	}

	inline static int32_t get_offset_of_ephemeralPrivateKey_1() { return static_cast<int32_t>(offsetof(MqvPrivateParameters_t2190777861, ___ephemeralPrivateKey_1)); }
	inline ECPrivateKeyParameters_t3071696947 * get_ephemeralPrivateKey_1() const { return ___ephemeralPrivateKey_1; }
	inline ECPrivateKeyParameters_t3071696947 ** get_address_of_ephemeralPrivateKey_1() { return &___ephemeralPrivateKey_1; }
	inline void set_ephemeralPrivateKey_1(ECPrivateKeyParameters_t3071696947 * value)
	{
		___ephemeralPrivateKey_1 = value;
		Il2CppCodeGenWriteBarrier((&___ephemeralPrivateKey_1), value);
	}

	inline static int32_t get_offset_of_ephemeralPublicKey_2() { return static_cast<int32_t>(offsetof(MqvPrivateParameters_t2190777861, ___ephemeralPublicKey_2)); }
	inline ECPublicKeyParameters_t4285242833 * get_ephemeralPublicKey_2() const { return ___ephemeralPublicKey_2; }
	inline ECPublicKeyParameters_t4285242833 ** get_address_of_ephemeralPublicKey_2() { return &___ephemeralPublicKey_2; }
	inline void set_ephemeralPublicKey_2(ECPublicKeyParameters_t4285242833 * value)
	{
		___ephemeralPublicKey_2 = value;
		Il2CppCodeGenWriteBarrier((&___ephemeralPublicKey_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQVPRIVATEPARAMETERS_T2190777861_H
#ifndef PARAMETERSWITHRANDOM_T1471120153_H
#define PARAMETERSWITHRANDOM_T1471120153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom
struct  ParametersWithRandom_t1471120153  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom::parameters
	RuntimeObject* ___parameters_0;
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom::random
	SecureRandom_t3143858499 * ___random_1;

public:
	inline static int32_t get_offset_of_parameters_0() { return static_cast<int32_t>(offsetof(ParametersWithRandom_t1471120153, ___parameters_0)); }
	inline RuntimeObject* get_parameters_0() const { return ___parameters_0; }
	inline RuntimeObject** get_address_of_parameters_0() { return &___parameters_0; }
	inline void set_parameters_0(RuntimeObject* value)
	{
		___parameters_0 = value;
		Il2CppCodeGenWriteBarrier((&___parameters_0), value);
	}

	inline static int32_t get_offset_of_random_1() { return static_cast<int32_t>(offsetof(ParametersWithRandom_t1471120153, ___random_1)); }
	inline SecureRandom_t3143858499 * get_random_1() const { return ___random_1; }
	inline SecureRandom_t3143858499 ** get_address_of_random_1() { return &___random_1; }
	inline void set_random_1(SecureRandom_t3143858499 * value)
	{
		___random_1 = value;
		Il2CppCodeGenWriteBarrier((&___random_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERSWITHRANDOM_T1471120153_H
#ifndef PARAMETERSWITHIV_T3927587429_H
#define PARAMETERSWITHIV_T3927587429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.ParametersWithIV
struct  ParametersWithIV_t3927587429  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::parameters
	RuntimeObject* ___parameters_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::iv
	ByteU5BU5D_t4116647657* ___iv_1;

public:
	inline static int32_t get_offset_of_parameters_0() { return static_cast<int32_t>(offsetof(ParametersWithIV_t3927587429, ___parameters_0)); }
	inline RuntimeObject* get_parameters_0() const { return ___parameters_0; }
	inline RuntimeObject** get_address_of_parameters_0() { return &___parameters_0; }
	inline void set_parameters_0(RuntimeObject* value)
	{
		___parameters_0 = value;
		Il2CppCodeGenWriteBarrier((&___parameters_0), value);
	}

	inline static int32_t get_offset_of_iv_1() { return static_cast<int32_t>(offsetof(ParametersWithIV_t3927587429, ___iv_1)); }
	inline ByteU5BU5D_t4116647657* get_iv_1() const { return ___iv_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_iv_1() { return &___iv_1; }
	inline void set_iv_1(ByteU5BU5D_t4116647657* value)
	{
		___iv_1 = value;
		Il2CppCodeGenWriteBarrier((&___iv_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERSWITHIV_T3927587429_H
#ifndef RSAKEYGENERATIONPARAMETERS_T2331870423_H
#define RSAKEYGENERATIONPARAMETERS_T2331870423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.RsaKeyGenerationParameters
struct  RsaKeyGenerationParameters_t2331870423  : public KeyGenerationParameters_t710742334
{
public:
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaKeyGenerationParameters::publicExponent
	BigInteger_t921849256 * ___publicExponent_2;
	// System.Int32 Org.BouncyCastle.Crypto.Parameters.RsaKeyGenerationParameters::certainty
	int32_t ___certainty_3;

public:
	inline static int32_t get_offset_of_publicExponent_2() { return static_cast<int32_t>(offsetof(RsaKeyGenerationParameters_t2331870423, ___publicExponent_2)); }
	inline BigInteger_t921849256 * get_publicExponent_2() const { return ___publicExponent_2; }
	inline BigInteger_t921849256 ** get_address_of_publicExponent_2() { return &___publicExponent_2; }
	inline void set_publicExponent_2(BigInteger_t921849256 * value)
	{
		___publicExponent_2 = value;
		Il2CppCodeGenWriteBarrier((&___publicExponent_2), value);
	}

	inline static int32_t get_offset_of_certainty_3() { return static_cast<int32_t>(offsetof(RsaKeyGenerationParameters_t2331870423, ___certainty_3)); }
	inline int32_t get_certainty_3() const { return ___certainty_3; }
	inline int32_t* get_address_of_certainty_3() { return &___certainty_3; }
	inline void set_certainty_3(int32_t value)
	{
		___certainty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAKEYGENERATIONPARAMETERS_T2331870423_H
#ifndef ECKEYPARAMETERS_T251955665_H
#define ECKEYPARAMETERS_T251955665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.ECKeyParameters
struct  ECKeyParameters_t251955665  : public AsymmetricKeyParameter_t1171635530
{
public:
	// System.String Org.BouncyCastle.Crypto.Parameters.ECKeyParameters::algorithm
	String_t* ___algorithm_2;
	// Org.BouncyCastle.Crypto.Parameters.ECDomainParameters Org.BouncyCastle.Crypto.Parameters.ECKeyParameters::parameters
	ECDomainParameters_t3853250996 * ___parameters_3;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Crypto.Parameters.ECKeyParameters::publicKeyParamSet
	DerObjectIdentifier_t1618836225 * ___publicKeyParamSet_4;

public:
	inline static int32_t get_offset_of_algorithm_2() { return static_cast<int32_t>(offsetof(ECKeyParameters_t251955665, ___algorithm_2)); }
	inline String_t* get_algorithm_2() const { return ___algorithm_2; }
	inline String_t** get_address_of_algorithm_2() { return &___algorithm_2; }
	inline void set_algorithm_2(String_t* value)
	{
		___algorithm_2 = value;
		Il2CppCodeGenWriteBarrier((&___algorithm_2), value);
	}

	inline static int32_t get_offset_of_parameters_3() { return static_cast<int32_t>(offsetof(ECKeyParameters_t251955665, ___parameters_3)); }
	inline ECDomainParameters_t3853250996 * get_parameters_3() const { return ___parameters_3; }
	inline ECDomainParameters_t3853250996 ** get_address_of_parameters_3() { return &___parameters_3; }
	inline void set_parameters_3(ECDomainParameters_t3853250996 * value)
	{
		___parameters_3 = value;
		Il2CppCodeGenWriteBarrier((&___parameters_3), value);
	}

	inline static int32_t get_offset_of_publicKeyParamSet_4() { return static_cast<int32_t>(offsetof(ECKeyParameters_t251955665, ___publicKeyParamSet_4)); }
	inline DerObjectIdentifier_t1618836225 * get_publicKeyParamSet_4() const { return ___publicKeyParamSet_4; }
	inline DerObjectIdentifier_t1618836225 ** get_address_of_publicKeyParamSet_4() { return &___publicKeyParamSet_4; }
	inline void set_publicKeyParamSet_4(DerObjectIdentifier_t1618836225 * value)
	{
		___publicKeyParamSet_4 = value;
		Il2CppCodeGenWriteBarrier((&___publicKeyParamSet_4), value);
	}
};

struct ECKeyParameters_t251955665_StaticFields
{
public:
	// System.String[] Org.BouncyCastle.Crypto.Parameters.ECKeyParameters::algorithms
	StringU5BU5D_t1281789340* ___algorithms_1;

public:
	inline static int32_t get_offset_of_algorithms_1() { return static_cast<int32_t>(offsetof(ECKeyParameters_t251955665_StaticFields, ___algorithms_1)); }
	inline StringU5BU5D_t1281789340* get_algorithms_1() const { return ___algorithms_1; }
	inline StringU5BU5D_t1281789340** get_address_of_algorithms_1() { return &___algorithms_1; }
	inline void set_algorithms_1(StringU5BU5D_t1281789340* value)
	{
		___algorithms_1 = value;
		Il2CppCodeGenWriteBarrier((&___algorithms_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ECKEYPARAMETERS_T251955665_H
#ifndef ECKEYGENERATIONPARAMETERS_T3056327382_H
#define ECKEYGENERATIONPARAMETERS_T3056327382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.ECKeyGenerationParameters
struct  ECKeyGenerationParameters_t3056327382  : public KeyGenerationParameters_t710742334
{
public:
	// Org.BouncyCastle.Crypto.Parameters.ECDomainParameters Org.BouncyCastle.Crypto.Parameters.ECKeyGenerationParameters::domainParams
	ECDomainParameters_t3853250996 * ___domainParams_2;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Crypto.Parameters.ECKeyGenerationParameters::publicKeyParamSet
	DerObjectIdentifier_t1618836225 * ___publicKeyParamSet_3;

public:
	inline static int32_t get_offset_of_domainParams_2() { return static_cast<int32_t>(offsetof(ECKeyGenerationParameters_t3056327382, ___domainParams_2)); }
	inline ECDomainParameters_t3853250996 * get_domainParams_2() const { return ___domainParams_2; }
	inline ECDomainParameters_t3853250996 ** get_address_of_domainParams_2() { return &___domainParams_2; }
	inline void set_domainParams_2(ECDomainParameters_t3853250996 * value)
	{
		___domainParams_2 = value;
		Il2CppCodeGenWriteBarrier((&___domainParams_2), value);
	}

	inline static int32_t get_offset_of_publicKeyParamSet_3() { return static_cast<int32_t>(offsetof(ECKeyGenerationParameters_t3056327382, ___publicKeyParamSet_3)); }
	inline DerObjectIdentifier_t1618836225 * get_publicKeyParamSet_3() const { return ___publicKeyParamSet_3; }
	inline DerObjectIdentifier_t1618836225 ** get_address_of_publicKeyParamSet_3() { return &___publicKeyParamSet_3; }
	inline void set_publicKeyParamSet_3(DerObjectIdentifier_t1618836225 * value)
	{
		___publicKeyParamSet_3 = value;
		Il2CppCodeGenWriteBarrier((&___publicKeyParamSet_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ECKEYGENERATIONPARAMETERS_T3056327382_H
#ifndef BYTEQUEUESTREAM_T837875075_H
#define BYTEQUEUESTREAM_T837875075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Tls.ByteQueueStream
struct  ByteQueueStream_t837875075  : public Stream_t1273022909
{
public:
	// Org.BouncyCastle.Crypto.Tls.ByteQueue Org.BouncyCastle.Crypto.Tls.ByteQueueStream::buffer
	ByteQueue_t3132735923 * ___buffer_1;

public:
	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(ByteQueueStream_t837875075, ___buffer_1)); }
	inline ByteQueue_t3132735923 * get_buffer_1() const { return ___buffer_1; }
	inline ByteQueue_t3132735923 ** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(ByteQueue_t3132735923 * value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTEQUEUESTREAM_T837875075_H
#ifndef DHKEYGENERATIONPARAMETERS_T1796030521_H
#define DHKEYGENERATIONPARAMETERS_T1796030521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.DHKeyGenerationParameters
struct  DHKeyGenerationParameters_t1796030521  : public KeyGenerationParameters_t710742334
{
public:
	// Org.BouncyCastle.Crypto.Parameters.DHParameters Org.BouncyCastle.Crypto.Parameters.DHKeyGenerationParameters::parameters
	DHParameters_t2329248715 * ___parameters_2;

public:
	inline static int32_t get_offset_of_parameters_2() { return static_cast<int32_t>(offsetof(DHKeyGenerationParameters_t1796030521, ___parameters_2)); }
	inline DHParameters_t2329248715 * get_parameters_2() const { return ___parameters_2; }
	inline DHParameters_t2329248715 ** get_address_of_parameters_2() { return &___parameters_2; }
	inline void set_parameters_2(DHParameters_t2329248715 * value)
	{
		___parameters_2 = value;
		Il2CppCodeGenWriteBarrier((&___parameters_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DHKEYGENERATIONPARAMETERS_T1796030521_H
#ifndef DHKEYPARAMETERS_T3185380503_H
#define DHKEYPARAMETERS_T3185380503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.DHKeyParameters
struct  DHKeyParameters_t3185380503  : public AsymmetricKeyParameter_t1171635530
{
public:
	// Org.BouncyCastle.Crypto.Parameters.DHParameters Org.BouncyCastle.Crypto.Parameters.DHKeyParameters::parameters
	DHParameters_t2329248715 * ___parameters_1;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Crypto.Parameters.DHKeyParameters::algorithmOid
	DerObjectIdentifier_t1618836225 * ___algorithmOid_2;

public:
	inline static int32_t get_offset_of_parameters_1() { return static_cast<int32_t>(offsetof(DHKeyParameters_t3185380503, ___parameters_1)); }
	inline DHParameters_t2329248715 * get_parameters_1() const { return ___parameters_1; }
	inline DHParameters_t2329248715 ** get_address_of_parameters_1() { return &___parameters_1; }
	inline void set_parameters_1(DHParameters_t2329248715 * value)
	{
		___parameters_1 = value;
		Il2CppCodeGenWriteBarrier((&___parameters_1), value);
	}

	inline static int32_t get_offset_of_algorithmOid_2() { return static_cast<int32_t>(offsetof(DHKeyParameters_t3185380503, ___algorithmOid_2)); }
	inline DerObjectIdentifier_t1618836225 * get_algorithmOid_2() const { return ___algorithmOid_2; }
	inline DerObjectIdentifier_t1618836225 ** get_address_of_algorithmOid_2() { return &___algorithmOid_2; }
	inline void set_algorithmOid_2(DerObjectIdentifier_t1618836225 * value)
	{
		___algorithmOid_2 = value;
		Il2CppCodeGenWriteBarrier((&___algorithmOid_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DHKEYPARAMETERS_T3185380503_H
#ifndef DSAKEYGENERATIONPARAMETERS_T1746285363_H
#define DSAKEYGENERATIONPARAMETERS_T1746285363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.DsaKeyGenerationParameters
struct  DsaKeyGenerationParameters_t1746285363  : public KeyGenerationParameters_t710742334
{
public:
	// Org.BouncyCastle.Crypto.Parameters.DsaParameters Org.BouncyCastle.Crypto.Parameters.DsaKeyGenerationParameters::parameters
	DsaParameters_t16985560 * ___parameters_2;

public:
	inline static int32_t get_offset_of_parameters_2() { return static_cast<int32_t>(offsetof(DsaKeyGenerationParameters_t1746285363, ___parameters_2)); }
	inline DsaParameters_t16985560 * get_parameters_2() const { return ___parameters_2; }
	inline DsaParameters_t16985560 ** get_address_of_parameters_2() { return &___parameters_2; }
	inline void set_parameters_2(DsaParameters_t16985560 * value)
	{
		___parameters_2 = value;
		Il2CppCodeGenWriteBarrier((&___parameters_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSAKEYGENERATIONPARAMETERS_T1746285363_H
#ifndef DESPARAMETERS_T3304161902_H
#define DESPARAMETERS_T3304161902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.DesParameters
struct  DesParameters_t3304161902  : public KeyParameter_t422996900
{
public:

public:
};

struct DesParameters_t3304161902_StaticFields
{
public:
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.DesParameters::DES_weak_keys
	ByteU5BU5D_t4116647657* ___DES_weak_keys_3;

public:
	inline static int32_t get_offset_of_DES_weak_keys_3() { return static_cast<int32_t>(offsetof(DesParameters_t3304161902_StaticFields, ___DES_weak_keys_3)); }
	inline ByteU5BU5D_t4116647657* get_DES_weak_keys_3() const { return ___DES_weak_keys_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_DES_weak_keys_3() { return &___DES_weak_keys_3; }
	inline void set_DES_weak_keys_3(ByteU5BU5D_t4116647657* value)
	{
		___DES_weak_keys_3 = value;
		Il2CppCodeGenWriteBarrier((&___DES_weak_keys_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESPARAMETERS_T3304161902_H
#ifndef DSAKEYPARAMETERS_T457954099_H
#define DSAKEYPARAMETERS_T457954099_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.DsaKeyParameters
struct  DsaKeyParameters_t457954099  : public AsymmetricKeyParameter_t1171635530
{
public:
	// Org.BouncyCastle.Crypto.Parameters.DsaParameters Org.BouncyCastle.Crypto.Parameters.DsaKeyParameters::parameters
	DsaParameters_t16985560 * ___parameters_1;

public:
	inline static int32_t get_offset_of_parameters_1() { return static_cast<int32_t>(offsetof(DsaKeyParameters_t457954099, ___parameters_1)); }
	inline DsaParameters_t16985560 * get_parameters_1() const { return ___parameters_1; }
	inline DsaParameters_t16985560 ** get_address_of_parameters_1() { return &___parameters_1; }
	inline void set_parameters_1(DsaParameters_t16985560 * value)
	{
		___parameters_1 = value;
		Il2CppCodeGenWriteBarrier((&___parameters_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSAKEYPARAMETERS_T457954099_H
#ifndef ABSTRACTTLSSIGNERCREDENTIALS_T3170715289_H
#define ABSTRACTTLSSIGNERCREDENTIALS_T3170715289_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Tls.AbstractTlsSignerCredentials
struct  AbstractTlsSignerCredentials_t3170715289  : public AbstractTlsCredentials_t880295237
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTTLSSIGNERCREDENTIALS_T3170715289_H
#ifndef GOST3410KEYPARAMETERS_T1373670768_H
#define GOST3410KEYPARAMETERS_T1373670768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.Gost3410KeyParameters
struct  Gost3410KeyParameters_t1373670768  : public AsymmetricKeyParameter_t1171635530
{
public:
	// Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters Org.BouncyCastle.Crypto.Parameters.Gost3410KeyParameters::parameters
	Gost3410Parameters_t831777799 * ___parameters_1;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Crypto.Parameters.Gost3410KeyParameters::publicKeyParamSet
	DerObjectIdentifier_t1618836225 * ___publicKeyParamSet_2;

public:
	inline static int32_t get_offset_of_parameters_1() { return static_cast<int32_t>(offsetof(Gost3410KeyParameters_t1373670768, ___parameters_1)); }
	inline Gost3410Parameters_t831777799 * get_parameters_1() const { return ___parameters_1; }
	inline Gost3410Parameters_t831777799 ** get_address_of_parameters_1() { return &___parameters_1; }
	inline void set_parameters_1(Gost3410Parameters_t831777799 * value)
	{
		___parameters_1 = value;
		Il2CppCodeGenWriteBarrier((&___parameters_1), value);
	}

	inline static int32_t get_offset_of_publicKeyParamSet_2() { return static_cast<int32_t>(offsetof(Gost3410KeyParameters_t1373670768, ___publicKeyParamSet_2)); }
	inline DerObjectIdentifier_t1618836225 * get_publicKeyParamSet_2() const { return ___publicKeyParamSet_2; }
	inline DerObjectIdentifier_t1618836225 ** get_address_of_publicKeyParamSet_2() { return &___publicKeyParamSet_2; }
	inline void set_publicKeyParamSet_2(DerObjectIdentifier_t1618836225 * value)
	{
		___publicKeyParamSet_2 = value;
		Il2CppCodeGenWriteBarrier((&___publicKeyParamSet_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GOST3410KEYPARAMETERS_T1373670768_H
#ifndef RSAKEYPARAMETERS_T2730774859_H
#define RSAKEYPARAMETERS_T2730774859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters
struct  RsaKeyParameters_t2730774859  : public AsymmetricKeyParameter_t1171635530
{
public:
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters::modulus
	BigInteger_t921849256 * ___modulus_1;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters::exponent
	BigInteger_t921849256 * ___exponent_2;

public:
	inline static int32_t get_offset_of_modulus_1() { return static_cast<int32_t>(offsetof(RsaKeyParameters_t2730774859, ___modulus_1)); }
	inline BigInteger_t921849256 * get_modulus_1() const { return ___modulus_1; }
	inline BigInteger_t921849256 ** get_address_of_modulus_1() { return &___modulus_1; }
	inline void set_modulus_1(BigInteger_t921849256 * value)
	{
		___modulus_1 = value;
		Il2CppCodeGenWriteBarrier((&___modulus_1), value);
	}

	inline static int32_t get_offset_of_exponent_2() { return static_cast<int32_t>(offsetof(RsaKeyParameters_t2730774859, ___exponent_2)); }
	inline BigInteger_t921849256 * get_exponent_2() const { return ___exponent_2; }
	inline BigInteger_t921849256 ** get_address_of_exponent_2() { return &___exponent_2; }
	inline void set_exponent_2(BigInteger_t921849256 * value)
	{
		___exponent_2 = value;
		Il2CppCodeGenWriteBarrier((&___exponent_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAKEYPARAMETERS_T2730774859_H
#ifndef ABSTRACTTLSCLIENT_T2745470937_H
#define ABSTRACTTLSCLIENT_T2745470937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Tls.AbstractTlsClient
struct  AbstractTlsClient_t2745470937  : public AbstractTlsPeer_t2592610270
{
public:
	// Org.BouncyCastle.Crypto.Tls.TlsCipherFactory Org.BouncyCastle.Crypto.Tls.AbstractTlsClient::mCipherFactory
	RuntimeObject* ___mCipherFactory_0;
	// Org.BouncyCastle.Crypto.Tls.TlsClientContext Org.BouncyCastle.Crypto.Tls.AbstractTlsClient::mContext
	RuntimeObject* ___mContext_1;
	// System.Collections.IList Org.BouncyCastle.Crypto.Tls.AbstractTlsClient::mSupportedSignatureAlgorithms
	RuntimeObject* ___mSupportedSignatureAlgorithms_2;
	// System.Int32[] Org.BouncyCastle.Crypto.Tls.AbstractTlsClient::mNamedCurves
	Int32U5BU5D_t385246372* ___mNamedCurves_3;
	// System.Byte[] Org.BouncyCastle.Crypto.Tls.AbstractTlsClient::mClientECPointFormats
	ByteU5BU5D_t4116647657* ___mClientECPointFormats_4;
	// System.Byte[] Org.BouncyCastle.Crypto.Tls.AbstractTlsClient::mServerECPointFormats
	ByteU5BU5D_t4116647657* ___mServerECPointFormats_5;
	// System.Int32 Org.BouncyCastle.Crypto.Tls.AbstractTlsClient::mSelectedCipherSuite
	int32_t ___mSelectedCipherSuite_6;
	// System.Int16 Org.BouncyCastle.Crypto.Tls.AbstractTlsClient::mSelectedCompressionMethod
	int16_t ___mSelectedCompressionMethod_7;
	// System.Collections.Generic.List`1<System.String> Org.BouncyCastle.Crypto.Tls.AbstractTlsClient::<HostNames>k__BackingField
	List_1_t3319525431 * ___U3CHostNamesU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_mCipherFactory_0() { return static_cast<int32_t>(offsetof(AbstractTlsClient_t2745470937, ___mCipherFactory_0)); }
	inline RuntimeObject* get_mCipherFactory_0() const { return ___mCipherFactory_0; }
	inline RuntimeObject** get_address_of_mCipherFactory_0() { return &___mCipherFactory_0; }
	inline void set_mCipherFactory_0(RuntimeObject* value)
	{
		___mCipherFactory_0 = value;
		Il2CppCodeGenWriteBarrier((&___mCipherFactory_0), value);
	}

	inline static int32_t get_offset_of_mContext_1() { return static_cast<int32_t>(offsetof(AbstractTlsClient_t2745470937, ___mContext_1)); }
	inline RuntimeObject* get_mContext_1() const { return ___mContext_1; }
	inline RuntimeObject** get_address_of_mContext_1() { return &___mContext_1; }
	inline void set_mContext_1(RuntimeObject* value)
	{
		___mContext_1 = value;
		Il2CppCodeGenWriteBarrier((&___mContext_1), value);
	}

	inline static int32_t get_offset_of_mSupportedSignatureAlgorithms_2() { return static_cast<int32_t>(offsetof(AbstractTlsClient_t2745470937, ___mSupportedSignatureAlgorithms_2)); }
	inline RuntimeObject* get_mSupportedSignatureAlgorithms_2() const { return ___mSupportedSignatureAlgorithms_2; }
	inline RuntimeObject** get_address_of_mSupportedSignatureAlgorithms_2() { return &___mSupportedSignatureAlgorithms_2; }
	inline void set_mSupportedSignatureAlgorithms_2(RuntimeObject* value)
	{
		___mSupportedSignatureAlgorithms_2 = value;
		Il2CppCodeGenWriteBarrier((&___mSupportedSignatureAlgorithms_2), value);
	}

	inline static int32_t get_offset_of_mNamedCurves_3() { return static_cast<int32_t>(offsetof(AbstractTlsClient_t2745470937, ___mNamedCurves_3)); }
	inline Int32U5BU5D_t385246372* get_mNamedCurves_3() const { return ___mNamedCurves_3; }
	inline Int32U5BU5D_t385246372** get_address_of_mNamedCurves_3() { return &___mNamedCurves_3; }
	inline void set_mNamedCurves_3(Int32U5BU5D_t385246372* value)
	{
		___mNamedCurves_3 = value;
		Il2CppCodeGenWriteBarrier((&___mNamedCurves_3), value);
	}

	inline static int32_t get_offset_of_mClientECPointFormats_4() { return static_cast<int32_t>(offsetof(AbstractTlsClient_t2745470937, ___mClientECPointFormats_4)); }
	inline ByteU5BU5D_t4116647657* get_mClientECPointFormats_4() const { return ___mClientECPointFormats_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_mClientECPointFormats_4() { return &___mClientECPointFormats_4; }
	inline void set_mClientECPointFormats_4(ByteU5BU5D_t4116647657* value)
	{
		___mClientECPointFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___mClientECPointFormats_4), value);
	}

	inline static int32_t get_offset_of_mServerECPointFormats_5() { return static_cast<int32_t>(offsetof(AbstractTlsClient_t2745470937, ___mServerECPointFormats_5)); }
	inline ByteU5BU5D_t4116647657* get_mServerECPointFormats_5() const { return ___mServerECPointFormats_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_mServerECPointFormats_5() { return &___mServerECPointFormats_5; }
	inline void set_mServerECPointFormats_5(ByteU5BU5D_t4116647657* value)
	{
		___mServerECPointFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___mServerECPointFormats_5), value);
	}

	inline static int32_t get_offset_of_mSelectedCipherSuite_6() { return static_cast<int32_t>(offsetof(AbstractTlsClient_t2745470937, ___mSelectedCipherSuite_6)); }
	inline int32_t get_mSelectedCipherSuite_6() const { return ___mSelectedCipherSuite_6; }
	inline int32_t* get_address_of_mSelectedCipherSuite_6() { return &___mSelectedCipherSuite_6; }
	inline void set_mSelectedCipherSuite_6(int32_t value)
	{
		___mSelectedCipherSuite_6 = value;
	}

	inline static int32_t get_offset_of_mSelectedCompressionMethod_7() { return static_cast<int32_t>(offsetof(AbstractTlsClient_t2745470937, ___mSelectedCompressionMethod_7)); }
	inline int16_t get_mSelectedCompressionMethod_7() const { return ___mSelectedCompressionMethod_7; }
	inline int16_t* get_address_of_mSelectedCompressionMethod_7() { return &___mSelectedCompressionMethod_7; }
	inline void set_mSelectedCompressionMethod_7(int16_t value)
	{
		___mSelectedCompressionMethod_7 = value;
	}

	inline static int32_t get_offset_of_U3CHostNamesU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(AbstractTlsClient_t2745470937, ___U3CHostNamesU3Ek__BackingField_8)); }
	inline List_1_t3319525431 * get_U3CHostNamesU3Ek__BackingField_8() const { return ___U3CHostNamesU3Ek__BackingField_8; }
	inline List_1_t3319525431 ** get_address_of_U3CHostNamesU3Ek__BackingField_8() { return &___U3CHostNamesU3Ek__BackingField_8; }
	inline void set_U3CHostNamesU3Ek__BackingField_8(List_1_t3319525431 * value)
	{
		___U3CHostNamesU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CHostNamesU3Ek__BackingField_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTTLSCLIENT_T2745470937_H
#ifndef RC5PARAMETERS_T1324113849_H
#define RC5PARAMETERS_T1324113849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.RC5Parameters
struct  RC5Parameters_t1324113849  : public KeyParameter_t422996900
{
public:
	// System.Int32 Org.BouncyCastle.Crypto.Parameters.RC5Parameters::rounds
	int32_t ___rounds_1;

public:
	inline static int32_t get_offset_of_rounds_1() { return static_cast<int32_t>(offsetof(RC5Parameters_t1324113849, ___rounds_1)); }
	inline int32_t get_rounds_1() const { return ___rounds_1; }
	inline int32_t* get_address_of_rounds_1() { return &___rounds_1; }
	inline void set_rounds_1(int32_t value)
	{
		___rounds_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC5PARAMETERS_T1324113849_H
#ifndef RC2PARAMETERS_T681664441_H
#define RC2PARAMETERS_T681664441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.RC2Parameters
struct  RC2Parameters_t681664441  : public KeyParameter_t422996900
{
public:
	// System.Int32 Org.BouncyCastle.Crypto.Parameters.RC2Parameters::bits
	int32_t ___bits_1;

public:
	inline static int32_t get_offset_of_bits_1() { return static_cast<int32_t>(offsetof(RC2Parameters_t681664441, ___bits_1)); }
	inline int32_t get_bits_1() const { return ___bits_1; }
	inline int32_t* get_address_of_bits_1() { return &___bits_1; }
	inline void set_bits_1(int32_t value)
	{
		___bits_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC2PARAMETERS_T681664441_H
#ifndef IESWITHCIPHERPARAMETERS_T3167900167_H
#define IESWITHCIPHERPARAMETERS_T3167900167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.IesWithCipherParameters
struct  IesWithCipherParameters_t3167900167  : public IesParameters_t1750939157
{
public:
	// System.Int32 Org.BouncyCastle.Crypto.Parameters.IesWithCipherParameters::cipherKeySize
	int32_t ___cipherKeySize_3;

public:
	inline static int32_t get_offset_of_cipherKeySize_3() { return static_cast<int32_t>(offsetof(IesWithCipherParameters_t3167900167, ___cipherKeySize_3)); }
	inline int32_t get_cipherKeySize_3() const { return ___cipherKeySize_3; }
	inline int32_t* get_address_of_cipherKeySize_3() { return &___cipherKeySize_3; }
	inline void set_cipherKeySize_3(int32_t value)
	{
		___cipherKeySize_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IESWITHCIPHERPARAMETERS_T3167900167_H
#ifndef ABSTRACTTLSAGREEMENTCREDENTIALS_T3807979808_H
#define ABSTRACTTLSAGREEMENTCREDENTIALS_T3807979808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Tls.AbstractTlsAgreementCredentials
struct  AbstractTlsAgreementCredentials_t3807979808  : public AbstractTlsCredentials_t880295237
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTTLSAGREEMENTCREDENTIALS_T3807979808_H
#ifndef ELGAMALKEYPARAMETERS_T796414783_H
#define ELGAMALKEYPARAMETERS_T796414783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.ElGamalKeyParameters
struct  ElGamalKeyParameters_t796414783  : public AsymmetricKeyParameter_t1171635530
{
public:
	// Org.BouncyCastle.Crypto.Parameters.ElGamalParameters Org.BouncyCastle.Crypto.Parameters.ElGamalKeyParameters::parameters
	ElGamalParameters_t953082378 * ___parameters_1;

public:
	inline static int32_t get_offset_of_parameters_1() { return static_cast<int32_t>(offsetof(ElGamalKeyParameters_t796414783, ___parameters_1)); }
	inline ElGamalParameters_t953082378 * get_parameters_1() const { return ___parameters_1; }
	inline ElGamalParameters_t953082378 ** get_address_of_parameters_1() { return &___parameters_1; }
	inline void set_parameters_1(ElGamalParameters_t953082378 * value)
	{
		___parameters_1 = value;
		Il2CppCodeGenWriteBarrier((&___parameters_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELGAMALKEYPARAMETERS_T796414783_H
#ifndef ABSTRACTTLSSERVER_T740806599_H
#define ABSTRACTTLSSERVER_T740806599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Tls.AbstractTlsServer
struct  AbstractTlsServer_t740806599  : public AbstractTlsPeer_t2592610270
{
public:
	// Org.BouncyCastle.Crypto.Tls.TlsCipherFactory Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::mCipherFactory
	RuntimeObject* ___mCipherFactory_0;
	// Org.BouncyCastle.Crypto.Tls.TlsServerContext Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::mContext
	RuntimeObject* ___mContext_1;
	// Org.BouncyCastle.Crypto.Tls.ProtocolVersion Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::mClientVersion
	ProtocolVersion_t2693197969 * ___mClientVersion_2;
	// System.Int32[] Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::mOfferedCipherSuites
	Int32U5BU5D_t385246372* ___mOfferedCipherSuites_3;
	// System.Byte[] Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::mOfferedCompressionMethods
	ByteU5BU5D_t4116647657* ___mOfferedCompressionMethods_4;
	// System.Collections.IDictionary Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::mClientExtensions
	RuntimeObject* ___mClientExtensions_5;
	// System.Boolean Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::mEncryptThenMacOffered
	bool ___mEncryptThenMacOffered_6;
	// System.Int16 Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::mMaxFragmentLengthOffered
	int16_t ___mMaxFragmentLengthOffered_7;
	// System.Boolean Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::mTruncatedHMacOffered
	bool ___mTruncatedHMacOffered_8;
	// System.Collections.IList Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::mSupportedSignatureAlgorithms
	RuntimeObject* ___mSupportedSignatureAlgorithms_9;
	// System.Boolean Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::mEccCipherSuitesOffered
	bool ___mEccCipherSuitesOffered_10;
	// System.Int32[] Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::mNamedCurves
	Int32U5BU5D_t385246372* ___mNamedCurves_11;
	// System.Byte[] Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::mClientECPointFormats
	ByteU5BU5D_t4116647657* ___mClientECPointFormats_12;
	// System.Byte[] Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::mServerECPointFormats
	ByteU5BU5D_t4116647657* ___mServerECPointFormats_13;
	// Org.BouncyCastle.Crypto.Tls.ProtocolVersion Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::mServerVersion
	ProtocolVersion_t2693197969 * ___mServerVersion_14;
	// System.Int32 Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::mSelectedCipherSuite
	int32_t ___mSelectedCipherSuite_15;
	// System.Byte Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::mSelectedCompressionMethod
	uint8_t ___mSelectedCompressionMethod_16;
	// System.Collections.IDictionary Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::mServerExtensions
	RuntimeObject* ___mServerExtensions_17;

public:
	inline static int32_t get_offset_of_mCipherFactory_0() { return static_cast<int32_t>(offsetof(AbstractTlsServer_t740806599, ___mCipherFactory_0)); }
	inline RuntimeObject* get_mCipherFactory_0() const { return ___mCipherFactory_0; }
	inline RuntimeObject** get_address_of_mCipherFactory_0() { return &___mCipherFactory_0; }
	inline void set_mCipherFactory_0(RuntimeObject* value)
	{
		___mCipherFactory_0 = value;
		Il2CppCodeGenWriteBarrier((&___mCipherFactory_0), value);
	}

	inline static int32_t get_offset_of_mContext_1() { return static_cast<int32_t>(offsetof(AbstractTlsServer_t740806599, ___mContext_1)); }
	inline RuntimeObject* get_mContext_1() const { return ___mContext_1; }
	inline RuntimeObject** get_address_of_mContext_1() { return &___mContext_1; }
	inline void set_mContext_1(RuntimeObject* value)
	{
		___mContext_1 = value;
		Il2CppCodeGenWriteBarrier((&___mContext_1), value);
	}

	inline static int32_t get_offset_of_mClientVersion_2() { return static_cast<int32_t>(offsetof(AbstractTlsServer_t740806599, ___mClientVersion_2)); }
	inline ProtocolVersion_t2693197969 * get_mClientVersion_2() const { return ___mClientVersion_2; }
	inline ProtocolVersion_t2693197969 ** get_address_of_mClientVersion_2() { return &___mClientVersion_2; }
	inline void set_mClientVersion_2(ProtocolVersion_t2693197969 * value)
	{
		___mClientVersion_2 = value;
		Il2CppCodeGenWriteBarrier((&___mClientVersion_2), value);
	}

	inline static int32_t get_offset_of_mOfferedCipherSuites_3() { return static_cast<int32_t>(offsetof(AbstractTlsServer_t740806599, ___mOfferedCipherSuites_3)); }
	inline Int32U5BU5D_t385246372* get_mOfferedCipherSuites_3() const { return ___mOfferedCipherSuites_3; }
	inline Int32U5BU5D_t385246372** get_address_of_mOfferedCipherSuites_3() { return &___mOfferedCipherSuites_3; }
	inline void set_mOfferedCipherSuites_3(Int32U5BU5D_t385246372* value)
	{
		___mOfferedCipherSuites_3 = value;
		Il2CppCodeGenWriteBarrier((&___mOfferedCipherSuites_3), value);
	}

	inline static int32_t get_offset_of_mOfferedCompressionMethods_4() { return static_cast<int32_t>(offsetof(AbstractTlsServer_t740806599, ___mOfferedCompressionMethods_4)); }
	inline ByteU5BU5D_t4116647657* get_mOfferedCompressionMethods_4() const { return ___mOfferedCompressionMethods_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_mOfferedCompressionMethods_4() { return &___mOfferedCompressionMethods_4; }
	inline void set_mOfferedCompressionMethods_4(ByteU5BU5D_t4116647657* value)
	{
		___mOfferedCompressionMethods_4 = value;
		Il2CppCodeGenWriteBarrier((&___mOfferedCompressionMethods_4), value);
	}

	inline static int32_t get_offset_of_mClientExtensions_5() { return static_cast<int32_t>(offsetof(AbstractTlsServer_t740806599, ___mClientExtensions_5)); }
	inline RuntimeObject* get_mClientExtensions_5() const { return ___mClientExtensions_5; }
	inline RuntimeObject** get_address_of_mClientExtensions_5() { return &___mClientExtensions_5; }
	inline void set_mClientExtensions_5(RuntimeObject* value)
	{
		___mClientExtensions_5 = value;
		Il2CppCodeGenWriteBarrier((&___mClientExtensions_5), value);
	}

	inline static int32_t get_offset_of_mEncryptThenMacOffered_6() { return static_cast<int32_t>(offsetof(AbstractTlsServer_t740806599, ___mEncryptThenMacOffered_6)); }
	inline bool get_mEncryptThenMacOffered_6() const { return ___mEncryptThenMacOffered_6; }
	inline bool* get_address_of_mEncryptThenMacOffered_6() { return &___mEncryptThenMacOffered_6; }
	inline void set_mEncryptThenMacOffered_6(bool value)
	{
		___mEncryptThenMacOffered_6 = value;
	}

	inline static int32_t get_offset_of_mMaxFragmentLengthOffered_7() { return static_cast<int32_t>(offsetof(AbstractTlsServer_t740806599, ___mMaxFragmentLengthOffered_7)); }
	inline int16_t get_mMaxFragmentLengthOffered_7() const { return ___mMaxFragmentLengthOffered_7; }
	inline int16_t* get_address_of_mMaxFragmentLengthOffered_7() { return &___mMaxFragmentLengthOffered_7; }
	inline void set_mMaxFragmentLengthOffered_7(int16_t value)
	{
		___mMaxFragmentLengthOffered_7 = value;
	}

	inline static int32_t get_offset_of_mTruncatedHMacOffered_8() { return static_cast<int32_t>(offsetof(AbstractTlsServer_t740806599, ___mTruncatedHMacOffered_8)); }
	inline bool get_mTruncatedHMacOffered_8() const { return ___mTruncatedHMacOffered_8; }
	inline bool* get_address_of_mTruncatedHMacOffered_8() { return &___mTruncatedHMacOffered_8; }
	inline void set_mTruncatedHMacOffered_8(bool value)
	{
		___mTruncatedHMacOffered_8 = value;
	}

	inline static int32_t get_offset_of_mSupportedSignatureAlgorithms_9() { return static_cast<int32_t>(offsetof(AbstractTlsServer_t740806599, ___mSupportedSignatureAlgorithms_9)); }
	inline RuntimeObject* get_mSupportedSignatureAlgorithms_9() const { return ___mSupportedSignatureAlgorithms_9; }
	inline RuntimeObject** get_address_of_mSupportedSignatureAlgorithms_9() { return &___mSupportedSignatureAlgorithms_9; }
	inline void set_mSupportedSignatureAlgorithms_9(RuntimeObject* value)
	{
		___mSupportedSignatureAlgorithms_9 = value;
		Il2CppCodeGenWriteBarrier((&___mSupportedSignatureAlgorithms_9), value);
	}

	inline static int32_t get_offset_of_mEccCipherSuitesOffered_10() { return static_cast<int32_t>(offsetof(AbstractTlsServer_t740806599, ___mEccCipherSuitesOffered_10)); }
	inline bool get_mEccCipherSuitesOffered_10() const { return ___mEccCipherSuitesOffered_10; }
	inline bool* get_address_of_mEccCipherSuitesOffered_10() { return &___mEccCipherSuitesOffered_10; }
	inline void set_mEccCipherSuitesOffered_10(bool value)
	{
		___mEccCipherSuitesOffered_10 = value;
	}

	inline static int32_t get_offset_of_mNamedCurves_11() { return static_cast<int32_t>(offsetof(AbstractTlsServer_t740806599, ___mNamedCurves_11)); }
	inline Int32U5BU5D_t385246372* get_mNamedCurves_11() const { return ___mNamedCurves_11; }
	inline Int32U5BU5D_t385246372** get_address_of_mNamedCurves_11() { return &___mNamedCurves_11; }
	inline void set_mNamedCurves_11(Int32U5BU5D_t385246372* value)
	{
		___mNamedCurves_11 = value;
		Il2CppCodeGenWriteBarrier((&___mNamedCurves_11), value);
	}

	inline static int32_t get_offset_of_mClientECPointFormats_12() { return static_cast<int32_t>(offsetof(AbstractTlsServer_t740806599, ___mClientECPointFormats_12)); }
	inline ByteU5BU5D_t4116647657* get_mClientECPointFormats_12() const { return ___mClientECPointFormats_12; }
	inline ByteU5BU5D_t4116647657** get_address_of_mClientECPointFormats_12() { return &___mClientECPointFormats_12; }
	inline void set_mClientECPointFormats_12(ByteU5BU5D_t4116647657* value)
	{
		___mClientECPointFormats_12 = value;
		Il2CppCodeGenWriteBarrier((&___mClientECPointFormats_12), value);
	}

	inline static int32_t get_offset_of_mServerECPointFormats_13() { return static_cast<int32_t>(offsetof(AbstractTlsServer_t740806599, ___mServerECPointFormats_13)); }
	inline ByteU5BU5D_t4116647657* get_mServerECPointFormats_13() const { return ___mServerECPointFormats_13; }
	inline ByteU5BU5D_t4116647657** get_address_of_mServerECPointFormats_13() { return &___mServerECPointFormats_13; }
	inline void set_mServerECPointFormats_13(ByteU5BU5D_t4116647657* value)
	{
		___mServerECPointFormats_13 = value;
		Il2CppCodeGenWriteBarrier((&___mServerECPointFormats_13), value);
	}

	inline static int32_t get_offset_of_mServerVersion_14() { return static_cast<int32_t>(offsetof(AbstractTlsServer_t740806599, ___mServerVersion_14)); }
	inline ProtocolVersion_t2693197969 * get_mServerVersion_14() const { return ___mServerVersion_14; }
	inline ProtocolVersion_t2693197969 ** get_address_of_mServerVersion_14() { return &___mServerVersion_14; }
	inline void set_mServerVersion_14(ProtocolVersion_t2693197969 * value)
	{
		___mServerVersion_14 = value;
		Il2CppCodeGenWriteBarrier((&___mServerVersion_14), value);
	}

	inline static int32_t get_offset_of_mSelectedCipherSuite_15() { return static_cast<int32_t>(offsetof(AbstractTlsServer_t740806599, ___mSelectedCipherSuite_15)); }
	inline int32_t get_mSelectedCipherSuite_15() const { return ___mSelectedCipherSuite_15; }
	inline int32_t* get_address_of_mSelectedCipherSuite_15() { return &___mSelectedCipherSuite_15; }
	inline void set_mSelectedCipherSuite_15(int32_t value)
	{
		___mSelectedCipherSuite_15 = value;
	}

	inline static int32_t get_offset_of_mSelectedCompressionMethod_16() { return static_cast<int32_t>(offsetof(AbstractTlsServer_t740806599, ___mSelectedCompressionMethod_16)); }
	inline uint8_t get_mSelectedCompressionMethod_16() const { return ___mSelectedCompressionMethod_16; }
	inline uint8_t* get_address_of_mSelectedCompressionMethod_16() { return &___mSelectedCompressionMethod_16; }
	inline void set_mSelectedCompressionMethod_16(uint8_t value)
	{
		___mSelectedCompressionMethod_16 = value;
	}

	inline static int32_t get_offset_of_mServerExtensions_17() { return static_cast<int32_t>(offsetof(AbstractTlsServer_t740806599, ___mServerExtensions_17)); }
	inline RuntimeObject* get_mServerExtensions_17() const { return ___mServerExtensions_17; }
	inline RuntimeObject** get_address_of_mServerExtensions_17() { return &___mServerExtensions_17; }
	inline void set_mServerExtensions_17(RuntimeObject* value)
	{
		___mServerExtensions_17 = value;
		Il2CppCodeGenWriteBarrier((&___mServerExtensions_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTTLSSERVER_T740806599_H
#ifndef ABSTRACTTLSENCRYPTIONCREDENTIALS_T96855276_H
#define ABSTRACTTLSENCRYPTIONCREDENTIALS_T96855276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Tls.AbstractTlsEncryptionCredentials
struct  AbstractTlsEncryptionCredentials_t96855276  : public AbstractTlsCredentials_t880295237
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTTLSENCRYPTIONCREDENTIALS_T96855276_H
#ifndef ELGAMALKEYGENERATIONPARAMETERS_T2631989255_H
#define ELGAMALKEYGENERATIONPARAMETERS_T2631989255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.ElGamalKeyGenerationParameters
struct  ElGamalKeyGenerationParameters_t2631989255  : public KeyGenerationParameters_t710742334
{
public:
	// Org.BouncyCastle.Crypto.Parameters.ElGamalParameters Org.BouncyCastle.Crypto.Parameters.ElGamalKeyGenerationParameters::parameters
	ElGamalParameters_t953082378 * ___parameters_2;

public:
	inline static int32_t get_offset_of_parameters_2() { return static_cast<int32_t>(offsetof(ElGamalKeyGenerationParameters_t2631989255, ___parameters_2)); }
	inline ElGamalParameters_t953082378 * get_parameters_2() const { return ___parameters_2; }
	inline ElGamalParameters_t953082378 ** get_address_of_parameters_2() { return &___parameters_2; }
	inline void set_parameters_2(ElGamalParameters_t953082378 * value)
	{
		___parameters_2 = value;
		Il2CppCodeGenWriteBarrier((&___parameters_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELGAMALKEYGENERATIONPARAMETERS_T2631989255_H
#ifndef DESEDEPARAMETERS_T3803438593_H
#define DESEDEPARAMETERS_T3803438593_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.DesEdeParameters
struct  DesEdeParameters_t3803438593  : public DesParameters_t3304161902
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESEDEPARAMETERS_T3803438593_H
#ifndef GOST3410PUBLICKEYPARAMETERS_T391286147_H
#define GOST3410PUBLICKEYPARAMETERS_T391286147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.Gost3410PublicKeyParameters
struct  Gost3410PublicKeyParameters_t391286147  : public Gost3410KeyParameters_t1373670768
{
public:
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.Gost3410PublicKeyParameters::y
	BigInteger_t921849256 * ___y_3;

public:
	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Gost3410PublicKeyParameters_t391286147, ___y_3)); }
	inline BigInteger_t921849256 * get_y_3() const { return ___y_3; }
	inline BigInteger_t921849256 ** get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(BigInteger_t921849256 * value)
	{
		___y_3 = value;
		Il2CppCodeGenWriteBarrier((&___y_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GOST3410PUBLICKEYPARAMETERS_T391286147_H
#ifndef RSAPRIVATECRTKEYPARAMETERS_T4285616424_H
#define RSAPRIVATECRTKEYPARAMETERS_T4285616424_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters
struct  RsaPrivateCrtKeyParameters_t4285616424  : public RsaKeyParameters_t2730774859
{
public:
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters::e
	BigInteger_t921849256 * ___e_3;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters::p
	BigInteger_t921849256 * ___p_4;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters::q
	BigInteger_t921849256 * ___q_5;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters::dP
	BigInteger_t921849256 * ___dP_6;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters::dQ
	BigInteger_t921849256 * ___dQ_7;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters::qInv
	BigInteger_t921849256 * ___qInv_8;

public:
	inline static int32_t get_offset_of_e_3() { return static_cast<int32_t>(offsetof(RsaPrivateCrtKeyParameters_t4285616424, ___e_3)); }
	inline BigInteger_t921849256 * get_e_3() const { return ___e_3; }
	inline BigInteger_t921849256 ** get_address_of_e_3() { return &___e_3; }
	inline void set_e_3(BigInteger_t921849256 * value)
	{
		___e_3 = value;
		Il2CppCodeGenWriteBarrier((&___e_3), value);
	}

	inline static int32_t get_offset_of_p_4() { return static_cast<int32_t>(offsetof(RsaPrivateCrtKeyParameters_t4285616424, ___p_4)); }
	inline BigInteger_t921849256 * get_p_4() const { return ___p_4; }
	inline BigInteger_t921849256 ** get_address_of_p_4() { return &___p_4; }
	inline void set_p_4(BigInteger_t921849256 * value)
	{
		___p_4 = value;
		Il2CppCodeGenWriteBarrier((&___p_4), value);
	}

	inline static int32_t get_offset_of_q_5() { return static_cast<int32_t>(offsetof(RsaPrivateCrtKeyParameters_t4285616424, ___q_5)); }
	inline BigInteger_t921849256 * get_q_5() const { return ___q_5; }
	inline BigInteger_t921849256 ** get_address_of_q_5() { return &___q_5; }
	inline void set_q_5(BigInteger_t921849256 * value)
	{
		___q_5 = value;
		Il2CppCodeGenWriteBarrier((&___q_5), value);
	}

	inline static int32_t get_offset_of_dP_6() { return static_cast<int32_t>(offsetof(RsaPrivateCrtKeyParameters_t4285616424, ___dP_6)); }
	inline BigInteger_t921849256 * get_dP_6() const { return ___dP_6; }
	inline BigInteger_t921849256 ** get_address_of_dP_6() { return &___dP_6; }
	inline void set_dP_6(BigInteger_t921849256 * value)
	{
		___dP_6 = value;
		Il2CppCodeGenWriteBarrier((&___dP_6), value);
	}

	inline static int32_t get_offset_of_dQ_7() { return static_cast<int32_t>(offsetof(RsaPrivateCrtKeyParameters_t4285616424, ___dQ_7)); }
	inline BigInteger_t921849256 * get_dQ_7() const { return ___dQ_7; }
	inline BigInteger_t921849256 ** get_address_of_dQ_7() { return &___dQ_7; }
	inline void set_dQ_7(BigInteger_t921849256 * value)
	{
		___dQ_7 = value;
		Il2CppCodeGenWriteBarrier((&___dQ_7), value);
	}

	inline static int32_t get_offset_of_qInv_8() { return static_cast<int32_t>(offsetof(RsaPrivateCrtKeyParameters_t4285616424, ___qInv_8)); }
	inline BigInteger_t921849256 * get_qInv_8() const { return ___qInv_8; }
	inline BigInteger_t921849256 ** get_address_of_qInv_8() { return &___qInv_8; }
	inline void set_qInv_8(BigInteger_t921849256 * value)
	{
		___qInv_8 = value;
		Il2CppCodeGenWriteBarrier((&___qInv_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPRIVATECRTKEYPARAMETERS_T4285616424_H
#ifndef ECPRIVATEKEYPARAMETERS_T3071696947_H
#define ECPRIVATEKEYPARAMETERS_T3071696947_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters
struct  ECPrivateKeyParameters_t3071696947  : public ECKeyParameters_t251955665
{
public:
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters::d
	BigInteger_t921849256 * ___d_5;

public:
	inline static int32_t get_offset_of_d_5() { return static_cast<int32_t>(offsetof(ECPrivateKeyParameters_t3071696947, ___d_5)); }
	inline BigInteger_t921849256 * get_d_5() const { return ___d_5; }
	inline BigInteger_t921849256 ** get_address_of_d_5() { return &___d_5; }
	inline void set_d_5(BigInteger_t921849256 * value)
	{
		___d_5 = value;
		Il2CppCodeGenWriteBarrier((&___d_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ECPRIVATEKEYPARAMETERS_T3071696947_H
#ifndef ECPUBLICKEYPARAMETERS_T4285242833_H
#define ECPUBLICKEYPARAMETERS_T4285242833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters
struct  ECPublicKeyParameters_t4285242833  : public ECKeyParameters_t251955665
{
public:
	// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters::q
	ECPoint_t2689130122 * ___q_5;

public:
	inline static int32_t get_offset_of_q_5() { return static_cast<int32_t>(offsetof(ECPublicKeyParameters_t4285242833, ___q_5)); }
	inline ECPoint_t2689130122 * get_q_5() const { return ___q_5; }
	inline ECPoint_t2689130122 ** get_address_of_q_5() { return &___q_5; }
	inline void set_q_5(ECPoint_t2689130122 * value)
	{
		___q_5 = value;
		Il2CppCodeGenWriteBarrier((&___q_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ECPUBLICKEYPARAMETERS_T4285242833_H
#ifndef ELGAMALPUBLICKEYPARAMETERS_T3487048274_H
#define ELGAMALPUBLICKEYPARAMETERS_T3487048274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.ElGamalPublicKeyParameters
struct  ElGamalPublicKeyParameters_t3487048274  : public ElGamalKeyParameters_t796414783
{
public:
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.ElGamalPublicKeyParameters::y
	BigInteger_t921849256 * ___y_2;

public:
	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(ElGamalPublicKeyParameters_t3487048274, ___y_2)); }
	inline BigInteger_t921849256 * get_y_2() const { return ___y_2; }
	inline BigInteger_t921849256 ** get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(BigInteger_t921849256 * value)
	{
		___y_2 = value;
		Il2CppCodeGenWriteBarrier((&___y_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELGAMALPUBLICKEYPARAMETERS_T3487048274_H
#ifndef ELGAMALPRIVATEKEYPARAMETERS_T2966570136_H
#define ELGAMALPRIVATEKEYPARAMETERS_T2966570136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.ElGamalPrivateKeyParameters
struct  ElGamalPrivateKeyParameters_t2966570136  : public ElGamalKeyParameters_t796414783
{
public:
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.ElGamalPrivateKeyParameters::x
	BigInteger_t921849256 * ___x_2;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(ElGamalPrivateKeyParameters_t2966570136, ___x_2)); }
	inline BigInteger_t921849256 * get_x_2() const { return ___x_2; }
	inline BigInteger_t921849256 ** get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(BigInteger_t921849256 * value)
	{
		___x_2 = value;
		Il2CppCodeGenWriteBarrier((&___x_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELGAMALPRIVATEKEYPARAMETERS_T2966570136_H
#ifndef DSAPRIVATEKEYPARAMETERS_T2444447143_H
#define DSAPRIVATEKEYPARAMETERS_T2444447143_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.DsaPrivateKeyParameters
struct  DsaPrivateKeyParameters_t2444447143  : public DsaKeyParameters_t457954099
{
public:
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DsaPrivateKeyParameters::x
	BigInteger_t921849256 * ___x_2;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(DsaPrivateKeyParameters_t2444447143, ___x_2)); }
	inline BigInteger_t921849256 * get_x_2() const { return ___x_2; }
	inline BigInteger_t921849256 ** get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(BigInteger_t921849256 * value)
	{
		___x_2 = value;
		Il2CppCodeGenWriteBarrier((&___x_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSAPRIVATEKEYPARAMETERS_T2444447143_H
#ifndef DHPUBLICKEYPARAMETERS_T2771197758_H
#define DHPUBLICKEYPARAMETERS_T2771197758_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.DHPublicKeyParameters
struct  DHPublicKeyParameters_t2771197758  : public DHKeyParameters_t3185380503
{
public:
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DHPublicKeyParameters::y
	BigInteger_t921849256 * ___y_3;

public:
	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(DHPublicKeyParameters_t2771197758, ___y_3)); }
	inline BigInteger_t921849256 * get_y_3() const { return ___y_3; }
	inline BigInteger_t921849256 ** get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(BigInteger_t921849256 * value)
	{
		___y_3 = value;
		Il2CppCodeGenWriteBarrier((&___y_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DHPUBLICKEYPARAMETERS_T2771197758_H
#ifndef GOST3410PRIVATEKEYPARAMETERS_T1092129949_H
#define GOST3410PRIVATEKEYPARAMETERS_T1092129949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.Gost3410PrivateKeyParameters
struct  Gost3410PrivateKeyParameters_t1092129949  : public Gost3410KeyParameters_t1373670768
{
public:
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.Gost3410PrivateKeyParameters::x
	BigInteger_t921849256 * ___x_3;

public:
	inline static int32_t get_offset_of_x_3() { return static_cast<int32_t>(offsetof(Gost3410PrivateKeyParameters_t1092129949, ___x_3)); }
	inline BigInteger_t921849256 * get_x_3() const { return ___x_3; }
	inline BigInteger_t921849256 ** get_address_of_x_3() { return &___x_3; }
	inline void set_x_3(BigInteger_t921849256 * value)
	{
		___x_3 = value;
		Il2CppCodeGenWriteBarrier((&___x_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GOST3410PRIVATEKEYPARAMETERS_T1092129949_H
#ifndef DSAPUBLICKEYPARAMETERS_T1297369967_H
#define DSAPUBLICKEYPARAMETERS_T1297369967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.DsaPublicKeyParameters
struct  DsaPublicKeyParameters_t1297369967  : public DsaKeyParameters_t457954099
{
public:
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DsaPublicKeyParameters::y
	BigInteger_t921849256 * ___y_2;

public:
	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(DsaPublicKeyParameters_t1297369967, ___y_2)); }
	inline BigInteger_t921849256 * get_y_2() const { return ___y_2; }
	inline BigInteger_t921849256 ** get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(BigInteger_t921849256 * value)
	{
		___y_2 = value;
		Il2CppCodeGenWriteBarrier((&___y_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSAPUBLICKEYPARAMETERS_T1297369967_H
#ifndef DHPRIVATEKEYPARAMETERS_T3667759261_H
#define DHPRIVATEKEYPARAMETERS_T3667759261_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters
struct  DHPrivateKeyParameters_t3667759261  : public DHKeyParameters_t3185380503
{
public:
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters::x
	BigInteger_t921849256 * ___x_3;

public:
	inline static int32_t get_offset_of_x_3() { return static_cast<int32_t>(offsetof(DHPrivateKeyParameters_t3667759261, ___x_3)); }
	inline BigInteger_t921849256 * get_x_3() const { return ___x_3; }
	inline BigInteger_t921849256 ** get_address_of_x_3() { return &___x_3; }
	inline void set_x_3(BigInteger_t921849256 * value)
	{
		___x_3 = value;
		Il2CppCodeGenWriteBarrier((&___x_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DHPRIVATEKEYPARAMETERS_T3667759261_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2900 = { sizeof (TbcPadding_t1569833110), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2901 = { sizeof (X923Padding_t2080630216), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2901[1] = 
{
	X923Padding_t2080630216::get_offset_of_random_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2902 = { sizeof (ZeroBytePadding_t194476146), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2903 = { sizeof (AeadParameters_t2640412304), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2903[4] = 
{
	AeadParameters_t2640412304::get_offset_of_associatedText_0(),
	AeadParameters_t2640412304::get_offset_of_nonce_1(),
	AeadParameters_t2640412304::get_offset_of_key_2(),
	AeadParameters_t2640412304::get_offset_of_macSize_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2904 = { sizeof (DesEdeParameters_t3803438593), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2904[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2905 = { sizeof (DesParameters_t3304161902), -1, sizeof(DesParameters_t3304161902_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2905[3] = 
{
	0,
	0,
	DesParameters_t3304161902_StaticFields::get_offset_of_DES_weak_keys_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2906 = { sizeof (DHKeyGenerationParameters_t1796030521), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2906[1] = 
{
	DHKeyGenerationParameters_t1796030521::get_offset_of_parameters_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2907 = { sizeof (DHKeyParameters_t3185380503), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2907[2] = 
{
	DHKeyParameters_t3185380503::get_offset_of_parameters_1(),
	DHKeyParameters_t3185380503::get_offset_of_algorithmOid_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2908 = { sizeof (DHParameters_t2329248715), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2908[8] = 
{
	0,
	DHParameters_t2329248715::get_offset_of_p_1(),
	DHParameters_t2329248715::get_offset_of_g_2(),
	DHParameters_t2329248715::get_offset_of_q_3(),
	DHParameters_t2329248715::get_offset_of_j_4(),
	DHParameters_t2329248715::get_offset_of_m_5(),
	DHParameters_t2329248715::get_offset_of_l_6(),
	DHParameters_t2329248715::get_offset_of_validation_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2909 = { sizeof (DHPrivateKeyParameters_t3667759261), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2909[1] = 
{
	DHPrivateKeyParameters_t3667759261::get_offset_of_x_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2910 = { sizeof (DHPublicKeyParameters_t2771197758), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2910[1] = 
{
	DHPublicKeyParameters_t2771197758::get_offset_of_y_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2911 = { sizeof (DHValidationParameters_t1290447282), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2911[2] = 
{
	DHValidationParameters_t1290447282::get_offset_of_seed_0(),
	DHValidationParameters_t1290447282::get_offset_of_counter_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2912 = { sizeof (DsaKeyGenerationParameters_t1746285363), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2912[1] = 
{
	DsaKeyGenerationParameters_t1746285363::get_offset_of_parameters_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2913 = { sizeof (DsaKeyParameters_t457954099), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2913[1] = 
{
	DsaKeyParameters_t457954099::get_offset_of_parameters_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2914 = { sizeof (DsaParameters_t16985560), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2914[4] = 
{
	DsaParameters_t16985560::get_offset_of_p_0(),
	DsaParameters_t16985560::get_offset_of_q_1(),
	DsaParameters_t16985560::get_offset_of_g_2(),
	DsaParameters_t16985560::get_offset_of_validation_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2915 = { sizeof (DsaPrivateKeyParameters_t2444447143), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2915[1] = 
{
	DsaPrivateKeyParameters_t2444447143::get_offset_of_x_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2916 = { sizeof (DsaPublicKeyParameters_t1297369967), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2916[1] = 
{
	DsaPublicKeyParameters_t1297369967::get_offset_of_y_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2917 = { sizeof (DsaValidationParameters_t4208245698), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2917[3] = 
{
	DsaValidationParameters_t4208245698::get_offset_of_seed_0(),
	DsaValidationParameters_t4208245698::get_offset_of_counter_1(),
	DsaValidationParameters_t4208245698::get_offset_of_usageIndex_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2918 = { sizeof (ECDomainParameters_t3853250996), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2918[5] = 
{
	ECDomainParameters_t3853250996::get_offset_of_curve_0(),
	ECDomainParameters_t3853250996::get_offset_of_seed_1(),
	ECDomainParameters_t3853250996::get_offset_of_g_2(),
	ECDomainParameters_t3853250996::get_offset_of_n_3(),
	ECDomainParameters_t3853250996::get_offset_of_h_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2919 = { sizeof (ECKeyGenerationParameters_t3056327382), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2919[2] = 
{
	ECKeyGenerationParameters_t3056327382::get_offset_of_domainParams_2(),
	ECKeyGenerationParameters_t3056327382::get_offset_of_publicKeyParamSet_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2920 = { sizeof (ECKeyParameters_t251955665), -1, sizeof(ECKeyParameters_t251955665_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2920[4] = 
{
	ECKeyParameters_t251955665_StaticFields::get_offset_of_algorithms_1(),
	ECKeyParameters_t251955665::get_offset_of_algorithm_2(),
	ECKeyParameters_t251955665::get_offset_of_parameters_3(),
	ECKeyParameters_t251955665::get_offset_of_publicKeyParamSet_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2921 = { sizeof (ECPrivateKeyParameters_t3071696947), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2921[1] = 
{
	ECPrivateKeyParameters_t3071696947::get_offset_of_d_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2922 = { sizeof (ECPublicKeyParameters_t4285242833), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2922[1] = 
{
	ECPublicKeyParameters_t4285242833::get_offset_of_q_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2923 = { sizeof (ElGamalKeyGenerationParameters_t2631989255), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2923[1] = 
{
	ElGamalKeyGenerationParameters_t2631989255::get_offset_of_parameters_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2924 = { sizeof (ElGamalKeyParameters_t796414783), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2924[1] = 
{
	ElGamalKeyParameters_t796414783::get_offset_of_parameters_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2925 = { sizeof (ElGamalParameters_t953082378), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2925[3] = 
{
	ElGamalParameters_t953082378::get_offset_of_p_0(),
	ElGamalParameters_t953082378::get_offset_of_g_1(),
	ElGamalParameters_t953082378::get_offset_of_l_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2926 = { sizeof (ElGamalPrivateKeyParameters_t2966570136), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2926[1] = 
{
	ElGamalPrivateKeyParameters_t2966570136::get_offset_of_x_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2927 = { sizeof (ElGamalPublicKeyParameters_t3487048274), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2927[1] = 
{
	ElGamalPublicKeyParameters_t3487048274::get_offset_of_y_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2928 = { sizeof (Gost3410KeyParameters_t1373670768), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2928[2] = 
{
	Gost3410KeyParameters_t1373670768::get_offset_of_parameters_1(),
	Gost3410KeyParameters_t1373670768::get_offset_of_publicKeyParamSet_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2929 = { sizeof (Gost3410Parameters_t831777799), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2929[4] = 
{
	Gost3410Parameters_t831777799::get_offset_of_p_0(),
	Gost3410Parameters_t831777799::get_offset_of_q_1(),
	Gost3410Parameters_t831777799::get_offset_of_a_2(),
	Gost3410Parameters_t831777799::get_offset_of_validation_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2930 = { sizeof (Gost3410PrivateKeyParameters_t1092129949), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2930[1] = 
{
	Gost3410PrivateKeyParameters_t1092129949::get_offset_of_x_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2931 = { sizeof (Gost3410PublicKeyParameters_t391286147), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2931[1] = 
{
	Gost3410PublicKeyParameters_t391286147::get_offset_of_y_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2932 = { sizeof (Gost3410ValidationParameters_t2339624737), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2932[4] = 
{
	Gost3410ValidationParameters_t2339624737::get_offset_of_x0_0(),
	Gost3410ValidationParameters_t2339624737::get_offset_of_c_1(),
	Gost3410ValidationParameters_t2339624737::get_offset_of_x0L_2(),
	Gost3410ValidationParameters_t2339624737::get_offset_of_cL_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2933 = { sizeof (IesParameters_t1750939157), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2933[3] = 
{
	IesParameters_t1750939157::get_offset_of_derivation_0(),
	IesParameters_t1750939157::get_offset_of_encoding_1(),
	IesParameters_t1750939157::get_offset_of_macKeySize_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2934 = { sizeof (IesWithCipherParameters_t3167900167), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2934[1] = 
{
	IesWithCipherParameters_t3167900167::get_offset_of_cipherKeySize_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2935 = { sizeof (Iso18033KdfParameters_t2230401193), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2935[1] = 
{
	Iso18033KdfParameters_t2230401193::get_offset_of_seed_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2936 = { sizeof (KdfParameters_t4212552711), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2936[2] = 
{
	KdfParameters_t4212552711::get_offset_of_iv_0(),
	KdfParameters_t4212552711::get_offset_of_shared_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2937 = { sizeof (KeyParameter_t422996900), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2937[1] = 
{
	KeyParameter_t422996900::get_offset_of_key_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2938 = { sizeof (MqvPrivateParameters_t2190777861), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2938[3] = 
{
	MqvPrivateParameters_t2190777861::get_offset_of_staticPrivateKey_0(),
	MqvPrivateParameters_t2190777861::get_offset_of_ephemeralPrivateKey_1(),
	MqvPrivateParameters_t2190777861::get_offset_of_ephemeralPublicKey_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2939 = { sizeof (MqvPublicParameters_t1490849081), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2939[2] = 
{
	MqvPublicParameters_t1490849081::get_offset_of_staticPublicKey_0(),
	MqvPublicParameters_t1490849081::get_offset_of_ephemeralPublicKey_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2940 = { sizeof (ParametersWithIV_t3927587429), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2940[2] = 
{
	ParametersWithIV_t3927587429::get_offset_of_parameters_0(),
	ParametersWithIV_t3927587429::get_offset_of_iv_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2941 = { sizeof (ParametersWithRandom_t1471120153), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2941[2] = 
{
	ParametersWithRandom_t1471120153::get_offset_of_parameters_0(),
	ParametersWithRandom_t1471120153::get_offset_of_random_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2942 = { sizeof (ParametersWithSalt_t2046556642), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2942[2] = 
{
	ParametersWithSalt_t2046556642::get_offset_of_salt_0(),
	ParametersWithSalt_t2046556642::get_offset_of_parameters_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2943 = { sizeof (ParametersWithSBox_t347204375), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2943[2] = 
{
	ParametersWithSBox_t347204375::get_offset_of_parameters_0(),
	ParametersWithSBox_t347204375::get_offset_of_sBox_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2944 = { sizeof (RC2Parameters_t681664441), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2944[1] = 
{
	RC2Parameters_t681664441::get_offset_of_bits_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2945 = { sizeof (RC5Parameters_t1324113849), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2945[1] = 
{
	RC5Parameters_t1324113849::get_offset_of_rounds_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2946 = { sizeof (RsaBlindingParameters_t1676351004), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2946[2] = 
{
	RsaBlindingParameters_t1676351004::get_offset_of_publicKey_0(),
	RsaBlindingParameters_t1676351004::get_offset_of_blindingFactor_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2947 = { sizeof (RsaKeyGenerationParameters_t2331870423), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2947[2] = 
{
	RsaKeyGenerationParameters_t2331870423::get_offset_of_publicExponent_2(),
	RsaKeyGenerationParameters_t2331870423::get_offset_of_certainty_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2948 = { sizeof (RsaKeyParameters_t2730774859), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2948[2] = 
{
	RsaKeyParameters_t2730774859::get_offset_of_modulus_1(),
	RsaKeyParameters_t2730774859::get_offset_of_exponent_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2949 = { sizeof (RsaPrivateCrtKeyParameters_t4285616424), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2949[6] = 
{
	RsaPrivateCrtKeyParameters_t4285616424::get_offset_of_e_3(),
	RsaPrivateCrtKeyParameters_t4285616424::get_offset_of_p_4(),
	RsaPrivateCrtKeyParameters_t4285616424::get_offset_of_q_5(),
	RsaPrivateCrtKeyParameters_t4285616424::get_offset_of_dP_6(),
	RsaPrivateCrtKeyParameters_t4285616424::get_offset_of_dQ_7(),
	RsaPrivateCrtKeyParameters_t4285616424::get_offset_of_qInv_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2950 = { sizeof (PbeParametersGenerator_t219119578), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2950[3] = 
{
	PbeParametersGenerator_t219119578::get_offset_of_mPassword_0(),
	PbeParametersGenerator_t219119578::get_offset_of_mSalt_1(),
	PbeParametersGenerator_t219119578::get_offset_of_mIterationCount_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2951 = { sizeof (CryptoApiRandomGenerator_t760734569), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2951[1] = 
{
	CryptoApiRandomGenerator_t760734569::get_offset_of_rndProv_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2952 = { sizeof (DigestRandomGenerator_t3838956614), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2952[6] = 
{
	0,
	DigestRandomGenerator_t3838956614::get_offset_of_stateCounter_1(),
	DigestRandomGenerator_t3838956614::get_offset_of_seedCounter_2(),
	DigestRandomGenerator_t3838956614::get_offset_of_digest_3(),
	DigestRandomGenerator_t3838956614::get_offset_of_state_4(),
	DigestRandomGenerator_t3838956614::get_offset_of_seed_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2953 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2954 = { sizeof (DsaDigestSigner_t1679693331), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2954[3] = 
{
	DsaDigestSigner_t1679693331::get_offset_of_digest_0(),
	DsaDigestSigner_t1679693331::get_offset_of_dsaSigner_1(),
	DsaDigestSigner_t1679693331::get_offset_of_forSigning_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2955 = { sizeof (DsaSigner_t669348436), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2955[3] = 
{
	DsaSigner_t669348436::get_offset_of_kCalculator_0(),
	DsaSigner_t669348436::get_offset_of_key_1(),
	DsaSigner_t669348436::get_offset_of_random_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2956 = { sizeof (ECDsaSigner_t2074460791), -1, sizeof(ECDsaSigner_t2074460791_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2956[4] = 
{
	ECDsaSigner_t2074460791_StaticFields::get_offset_of_Eight_0(),
	ECDsaSigner_t2074460791::get_offset_of_kCalculator_1(),
	ECDsaSigner_t2074460791::get_offset_of_key_2(),
	ECDsaSigner_t2074460791::get_offset_of_random_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2957 = { sizeof (ECGost3410Signer_t2161909146), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2957[2] = 
{
	ECGost3410Signer_t2161909146::get_offset_of_key_0(),
	ECGost3410Signer_t2161909146::get_offset_of_random_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2958 = { sizeof (ECNRSigner_t2459142589), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2958[3] = 
{
	ECNRSigner_t2459142589::get_offset_of_forSigning_0(),
	ECNRSigner_t2459142589::get_offset_of_key_1(),
	ECNRSigner_t2459142589::get_offset_of_random_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2959 = { sizeof (GenericSigner_t1855289437), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2959[3] = 
{
	GenericSigner_t1855289437::get_offset_of_engine_0(),
	GenericSigner_t1855289437::get_offset_of_digest_1(),
	GenericSigner_t1855289437::get_offset_of_forSigning_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2960 = { sizeof (Gost3410DigestSigner_t148182715), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2960[3] = 
{
	Gost3410DigestSigner_t148182715::get_offset_of_digest_0(),
	Gost3410DigestSigner_t148182715::get_offset_of_dsaSigner_1(),
	Gost3410DigestSigner_t148182715::get_offset_of_forSigning_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2961 = { sizeof (Gost3410Signer_t2616394647), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2961[2] = 
{
	Gost3410Signer_t2616394647::get_offset_of_key_0(),
	Gost3410Signer_t2616394647::get_offset_of_random_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2962 = { sizeof (HMacDsaKCalculator_t1454375156), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2962[4] = 
{
	HMacDsaKCalculator_t1454375156::get_offset_of_hMac_0(),
	HMacDsaKCalculator_t1454375156::get_offset_of_K_1(),
	HMacDsaKCalculator_t1454375156::get_offset_of_V_2(),
	HMacDsaKCalculator_t1454375156::get_offset_of_n_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2963 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2964 = { sizeof (Iso9796d2Signer_t3767432082), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2964[19] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	Iso9796d2Signer_t3767432082::get_offset_of_digest_8(),
	Iso9796d2Signer_t3767432082::get_offset_of_cipher_9(),
	Iso9796d2Signer_t3767432082::get_offset_of_trailer_10(),
	Iso9796d2Signer_t3767432082::get_offset_of_keyBits_11(),
	Iso9796d2Signer_t3767432082::get_offset_of_block_12(),
	Iso9796d2Signer_t3767432082::get_offset_of_mBuf_13(),
	Iso9796d2Signer_t3767432082::get_offset_of_messageLength_14(),
	Iso9796d2Signer_t3767432082::get_offset_of_fullMessage_15(),
	Iso9796d2Signer_t3767432082::get_offset_of_recoveredMessage_16(),
	Iso9796d2Signer_t3767432082::get_offset_of_preSig_17(),
	Iso9796d2Signer_t3767432082::get_offset_of_preBlock_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2965 = { sizeof (IsoTrailers_t1519402221), -1, sizeof(IsoTrailers_t1519402221_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2965[12] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	IsoTrailers_t1519402221_StaticFields::get_offset_of_trailerMap_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2966 = { sizeof (PssSigner_t2988062466), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2966[15] = 
{
	0,
	PssSigner_t2988062466::get_offset_of_contentDigest1_1(),
	PssSigner_t2988062466::get_offset_of_contentDigest2_2(),
	PssSigner_t2988062466::get_offset_of_mgfDigest_3(),
	PssSigner_t2988062466::get_offset_of_cipher_4(),
	PssSigner_t2988062466::get_offset_of_random_5(),
	PssSigner_t2988062466::get_offset_of_hLen_6(),
	PssSigner_t2988062466::get_offset_of_mgfhLen_7(),
	PssSigner_t2988062466::get_offset_of_sLen_8(),
	PssSigner_t2988062466::get_offset_of_sSet_9(),
	PssSigner_t2988062466::get_offset_of_emBits_10(),
	PssSigner_t2988062466::get_offset_of_salt_11(),
	PssSigner_t2988062466::get_offset_of_mDash_12(),
	PssSigner_t2988062466::get_offset_of_block_13(),
	PssSigner_t2988062466::get_offset_of_trailer_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2967 = { sizeof (RandomDsaKCalculator_t3417229706), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2967[2] = 
{
	RandomDsaKCalculator_t3417229706::get_offset_of_q_0(),
	RandomDsaKCalculator_t3417229706::get_offset_of_random_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2968 = { sizeof (RsaDigestSigner_t1684496909), -1, sizeof(RsaDigestSigner_t1684496909_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2968[5] = 
{
	RsaDigestSigner_t1684496909::get_offset_of_rsaEngine_0(),
	RsaDigestSigner_t1684496909::get_offset_of_algId_1(),
	RsaDigestSigner_t1684496909::get_offset_of_digest_2(),
	RsaDigestSigner_t1684496909::get_offset_of_forSigning_3(),
	RsaDigestSigner_t1684496909_StaticFields::get_offset_of_oidMap_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2969 = { sizeof (X931Signer_t3161953861), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2969[15] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	X931Signer_t3161953861::get_offset_of_digest_9(),
	X931Signer_t3161953861::get_offset_of_cipher_10(),
	X931Signer_t3161953861::get_offset_of_kParam_11(),
	X931Signer_t3161953861::get_offset_of_trailer_12(),
	X931Signer_t3161953861::get_offset_of_keyBits_13(),
	X931Signer_t3161953861::get_offset_of_block_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2970 = { sizeof (AbstractTlsAgreementCredentials_t3807979808), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2971 = { sizeof (AbstractTlsCipherFactory_t2144958600), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2972 = { sizeof (AbstractTlsClient_t2745470937), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2972[9] = 
{
	AbstractTlsClient_t2745470937::get_offset_of_mCipherFactory_0(),
	AbstractTlsClient_t2745470937::get_offset_of_mContext_1(),
	AbstractTlsClient_t2745470937::get_offset_of_mSupportedSignatureAlgorithms_2(),
	AbstractTlsClient_t2745470937::get_offset_of_mNamedCurves_3(),
	AbstractTlsClient_t2745470937::get_offset_of_mClientECPointFormats_4(),
	AbstractTlsClient_t2745470937::get_offset_of_mServerECPointFormats_5(),
	AbstractTlsClient_t2745470937::get_offset_of_mSelectedCipherSuite_6(),
	AbstractTlsClient_t2745470937::get_offset_of_mSelectedCompressionMethod_7(),
	AbstractTlsClient_t2745470937::get_offset_of_U3CHostNamesU3Ek__BackingField_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2973 = { sizeof (AbstractTlsContext_t440842929), -1, sizeof(AbstractTlsContext_t440842929_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2973[8] = 
{
	AbstractTlsContext_t440842929_StaticFields::get_offset_of_counter_0(),
	AbstractTlsContext_t440842929::get_offset_of_mNonceRandom_1(),
	AbstractTlsContext_t440842929::get_offset_of_mSecureRandom_2(),
	AbstractTlsContext_t440842929::get_offset_of_mSecurityParameters_3(),
	AbstractTlsContext_t440842929::get_offset_of_mClientVersion_4(),
	AbstractTlsContext_t440842929::get_offset_of_mServerVersion_5(),
	AbstractTlsContext_t440842929::get_offset_of_mSession_6(),
	AbstractTlsContext_t440842929::get_offset_of_mUserObject_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2974 = { sizeof (AbstractTlsCredentials_t880295237), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2975 = { sizeof (AbstractTlsEncryptionCredentials_t96855276), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2976 = { sizeof (AbstractTlsKeyExchange_t2558703984), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2976[3] = 
{
	AbstractTlsKeyExchange_t2558703984::get_offset_of_mKeyExchange_0(),
	AbstractTlsKeyExchange_t2558703984::get_offset_of_mSupportedSignatureAlgorithms_1(),
	AbstractTlsKeyExchange_t2558703984::get_offset_of_mContext_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2977 = { sizeof (AbstractTlsPeer_t2592610270), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2978 = { sizeof (AbstractTlsServer_t740806599), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2978[18] = 
{
	AbstractTlsServer_t740806599::get_offset_of_mCipherFactory_0(),
	AbstractTlsServer_t740806599::get_offset_of_mContext_1(),
	AbstractTlsServer_t740806599::get_offset_of_mClientVersion_2(),
	AbstractTlsServer_t740806599::get_offset_of_mOfferedCipherSuites_3(),
	AbstractTlsServer_t740806599::get_offset_of_mOfferedCompressionMethods_4(),
	AbstractTlsServer_t740806599::get_offset_of_mClientExtensions_5(),
	AbstractTlsServer_t740806599::get_offset_of_mEncryptThenMacOffered_6(),
	AbstractTlsServer_t740806599::get_offset_of_mMaxFragmentLengthOffered_7(),
	AbstractTlsServer_t740806599::get_offset_of_mTruncatedHMacOffered_8(),
	AbstractTlsServer_t740806599::get_offset_of_mSupportedSignatureAlgorithms_9(),
	AbstractTlsServer_t740806599::get_offset_of_mEccCipherSuitesOffered_10(),
	AbstractTlsServer_t740806599::get_offset_of_mNamedCurves_11(),
	AbstractTlsServer_t740806599::get_offset_of_mClientECPointFormats_12(),
	AbstractTlsServer_t740806599::get_offset_of_mServerECPointFormats_13(),
	AbstractTlsServer_t740806599::get_offset_of_mServerVersion_14(),
	AbstractTlsServer_t740806599::get_offset_of_mSelectedCipherSuite_15(),
	AbstractTlsServer_t740806599::get_offset_of_mSelectedCompressionMethod_16(),
	AbstractTlsServer_t740806599::get_offset_of_mServerExtensions_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2979 = { sizeof (AbstractTlsSigner_t1138128163), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2979[1] = 
{
	AbstractTlsSigner_t1138128163::get_offset_of_mContext_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2980 = { sizeof (AbstractTlsSignerCredentials_t3170715289), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2981 = { sizeof (AlertDescription_t882269339), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2981[31] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2982 = { sizeof (AlertLevel_t2815103780), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2982[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2983 = { sizeof (AlwaysValidVerifyer_t3902044121), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2984 = { sizeof (ByteQueue_t3132735923), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2984[4] = 
{
	0,
	ByteQueue_t3132735923::get_offset_of_databuf_1(),
	ByteQueue_t3132735923::get_offset_of_skipped_2(),
	ByteQueue_t3132735923::get_offset_of_available_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2985 = { sizeof (ByteQueueStream_t837875075), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2985[1] = 
{
	ByteQueueStream_t837875075::get_offset_of_buffer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2986 = { sizeof (CertChainType_t980720681), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2986[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2987 = { sizeof (Certificate_t492959532), -1, sizeof(Certificate_t492959532_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2987[2] = 
{
	Certificate_t492959532_StaticFields::get_offset_of_EmptyChain_0(),
	Certificate_t492959532::get_offset_of_mCertificateList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2988 = { sizeof (CertificateRequest_t3306794044), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2988[3] = 
{
	CertificateRequest_t3306794044::get_offset_of_mCertificateTypes_0(),
	CertificateRequest_t3306794044::get_offset_of_mSupportedSignatureAlgorithms_1(),
	CertificateRequest_t3306794044::get_offset_of_mCertificateAuthorities_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2989 = { sizeof (CertificateStatus_t437074296), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2989[2] = 
{
	CertificateStatus_t437074296::get_offset_of_mStatusType_0(),
	CertificateStatus_t437074296::get_offset_of_mResponse_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2990 = { sizeof (CertificateStatusRequest_t3208974589), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2990[2] = 
{
	CertificateStatusRequest_t3208974589::get_offset_of_mStatusType_0(),
	CertificateStatusRequest_t3208974589::get_offset_of_mRequest_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2991 = { sizeof (CertificateStatusType_t2401043302), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2991[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2992 = { sizeof (Chacha20Poly1305_t3737814979), -1, sizeof(Chacha20Poly1305_t3737814979_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2992[6] = 
{
	Chacha20Poly1305_t3737814979_StaticFields::get_offset_of_Zeroes_0(),
	Chacha20Poly1305_t3737814979::get_offset_of_context_1(),
	Chacha20Poly1305_t3737814979::get_offset_of_encryptCipher_2(),
	Chacha20Poly1305_t3737814979::get_offset_of_decryptCipher_3(),
	Chacha20Poly1305_t3737814979::get_offset_of_encryptIV_4(),
	Chacha20Poly1305_t3737814979::get_offset_of_decryptIV_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2993 = { sizeof (ChangeCipherSpec_t1586362859), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2993[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2994 = { sizeof (CipherSuite_t993265412), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2994[270] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2995 = { sizeof (CipherType_t189716872), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2995[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2996 = { sizeof (ClientCertificateType_t3245646000), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2996[10] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2997 = { sizeof (CombinedHash_t1490040839), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2997[3] = 
{
	CombinedHash_t1490040839::get_offset_of_mContext_0(),
	CombinedHash_t1490040839::get_offset_of_mMd5_1(),
	CombinedHash_t1490040839::get_offset_of_mSha1_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2998 = { sizeof (CompressionMethod_t1759592129), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2998[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2999 = { sizeof (ConnectionEnd_t2389710447), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2999[2] = 
{
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
