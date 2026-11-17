/* FUN_0067e5d8 - 0x0067e5d8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0067e5d8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((*(int *)(param_1 + 0x9c) == 0) || (*(int *)(*(int *)(param_1 + 0x9c) + 0x524) == 0)) {
    FUN_007d1e08();
    iVar1 = FUN_00413367(param_1 + 0xd0,*(undefined4 *)(param_1 + 0xd8));
    if (-1 < iVar1) {
      uVar2 = FUN_004133b5();
      *(undefined4 *)(param_1 + 0xd8) = uVar2;
      FUN_0067b45c();
    }
    uVar3 = FUN_0042452b();
    FUN_0067d821(uVar3 & 0x7f);
  }
  return;
}


