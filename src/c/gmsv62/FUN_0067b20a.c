/* FUN_0067b20a - 0x0067b20a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0067b20a(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((param_3 == 0) &&
     (iVar1 = FUN_00413367(param_1 + 0xc4,*(undefined4 *)(param_1 + 0xcc)), param_2 == iVar1)) {
    return;
  }
  uVar2 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0xcc) = uVar2;
  uVar3 = FUN_00413367(param_1 + 0xd0,*(undefined4 *)(param_1 + 0xd8));
  if (0x7fffffff < uVar3) {
    FUN_0067b45c();
  }
  return;
}


