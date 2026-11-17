/* FUN_00434f04 - 0x00434f04 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00434f04(ushort *param_1)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = 0;
  if (param_1 != (ushort *)0x0) {
    uVar2 = *param_1;
    while (uVar2 != 0) {
      iVar1 = iVar1 * 0x20 + 1 + (uint)uVar2;
      param_1 = param_1 + 1;
      uVar2 = *param_1;
    }
  }
  return iVar1;
}


