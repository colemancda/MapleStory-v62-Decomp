/* FUN_007a442b - 0x007a442b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007a442b(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    iVar1 = FUN_007b3bb4();
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_007a44df();
    if (iVar1 != 0) {
      return;
    }
    uVar2 = FUN_0043f6fe();
    if (uVar2 < 0x80000000) {
      return;
    }
    iVar1 = FUN_007a3f46();
    if (iVar1 != 0) {
      return;
    }
  }
  uVar2 = FUN_0045e4b8();
  if (((uVar2 & 1) == 0) && (iVar1 = FUN_00429303(), (*(byte *)(iVar1 + 0x108) & 1) != 0)) {
    return;
  }
  iVar1 = FUN_00614c6f();
  if (iVar1 != 0) {
    iVar1 = FUN_007d1e08();
    if (iVar1 - *(int *)(param_1 + 0x2440) < 300) {
      return;
    }
    iVar1 = FUN_007d1e08();
    *(int *)(param_1 + 0x2440) = iVar1;
  }
  *(undefined4 *)
   ((-(uint)(*(int *)(param_1 + 0xd74) != 0) & *(int *)(param_1 + 0xd74) - 0xcU) + 0x15c) = 1;
  return;
}


