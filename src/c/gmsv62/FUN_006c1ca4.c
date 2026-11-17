/* FUN_006c1ca4 - 0x006c1ca4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006c1ca4(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar4 = *(int *)(unaff_EBP + 8);
  iVar1 = *(int *)(unaff_EBP + 0xc);
  *(int *)(extraout_ECX + 0x5a0 + iVar4 * 4) = iVar1;
  if (iVar4 != *(int *)(extraout_ECX + 0x59c)) goto LAB_006c1e22;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  if (iVar1 == 0) {
    uVar2 = FUN_00679d86(unaff_EBP + 8,0x73f);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00419192(uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
    puVar3 = (undefined4 *)FUN_004029b9(0x578);
    *(undefined4 **)(unaff_EBP + -0x10) = puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_0044f3fa();
      *puVar3 = &PTR_FUN_008efb80;
      puVar3[1] = &PTR_ptr_00498cc8_008efb34;
      puVar3[2] = &PTR_FUN_008efb30;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_006c1e8e(puVar3);
    iVar4 = **(int **)(extraout_ECX + 0x594);
    uVar2 = 0x7d3;
LAB_006c1e10:
    (**(code **)(iVar4 + 0x20))(extraout_ECX,uVar2,0x8c,6,0,unaff_EBP + -0x20);
  }
  else if (iVar1 == 1) {
    uVar2 = FUN_00679d86(unaff_EBP + 0xc,0x740);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00419192(uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
    puVar3 = (undefined4 *)FUN_004029b9(0x578);
    *(undefined4 **)(unaff_EBP + -0x10) = puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_0044f3fa();
      *puVar3 = &PTR_FUN_008efb80;
      puVar3[1] = &PTR_ptr_00498cc8_008efb34;
      puVar3[2] = &PTR_FUN_008efb30;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_006c1e8e(puVar3);
    iVar4 = **(int **)(extraout_ECX + 0x594);
    uVar2 = 0x7d4;
    goto LAB_006c1e10;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
LAB_006c1e22:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


