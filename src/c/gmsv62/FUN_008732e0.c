/* FUN_008732e0 - 0x008732e0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_008732e0(HCRYPTPROV *param_1)

{
  if (param_1[1] != 0) {
    FUN_0087aa78(param_1[1]);
  }
  if (param_1[5] != 0) {
    FUN_0087aa78(param_1[5]);
  }
  if (param_1[3] != 0) {
    CryptDestroyHash(param_1[3]);
  }
  if (param_1[4] != 0) {
    CryptDestroyKey(param_1[4]);
  }
  if (param_1[0xf] != 0) {
    CryptDestroyKey(param_1[0xf]);
  }
  if (param_1[0x10] != 0) {
    CryptDestroyHash(param_1[0x10]);
  }
  if (*param_1 != 0) {
    CryptReleaseContext(*param_1,0);
  }
  return;
}


