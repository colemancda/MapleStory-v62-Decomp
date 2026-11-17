/* FUN_0076c0f6 - 0x0076c0f6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0076c0f6(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar6 = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puVar5 = *(undefined4 **)(unaff_EBP + 0x10);
  piVar1 = *(int **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  while( true ) {
    iVar4 = *piVar1;
    if ((iVar4 == 0) || (*(uint *)(iVar4 + -4) <= *(uint *)(unaff_EBP + -0x14))) goto LAB_0076c262;
    iVar4 = (*DAT_0097b57c)(iVar6 + 0x20 + iVar4,*puVar5,puVar5[1]);
    if (iVar4 != 0) break;
    iVar4 = (*DAT_0097b57c)(*piVar1 + 0x30 + iVar6,*puVar5,puVar5[1]);
    if (iVar4 != 0) {
      iVar6 = *(int *)(unaff_EBP + -0x14) * 0x5c;
      if (*(int *)(*piVar1 + 0x54 + iVar6) == 0) {
        puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + 0x10,0xfe2);
        uVar2 = *(undefined4 *)(*piVar1 + 4 + iVar6);
        uVar3 = *puVar5;
        *(undefined1 *)(unaff_EBP + -4) = 5;
        FUN_00434e21(unaff_EBP + -0x10,uVar3,uVar2);
        *(undefined1 *)(unaff_EBP + -4) = 1;
      }
      else {
        puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + 0x10,0xfe1);
        uVar2 = *(undefined4 *)(*piVar1 + 4 + iVar6);
        uVar3 = *puVar5;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_00434e21(unaff_EBP + -0x10,uVar3,uVar2);
        *(undefined1 *)(unaff_EBP + -4) = 1;
      }
      goto LAB_0076c25d;
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    iVar6 = iVar6 + 0x5c;
  }
  iVar6 = *(int *)(unaff_EBP + -0x14) * 0x5c;
  if (*(int *)(*piVar1 + 0x50 + iVar6) == 0) {
    puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + 0x10,0xfe0);
    uVar2 = *(undefined4 *)(*piVar1 + 4 + iVar6);
    uVar3 = *puVar5;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00434e21(unaff_EBP + -0x10,uVar3,uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  else {
    puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + 0x10,0xfdf);
    uVar2 = *(undefined4 *)(*piVar1 + 4 + iVar6);
    uVar3 = *puVar5;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00434e21(unaff_EBP + -0x10,uVar3,uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
LAB_0076c25d:
  FUN_00414ebb();
LAB_0076c262:
  puVar5 = *(undefined4 **)(unaff_EBP + 8);
  *puVar5 = 0;
  FUN_00414f8b(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -0x18) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar5;
}


