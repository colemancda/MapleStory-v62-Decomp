/* FUN_004c20da - 0x004c20da in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_004c20da(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00413367(param_1,*(undefined4 *)(param_1 + 8));
  if (((iVar1 / 10000 == 0xbf) && (param_2 / 10000 == 0xbe)) &&
     (uVar2 = __allshl(),
     ((uint)uVar2 & *(uint *)(param_1 + 0x1c0)) != 0 ||
     ((uint)((ulonglong)uVar2 >> 0x20) & *(uint *)(param_1 + 0x1c4)) != 0)) {
    return 1;
  }
  return 0;
}


