/* FUN_006e2cff - 0x006e2cff in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_006e2cff(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  int iVar4;
  
  FUN_00879bb8();
  iVar4 = 0;
  while( true ) {
    iVar2 = 0;
    if (*(int *)(extraout_ECX + 0x40) != 0) {
      iVar2 = *(int *)(*(int *)(extraout_ECX + 0x40) + -4);
    }
    if (iVar2 <= iVar4) goto LAB_006e2d99;
    iVar2 = *(int *)(*(int *)(extraout_ECX + 0x40) + iVar4 * 8 + 4);
    *(int *)(unaff_EBP + -0x10) = iVar2;
    iVar1 = 0;
    if (iVar2 != 0) {
      InterlockedIncrement((LONG *)(iVar2 + 4));
      iVar1 = *(int *)(unaff_EBP + -0x10);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_006e3164(iVar4);
    iVar2 = (*DAT_0097b57c)(iVar2 * 0x10 + 0x14 + iVar1,*(undefined4 *)(unaff_EBP + 8),
                            *(undefined4 *)(unaff_EBP + 0xc));
    if (iVar2 != 0) break;
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_006eadbe(0);
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
    iVar4 = iVar4 + 1;
  }
  iVar2 = *(int *)(extraout_ECX + 0x34);
  if (iVar4 == iVar2) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_006eadbe(0);
    }
LAB_006e2d99:
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    if (-1 < iVar2) {
      *(undefined4 *)(*(int *)(*(int *)(extraout_ECX + 0x40) + 4 + iVar2 * 8) + 0x10) = 1;
    }
    *(int *)(extraout_ECX + 0x34) = iVar4;
    *(undefined4 *)(*(int *)(*(int *)(extraout_ECX + 0x40) + 4 + iVar4 * 8) + 0x10) = 1;
    FUN_004b3daf();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_006eadbe(0);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


