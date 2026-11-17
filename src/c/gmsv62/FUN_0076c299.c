/* FUN_0076c299 - 0x0076c299 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_0076c299(void)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int iVar9;
  
  FUN_00879bb8();
  iVar6 = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  piVar2 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  iVar9 = 0;
  while( true ) {
    iVar3 = *piVar2;
    if ((iVar3 == 0) || (*(uint *)(iVar3 + -4) <= *(uint *)(unaff_EBP + -0x18))) goto LAB_0076c4a8;
    iVar6 = (*DAT_0097b57c)(iVar9 + 0x10 + iVar3,**(undefined4 **)(unaff_EBP + 0xc),
                            (*(undefined4 **)(unaff_EBP + 0xc))[1]);
    if (iVar6 != 0) break;
LAB_0076c337:
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
    iVar6 = *(int *)(unaff_EBP + -0x14);
    iVar9 = iVar9 + 0x5c;
  }
  iVar6 = *piVar2;
  uVar8 = *(uint *)(iVar6 + iVar9);
  *(uint *)(unaff_EBP + 8) = uVar8;
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  if (*(int *)(unaff_EBP + 0x10) == 0) goto LAB_0076c4cc;
  iVar6 = (*DAT_0097b57c)(iVar6 + iVar9 + 0x20,**(undefined4 **)(unaff_EBP + 0xc),
                          (*(undefined4 **)(unaff_EBP + 0xc))[1]);
  if (iVar6 == 0) {
    iVar6 = (*DAT_0097b57c)(*piVar2 + 0x30 + iVar9,**(undefined4 **)(unaff_EBP + 0xc),
                            (*(undefined4 **)(unaff_EBP + 0xc))[1]);
    if (iVar6 == 0) goto LAB_0076c337;
    iVar9 = *(int *)(unaff_EBP + -0x18) * 0x5c;
    puVar1 = (uint *)(*piVar2 + 0x54 + iVar9);
    *puVar1 = (uint)(*puVar1 == 0);
    FUN_0076c4eb(*(undefined4 *)(*piVar2 + iVar9),1,*(undefined4 *)(*piVar2 + 0x54 + iVar9));
    iVar6 = *(int *)(*piVar2 + iVar9 + 0x54);
    *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(*piVar2 + iVar9);
    if (iVar6 == 0) {
      puVar7 = (undefined4 *)FUN_00679d22(unaff_EBP + 0xc,0xfe8);
      uVar4 = *(undefined4 *)(*piVar2 + 4 + iVar9);
      uVar5 = *puVar7;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00434e21(unaff_EBP + -0x10,uVar5,uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
    else {
      puVar7 = (undefined4 *)FUN_00679d22(unaff_EBP + 0xc,0xfe7);
      uVar4 = *(undefined4 *)(*piVar2 + 4 + iVar9);
      uVar5 = *puVar7;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00434e21(unaff_EBP + -0x10,uVar5,uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
  }
  else {
    iVar9 = *(int *)(unaff_EBP + -0x18) * 0x5c;
    puVar1 = (uint *)(*piVar2 + 0x50 + iVar9);
    *puVar1 = (uint)(*puVar1 == 0);
    FUN_0076c4eb(*(undefined4 *)(*piVar2 + iVar9),0,*(undefined4 *)(*piVar2 + 0x50 + iVar9));
    iVar6 = *(int *)(*piVar2 + iVar9 + 0x50);
    *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(*piVar2 + iVar9);
    if (iVar6 == 0) {
      puVar7 = (undefined4 *)FUN_00679d22(unaff_EBP + 0xc,0xfe6);
      uVar4 = *(undefined4 *)(*piVar2 + 4 + iVar9);
      uVar5 = *puVar7;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00434e21(unaff_EBP + -0x10,uVar5,uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
    else {
      puVar7 = (undefined4 *)FUN_00679d22(unaff_EBP + 0xc,0xfe5);
      uVar4 = *(undefined4 *)(*piVar2 + 4 + iVar9);
      uVar5 = *puVar7;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00434e21(unaff_EBP + -0x10,uVar5,uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
  }
  FUN_00414ebb();
  if (*(int *)(unaff_EBP + 0x14) != 0) {
    FUN_008161f1(0);
  }
  iVar6 = *(int *)(unaff_EBP + -0x14);
LAB_0076c4a8:
  if ((*(char **)(unaff_EBP + -0x10) != (char *)0x0) && (**(char **)(unaff_EBP + -0x10) != '\0')) {
    FUN_00471102(unaff_EBP + -0x10,0xc);
    iVar6 = *(int *)(unaff_EBP + -0x14);
  }
  uVar8 = -(uint)(iVar6 != 0) & *(uint *)(unaff_EBP + 8);
LAB_0076c4cc:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar8;
}


