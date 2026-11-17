/* FUN_0069892c - 0x0069892c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0069892c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00698b4e();
  if (iVar1 != 0) {
    iVar1 = FUN_00698bc4();
    if (iVar1 != 0) {
      uVar2 = 1;
      goto LAB_0069894a;
    }
  }
  uVar2 = 0;
LAB_0069894a:
  (**(code **)(*(int *)(*(int *)(param_1 + 0xb0) + 4) + 0x1c))(uVar2);
  FUN_008162ff();
  return;
}


