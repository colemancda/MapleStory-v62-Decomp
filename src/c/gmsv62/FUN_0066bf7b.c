/* FUN_0066bf7b - 0x0066bf7b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0066bf7b(int param_1,int param_2,int param_3)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  
  sVar2 = FUN_0045f084(param_1 + 0x39,*(undefined4 *)(param_1 + 0x3d));
  if (sVar2 != 0) {
    FUN_0045f03e(param_1 + 0x33,*(undefined4 *)(param_1 + 0x35));
    if (param_3 == 0) {
      FUN_00413367(param_2 + 0x18,*(undefined4 *)(param_2 + 0x20));
      FUN_0045f084(param_1 + 0x59,*(undefined4 *)(param_1 + 0x5d));
    }
    bVar1 = FUN_0045f03e(param_1 + 0x33,*(undefined4 *)(param_1 + 0x35));
    if (bVar1 < 200) {
      FUN_00413367(param_1 + 0x91,*(undefined4 *)(param_1 + 0x99));
      __ftol();
    }
    uVar3 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x99) = uVar3;
  }
  return;
}


