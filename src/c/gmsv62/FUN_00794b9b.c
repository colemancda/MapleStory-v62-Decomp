/* FUN_00794b9b - 0x00794b9b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00794b9b(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  
  uVar2 = FUN_0042459a();
  iVar3 = FUN_004260d0(uVar2);
  if (iVar3 != 0) {
    uVar1 = *(uint *)(iVar3 + 0x1c);
    if (uVar1 == 0) {
      uVar4 = FUN_004133f0();
    }
    else {
      uVar4 = FUN_004133f0();
      uVar4 = uVar4 % uVar1;
    }
    iVar6 = 0;
    piVar5 = (int *)(iVar3 + 0x20);
    do {
      if ((int)uVar4 < *piVar5) break;
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar6 < 0x17);
    if ((0 < iVar6) && (iVar6 < 0x17)) {
      FUN_0084942e(iVar6);
    }
  }
  return;
}


