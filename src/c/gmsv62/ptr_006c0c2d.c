/* ptr_006c0c2d - 0x006c0c2d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006c0c2d(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = *(int *)(unaff_EBP + 0x10);
  if (*(int *)(unaff_EBP + 8) == 2000) {
    if (*(int *)(unaff_EBP + 0xc) == 500) {
      FUN_006c0d5b(iVar1);
      goto LAB_006c0d4b;
    }
  }
  else if (((*(int *)(unaff_EBP + 8) == 0x7d1) && (299 < *(uint *)(unaff_EBP + 0xc))) &&
          (*(uint *)(unaff_EBP + 0xc) < 0x131)) {
    FUN_0074d6fb();
    *(int *)(&DAT_0097bd30 + extraout_ECX[0x167] * 4) = iVar1;
    extraout_ECX[0x166] = iVar1 * 4 + 1;
    FUN_008161f1(0);
  }
  if (*(int *)(unaff_EBP + 0xc) == 0x65) {
    if (*(int *)(unaff_EBP + 8) == 0x7d3) {
      if (iVar1 != 0) {
        puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x2c2);
        uVar2 = *puVar3;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        FUN_006c0323(uVar2);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00414ebb();
        goto LAB_006c0d3b;
      }
    }
    else {
      if (*(int *)(unaff_EBP + 8) != 0x7d4) goto LAB_006c0d4b;
      if (iVar1 != 0) {
        puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + 0x10,0x2c3);
        uVar2 = *puVar3;
        *(undefined4 *)(unaff_EBP + -4) = 1;
        FUN_006c0323(uVar2);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00414ebb();
        goto LAB_006c0d4b;
      }
    }
    FUN_006c0323(0);
  }
  else {
LAB_006c0d3b:
    if (*(int *)(unaff_EBP + 0xc) == 100) {
      (**(code **)(*extraout_ECX + 0x20))(*(undefined4 *)(unaff_EBP + 8));
    }
  }
LAB_006c0d4b:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


