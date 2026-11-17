/* FUN_004b5a10 - 0x004b5a10 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004b5a10(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_0045e2eb();
  FUN_00457d37(uVar2);
  bVar1 = *(int *)(param_1 + 0x18) != 0 || *(int *)(param_1 + 0x1c) != 0;
  FUN_00457cda(bVar1);
  if (bVar1) {
    FUN_00457fa0(param_1 + 0x18,8);
  }
  FUN_00457fa0(param_1 + 0x20,8);
  return;
}


