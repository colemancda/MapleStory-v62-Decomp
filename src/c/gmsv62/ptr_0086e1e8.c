/* ptr_0086e1e8 - 0x0086e1e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ptr_0086e1e8(void)

{
  char cVar1;
  int in_EAX;
  undefined4 uVar2;
  int iVar3;
  int unaff_EDI;
  
  iVar3 = unaff_EDI;
  _DAT_0097fb44 = unaff_EDI;
  if ((DAT_0097fb54 == 0) || (iVar3 = DAT_0097fb54, unaff_EDI == DAT_0097fb54)) {
    DAT_0097fb54 = iVar3;
    cVar1 = FUN_0086f5b0(&DAT_0097fa18,0x7d6,10,5,1);
    if (cVar1 != '\0') {
      return 1;
    }
    if (DAT_0097fc64 != 0) {
      uVar2 = FUN_00875080(&DAT_0096e380);
      FUN_0086cff0(DAT_0097fc64 + 0x24,uVar2);
    }
    if (*(int *)(DAT_0097fc64 + 4) == 0) {
      *(undefined4 *)(DAT_0097fc64 + 8) = 0x3f6;
      *(undefined4 *)(DAT_0097fc64 + 0xc) = 0xe6;
      return 1;
    }
  }
  else {
    iVar3 = 0;
    if (in_EAX != 0) {
      uVar2 = FUN_00875080(&DAT_0096e358);
      FUN_0086cff0(DAT_0097fc64 + 0x24,uVar2);
      iVar3 = DAT_0097fc64;
    }
    DAT_0097fb24 = 2;
    if (*(int *)(iVar3 + 4) == 0) {
      *(undefined4 *)(iVar3 + 8) = 0x3f6;
      *(undefined4 *)(DAT_0097fc64 + 0xc) = 0xe6;
      return 1;
    }
  }
  iVar3 = FUN_0086698a(0x3f6,0xe6);
  if (iVar3 != 0) {
    return 1;
  }
  if (DAT_0097fc64 != 0) {
    uVar2 = FUN_00875080(&DAT_0096e338,0x3f6,0xe6);
    FUN_0086cff0(DAT_0097fc64 + 0x24,uVar2);
  }
  *(undefined1 *)(DAT_0097fc64 + 0x23) = 1;
  return 0;
}


