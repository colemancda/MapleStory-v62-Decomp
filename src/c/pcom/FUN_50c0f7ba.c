/* FUN_50c0f7ba - 0x50c0f7ba in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 __cdecl FUN_50c0f7ba(ushort *param_1)

{
  ushort uVar1;
  
  if ((param_1 != (ushort *)0x0) &&
     (((uVar1 = *param_1, uVar1 == 0x5c || (uVar1 == 0x2f)) ||
      ((((0x40 < uVar1 && (uVar1 < 0x5b)) || ((0x60 < uVar1 && (uVar1 < 0x7b)))) &&
       (param_1[1] == 0x3a)))))) {
    return 1;
  }
  return 0;
}


