/* FUN_006708a2 - 0x006708a2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_006708a2(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0067177c();
  uVar2 = (uint)*(ushort *)(param_1 + 0x24) * 1000;
  return CONCAT31((int3)(uVar2 >> 8),uVar2 < (uint)(param_2 - iVar1));
}


