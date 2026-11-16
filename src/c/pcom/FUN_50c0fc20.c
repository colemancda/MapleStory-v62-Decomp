/* FUN_50c0fc20 - 0x50c0fc20 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


uint __cdecl FUN_50c0fc20(ushort *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_50c0fc62(*param_1);
  if (uVar1 < 0x10) {
    uVar2 = FUN_50c0fc62(param_1[1]);
    uVar2 = uVar2 | uVar1 << 4;
    uVar2 = ~-(uint)(0xff < uVar2) & uVar2;
  }
  else {
    uVar2 = uVar1 & 0xffff0000;
  }
  return uVar2;
}


