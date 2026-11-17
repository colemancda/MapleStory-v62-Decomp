/* FUN_00697d1b - 0x00697d1b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00697d1b(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00697d73();
  if (iVar1 != 0) {
    iVar1 = FUN_00697de9();
    if (iVar1 != 0) {
      uVar2 = 1;
      goto LAB_00697d39;
    }
  }
  uVar2 = 0;
LAB_00697d39:
  (**(code **)(*(int *)(*(int *)(param_1 + 0xa8) + 4) + 0x1c))(uVar2);
  FUN_008162ff();
  return;
}


