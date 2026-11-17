/* ptr_006c1bae - 0x006c1bae in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_006c1bae(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((DAT_00978358 == 0) || ((*(uint *)(DAT_00978358 + 0x52c) & 0xfffffffe) != 0x12)) &&
     (DAT_00979178 == 0)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x594) + 4);
    uVar2 = 1;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x594) + 4);
    uVar2 = 0;
  }
  (**(code **)(iVar1 + 0x1c))(uVar2);
  FUN_008162ff();
  return;
}


