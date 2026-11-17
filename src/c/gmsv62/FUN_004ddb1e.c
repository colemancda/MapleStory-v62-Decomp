/* FUN_004ddb1e - 0x004ddb1e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_004ddb1e(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0x21000001) {
    return 0x16;
  }
  if (iVar1 == 0x21000002) {
    return 0x17;
  }
  if (iVar1 == 0x21000003) {
    return 0x18;
  }
  if (iVar1 != 0x21000004) {
    if (iVar1 != 0x21000005) {
      return 0xffffffff;
    }
    return 0x23;
  }
  return 0x19;
}


