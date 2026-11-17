/* FUN_007b19ba - 0x007b19ba in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007b19ba(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined1 local_c [4];
  int local_8;
  
  iVar2 = FUN_00455c59(local_c);
  iVar2 = *(int *)(iVar2 + 4);
  if (local_8 != 0) {
    FUN_0045e7c2(0);
    local_8 = 0;
  }
  iVar3 = iVar2 + 0x39;
  sVar1 = FUN_0045f084(iVar3,*(undefined4 *)(iVar2 + 0x3d));
  if (((sVar1 == 0x70) || (sVar1 = FUN_0045f084(iVar3,*(undefined4 *)(iVar2 + 0x3d)), sVar1 == 0x7a)
      ) || (sVar1 = FUN_0045f084(iVar3,*(undefined4 *)(iVar2 + 0x3d)), sVar1 == 0x84)) {
    sVar1 = FUN_0045f084(iVar3,*(undefined4 *)(iVar2 + 0x3d));
    if (sVar1 == 0x70) {
      iVar3 = 0x111704;
    }
    else if (sVar1 == 0x7a) {
      iVar3 = 0x129da5;
    }
    else {
      iVar3 = local_8;
      if (sVar1 == 0x84) {
        iVar3 = 0x142445;
      }
    }
    local_8 = 0;
    iVar2 = FUN_00650dae(iVar2,iVar3,&local_8);
    if (iVar2 != 0) {
      iVar2 = FUN_006509a1(iVar2);
      FUN_00413367(iVar2 + 0x13c,*(undefined4 *)(iVar2 + 0x144));
    }
  }
  return 0;
}


