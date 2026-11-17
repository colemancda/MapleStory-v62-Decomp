/* FUN_0058a928 - 0x0058a928 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_0058a928(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  
  FUN_00879bb8();
  switch(*(undefined4 *)(unaff_EBP + 8)) {
  case 1000:
    iVar1 = FUN_0058adec();
    if (iVar1 == 0) goto LAB_0058aab5;
    (**(code **)(*extraout_ECX + 0x34))(1);
    break;
  case 0x3e9:
    iVar1 = FUN_0058adec();
    if (iVar1 == 0) goto LAB_0058aab5;
    FUN_0058add9();
    break;
  case 0x3ea:
    iVar1 = FUN_0058adec();
    if (iVar1 == 0) goto LAB_0058aab5;
    puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,2);
    uVar3 = *puVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_007d299b(uVar3,0);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    goto LAB_0058aa8f;
  case 0x3eb:
    iVar1 = FUN_0058adec();
    if (iVar1 == 0) goto LAB_0058aab5;
    puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,3);
    uVar3 = *puVar2;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_007d299b(uVar3,0);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    goto LAB_0058aa8f;
  case 0x3ec:
    iVar1 = FUN_0058adec();
    if (iVar1 == 0) goto LAB_0058aab5;
    puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x18,1);
    uVar3 = *puVar2;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    FUN_007d299b(uVar3,0);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    goto LAB_0058aa8f;
  case 0x3ed:
    iVar1 = FUN_0058adec();
    if (iVar1 == 0) goto LAB_0058aab5;
    puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x1c,4);
    uVar3 = *puVar2;
    *(undefined4 *)(unaff_EBP + -4) = 3;
    FUN_007d299b(uVar3,0);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_0058aa8f:
    FUN_00414ebb();
    break;
  case 0x3ee:
    (*DAT_0097b514)(0);
    break;
  case 0x3ef:
    iVar1 = FUN_0058adec();
    if (iVar1 == 0) goto LAB_0058aab5;
    if (extraout_ECX[0x1e] != 0) {
      FUN_00565bf8();
    }
  }
  if (*(int *)(unaff_EBP + 8) == 1) {
    iVar1 = *extraout_ECX;
    uVar3 = 1;
  }
  else {
    if (*(int *)(unaff_EBP + 8) != 2) goto LAB_0058aab5;
    iVar1 = *extraout_ECX;
    uVar3 = 2;
  }
  (**(code **)(iVar1 + 0x34))(uVar3);
LAB_0058aab5:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


