/* FUN_004a1890 - 0x004a1890 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_004a1890(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  undefined4 *puVar5;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  FUN_008281ad(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_00414f8b(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  while( true ) {
    uVar2 = (*DAT_0097b584)(*(undefined4 *)(unaff_EBP + -0x10));
    FUN_00414edd(uVar2,0xffffffff);
    iVar4 = *(int *)(unaff_EBP + -0x14);
    if (iVar4 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar4 + -4);
    }
    iVar1 = *(int *)(unaff_EBP + -0x10);
    if (iVar3 == 0) {
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar1 + -4);
      }
      puVar5 = *(undefined4 **)(unaff_EBP + 8);
      *puVar5 = 0;
      if (1 < iVar4) {
        *(undefined4 *)(unaff_EBP + -0x1c) = 1;
        goto LAB_004a1951;
      }
      FUN_00414f8b(unaff_EBP + -0x18);
      goto LAB_004a194e;
    }
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar1 + -4);
    }
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar4 + -4);
    }
    if (1 < iVar3 - iVar4) break;
    FUN_00414f8b(unaff_EBP + -0x14);
  }
  puVar5 = *(undefined4 **)(unaff_EBP + 8);
  *puVar5 = 0;
LAB_004a194e:
  *(undefined4 *)(unaff_EBP + -0x1c) = 1;
LAB_004a1951:
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar5;
}


