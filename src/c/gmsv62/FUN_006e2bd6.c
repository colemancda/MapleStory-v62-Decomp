/* FUN_006e2bd6 - 0x006e2bd6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006e2bd6(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  int iVar5;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) == 0x201) {
    iVar5 = 0;
    while( true ) {
      iVar3 = 0;
      if (*(int *)(extraout_ECX + 0x40) != 0) {
        iVar3 = *(int *)(*(int *)(extraout_ECX + 0x40) + -4);
      }
      if (iVar3 <= iVar5) goto LAB_006e2cc3;
      iVar3 = *(int *)(*(int *)(extraout_ECX + 0x40) + iVar5 * 8 + 4);
      *(int *)(unaff_EBP + -0x10) = iVar3;
      iVar2 = 0;
      if (iVar3 != 0) {
        InterlockedIncrement((LONG *)(iVar3 + 4));
        iVar2 = *(int *)(unaff_EBP + -0x10);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iVar3 = FUN_006e3164(iVar5);
      iVar3 = (*DAT_0097b57c)(iVar3 * 0x10 + 0x14 + iVar2,*(undefined4 *)(unaff_EBP + 0x10),
                              *(undefined4 *)(unaff_EBP + 0x14));
      if (iVar3 != 0) break;
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        FUN_006eadbe(0);
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
      }
      iVar5 = iVar5 + 1;
    }
    iVar3 = *(int *)(unaff_EBP + -0x10);
    if ((*(int *)(iVar3 + 0xc) == 0) || (iVar5 == *(int *)(extraout_ECX + 0x30))) {
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
    else {
      puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x4d3);
      uVar1 = *puVar4;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_007d3cdd(uVar1);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00402676();
      FUN_006e2dea(iVar5);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar3 = *(int *)(unaff_EBP + -0x10);
    }
    if (iVar3 != 0) {
      FUN_006eadbe(0);
    }
  }
LAB_006e2cc3:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


