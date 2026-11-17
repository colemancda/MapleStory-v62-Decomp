/* FUN_004aa5f9 - 0x004aa5f9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004aa5f9(int param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_005265f8(0x10);
  bVar1 = true;
  if (iVar2 == 0) {
    iVar2 = FUN_005265f8(1);
    if ((iVar2 == 0) && (param_4 == 0)) {
      bVar1 = false;
    }
  }
  if (param_3 != 0) {
    bVar1 = false;
  }
  FUN_004aa31f();
  FUN_004aa4e2();
  FUN_004aa65a(param_2);
  if (!bVar1) {
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x40);
  }
  return;
}


