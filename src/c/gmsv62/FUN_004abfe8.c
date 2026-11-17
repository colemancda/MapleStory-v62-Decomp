/* FUN_004abfe8 - 0x004abfe8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004abfe8(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  undefined *puVar3;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) == 0) {
    uVar2 = FUN_00679d86(unaff_EBP + -0x10,0x4f4);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00419192(uVar2);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_004ac054:
    FUN_00402676();
  }
  else if (*(int *)(unaff_EBP + 8) == 1) {
    uVar2 = FUN_00679d86(unaff_EBP + 0x10,0x4f5);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_00419192(uVar2);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    goto LAB_004ac054;
  }
  iVar1 = *(int *)(unaff_EBP + 0xc);
  if (iVar1 == 1) {
    puVar3 = &DAT_00964304;
  }
  else if (iVar1 == 2) {
    puVar3 = &DAT_0096430c;
  }
  else if (iVar1 == 3) {
    puVar3 = &DAT_00964300;
  }
  else if (iVar1 == 4) {
    puVar3 = &DAT_00964d74;
  }
  else if (iVar1 == 5) {
    if (*(int *)(unaff_EBP + 8) == 0) goto LAB_004ac0b0;
    puVar3 = &DAT_00964d88;
  }
  else {
    if ((iVar1 != 6) || (*(int *)(unaff_EBP + 8) == 0)) goto LAB_004ac0b0;
    puVar3 = &DAT_00964d8c;
  }
  uVar2 = FUN_0087a007(puVar3);
  FUN_0046febf(puVar3,uVar2);
LAB_004ac0b0:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


